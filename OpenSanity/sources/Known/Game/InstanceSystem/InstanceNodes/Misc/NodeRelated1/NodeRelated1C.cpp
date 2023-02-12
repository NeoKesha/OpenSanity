#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated1/NodeRelated1C.h"

void NodeRelated1C::Construct(byte param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeRelated1C * __fastcall NodeRelated1C::Construct(NodeRelated1C *this,undefined param_2,undefined4 param_3){
		float fVar1;
		NodeRelated1C *pNVar2;
		(this->parent).parent.field7_0x10 = 0;
		*(undefined *)&(this->parent).parent.field7_0x10 = 3;
		(this->parent).parent.field7_0x10 = (this->parent).parent.field7_0x10 | 0xfe000;
		pNVar2 = (NodeRelated1C *)NodeRelated1Abstract::InitTime((NodeRelated1Abstract *)this);
		(this->parent).field1_0x14 = 2;
		(this->parent).field2_0x18 = 0;
		this->field1_0x1c = 0;
		this->field2_0x20 = 0;
		(this->vec1).x = Vector4_0039ef70.x;
		(this->vec1).y = Vector4_0039ef70.y;
		(this->vec1).z = Vector4_0039ef70.z;
		fVar1 = FLOAT_0038639c;
		(this->vec1).w = FLOAT_0038639c;
		(this->vec2).x = Vector4_0039ef70.x;
		(this->vec2).y = Vector4_0039ef70.y;
		(this->vec2).z = Vector4_0039ef70.z;
		(this->vec2).w = fVar1;
		this->field3_0x24 = 0;
		this->field4_0x28 = 0;
		this->field5_0x2c = 0;
		this->field6_0x30 = 0;
		this->field7_0x34 = 0;
		return pNVar2;
		}
		
	*/
	return;
}

void NodeRelated1C::Construct_1(NodeRelated1C* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeRelated1C * __fastcall NodeRelated1C::Construct(NodeRelated1C *param_1){
		undefined extraout_DL;
		NodeRelated1E::Construct(&param_1->parent);
		(param_1->parent).parent.vtable = &NodeRelated1_VT_C;
		param_1->field1_0x1c = 0;
		Construct(param_1,extraout_DL,1);
		return param_1;
		}
		
	*/
	return;
}

void NodeRelated1C::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall NodeRelated1C::Dispose(NodeRelated1C *this,byte param_1){
		(this->parent).parent.vtable = &NodeRelated1_VT_Abstract2;
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

