#include "headers/ShaderWrapper.h"
#include "headers/Global.h"
#include "headers/DirectX/XGraphics/XGBuffer.h"

void ShaderWrapper::CompileShader(const char* shaderCode)
{
    Global* GLOBAL = Global::Get();
    ID3DXBuffer* buffer = null;
    ID3DXBuffer* errors = null;
    /*
        Left out:
        LPXGBUFFER *pListing,
        SASM_ResolverCallback pResolver,
        LPVOID pResolverUserData,
        LPDWORD pShaderType
    */
    HRESULT result;
    result = D3DXAssembleShader(shaderCode, strlen(shaderCode), 0, null, &buffer, &errors);
    if (result != D3D_OK) {
        if (result == D3DERR_INVALIDCALL) {
            Logging::Log("CompileShader: INVALID CALL");
        }
        else if (result == D3DXERR_INVALIDDATA) {
            Logging::Log("CompileShader: INVALID DATA");
        }
        
        Logging::Log(shaderCode);
        Logging::Log("ERRORS: ");
        Logging::Log((char*)errors->GetBufferPointer());
        return;
    }
    uint shaderSize = buffer->GetBufferSize();
    void* bufferData = buffer->GetBufferPointer();
    memcpy_s(this->pFunction, 1024, bufferData, shaderSize);
    this->shaderSize = shaderSize;

    result = GLOBAL->D3D_DEVICE->CreateVertexShader(this->pDeclaration, this->pFunction, &this->shaderHandle, 0); //D3DUSAGE_PERSISTENTDIFFUSE - XBOX extension
    if (result != D3D_OK) {
        if (result == D3DERR_INVALIDCALL) {
            Logging::Log("CreateVertexShader: INVALID CALL");
        }
        else if (result == D3DERR_OUTOFVIDEOMEMORY) {
            Logging::Log("CreateVertexShader: INVALID DATA");
        }
        return;
    }
}
