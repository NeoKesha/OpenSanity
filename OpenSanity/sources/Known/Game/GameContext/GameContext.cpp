#include "headers/Known/Game/GameContext/GameContext.h"
#include <cmath>

#include "headers/Global.h"
#include "headers/Known/TwinString.h"
#include "headers/Unknown/Families/Families1X/Family16/UnkFamily16A.h"
#include "headers/Known/Input/InputController/InputStruct.h"
#include "headers/Known/GameController.h"
#include "headers/Known/Graphics/ScreenInfo.h"
#include "headers/Known/Graphics/Renderer/ScreenInfoExt.h"
#include "headers/Known/Graphics/Renderer/Renderer.h"
#include "headers/Known/Graphics/FontRenderer/FontRenderer.h"
#include "headers/Known/Game/SaveSystem/SaveSystem/SaveSystemAbstract.h"
#include "headers/Known/Graphics/VideoPlayer/VideoPlayer.h"
#include "headers/Known/Builders/ObjectBuilderStorage.h"
#include "headers/Known/Input/InputController/InputController.h"
#include "headers/Known/Graphics/VideoController/VideoController.h"
#include "headers/Known/Time/Clock.h"
#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/UnkSingletone/UnkSingletone.h"
#include "headers/Known/Game/World/World.h"
#include "headers/Unknown/UnkClassC.h"
#include "headers/Unknown/GameReaderStorage.h"
#include "headers/Unknown/AutoClasses/FileReaderHelper.h"
#include "headers/Unknown/AutoClasses/AutoClass25/AutoClass25.h"
#include "headers/Known/Game/InstanceSystem/InstanceContextRefCounter.h"
#include "headers/Known/Game/Chunks/ChunkList.h"
#include "headers/Known/Game/Chunks/ChunkDataRefCounter.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
#include "headers/Unknown/AutoClasses/D3DVERTEXATTRIBUTEFORMAT.h"

void GameContext::FUN_00021ce0() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall GameContext::FUN_00021ce0(GameContext *this){
		bool bVar1;
		char cVar2;
		char **tmpStr;
		IteratorA5 unkClass;
		ChunkDesc *chunkDescriptor;
		GameController *gameController;
		 It supposed to have stringCollection from gameController... gameController = this->gameController;
		chunkDescriptor = &gameController->chunkDescriptor;
		if (((*(byte *)((int)&WORLD->flags + 3) & 0xf) == 1) &&(bVar1 = GameController::LoadFrontendAssets(gameController), bVar1 != false)) {
		cVar2 = (*(code *)PTR_IsEnd_00386530)();
		if (cVar2 == '\0') {
		do {
		tmpStr = (char **)(*(code *)PTR_Get_00386534)();
		TwinString::Copy(&(gameController->chunkDescriptor).chunkName,*tmpStr);
		bVar1 = ChunkDesc::ReloadLevel(chunkDescriptor,(UnkFamily16A *)0x0);
		if (bVar1 != false) {
		do {
		bVar1 = ChunkDesc::CheckReady(chunkDescriptor,0,true);
		}
		 while (bVar1 == false);
		ChunkDesc::ResetStrings(chunkDescriptor);
		}
		cVar2 = (*(code *)PTR_IsEnd_00386530)();
		}
		 while (cVar2 == '\0');
		}
		GameController::ResetCurrentPlayerNodes(this->gameController,true);
		}
		return;
		}
		
	*/
	return;
}

void GameContext::FUN_0017fd60()
{
	Global* GLOBAL = Global::Get();

	GLOBAL->UNK_GLOBAL_STRUCT.field0_0x0 = 2;
	GLOBAL->UNK_GLOBAL_STRUCT.field1_0x4 = 2;
	GLOBAL->UNK_GLOBAL_STRUCT.field2_0x8 = 0;
	GLOBAL->UNK_GLOBAL_STRUCT.field3_0xc = 1;
	GLOBAL->UNK_GLOBAL_STRUCT.field4_0x10 = 0;
	GLOBAL->UNK_GLOBAL_STRUCT.field5_0x14 = 0;
	GLOBAL->UNK_GLOBAL_STRUCT.field6_0x18 = 0;
	GLOBAL->UNK_GLOBAL_STRUCT.field7_0x1c = 1;
	GLOBAL->UNK_GLOBAL_STRUCT.field8_0x20 = 1;
	GLOBAL->UNK_GLOBAL_STRUCT.field9_0x24 = 1;
	GLOBAL->UNK_GLOBAL_STRUCT.field10_0x28 = 0;
	GLOBAL->UNK_GLOBAL_STRUCT.field11_0x2c = 0;
	GLOBAL->UNK_GLOBAL_STRUCT.field12_0x30 = 0;
	GLOBAL->UNK_GLOBAL_STRUCT.field13_0x34 = 0;
	GLOBAL->UNK_GLOBAL_STRUCT.field14_0x38 = 0;
	GLOBAL->UNK_GLOBAL_STRUCT.field15_0x3c = 0;
	GLOBAL->UNK_GLOBAL_STRUCT.field16_0x40 = 0;
	GLOBAL->UNK_GLOBAL_STRUCT.field17_0x44 = 0;
	GLOBAL->UNK_GLOBAL_STRUCT.field18_0x48 = 0;
	GLOBAL->UNK_GLOBAL_STRUCT.field19_0x4c = 0;
	GLOBAL->UNK_GLOBAL_STRUCT.field20_0x50 = 0;
	GLOBAL->UNK_GLOBAL_STRUCT.field21_0x54 = 4;
	GLOBAL->UNK_GLOBAL_STRUCT.field22_0x58 = 2;
}

void GameContext::FUN_000374a0()
{
	Global* GLOBAL = Global::Get();
	Matrix4 mat;
	mat.m11 = 0.0f;
	mat.m12 = 0.0f;
	mat.m13 = 0.0f;
	mat.m22 = -4.0f;
	mat.m32 = -4.0f;
	mat.m14 = 1.0f;
	mat.m21 = -0.1f;
	mat.m23 = 1.0f;
	mat.m24 = 1.0f;
	mat.m31 = 0.1f;
	mat.m33 = 1.0f;
	mat.m34 = 1.0f;
	mat.m41 = 0.1f;
	mat.m42 = 4.0f;
	mat.m43 = 1.0f;
	mat.m44 = 1.0f;
	GLOBAL->MATRIX_ARRAY.FUN_00150ee0(&mat);
}

void GameContext::FUN_00123250()
{
	Global* GLOBAL = Global::Get();

	for (int i = 0; i < 768; ++i) {
		GLOBAL->PARTICLE_INSTANCES[i].field_0x4 = -1;
	}

	GLOBAL->DAT_00402cb0 = 0;
	GLOBAL->DAT_00402cb4 = 0;
	GLOBAL->DAT_00402cb8 = 0;
	GLOBAL->DAT_00402cbc = 0;
	GLOBAL->DAT_00402cc0 = 0;
	GLOBAL->DAT_00402cc4 = 0;
	GLOBAL->DAT_00402cc8 = 0;
	GLOBAL->DAT_00402ccc = 0;
	GLOBAL->DAT_00402cd0 = 0;
	GLOBAL->DAT_00402cd4 = 0;
	GLOBAL->DAT_00402cd8 = 0;
	GLOBAL->DAT_00402cdc = 0;
	GLOBAL->DAT_00402ce0 = 0;
	GLOBAL->DAT_00402ce4 = 0;
	GLOBAL->DAT_00402ce8 = 0;
	GLOBAL->DAT_00402cec = 0;
	GLOBAL->DAT_00402cf0 = 0;
	GLOBAL->DAT_00402cf4 = 0;
	GLOBAL->DAT_00402cf8 = 0;
	GLOBAL->DAT_00402cfc = 0;
	GLOBAL->DAT_00402d00 = 0;
	GLOBAL->DAT_00402d04 = 0;
	GLOBAL->DAT_00402d08 = 0;
	GLOBAL->DAT_00402d0c = 0;
	GLOBAL->DAT_00402d10 = 0;
	GLOBAL->DAT_00402d14 = 0;
	GLOBAL->DAT_00402d18 = 0;
	GLOBAL->DAT_00402d1c = 0;
	GLOBAL->DAT_00402d20 = 0;
	GLOBAL->DAT_00402d24 = 0;
	GLOBAL->DAT_00402d28 = 0;
	GLOBAL->DAT_00402d2c = 0;
	GLOBAL->PARTICLE_INSTANCE_COUNT = 0;
}

void GameContext::CreateWaterAndSkyShaders()
{
	Global* GLOBAL = Global::Get();

	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_WATER.inputs[0].format = D3DVSDT_FLOAT3;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_WATER.inputs[0].offset = 0;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_WATER.inputs[3].format = D3DVSDT_FLOAT4; //D3DVSDT_NORMPACKED3
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_WATER.inputs[3].offset = 0xc;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_WATER.inputs[4].format = D3DVSDT_FLOAT4; //D3DVSDT_PBYTE4
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_WATER.inputs[4].offset = 0x10;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_WATER.inputs[5].format = D3DVSDT_FLOAT2;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_WATER.inputs[5].offset = 0x14;

	//Had to workaround r12 as read-oPos, because unsupported in this DX8 SDK version
	//TODO: Beware of constants, especially c[0]
	// V5 is V7 (FOG -> TEXCOORD0) V3 -> V5 (DIFFUSE) V4 -> V6 (SPECULAR) //V2 -> V3 (NORMAL)
	//ORIGINAL: "xvs.1.1\n#pragma screenspace\nmul oPos, v0.x, c[0]\nmov oD0, v4\nmad oPos, v0.y, c[1], r12\nmad oPos, v0.z, c[2], r12\nmad oPos, v0.w, c[3], r12\nadd oT0, v5, c[4]\nmul oT1.x, r12.z, c[15].z\nmul oPos.xyz, r12.xyz, c-38.xyz\n + rcc r1.x, r12.w\nmad oPos.xyz, r12.xyz, r1.x, c-37.xyz\n"
	static const char* shader1 = "vs.1.1\n"
		"mul r2, v0.x, c[0]\n"
		"mov oD0, v6\n"
		"mad r2, v0.y, c[1], r2\n"
		"mad r2, v0.z, c[2], r2\n"
		"mad r2, v0.w, c[3], r2\n"
		"add oT0, v7, c[4]\n" 
		"mul oT1.x, r2.z, c[15].z\n" 
		"mul r2.xyz, r2.xyz, c[38].xyz\n" //scale. wtf is register c[-38]?
		"rcp r1.x, r2.w\n" //no rcc which is clamped
		"mad r2.xyz, r2.xyz, r1.x, c[37].xyz\n" //offset
		"mov oPos, r2\n";
	//TODO: BEWARE OF TYPE AND PACKING CHANGES
	//see d3d8types.h of DX8 SDK and XBOX SDK
	GLOBAL->SHADER_WATER.pDeclaration[0] = D3DVSD_STREAM(0);// 0x20000000;
	GLOBAL->SHADER_WATER.pDeclaration[1] = D3DVSD_REG(D3DVSDE_POSITION, D3DVSDT_FLOAT3);//0x40320000; 
	//NORMPACKED3 - (x,y,z,1.0f) value packed into 32 bits with mask (11,10,10)
	GLOBAL->SHADER_WATER.pDeclaration[2] = D3DVSD_REG(D3DVSDE_DIFFUSE, D3DVSDT_FLOAT4);//0x40160003; D3DVSD_REG(D3DVSDE_DIFFUSE, D3DVSDT_NORMPACKED3) - NORMPACKED3 UNSUPPORTED
	//PBYTE4 - 4 bytes from 0 to 255 mapped to [0;1]
	GLOBAL->SHADER_WATER.pDeclaration[3] = D3DVSD_REG(D3DVSDE_SPECULAR, D3DVSDT_FLOAT4);//0x40440004; D3DVSD_REG(D3DVSDE_SPECULAR, D3DVSDT_PBYTE4) - PBYTE4 UNSUPPORTED
	//I place my bets it's not a FOG but a D3DVSDE_TEXCOORD0, despite SDK telling me that 0x5 reg is for FOG
	GLOBAL->SHADER_WATER.pDeclaration[4] = D3DVSD_REG(D3DVSDE_TEXCOORD0, D3DVSDT_FLOAT2); //0x40220005; D3DVSD_REG(D3DVSDE_FOG , D3DVSDT_FLOAT2) - FOG UNSUPPORTED
	GLOBAL->SHADER_WATER.pDeclaration[5] = D3DVSD_END();
	GLOBAL->SHADER_WATER.declarationSize = 0x18;
	GLOBAL->SHADER_WATER.CompileShader(shader1);
	
	//ORIGINAL: "xvs.1.1\n#pragma screenspace\nmov oT1.x, c[5].z\nmul oPos, v0.x, c[0]\nmov oD0, v4\nmad oPos, v0.y, c[1], r12\nmad oPos, v0.z, c[2], r12\nmad oPos, v0.w, c[3], r12\nadd oT0, v5, c[4]\nmul oPos.xyz, r12.xyz, c-38.xyz\n + rcc r1.x, r12.w\nmad oPos.xyz, r12.xyz, r1.x, c-37.xyz\nmov oPos.z, c[5].z\n"
	static const char* shader2 = "vs.1.1"
		"mov oT1.x, c[5].z\n"
		"mul r2, v0.x, c[0]\n"
		"mov oD0, v6\n"
		"mad r2, v0.y, c[1], r2\n"
		"mad r2, v0.z, c[2], r2\n"
		"mad r2, v0.w, c[3], r2\n"
		"add oT0, v7, c[4]\n"
		"mul r2.xyz, r2.xyz, c[38].xyz\n"
		"rcp r1.x, r2.w\n"
		"mad r2.xyz, r2.xyz, r1.x, c[37].xyz\n"
		"mov r2.z, c[5].z\n"
		"mov oPos, r2\n";
	GLOBAL->SHADER_SKY.pDeclaration[0] = D3DVSD_STREAM(0);
	GLOBAL->SHADER_SKY.pDeclaration[1] = D3DVSD_REG(D3DVSDE_POSITION, D3DVSDT_FLOAT3);//0x40320000; 
	GLOBAL->SHADER_SKY.pDeclaration[2] = D3DVSD_REG(D3DVSDE_DIFFUSE, D3DVSDT_FLOAT4);//0x40160003; D3DVSD_REG(D3DVSDE_DIFFUSE, D3DVSDT_NORMPACKED3) - NORMPACKED3 UNSUPPORTED
	GLOBAL->SHADER_SKY.pDeclaration[3] = D3DVSD_REG(D3DVSDE_SPECULAR, D3DVSDT_FLOAT4);//0x40440004; D3DVSD_REG(D3DVSDE_SPECULAR, D3DVSDT_PBYTE4) - PBYTE4 UNSUPPORTED
	GLOBAL->SHADER_SKY.pDeclaration[4] = D3DVSD_REG(D3DVSDE_TEXCOORD0, D3DVSDT_FLOAT2); //0x40220005; D3DVSD_REG(D3DVSDE_FOG , D3DVSDT_FLOAT2) - FOG UNSUPPORTED
	GLOBAL->SHADER_SKY.pDeclaration[5] = D3DVSD_END();
	GLOBAL->SHADER_SKY.declarationSize = 0x18;
	GLOBAL->SHADER_SKY.CompileShader(shader2);
}

void GameContext::CreateStaticGeometryShader()
{
	Global* GLOBAL = Global::Get();

	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_STATIC.inputs[0].format = D3DVSDT_FLOAT3;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_STATIC.inputs[0].offset = 0;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_STATIC.inputs[3].format = D3DVSDT_FLOAT4;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_STATIC.inputs[3].offset = 0xc;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_STATIC.inputs[4].format = D3DVSDT_FLOAT4;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_STATIC.inputs[4].offset = 0x10;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_STATIC.inputs[5].format = D3DVSDT_FLOAT2;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_STATIC.inputs[5].offset = 0x14;

	//ORIGINAL "xvs.1.1\n#pragma screenspace\nmul oPos, c[0], v0.x\nmad oPos, c[1], v0.y, r12\nmad oPos, c[2], v0.z, r12\nmad oPos, c[3], v0.w, r12\ndp3 r6, v3, c[6]\nmul r6, r6, c[9]\ndp3 r7, v3, c[7]\nmad r7, r7, c[10], r6\ndp3 r8, v3, c[8]\nmad r8, r8, c[11], r7\nadd r9, r8, c[5]\nmov oD0.w, v4.w\nmul oD0.xyz, v4, r9\nmul oT1.x, r12.z, c[15].z\nadd oT0, v5, c[4]\nmul oPos.xyz, r12.xyz, c-38.xyz\n + rcc r1.x, r12.w\nmad oPos.xyz, r12.xyz, r1.x, c-37.xyz\n"
	static const char* shader1 = "vs.1.1\n"
		"mul r2, c[0], v0.x\n"
		"mad r2, c[1], v0.y, r2\n"
		"mad r2, c[2], v0.z, r2\n"
		"mad r2, c[3], v0.w, r2\n"
		"dp3 r6, v5, c[6]\n"
		"mul r6, r6, c[9]\n"
		"dp3 r7, v5, c[7]\n"
		"mad r7, r7, c[10], r6\n"
		"dp3 r8, v5, c[8]\n"
		"mad r8, r8, c[11], r7\n"
		"add r9, r8, c[5]\n"
		"mov oD0.w, v6.w\n"
		"mul oD0.xyz, v6, r9\n"
		"mul oT1.x, r2.z, c[15].z\n"
		"add oT0, v7, c[4]\n"
		"mul r2.xyz, r2.xyz, c[38].xyz\n"
		"rcp r1.x, r2.w\n"
		"mad r2.xyz, r2.xyz, r1.x, c[37].xyz\n"
		"mov oPos, r2";
	GLOBAL->SHADER_STATIC_GEOMETRY_1.pDeclaration[0] = D3DVSD_STREAM(0);
	GLOBAL->SHADER_STATIC_GEOMETRY_1.pDeclaration[1] = D3DVSD_REG(D3DVSDE_POSITION, D3DVSDT_FLOAT3);
	GLOBAL->SHADER_STATIC_GEOMETRY_1.pDeclaration[2] = D3DVSD_REG(D3DVSDE_DIFFUSE, D3DVSDT_FLOAT4);
	GLOBAL->SHADER_STATIC_GEOMETRY_1.pDeclaration[3] = D3DVSD_REG(D3DVSDE_SPECULAR, D3DVSDT_FLOAT4);
	GLOBAL->SHADER_STATIC_GEOMETRY_1.pDeclaration[4] = D3DVSD_REG(D3DVSDE_TEXCOORD0, D3DVSDT_FLOAT2);
	GLOBAL->SHADER_STATIC_GEOMETRY_1.pDeclaration[5] = D3DVSD_END();
	GLOBAL->SHADER_STATIC_GEOMETRY_1.declarationSize = 0x18;
	GLOBAL->SHADER_STATIC_GEOMETRY_1.CompileShader(shader1);

	//ORIGINAL "xvs.1.1\n#pragma screenspace\nmul oPos, c[0], v0.x\nmad oPos, c[1], v0.y, r12\nmad oPos, c[2], v0.z, r12\nmad oPos, c[3], v0.w, r12\nmov oD0, v4\nmul oT1.x, r12.z, c[15].z\nadd oT0, v5, c[4]\nmul oPos.xyz, r12.xyz, c-38.xyz\n + rcc r1.x, r12.w\nmad oPos.xyz, r12.xyz, r1.x, c-37.xyz\n"
	static const char* shader2 = "vs.1.1\n"
		"mul r2, c[0], v0.x\n"
		"mad r2, c[1], v0.y, r2\n"
		"mad r2, c[2], v0.z, r2\n"
		"mad r2, c[3], v0.w, r2\n"
		"mov oD0, v6\n"
		"mul oT1.x, r2.z, c[15].z\n"
		"add oT0, v7, c[4]\n"
		"mul r2.xyz, r2.xyz, c[38].xyz\n"
		"rcp r1.x, r2.w\n"
		"mad r2.xyz, r2.xyz, r1.x, c[37].xyz\n"
		"mov oPos, r2";
	GLOBAL->SHADER_STATIC_GEOMETRY_2.pDeclaration[0] = D3DVSD_STREAM(0);
	GLOBAL->SHADER_STATIC_GEOMETRY_2.pDeclaration[1] = D3DVSD_REG(D3DVSDE_POSITION, D3DVSDT_FLOAT3);
	GLOBAL->SHADER_STATIC_GEOMETRY_2.pDeclaration[2] = D3DVSD_REG(D3DVSDE_DIFFUSE, D3DVSDT_FLOAT4);
	GLOBAL->SHADER_STATIC_GEOMETRY_2.pDeclaration[3] = D3DVSD_REG(D3DVSDE_SPECULAR, D3DVSDT_FLOAT4);
	GLOBAL->SHADER_STATIC_GEOMETRY_2.pDeclaration[4] = D3DVSD_REG(D3DVSDE_TEXCOORD0, D3DVSDT_FLOAT2);
	GLOBAL->SHADER_STATIC_GEOMETRY_2.pDeclaration[5] = D3DVSD_END();
	GLOBAL->SHADER_STATIC_GEOMETRY_2.declarationSize = 0x18;
	GLOBAL->SHADER_STATIC_GEOMETRY_2.CompileShader(shader2);
}

void GameContext::CreateSkinnedGeometryShader()
{
	Global* GLOBAL = Global::Get();

	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_SKINNED.inputs[0].format = D3DVSDT_FLOAT3;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_SKINNED.inputs[0].offset = 0;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_SKINNED.inputs[1].format = D3DVSDT_FLOAT3;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_SKINNED.inputs[1].offset = 0xc;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_SKINNED.inputs[2].format = D3DVSDT_SHORT4;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_SKINNED.inputs[2].offset = 0x18;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_SKINNED.inputs[3].format = D3DVSDT_FLOAT4;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_SKINNED.inputs[3].offset = 0x20;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_SKINNED.inputs[4].format = D3DVSDT_FLOAT4;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_SKINNED.inputs[4].offset = 0x24;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_SKINNED.inputs[5].format = D3DVSDT_FLOAT2;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_SKINNED.inputs[5].offset = 0x28;

	//ORIGINAL "xvs.1.1\nmov a0.x, v2.x\nmul r0, c[a0.x + 0], v0.x\nmad r0, c[a0.x + 1], v0.y, r0\nmad r0, c[a0.x + 2], v0.z, r0\nmad r0, c[a0.x + 3], v0.w, r0\nmul r0, r0, v1.x\nmul r3, c[a0.x + 0], v3.x\nmad r3, c[a0.x + 1], v3.y, r3\nmad r3, c[a0.x + 2], v3.z, r3\nmov a0.x, v2.y\nmul r1, c[a0.x + 0], v0.x\nmad r1, c[a0.x + 1], v0.y, r1\nmad r1, c[a0.x + 2], v0.z, r1\nmad r1, c[a0.x + 3], v0.w, r1\nmad r0, r1, v1.y, r0\nmov a0.x, v2.z\nmul r2, c[a0.x + 0], v0.x\nmad r2, c[a0.x + 1], v0.y, r2\nmad r2, c[a0.x + 2], v0.z, r2\nmad r2, c[a0.x + 3], v0.w, r2\nmad r0, r2, v1.z, r0\nmul oPos, c[0], r0.x\nmad oPos, c[1], r0.y, r12\nmad oPos, c[2], r0.z, r12\nmad oPos, c[3], r0.w, r12\ndp3 r6, r3, c6\nmul r6, r6, c[9]\ndp3 r7, r3, c7\nmad r7, r7, c[10], r6\ndp3 r8, r3, c8\nmad r8, r8, c[11], r7\nadd r9, r8, c[5]\nmov oD0.w, v4.w\nmul oD0.xyz, v4, r9\nmul oT1.x, r12.z, c[15].z\nadd oT0, v5, c[4]\n"
	static const char* shader = "vs.1.1\n"
		"mov a0.x, v3.x\n"
		"mul r0, c[a0.x + 0], v0.x\n"
		"mad r0, c[a0.x + 1], v0.y, r0\n"
		"mad r0, c[a0.x + 2], v0.z, r0\n"
		"mad r0, c[a0.x + 3], v0.w, r0\n"
		"mul r0, r0, v1.x\n"
		"mul r3, c[a0.x + 0], v5.x\n"
		"mad r3, c[a0.x + 1], v5.y, r3\n"
		"mad r3, c[a0.x + 2], v5.z, r3\n"
		"mov a0.x, v3.y\n"
		"mul r1, c[a0.x + 0], v0.x\n"
		"mad r1, c[a0.x + 1], v0.y, r1\n"
		"mad r1, c[a0.x + 2], v0.z, r1\n"
		"mad r1, c[a0.x + 3], v0.w, r1\n"
		"mad r0, r1, v1.y, r0\n"
		"mov a0.x, v3.z\n"
		"mul r2, c[a0.x + 0], v0.x\n"
		"mad r2, c[a0.x + 1], v0.y, r2\n"
		"mad r2, c[a0.x + 2], v0.z, r2\n"
		"mad r2, c[a0.x + 3], v0.w, r2\n"
		"mad r0, r2, v1.z, r0\n"
		"mul r4, c[0], r0.x\n"
		"mad r4, c[1], r0.y, r4\n"
		"mad r4, c[2], r0.z, r4\n"
		"mad r4, c[3], r0.w, r4\n"
		"dp3 r6, r3, c6\n"
		"mul r6, r6, c[9]\n"
		"dp3 r7, r3, c7\n"
		"mad r7, r7, c[10], r6\n"
		"dp3 r8, r3, c8\n"
		"mad r8, r8, c[11], r7\n"
		"add r9, r8, c[5]\n"
		"mov oD0.w, v6.w\n"
		"mul oD0.xyz, v6, r9\n"
		"mul oT1.x, r4.z, c[15].z\n"
		"add oT0, v7, c[4]\n"
		"mov oPos, r4"; 

	GLOBAL->SHADER_SKINNED_GEOMETRY.pDeclaration[0] = D3DVSD_STREAM(0);
	GLOBAL->SHADER_SKINNED_GEOMETRY.pDeclaration[1] = D3DVSD_REG(D3DVSDE_POSITION, D3DVSDT_FLOAT3);
	GLOBAL->SHADER_SKINNED_GEOMETRY.pDeclaration[2] = D3DVSD_REG(D3DVSDE_BLENDWEIGHT, D3DVSDT_FLOAT3);
	GLOBAL->SHADER_SKINNED_GEOMETRY.pDeclaration[3] = D3DVSD_REG(D3DVSDE_NORMAL, D3DVSDT_SHORT4); //V2 -> V3
	GLOBAL->SHADER_SKINNED_GEOMETRY.pDeclaration[4] = D3DVSD_REG(D3DVSDE_DIFFUSE, D3DVSDT_FLOAT4); //V3 -> V5
	GLOBAL->SHADER_SKINNED_GEOMETRY.pDeclaration[5] = D3DVSD_REG(D3DVSDE_SPECULAR, D3DVSDT_FLOAT4); //V4 -> V6
	GLOBAL->SHADER_SKINNED_GEOMETRY.pDeclaration[6] = D3DVSD_REG(D3DVSDE_TEXCOORD0, D3DVSDT_FLOAT2); //V5 -> V7
	GLOBAL->SHADER_SKINNED_GEOMETRY.pDeclaration[7] = D3DVSD_END();
	GLOBAL->SHADER_SKINNED_GEOMETRY.declarationSize = 0x20;
	GLOBAL->SHADER_SKINNED_GEOMETRY.CompileShader(shader);
}

void GameContext::CreateBlendSkinShader()
{
	Global* GLOBAL = Global::Get();

	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[0].format = D3DVSDT_FLOAT3;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[0].offset = 0x0;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[1].format = D3DVSDT_FLOAT3;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[1].offset = 0xc;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[2].format = D3DVSDT_SHORT4;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[2].offset = 0x18;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[3].format = D3DVSDT_FLOAT4;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[3].offset = 0x20;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[4].format = D3DVSDT_FLOAT4;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[4].offset = 0x24;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[5].format = D3DVSDT_FLOAT2;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[5].offset = 0x28;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[6].format = D3DVSDT_FLOAT3;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[6].offset = 0x0;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[6].streamIndex = 1;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[7].format = D3DVSDT_FLOAT3;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[7].offset = 0x0;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[7].streamIndex = 2;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[8].format = D3DVSDT_FLOAT3;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[8].offset = 0x0;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[8].streamIndex = 3;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[9].format = D3DVSDT_FLOAT3;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[9].offset = 0x0;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[9].streamIndex = 4;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[10].format = D3DVSDT_FLOAT3;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[10].offset = 0x0;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[10].streamIndex = 5;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[11].format = D3DVSDT_FLOAT3;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[11].offset = 0x0;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[11].streamIndex = 6;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[12].format = D3DVSDT_FLOAT3;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[12].offset = 0x0;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[12].streamIndex = 7;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[13].format = D3DVSDT_FLOAT3;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[13].offset = 0x0;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[13].streamIndex = 8;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[14].format = D3DVSDT_FLOAT3;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[14].offset = 0x0;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[14].streamIndex = 9;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[15].format = D3DVSDT_FLOAT3;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[15].offset = 0x0;
	GLOBAL->VERTEX_ATTRIBUTE_FORMAT_BLEND.inputs[15].streamIndex = 10;

	//ORIGINAL "xvs.1.1\nmov r4, v0\nmov r5, v0\nsub r8, v8, r5\nmad r4, c[12].z, r8, r4\nsub r7, v7, r5\nmad r4, c[12].y, r7, r4\nsub r6, v6, r5\nmad r4, c[12].x, r6, r4\nmov a0.x, v2.x\nmul r0, c[a0.x + 0], r4.x\nmad r0, c[a0.x + 1], r4.y, r0\nmad r0, c[a0.x + 2], r4.z, r0\nmad r0, c[a0.x + 3], r4.w, r0\nmul r0, r0, v1.x\nmul r3, c[a0.x + 0], v3.x\nmad r3, c[a0.x + 1], v3.y, r3\nmad r3, c[a0.x + 2], v3.z, r3\nmov a0.x, v2.y\nmul r1, c[a0.x + 0], r4.x\nmad r1, c[a0.x + 1], r4.y, r1\nmad r1, c[a0.x + 2], r4.z, r1\nmad r1, c[a0.x + 3], r4.w, r1\nmad r0, r1, v1.y, r0\nmov a0.x, v2.z\nmul r2, c[a0.x + 0], r4.x\nmad r2, c[a0.x + 1], r4.y, r2\nmad r2, c[a0.x + 2], r4.z, r2\nmad r2, c[a0.x + 3], r4.w, r2\nmad r0, r2, v1.z, r0\nmul oPos, c[0], r0.x\nmad oPos, c[1], r0.y, r12\nmad oPos, c[2], r0.z, r12\nmad oPos, c[3], r0.w, r12\ndp3 r6, r3, c6\nmul r6, r6.x, c[9]\ndp3 r7, r3, c7\nmad r7, r7.x, c[10], r6\ndp3 r8, r3, c8\nmad r8, r8.x, c[11], r7\nadd r9, r8, c[5]\nmov oD0.w, v4.w\nmul oD0.xyz, v4, r9\nmul oT1.x, r12.z, c[15].z\nadd oT0, v5, c[4]\n"
	static const char* shader1 = "vs.1.1\n"
		"mov r4, v0\n"
		"mov r5, v0\n"
		"sub r8, v10, r5\n"
		"mad r4, c[12].z, r8, r4\n"
		"sub r7, v9, r5\n"
		"mad r4, c[12].y, r7, r4\n"
		"sub r6, v8, r5\n"
		"mad r4, c[12].x, r6, r4\n"
		"mov a0.x, v3.x\n"
		"mul r0, c[a0.x + 0], r4.x\n"
		"mad r0, c[a0.x + 1], r4.y, r0\n"
		"mad r0, c[a0.x + 2], r4.z, r0\n"
		"mad r0, c[a0.x + 3], r4.w, r0\n"
		"mul r0, r0, v1.x\n"
		"mul r3, c[a0.x + 0], v5.x\n"
		"mad r3, c[a0.x + 1], v5.y, r3\n"
		"mad r3, c[a0.x + 2], v5.z, r3\n"
		"mov a0.x, v3.y\n"
		"mul r1, c[a0.x + 0], r4.x\n"
		"mad r1, c[a0.x + 1], r4.y, r1\n"
		"mad r1, c[a0.x + 2], r4.z, r1\n"
		"mad r1, c[a0.x + 3], r4.w, r1\n"
		"mad r0, r1, v1.y, r0\n"
		"mov a0.x, v3.z\n"
		"mul r2, c[a0.x + 0], r4.x\n"
		"mad r2, c[a0.x + 1], r4.y, r2\n"
		"mad r2, c[a0.x + 2], r4.z, r2\n"
		"mad r2, c[a0.x + 3], r4.w, r2\n"
		"mad r0, r2, v1.z, r0\n"
		"mul r10, c[0], r0.x\n"
		"mad r10, c[1], r0.y, r10\n"
		"mad r10, c[2], r0.z, r10\n"
		"mad r10, c[3], r0.w, r10\n"
		"dp3 r6, r3, c6\n"
		"mul r6, r6.x, c[9]\n"
		"dp3 r7, r3, c7\n"
		"mad r7, r7.x, c[10], r6\n"
		"dp3 r8, r3, c8\n"
		"mad r8, r8.x, c[11], r7\n"
		"add r9, r8, c[5]\n"
		"mov oD0.w, v6.w\n"
		"mul oD0.xyz, v6, r9\n"
		"mul oT1.x, r10.z, c[15].z\n"
		"add oT0, v7, c[4]\n"
		"mov oPos, v0";
	GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[0] = D3DVSD_STREAM(0);
	GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[1] = D3DVSD_REG(D3DVSDE_POSITION, D3DVSDT_FLOAT3);
	GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[2] = D3DVSD_REG(D3DVSDE_BLENDWEIGHT, D3DVSDT_FLOAT3);
	GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[3] = D3DVSD_REG(D3DVSDE_NORMAL, D3DVSDT_SHORT4);  //V2 -> V3
	GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[4] = D3DVSD_REG(D3DVSDE_DIFFUSE, D3DVSDT_FLOAT4);  //V3 -> V5
	GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[5] = D3DVSD_REG(D3DVSDE_SPECULAR, D3DVSDT_FLOAT4); //V4 -> V6
	GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[6] = D3DVSD_REG(D3DVSDE_TEXCOORD0, D3DVSDT_FLOAT2); //V5 -> V7
	GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[7] = D3DVSD_STREAM(1);
	GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[8] = D3DVSD_REG(D3DVSDE_TEXCOORD1, D3DVSDT_FLOAT3); //V6 -> V8 NOT A TEXTURE
	GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[9] = D3DVSD_STREAM(2);
	GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[10] = D3DVSD_REG(D3DVSDE_TEXCOORD2, D3DVSDT_FLOAT3);//V7 -> V9 NOT A TEXTURE
	GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[11] = D3DVSD_STREAM(3);
	GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[12] = D3DVSD_REG(D3DVSDE_TEXCOORD3, D3DVSDT_FLOAT3);//V8 -> V10 NOT A TEXTURE
	GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[13] = D3DVSD_STREAM(4);
	GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[14] = D3DVSD_REG(D3DVSDE_TEXCOORD4, D3DVSDT_FLOAT3);//V9 -> V11 NOT A TEXTURE
	GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[15] = D3DVSD_STREAM(5);
	GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[16] = D3DVSD_REG(D3DVSDE_TEXCOORD5, D3DVSDT_FLOAT3);//V10 -> V12 NOT A TEXTURE
	GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[17] = D3DVSD_STREAM(6);
	GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[18] = D3DVSD_REG(D3DVSDE_TEXCOORD6, D3DVSDT_FLOAT3);//V11 -> V13 NOT A TEXTURE
	GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[19] = D3DVSD_STREAM(7);
	GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[20] = D3DVSD_REG(D3DVSDE_TEXCOORD7, D3DVSDT_FLOAT3);//V12 -> V14 NOT A TEXTURE
	GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[21] = D3DVSD_STREAM(8);
	GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[22] = D3DVSD_REG(D3DVSDE_POSITION2, D3DVSDT_FLOAT3);//V13 -> V15
	GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[23] = D3DVSD_END();//Stream limit probably
	//GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[23] = D3DVSD_STREAM(9);
	//GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[24] = D3DVSD_REG(D3DVSDE_NORMAL2, D3DVSDT_FLOAT3);//V14 -> V16 NOT A NORMAL
	//GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[25] = D3DVSD_STREAM(10);
	//GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[26] = D3DVSD_REG(D3DVSDE_BLENDINDICES, D3DVSDT_FLOAT3);//V15 -> V2 NOT A BLEND INDEX
	//GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[27] = D3DVSD_END();
	GLOBAL->SHADER_BLEND_SKIN_1.declarationSize = 0x70;
	GLOBAL->SHADER_BLEND_SKIN_1.CompileShader(shader1);

	//ORIGINAL "xvs.1.1\nmov a0.x, v2.x\nmul r0, c[a0.x + 0], v0.x\nmad r0, c[a0.x + 1], v0.y, r0\nmad r0, c[a0.x + 2], v0.z, r0\nmad r0, c[a0.x + 3], v0.w, r0\nmul r0, r0, v1.x\nmul r3, c[a0.x + 0], v3.x\nmad r3, c[a0.x + 1], v3.y, r3\nmad r3, c[a0.x + 2], v3.z, r3\nmov a0.x, v2.y\nmul r1, c[a0.x + 0], v0.x\nmad r1, c[a0.x + 1], v0.y, r1\nmad r1, c[a0.x + 2], v0.z, r1\nmad r1, c[a0.x + 3], v0.w, r1\nmad r0, r1, v1.y, r0\nmov a0.x, v2.z\nmul r2, c[a0.x + 0], v0.x\nmad r2, c[a0.x + 1], v0.y, r2\nmad r2, c[a0.x + 2], v0.z, r2\nmad r2, c[a0.x + 3], v0.w, r2\nmad r0, r2, v1.z, r0\nmul oPos, c[0], r0.x\nmad oPos, c[1], r0.y, r12\nmad oPos, c[2], r0.z, r12\nmad oPos, c[3], r0.w, r12\ndp3 r6, r3, c6\nmul r6, r6.x, c[9]\ndp3 r7, r3, c7\nmad r7, r7.x, c[10], r6\ndp3 r8, r3, c8\nmad r8, r8.x, c[11], r7\nadd r9, r8, c[5]\nmov oD0.w, v4.w\nmul oD0.xyz, v4, r9\nmul oT1.x, r12.z, c[15].z\nadd oT0, v5, c[4]\n"
	static const char* shader2 = "vs.1.1\n"
		"mov a0.x, v3.x\n"
		"mul r0, c[a0.x + 0], v0.x\n"
		"mad r0, c[a0.x + 1], v0.y, r0\n"
		"mad r0, c[a0.x + 2], v0.z, r0\n"
		"mad r0, c[a0.x + 3], v0.w, r0\n"
		"mul r0, r0, v1.x\n"
		"mul r3, c[a0.x + 0], v5.x\n"
		"mad r3, c[a0.x + 1], v5.y, r3\n"
		"mad r3, c[a0.x + 2], v5.z, r3\n"
		"mov a0.x, v3.y\n"
		"mul r1, c[a0.x + 0], v0.x\n"
		"mad r1, c[a0.x + 1], v0.y, r1\n"
		"mad r1, c[a0.x + 2], v0.z, r1\n"
		"mad r1, c[a0.x + 3], v0.w, r1\n"
		"mad r0, r1, v1.y, r0\n"
		"mov a0.x, v3.z\n"
		"mul r2, c[a0.x + 0], v0.x\n"
		"mad r2, c[a0.x + 1], v0.y, r2\n"
		"mad r2, c[a0.x + 2], v0.z, r2\n"
		"mad r2, c[a0.x + 3], v0.w, r2\n"
		"mad r0, r2, v1.z, r0\n"
		"mul r10, c[0], r0.x\n"
		"mad r10, c[1], r0.y, r10\n"
		"mad r10, c[2], r0.z, r10\n"
		"mad r10, c[3], r0.w, r10\n"
		"dp3 r6, r3, c6\n"
		"mul r6, r6.x, c[9]\n"
		"dp3 r7, r3, c7\n"
		"mad r7, r7.x, c[10], r6\n"
		"dp3 r8, r3, c8\n"
		"mad r8, r8.x, c[11], r7\n"
		"add r9, r8, c[5]\n"
		"mov oD0.w, v6.w\n"
		"mul oD0.xyz, v6, r9\n"
		"mul oT1.x, r10.z, c[15].z\n"
		"add oT0, v7, c[4]\n"
		"mov oPos, r10";
	GLOBAL->SHADER_BLEND_SKIN_2.pDeclaration[0] = D3DVSD_STREAM(0);
	GLOBAL->SHADER_BLEND_SKIN_2.pDeclaration[1] = D3DVSD_REG(D3DVSDE_POSITION, D3DVSDT_FLOAT3);
	GLOBAL->SHADER_BLEND_SKIN_2.pDeclaration[2] = D3DVSD_REG(D3DVSDE_BLENDWEIGHT, D3DVSDT_FLOAT3);
	GLOBAL->SHADER_BLEND_SKIN_2.pDeclaration[3] = D3DVSD_REG(D3DVSDE_NORMAL, D3DVSDT_SHORT4); //V2 -> V3
	GLOBAL->SHADER_BLEND_SKIN_2.pDeclaration[4] = D3DVSD_REG(D3DVSDE_DIFFUSE, D3DVSDT_FLOAT4); //V3 -> V5
	GLOBAL->SHADER_BLEND_SKIN_2.pDeclaration[5] = D3DVSD_REG(D3DVSDE_SPECULAR, D3DVSDT_FLOAT4); //V4 -> V6
	GLOBAL->SHADER_BLEND_SKIN_2.pDeclaration[6] = D3DVSD_REG(D3DVSDE_TEXCOORD0, D3DVSDT_FLOAT2); //V5 -> V7
	GLOBAL->SHADER_BLEND_SKIN_2.pDeclaration[7] = D3DVSD_END();
	GLOBAL->SHADER_BLEND_SKIN_2.declarationSize = 0x20;
	GLOBAL->SHADER_BLEND_SKIN_2.CompileShader(shader2);
}

uint GameContext::ParseVideoParameters(TwinString* arg) {
	Global* GLOBAL = Global::Get();
	TwinString resultString;
	int result;
	float resultFloat;

	if (_stricmp(arg->value, "PAL") == 0) {
		GLOBAL->IS_PAL = true;
		GLOBAL->SCREEN_WIDTH = 640;
		GLOBAL->SCREEN_HEIGHT = 480;
		return 1;
	}

	if (_stricmp(arg->value, "NTSC") == 0) {
		GLOBAL->IS_PAL = false;
		GLOBAL->SCREEN_WIDTH = 640;
		GLOBAL->SCREEN_HEIGHT = 480;
		return 1;
	}

	if (_stricmp(arg->value, "PROFILE") == 0) {
		profile = true;
		return 1;
	}

	if (arg->StrParseInt("FPS", &result) != 0) {
		GLOBAL->FPS = result;
		return 1;
	}
	else if (arg->StrDiffParseFloat("FOV", &resultFloat) != 0) {
		GLOBAL->ENV_FLOAT_113_SCREEN_FOV = (int)(resultFloat * 182.0444f);
		return 1;
	}
	else if (arg->StrDiffParseFloat("R", &resultFloat) != 0 || arg->StrDiffParseFloat("RED", &resultFloat) != 0) {
		color.R = (byte)(resultFloat * 0.003921569f * 255.0f);
		return 1;
	}
	else if (arg->StrDiffParseFloat("G", &resultFloat) != 0 || arg->StrDiffParseFloat("GREEN", &resultFloat) != 0) {
		color.G = (byte)(resultFloat * 0.003921569f * 255.0f);
		return 1;
	}
	else if (arg->StrDiffParseFloat("B", &resultFloat) != 0 || arg->StrDiffParseFloat("BLUE", &resultFloat) != 0) {
		color.B = (byte)(resultFloat * 0.003921569f * 255.0f);
		return 1;
	}
	else if (arg->StrDiffParseStr("RESTRICT", &resultString) != 0) {
		restrictValue.Copy(resultString.value);
		return 1;
	}

	return 0;
}

void GameContext::InitializeSystems() {
	Global* GLOBAL = Global::Get();
	short rendDistSqr;
	GameReaderStorage* reader;
    uint langId;
	short aiDistSqr;
	ushort aiDist;
	uint local_24;
	ushort rendDist;
	TwinString* restrictStr;

	rendDist = (ushort)(this->ai >> 2) & 0xff;
	aiDistSqr = rendDist * rendDist;
	aiDist = (ushort) * (byte*)&this->ai * (ushort) * (byte*)&this->ai - aiDistSqr;
	rendDist = (ushort)(this->render >> 2) & 0xff;
	rendDistSqr = rendDist * rendDist;
	rendDist = (ushort) * (byte*)&this->render * (ushort) * (byte*)&this->render - rendDistSqr;
	if ((this->flags & 0x100) == 0) {
		local_24 = 5;
	}
	else {
		local_24 = this->flags >> 9 & 0xf;
	}
	for (int i = 0; i < 2; ++i) {
		reader = GameReaderStorage::LazyGetReaderStorage(i);
		if (batch.strLength != 0) {
			reader->reader->InitBatch(batch.value, true, reader);
		}
	} 
	this->inputHandle1 = GLOBAL->INPUT_CONTROLLER->inputSourceList[0];
	InitMatrixes();
	InitScriptPack1Array();
	InitScriptPack2Array();

	GLOBAL->DAT_003a3520 = 0x9000;
	GLOBAL->DAT_003a3518 = 0x5a010;
	GLOBAL->DAT_003a351c = GLOBAL->BIG_BUFFER1;
	GLOBAL->DAT_00495d28 = GLOBAL->BIG_BUFFER2;
	GLOBAL->DAT_00495d10 = 0x20;
	GLOBAL->RENDER_DISTANCE_SQR = rendDistSqr;
	GLOBAL->RENDER_DISTANCE = rendDist;
	GLOBAL->FLOAT_0039f604 = 3.0f / (float)(rendDist + 1);
	GLOBAL->AI_DIST_SQR = aiDistSqr;
	GLOBAL->AI_DIST_SQR2 = aiDist;
	GLOBAL->FLOAT_003a36c8 = 2.0f / (float)(aiDist + 1);

	InitSomeArray1();
	FUN_000f7810(19, 3);
	FUN_000f7810(22, 9);
	FUN_000f7810(11, 5);
	FUN_000f7870(13, 11);
	FUN_000f7870(14, 13);
	FUN_000f7870(15, 14);
	FUN_000f7870(16, 15);
	FUN_000f7870(17, 16);
	FUN_000f7870(18, 17);
	FUN_000f7870(12, 18);
	this->defaultRm = new UnkFamily16A(&this->resourceManager, (byte)(this->flags >> 6) & 1, (byte)(this->flags >> 7) & 1);
	GLOBAL->IS_CYCLE = (bool)(this->flags >> 3) & 1;
	GLOBAL->PTR_DefaultRM = this->defaultRm;
	GLOBAL->PTR_DefaultRM_2 = this->defaultRm;
	GLOBAL->PTR_003e6bf4 = new UnkClassC();
	this->gameController = new GameController(this->inputHandle1, this->inputHandle2, GLOBAL->FONT_RENDERER, this->defaultRm,&this->resourceManager, &this->gameResources);
    gameController->flags2 = gameController->flags2 ^ (this->flags >> 6 ^ gameController->flags2) & 1;
	langId = this->gameController->flags2;
	this->gameController->flags2 = langId ^ ((this->flags >> 7 & 0xff) << 1 ^ langId) & 2;
	gameController->chunkDescriptor.chunkName.Copy((this->startupLevel).value);
	GLOBAL->GAME_CONTROLLER_1 = this->gameController;
	GLOBAL->GAME_CONTROLLER_2 = this->gameController;
	GLOBAL->GAME_CONTROLLER_3 = this->gameController;
	GLOBAL->GAME_CONTROLLER_4 = this->gameController;
	GLOBAL->GAME_CONTROLLER_5 = this->gameController;
	if (((*(char*)&this->flags < '\0') && (local_24 != 0)) && (local_24 != 2)) {
		local_24 = 2;
	}
	
	GLOBAL->WORLD = new World(&GLOBAL->SOME_STATE, local_24);
	GLOBAL->WORLD->restrictValue.Copy(restrictValue.value);
	GLOBAL->WORLD->restrictValue.ToLower();
	GLOBAL->WORLD->flags = GLOBAL->WORLD->flags ^ ((this->flags >> 6) << 0x1c ^ GLOBAL->WORLD->flags) & 0x10000000;
	GLOBAL->WORLD->flags = GLOBAL->WORLD->flags ^ ((this->flags >> 7) << 0x1d ^ GLOBAL->WORLD->flags) & 0x20000000;
	GLOBAL->VIDEO_PLAYER = new VideoPlayer();
	GLOBAL->VIDEO_CONTROLLER = new VideoController(&this->resourceManager, 1);
	GLOBAL->INT_003a3368 = 1;
	FUN_00021ce0();
	if (GLOBAL->LANGUAGE_SELECTED == 3) {
		SetLanguage(2);
		return;
	}
	if (langId == 4) {
		SetLanguage(1);
		return;
	}
	if (langId != 6) {
		SetLanguage(0);
		return;
	}
	SetLanguage(4);
	return;
}

void GameContext::InitMatrixes()
{
	Global* GLOBAL = Global::Get();

	float val = 0.0f;
	GLOBAL->DAT_003cff78 = 0;
	GLOBAL->INT_003cff7c = 0;
	GLOBAL->TICKS_COUNTER = 0.0f;

	for (int i = 0; i < 48; ++i) {
		GLOBAL->MATRIX_ARRAY_1[i] = Matrix4(val);
		float k = Global::FUN_000e22f0(&val);
		GLOBAL->MATRIX_ARRAY_1[i].m34 = k * 0.125;
		val += (65536.0f / GLOBAL->PI_2) * GLOBAL->ENV_FLOAT_15;
	}
}

GameContext::GameContext() : GameContextAbstract() {
	Global* GLOBAL = Global::Get();

	ObjectBuilderStorage* objectFactory;
	startupLevel = TwinString();
	stringCollection = StringCollection(10);
	batch = TwinString();
	gameResources = GameResources();

	builder1 = UnkBuilder1();
	builder2 = UnkBuilder2();
	actionFactory = ActionFactory();
	perceptFactory = PerceptFactory();
	builder5 = UnkBuilder5();
	builder6 = UnkBuilder6();
	sceneryFactory = SceneryFactory();
	resourceManager = GameResourceManager(&gameResources);
	cameraFactory = CameraFactory();
	builder9 = UnkBuilder9();
	builder10 = UnkBuilder10();
	if (GLOBAL->OBJECT_BUILDER_STORAGE == null) {
		GLOBAL->OBJECT_BUILDER_STORAGE = new ObjectBuilderStorage();
	}
	objectFactory = GLOBAL->OBJECT_BUILDER_STORAGE;
	this->flags = 0;
	this->unkField8 = 10;
	this->inputHandle1 = null;
	this->time = GLOBAL->TICKS_PER_TIME * 0.0f;
	this->ai = 100;
	this->render = 100;
	this->defaultRm = null;
	this->gameController = null;
	objectFactory->AddBuilder(&builder1);
	objectFactory->AddBuilder(&builder2);
	objectFactory->AddBuilder(&actionFactory);
	objectFactory->AddBuilder(&perceptFactory);
	objectFactory->AddBuilder(&builder5);
	objectFactory->AddBuilder(&builder6);
	objectFactory->AddBuilder(&sceneryFactory);
	objectFactory->AddBuilder(&cameraFactory);
	objectFactory->AddBuilder(&builder9);
	objectFactory->AddBuilder(&builder10);
	FUN_0017fd60();
	GLOBAL->DAT_00495d1a = 0;
	FUN_000374a0();
	FUN_00123250();
	CreateWaterAndSkyShaders();
	CreateStaticGeometryShader();
	CreateSkinnedGeometryShader();
	CreateBlendSkinShader();
	this->flags = this->flags | 8;
}

void GameContext::DoSoundsStuff(bool isGameState3, SomeState* someState)
{
	Logging::LogUnimplemented(__FUNCSIG__);
}

void GameContext::DoMemoryTasks(bool isEndFrameUpdate)
{
	Logging::LogUnimplemented(__FUNCSIG__);
}

void GameContext::TickFrameNumber()
{
	Global* GLOBAL = Global::Get();
	LARGE_INTEGER value;
	QueryPerformanceCounter(&value);
	++GLOBAL->FRAME_NUMBER;
}

void GameContext::InitScriptPack1Array()
{
	Logging::LogUnimplemented(__FUNCSIG__);
}

void GameContext::InitScriptPack2Array()
{
	Logging::LogUnimplemented(__FUNCSIG__);
}

void GameContext::InitSomeArray1()
{
	Global* GLOBAL = Global::Get();

	GLOBAL->SOME_LIST1_LENGTH = 11;
	for (int i = 0; i < 11; ++i) { 
		GLOBAL->SOME_LIST1[i + 1] = i;
	}
}

void GameContext::FUN_000f7810(int idx1, int idx2)
{
	Global* GLOBAL = Global::Get();

	int val = -1;
	for (int i = 0; i < GLOBAL->SOME_LIST1_LENGTH; ++i) {
		if (GLOBAL->SOME_LIST1[i + 1] == idx2) {
			val = i;
			break;
		}
	}

	if (GLOBAL->SOME_LIST1_LENGTH <= val) {
		GLOBAL->SOME_LIST1[val + 1] = idx1;
		++GLOBAL->SOME_LIST1_LENGTH;
		return;
	}
	FUN_000f7840(GLOBAL->SOME_LIST1_LENGTH, val, idx1, GLOBAL->SOME_LIST1_LENGTH);
}

bool GameContext::FUN_000f7840(int idx, int idx2, int val, int length) {
	Global* GLOBAL = Global::Get();

	do {
		GLOBAL->SOME_LIST1[idx + 1] = GLOBAL->SOME_LIST1[idx];
		idx = idx + -1;
	} while (idx2 < idx);
	GLOBAL->SOME_LIST1[idx2 + 1] = val;
	GLOBAL->SOME_LIST1_LENGTH = length + 1;
	return -1 < idx2;
}

bool GameContext::FUN_000f7870(int idx1, int idx2)
{
	Global* GLOBAL = Global::Get();

	int val = -1;
	for (int i = 0; i < GLOBAL->SOME_LIST1_LENGTH; ++i) {
		if (GLOBAL->SOME_LIST1[i + 1] == idx2) {
			val = i;
			break;
		}
	}

	if (val <= GLOBAL->SOME_LIST1_LENGTH) {
		for (int j = GLOBAL->SOME_LIST1_LENGTH; j >= val; --j) {
			GLOBAL->SOME_LIST1[j + 1] = GLOBAL->SOME_LIST1[j];
		}
	}
	GLOBAL->SOME_LIST1[val] = idx1;
	++GLOBAL->SOME_LIST1_LENGTH;
	return val >= 0;
}

void GameContext::SetLanguage(int langId)
{
	Global* GLOBAL = Global::Get();
	GLOBAL->LNG_INDEX = langId;
	if (GLOBAL->LANG_CNT != 0) {
		GLOBAL->LOCAL_MSG1 = GLOBAL->LANG_ARR1[langId];
		//GLOBAL->LOCAL_MSG2 = GLOBAL->LANG_ARR2[langId]; //LANG_ARR2 never initialized in original;
		INIT_LANGUAGE();
	}
}

int GameContext::ProcessCredits(byte videoPlayerIsUp) {
	Global* GLOBAL = Global::Get();
	int result;
	//GLOBAL->RENDERER->Stub2();
	DrawVideoPlayerText(videoPlayerIsUp);
	//GLOBAL->RENDERER->Stub3();
	if (GLOBAL->SAVE_SYSTEM != null) {
		GLOBAL->SAVE_SYSTEM->FontRelated(GLOBAL->FONT_RENDERER);
	}
	return 0;
}

void GameContext::SetupScreenAndCopyright() {
	Global* GLOBAL = Global::Get();
	char copyrigthChar;
	int checksum;
	ScreenInfo screen(GLOBAL->RENDERER);
	const char* copyright;
	if (GLOBAL->GAME_STATE == GameState::STATE0) {
		screen.height1 = GLOBAL->SCREEN_HEIGHT;
		screen.height2 = GLOBAL->SCREEN_HEIGHT;
		screen.width1 = GLOBAL->SCREEN_WIDTH;
		screen.width2 = GLOBAL->SCREEN_WIDTH;
		screen.color = Color(0,0,0,0);
		screen.field1_0x4 = 0;
		screen.field2_0x8 = 0;
		GLOBAL->FONT_RENDERER = GLOBAL->RENDERER->CreateFontRenderer(&screen);
		GLOBAL->FONT_RENDERER->flags = GLOBAL->FONT_RENDERER->flags | 1;
		GLOBAL->FONT_RENDERER->screenInfoExt->screenInfo.color = color;
		InitializeSystems();
		GLOBAL->GAME_STATE = GameState::STATE1;
	}
	checksum = 0;
	if (GLOBAL->COPYRIGHT_STRING[1] != '\0') {
		copyrigthChar = GLOBAL->COPYRIGHT_STRING[1];
		copyright = GLOBAL->COPYRIGHT_STRING;
		do {
			checksum = checksum + copyrigthChar;
			copyrigthChar = copyright[2];
			copyright = copyright + 1;
		} while (copyrigthChar != '\0');
	}
	if (checksum == GLOBAL->REFERENCE_CHECKSUM) {
		GLOBAL->ENV_INT_114_COPYRIGHT_HASH = 0;
	}
	return;
}

void GameContext::UpdateGameState() {
	Global* GLOBAL = Global::Get();
	UnkSingletone* singletone;
	byte videoPlayerState;
	if (GLOBAL->GAME_STATE == GameState::STATE2) {
		if (GLOBAL->INPUT_CONTROLLER != null) {
			GLOBAL->INPUT_CONTROLLER->SendDataToControllersEx();
		}
		//I am very obedient and respectful person.
		//If original code null checks only for one method, i will respect that
		if (GLOBAL->VIDEO_CONTROLLER != null) {
			GLOBAL->VIDEO_CONTROLLER->PauseState();
		}
		GLOBAL->VIDEO_CONTROLLER->Pause();
		if (GLOBAL->CLOCK != null) {
			UnkTimePack::ResetFlags(GLOBAL->CLOCK->timeArray);
		}
		GLOBAL->GAME_STATE = GameState::STATE3;
	}
	else if (GLOBAL->GAME_STATE == GameState::STATE4) {
		if (GLOBAL->INPUT_CONTROLLER != null) {
			GLOBAL->INPUT_CONTROLLER->ResetFlags();
		}
		if (GLOBAL->VIDEO_CONTROLLER != null) {
			GLOBAL->VIDEO_CONTROLLER->UnpauseState();
		}
		GLOBAL->VIDEO_CONTROLLER->SoundRelated();
		if (GLOBAL->CLOCK != null) {
			UnkTimePack::SetFlags(GLOBAL->CLOCK->timeArray);
		}
		GLOBAL->GAME_STATE = GameState::STATE1;
	}
	if (GLOBAL->CLOCK != null) {
		GLOBAL->CLOCK->CalculateDeltaTime();
	}
	if (GLOBAL->VIDEO_PLAYER != null) {
		videoPlayerState = 0;
	}
	else {
		videoPlayerState = GLOBAL->VIDEO_PLAYER->ProcessVideoPlayerFSM();
	}
	if ((GLOBAL->VIDEO_PLAYER_STATE != 0) && (videoPlayerState == 0)) {
		GLOBAL->VIEWPORT_CLEARING_NEEDED = true;
	}
	if (GLOBAL->VIDEO_PLAYER_STATE != videoPlayerState) {
		GLOBAL->VIDEO_PLAYER_STATE = videoPlayerState;
	}
	if (videoPlayerState == 0) {
		if (GLOBAL->RENDERER != null) {
			GLOBAL->RENDERER->UnkMethod1();
		}
		singletone = UnkSingletone::Get(); //TODO: String collection possibly?
		singletone->field3_0xc = 0;
		singletone->field1_0x4 = 0;
	}
	if (GLOBAL->INPUT_CONTROLLER != null) {
		GLOBAL->INPUT_CONTROLLER->ProcessInsertionRemovals(GLOBAL->ENV_FLOAT_116_DT3 * GLOBAL->TIME_PER_TICK_1);
	}
	ProgressUI();
	if ((videoPlayerState == 0) && (GLOBAL->GAME_STATE != GameState::STATE3)) {
		ProcessGameLogic();
	}
	return;
}

void GameContext::ProcessGameLogic()
{
	UpdateTime();
	DoUpdate();
}

void GameContext::UpdateTime()
{
	Logging::LogUnimplemented(__FUNCSIG__);
}

void GameContext::DoUpdate()
{
	Logging::LogUnimplemented(__FUNCSIG__);
}

void GameContext::EndFrameUpdate(bool flag) {
	Global* GLOBAL = Global::Get();

	bool cVar1;
	if (!flag) {
		DoSoundsStuff(GLOBAL->GAME_STATE == GameState::STATE3, &GLOBAL->SOME_STATE);
	}
	ProgressUI2();
	if (GLOBAL->RENDERER != null) {
		GLOBAL->RENDERER->ResetGradient();
	}
	if (!flag) {
		DoMemoryTasks(true);
	}
	if (GLOBAL->RENDERER != null) {
		if (!flag) {
			if (GLOBAL->VIEWPORT_CLEARING_NEEDED) {
				GLOBAL->RENDERER->ClearViewport(true, true);
				GLOBAL->VIEWPORT_CLEARING_NEEDED = false;
			}
			GLOBAL->RENDERER->SwapBuffer();
		}
		else {
			//GLOBAL->VIDEO_PLAYER->Stub1();
		}
	}
	if (GLOBAL->CLOCK != null) {
		TickFrameNumber();
	}
	return;
}

void GameContext::INIT_LANGUAGE() {
	Global* GLOBAL = Global::Get();
	if (GLOBAL->VIDEO_CONTROLLER != null) {
		GLOBAL->VIDEO_CONTROLLER->hintStr.Set("Press (JUMP) to skip movie");
		GLOBAL->VIDEO_CONTROLLER->errorStr.Set("DISC ERROR");
	}
	if (GLOBAL->SAVE_SYSTEM != null) {
		GLOBAL->STR_INDEX[1] = 0x2a;
		GLOBAL->STR_INDEX[2] = 0x2b;
		GLOBAL->STR_INDEX[3] = 0x2c;
		GLOBAL->STR_INDEX[4] = 0x2d;
		GLOBAL->STR_INDEX[5] = 0x2e;
		GLOBAL->STR_INDEX[6] = 0x2f;
		GLOBAL->STR_INDEX[7] = 0x30;
		GLOBAL->STR_INDEX[8] = 0x31;
		GLOBAL->STR_INDEX[9] = 0x32;
		GLOBAL->STR_INDEX[10] = 0x33;
		GLOBAL->STR_INDEX[11] = 0x34;
		GLOBAL->STR_INDEX[12] = 0xbc;
		GLOBAL->STR_INDEX[13] = 0x35;
		GLOBAL->STR_INDEX[14] = 100;
		GLOBAL->STR_INDEX[15] = 0x36;
		GLOBAL->STR_INDEX[16] = 0x37;
		GLOBAL->STR_INDEX[17] = 0x38;
		GLOBAL->STR_INDEX[20] = 0xbd;
		GLOBAL->STR_INDEX[18] = 0x39;
		GLOBAL->STR_INDEX[19] = 0x3a;
		GLOBAL->STR_INDEX[21] = 0xb9;
		GLOBAL->STR_INDEX[22] = 0xba;
		GLOBAL->STR_INDEX[23] = 0xbb;
		GLOBAL->STR_INDEX[24] = 0x3b;
		GLOBAL->STR_INDEX[25] = 0x3c;
		GLOBAL->STR_INDEX[26] = 0x3d;
		GLOBAL->STR_INDEX[27] = 0xbe;
		GLOBAL->STR_INDEX[28] = 0x3e;
		GLOBAL->STR_INDEX[29] = 0x3f;
		GLOBAL->STR_INDEX[30] = 0x40;
		GLOBAL->STR_INDEX[31] = 0x41;
		GLOBAL->STR_INDEX[32] = 5;
		GLOBAL->STR_INDEX[33] = 0x42;
		GLOBAL->STR_INDEX[34] = 0xd1;
		GLOBAL->STR_INDEX[35] = 0x44;
		GLOBAL->STR_INDEX[36] = 3;
		GLOBAL->STR_INDEX[37] = 2;
		GLOBAL->STR_INDEX[38] = 0x45;
	}
}

void GameContext::ProgressUI() {
	gameController->ProgressUI();
	return;
}

void GameContext::DoGameControllerStuff(int flags) {
	Global* GLOBAL = Global::Get();

	bool result;
	InstanceContext* playerCtx = null;
	if ((char)flags != '\0') {
		gameController->ActionFsm(flags);
		CheckCopyright();
		return;
	}

	GLOBAL->DELTA_TIME_SEC1 = GLOBAL->CLOCK->deltaTimeTicks * GLOBAL->TIME_PER_TICK_1;
	GLOBAL->DELTA_TIME_SEC2 = GLOBAL->DELTA_TIME_SEC1;
	if (this->time == (GLOBAL->TICKS_PER_TIME * 0.0)) {
		this->time = GLOBAL->CLOCK->prevTime;
	}
	result = gameController->ActionFsm(0);
	if (result) {
		uint playerIndex;
		playerIndex = (uint)gameController->state >> 0x13 & 0xf;
		if ((playerIndex == 1) || (playerIndex == 2)) {
			InstanceContextRefCounter* ref = GLOBAL->FONT_RENDERER->field1_0x4->ctxPtr;
			if (ref == null) {
				playerCtx = null;
			}
			else {
				playerCtx = ref->ctx;
			}
		}
		else {
			playerIndex = (gameController->chunkDescriptor).flags >> 8 & 0xf;
			if (playerIndex != 6) {
				InstanceContextRefCounter* ref = (gameController->chunkDescriptor).playerInstanceContexts[playerIndex];
				if (ref == null) {
					playerCtx = null;
				}
				else {
					playerCtx = ref->ctx;
				}
			}
		}
		if (playerCtx != null) {
			ChunkList* chunkList;
			ChunkData* chunkData;
			chunkData = playerCtx->chunkData;
			GLOBAL->WORLD->ChunkTransition(playerCtx);
			chunkList = ChunkList::GetInstance();
			ChunkDataRefCounter::Unpack(&chunkList->chunkRef, chunkData);
		}
	}
	CheckCopyright();
}

void GameContext::CheckCopyright()
{
	Logging::LogUnimplemented(__FUNCSIG__);
}

void GameContext::DrawVideoPlayerText(byte videoPlayerIsUp) {
	Global* GLOBAL = Global::Get();
	GLOBAL->DAT_003ec544 = GLOBAL->FONT_RENDERER->screenInfoExt;
	gameController->UpdateAspectRatio(videoPlayerIsUp);
	GLOBAL->RENDERER->Render();
	if (videoPlayerIsUp != 0) {
		gameController->DrawText(videoPlayerIsUp);
		return;
	}
	GLOBAL->ENV_CLASS_175_DECAL.FUN_0010a5d0(GLOBAL->CLOCK->timeArray[0].time2 * GLOBAL->TIME_PER_TICK_1);
	GLOBAL->ENV_CLASS_175_DECAL.DrawPlane();
	gameController->DrawText(0);
	return;
}

void GameContext::ProgressUI2() {
	gameController->ProgressUI2();
	return;
}

void GameContext::ParseLaunchArguments(uint argc, char** argv) {
	for (int i = 1; i < argc; ++i) {
		TwinString arg;
		TwinString resultString;
		int result;

		arg.Set(argv[i]);
		if (*arg.value != ';' && *arg.value != '/') {
			if (arg.StrParseInt("RENDER", &result) != 0) {
				this->render = result;
			}
			else if (arg.StrParseInt("FAR", &result) != 0) {

			}
			else if (arg.StrParseInt("AI", &result) != 0) {
				this->ai = result;
			} 
			else if(arg.StrDiff("TIME") != 0) {
				this->flags |= FLAGS_TIME;
			}
			else if (arg.StrDiff("VERSION") != 0) {
				this->flags |= FLAGS_VERSION;
			}
			else if (arg.StrDiff("CYCLE") != 0) {
				this->flags |= FLAGS_CYCLE;
			}
			else if (arg.StrDiff("NEWLOAD") != 0) {

			}
			else if (arg.StrDiff("FOG") != 0) {
				this->flags |= FLAGS_FOG;
			}
			else if (arg.StrDiffParseStr("OSD", &resultString) != 0) {
				int cmp = strcmp("OFF", resultString.value);
				this->flags = this->flags ^ ((uint)(cmp == 0) << 4 ^ this->flags) & FLAGS_OSD;
			}
			else if (arg.StrDiffParseStr("STREAM", &resultString) != 0) {
				if (_stricmp(resultString.value, "OFF") != 0) {
					this->flags = this->flags & ~STREAM_MASK | STREAM_OFF;
				} 
				else if (_stricmp(resultString.value, "EDITOR") != 0) {
					this->flags = this->flags & ~STREAM_MASK | STREAM_EDITOR;
				}
				else if(_stricmp(resultString.value, "BLOCK") != 0) {
					this->flags = this->flags & ~STREAM_MASK | STREAM_BLOCK;
				}
				else if (_stricmp(resultString.value, "ALL") != 0) {
					this->flags = this->flags & ~STREAM_MASK | STREAM_ALL;
				}
				else if (_stricmp(resultString.value, "DEMAND") != 0) {
					this->flags = this->flags & ~STREAM_MASK | STREAM_DEMAND;
				}
				else if (_stricmp(resultString.value, "FULL") != 0) {
					this->flags = this->flags & ~STREAM_MASK | STREAM_FULL;
				}
			}
			else if (arg.StrDiff("RB") != 0) {
				this->flags |= FLAGS_RB;
			}
			else if (arg.StrDiff("WB") != 0) {
				this->flags |= FLAGS_WB;
			}
			else if (arg.StrDiffParseStr("BATCH", &resultString) != 0) {
				this->batch.Copy(resultString.value);
			}
			else {
				int videoArgResult = ParseVideoParameters(&arg);
				if (videoArgResult == 0) {
					if (gameController == null) {
						startupLevel.Copy(arg.value);
					}
					else {
						gameController->chunkDescriptor.chunkName.Copy(arg.value);
					}
					stringCollection.AddString(&arg);
				}
			}
		}
	}
	return;
}