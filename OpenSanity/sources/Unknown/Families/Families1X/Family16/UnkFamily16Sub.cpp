#include "headers/Unknown/Families/Families1X/Family16/UnkFamily16Sub.h"

#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
void UnkFamily16Sub::InitSubStructArray() {
	for (int i = 0; i < 256; ++i) {
		this->ctxArray[i * 2] = null; //yeah
		this->ctxArray[i * 2 + 1] = null;
	}
}

void UnkFamily16Sub::FUN_000f79a0(InstanceContext* ctx) {
    if (this->cnt != 0) {
        uint index = ctx->someIndex;
        --this->cnt;
        if (index < this->cnt) {
            InstanceContext* ptr = this->ctxArray[cnt * 2];
            this->ctxArray[index * 2] = ptr;
            this->ctxArray[index * 2 + 1] = this->ctxArray[cnt * 2 + 1];
            ptr->someIndex = index;
        }
        ctx->someIndex = -1;
    }
    return;
}

