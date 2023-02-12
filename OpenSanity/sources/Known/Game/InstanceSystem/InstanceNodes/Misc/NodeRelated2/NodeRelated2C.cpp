#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2C.h"

#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Math/Matrix4.h"
#include "headers/Known/Game/InstanceSystem/InstanceContext.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Classes/Camera/InstanceNodeKSub/InstanceNodeKSubA.h"
#include "headers/Unknown/UnkStructures/US001.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/InstanceMasterInfo.h"
bool NodeRelated2C::Connect(NodeRelated2C* other) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall NodeRelated2C::Connect(NodeRelated2C *this,NodeRelated2C *other){
		UnkFamily3D *pUVar1;
		uint *puVar2;
		NodeRelated1C *pNVar1;
		NodeRelated1C *pNVar2;
		thunk_FUN_00066500(this);
		pUVar1 = (UnkFamily3D *)VirtualPool::AllocateMemory(0x220);
		if (pUVar1 == (UnkFamily3D *)0x0) {
		pUVar1 = (UnkFamily3D *)0x0;
		}
		else {
		pUVar1 = UnkFamily3D::Construct(pUVar1,this,other,1);
		}
		this->field17_0xb0 = pUVar1;
		pUVar1 = (UnkFamily3D *)VirtualPool::AllocateMemory(0x220);
		if (pUVar1 == (UnkFamily3D *)0x0) {
		pUVar1 = (UnkFamily3D *)0x0;
		}
		else {
		pUVar1 = UnkFamily3D::Construct(pUVar1,other,this,0);
		}
		other->field17_0xb0 = pUVar1;
		if (this->field17_0xb0 != (UnkFamily3D *)0x0) {
		pNVar1 = (NodeRelated1C *)(this->parent).parent.related;
		FUN_001f8800(this->field17_0xb0,(this->parent).parent.ctx);
		pNVar1->field1_0x1c = pNVar1->field1_0x1c | 0x200000;
		NodeRelated2Abstract::FUN_001ac940((NodeRelated2Abstract *)this,0x41,(InstanceContextRefCounter *)0x0,false,false);
		}
		if (other->field17_0xb0 != (UnkFamily3D *)0x0) {
		pNVar2 = (NodeRelated1C *)(other->parent).parent.related;
		FUN_001f8800(other->field17_0xb0,(other->parent).parent.ctx);
		pNVar2->field1_0x1c = pNVar2->field1_0x1c | 0x400000;
		NodeRelated2Abstract::FUN_001ac940((NodeRelated2Abstract *)other,0x41,(InstanceContextRefCounter *)0x0,false,false);
		}
		puVar2 = InstanceContext::FUN_000f7220((this->parent).parent.ctx);
		this->field7_0x7c = puVar2[1];
		return true;
		}
		
	*/
	return false;
}

void NodeRelated2C::Construct(InstanceMasterInfo* param_1, uint param_2, uint param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	NodeRelated2Abstract * __thiscall NodeRelated2C::Construct(NodeRelated2C *this,InstanceMasterInfo *param_1,BlackboardAbstract *param_2,NodeRelated1Abstract *param_3){
		NodeRelated2Abstract::Construct((NodeRelated2Abstract *)this,param_1,param_2,param_3);
		(this->parent).parent.vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_E;
		(this->parent).field1_0x60.x = Vector4_0039ef70.x;
		(this->parent).field1_0x60.y = Vector4_0039ef70.y;
		(this->parent).field1_0x60.z = Vector4_0039ef70.z;
		(this->parent).field1_0x60.w = FLOAT_0038639c;
		(this->parent).parent.vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_C;
		this->field11_0x98 = 0;
		this->field12_0x9c = 0;
		this->field13_0xa0 = 0;
		this->data = (US001 *)0x0;
		this->field15_0xa8 = 0;
		this->field16_0xac = 0;
		this->field17_0xb0 = (UnkFamily3D *)0x0;
		*(undefined4 *)&this->field_0xb4 = 0;
		this->field22_0xb8 = (undefined *)0x0;
		*(undefined4 *)&this->field_0xbc = 0;
		this->field27_0xc0 = (UNV039 *)0x0;
		*(undefined4 *)&this->field_0xf4 = 0;
		*(undefined4 *)&this->field_0xf8 = 0;
		*(undefined4 *)&this->field_0xfc = 0;
		*(undefined4 *)&this->field_0x100 = 0;
		*(undefined4 *)&this->field_0x104 = 0;
		*(undefined4 *)&this->field_0x108 = 0;
		*(undefined4 *)&this->field_0x10c = 0;
		this->field36_0xf0 = 0;
		FUN_00155580(&this->field_0x110,(int **)0x0);
		(this->field290_0x200).refCounter = (InstanceContextRefCounter *)0x0;
		(this->field416_0x290).refCounter = (InstanceContextRefCounter *)0x0;
		(this->field421_0x298).refCounter = (InstanceContextRefCounter *)0x0;
		UNV007::Construct((UNV007 *)&this->field_0x2b0,(this->parent).parent.ctx,0x10);
		thunk_FUN_0006e580(this,'\x01');
		this->field17_0xb0 = (UnkFamily3D *)0x0;
		return (NodeRelated2Abstract *)this;
		}
		
	*/
	return;
}

void NodeRelated2C::FUN_0006f930(InstanceContext* param_1, Vector4* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2C::FUN_0006f930(NodeRelated2C *this,InstanceContext *param_1,Vector4 *param_2){
		uint uVar1;
		InstanceContext *ctx;
		undefined uVar2;
		UnkFamily5BA *this_00;
		UnkFamily5AA *pUVar3;
		InstanceNodeInstance *pIVar4;
		undefined4 uVar4;
		undefined4 uVar5;
		if (param_1 != (this->parent).parent.ctx) {
		uVar1 = (param_1->nodes).cnt;
		if ((uVar1 >> 0xc & 1) == 0) {
		if ((uVar1 >> 0xd & 1) == 0) {
		if ((uVar1 >> 0xe & 1) == 0) {
		if ((uVar1 >> 0x14 & 1) == 0) {
		if ((uVar1 >> 0xf & 1) == 0) {
		if ((uVar1 >> 0x10 & 1) == 0) {
		if ((uVar1 >> 0x11 & 1) == 0) {
		if ((uVar1 >> 0x12 & 1) == 0) goto LAB_0006fa71;
		uVar5 = 0x40000;
		}
		else {
		uVar5 = 0x20000;
		}
		}
		else {
		uVar5 = 0x10000;
		}
		}
		else {
		uVar5 = 0x8000;
		}
		}
		else {
		uVar5 = 0x100000;
		}
		}
		else {
		uVar5 = 0x4000;
		}
		}
		else {
		uVar5 = 0x2000;
		}
		}
		else {
		uVar5 = 0x1000;
		}
		if (param_2->y == FLOAT_0038aec4) {
		uVar4 = 4;
		}
		else {
		uVar4 = 5;
		if (param_2->y != FLOAT_0038639c) {
		uVar4 = 3;
		}
		}
		this_00 = (UnkFamily5BA *)VirtualPool::AllocateMemory(0x18);
		if (this_00 == (UnkFamily5BA *)0x0) {
		pUVar3 = (UnkFamily5AA *)0x0;
		}
		else {
		ctx = (this->parent).parent.ctx;
		if (ctx == (InstanceContext *)0x0) {
		pUVar3 = (UnkFamily5AA *)UnkFamily5BA::Construct(this_00,uVar4,0,uVar5);
		}
		else {
		uVar2 = InstanceContextSmartPtr::CreateRef(&ctx->smartPtr,ctx,0);
		pUVar3 = (UnkFamily5AA *)UnkFamily5BA::Construct(this_00,uVar4,uVar2,uVar5);
		}
		}
		if (pUVar3 != (UnkFamily5AA *)0x0) {
		pUVar3 = (UnkFamily5AA *)UnkFamily5SomeStruct::CreatePayload(&(pUVar3->parent).parent.someStruct,pUVar3,1);
		}
		InstanceContext::FUN_000fa200(param_1,(char)pUVar3);
		}
		LAB_0006fa71:if ((char)((uint)(param_1->parent).flags >> 8) < '\0') {
		pIVar4 = (InstanceNodeInstance *)InstanceDataList::GetNode(&param_1->nodes,Instance);
		(*pIVar4->vtable->InstanceMethod17)(pIVar4,(int **)(this->parent).parent.ctx,0.0);
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2C::FUN_00073f40(char param_1, Matrix4* param_2, uint param_3, char param_4) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2C::FUN_00073f40(NodeRelated2C *this,char param_1,Matrix4 *param_2,undefined4 param_3,char param_4){
		InstanceContext *pIVar1;
		InstanceContext *this_02;
		bool bVar2;
		InstanceNodeInput *this_01;
		pIVar1 = (this->parent).parent.ctx;
		this_01 = (InstanceNodeInput *)InstanceDataList::GetNode(&pIVar1->nodes,Input);
		if (this_01 != (InstanceNodeInput *)0x0) {
		InstanceNodeInput::thunk_FUN_000aea70(this_01,0);
		}
		if (param_1 == '\0') {
		this_01->input = (InputStruct *)0x0;
		}
		this_02 = (this->parent).parent.ctx;
		bVar2 = InstanceTransform::FUN_000e16f0((this_02->parent).transform,param_2);
		if (bVar2 != false) {
		InstanceContext::RegisterCtxPtrToList(this_02);
		}
		thunk_FUN_00073d40(this,'\0');
		thunk_FUN_0006e580(this,'\0');
		if (param_4 == '\0') {
		NodeRelated2Abstract::FUN_001ac940((NodeRelated2Abstract *)this,0x4b,(InstanceContextRefCounter *)0x0,false,false);
		}
		AutoClass2::FUN_001372d0(&(pIVar1->parent).field14_0x20);
		return;
		}
		
	*/
	return;
}

void NodeRelated2C::FUN_000663d0(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2C::FUN_000663d0(NodeRelated2C *this,int param_1){
		InstanceContext *pIVar1;
		InstanceNodeAbstract *pIVar2;
		InstanceNodeAbstract *pIVar3;
		while( true ) {
		pIVar1 = (this->parent).parent.ctx;
		*(int *)&this->field_0x1b0 = param_1;
		pIVar2 = InstanceDataList::GetNode(&pIVar1->nodes,Instance);
		if (param_1 == 0) {
		pIVar3 = (InstanceNodeAbstract *)0xffffffff;
		}
		else {
		pIVar3 = (InstanceNodeAbstract *)(uint)*(ushort *)(param_1 + 0x60);
		}
		pIVar2[0xc].field5_0x10 = pIVar3;
		if (((uint)(this->parent).parent.related[1].field5_0x8 >> 0x15 & 1) == 0) break;
		this = UnkFamily3D::thunk_FUN_00091ee0(this->field17_0xb0);
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2C::FUN_00066500() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeRelated2C::FUN_00066500(NodeRelated2C *this){
		int *piVar1;
		NodeRelated1Abstract *pNVar3;
		NodeRelated2C *nodeRel;
		NodeRelated1C *pNVar2;
		if (this->field17_0xb0 != (UnkFamily3D *)0x0) {
		pNVar2 = (NodeRelated1C *)(this->parent).parent.related;
		nodeRel = UnkFamily3D::thunk_FUN_00091ee0(this->field17_0xb0);
		FUN_001f8830(this->field17_0xb0,(this->parent).parent.ctx);
		if (this->field17_0xb0 != (UnkFamily3D *)0x0) {
		(*(code *)((this->field17_0xb0->parent).vtable)->Dispose)(1);
		}
		this->field17_0xb0 = (UnkFamily3D *)0x0;
		pNVar2->field1_0x1c = pNVar2->field1_0x1c & 0xffdfffff;
		if ((undefined4 *)this->field16_0xac != (undefined4 *)0x0) {
		thunk_FUN_00087e40((undefined4 *)this->field16_0xac);
		}
		NodeRelated2Abstract::FUN_001ac940((NodeRelated2Abstract *)this,0x42,(InstanceContextRefCounter *)0x0,false,false);
		if (nodeRel->field17_0xb0 != (UnkFamily3D *)0x0) {
		pNVar3 = (nodeRel->parent).parent.related;
		FUN_001f8830(nodeRel->field17_0xb0,(nodeRel->parent).parent.ctx);
		if (nodeRel->field17_0xb0 != (UnkFamily3D *)0x0) {
		(*(code *)((nodeRel->field17_0xb0->parent).vtable)->Dispose)(1);
		}
		nodeRel->field17_0xb0 = (UnkFamily3D *)0x0;
		piVar1 = &pNVar3[1].field5_0x8;
		*piVar1 = *piVar1 & 0xffbfffff;
		if ((undefined4 *)nodeRel->field16_0xac != (undefined4 *)0x0) {
		thunk_FUN_00087e40((undefined4 *)nodeRel->field16_0xac);
		}
		NodeRelated2Abstract::FUN_001ac940((NodeRelated2Abstract *)nodeRel,0x42,(InstanceContextRefCounter *)0x0,false,false);
		}
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2C::FUN_00073fd0(bool param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2C::FUN_00073fd0(NodeRelated2C *this,bool param_1){
		int *piVar1;
		NodeRelated2C *this_00;
		undefined *puVar2;
		int iVar3;
		piVar1 = (int *)this->field22_0xb8;
		if (piVar1 != (int *)0x0) {
		iVar3 = (**(code **)(*piVar1 + 0x1c))();
		if (((*(uint *)(this->field22_0xb8 + 0x10) >> 1 & 1) != 0) && ((iVar3 == 1 || (iVar3 == 3)))) {
		this_00 = *(NodeRelated2C **)(this->field22_0xb8 + 0x18);
		puVar2 = this_00->field22_0xb8;
		if (puVar2 != (undefined *)0x0) {
		thunk_FUN_00073f40(this_00,'\0',(Matrix4 *)(piVar1 + 8),puVar2,param_1);
		}
		}
		thunk_FUN_00073f40(this,'\x01',(Matrix4 *)(piVar1 + 8),this->field22_0xb8,param_1);
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2C::CleanUp() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeRelated2C::CleanUp(NodeRelated2C *this){
		NodeRelated1Abstract *pNVar1;
		BlackboardAbstract *blackboard;
		(this->parent).parent.vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_C;
		thunk_FUN_00073d40(this,'\x01');
		FUN_001e2ba0((int)&this->field_0x2b0);
		InstanceContextSmartPtr::Release(&(this->field421_0x298).refCounter);
		InstanceContextSmartPtr::Release(&(this->field416_0x290).refCounter);
		InstanceContextSmartPtr::Release(&(this->field290_0x200).refCounter);
		FUN_00155860((int)&this->field_0x110);
		blackboard = (this->parent).parent.blackboard;
		(this->parent).parent.vtable = (NodeRelated2Abstract_VTable *)&NodeRelated2_VT_J;
		if (blackboard != (BlackboardAbstract *)0x0) {
		(*blackboard->vtable->Dispose)(blackboard,1);
		}
		pNVar1 = (this->parent).parent.related;
		if (pNVar1 != (NodeRelated1Abstract *)0x0) {
		(*(code *)*pNVar1->vtable)(1);
		}
		NodeRelated2Abstract::CleanUp((NodeRelated2Abstract *)this);
		return;
		}
		
	*/
	return;
}

void NodeRelated2C::FUN_0006e580(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2C::FUN_0006e580(NodeRelated2C *this,char param_1){
		int iVar1;
		UnkFamily3C *pUVar2;
		UnkFamily3B *this_00;
		int iVar3;
		UNV039 *ppNVar4;
		UNV030 *pvVar5;
		UNV030 *pUVar4;
		UNV029 *pvVar6;
		UNV031 *pvVar7;
		UNV034 *pvVar8;
		UNV034 *pUVar5;
		UNV029 *pUVar6;
		UNV031 *pUVar7;
		void *pvVar9;
		undefined4 uVar10;
		NodeRelated2C *local_4;
		local_4 = this;
		iVar1 = BlackboardAbstract::GetIntValue((this->parent).parent.blackboard,0);
		this->field1_0x70 = this->field1_0x70 & 0xffff3fff;
		this->field7_0x7c = 0;
		GameObject::GetOGIId((this->parent).parent.gameObject,(ushort *)&local_4,0);
		VideoController::FUN_001f2f30(VideoController,(ushort)local_4 & 0x7fff,(this->parent).parent.ctx);
		if ((param_1 != '\0') && (iVar1 != 4)) {
		pUVar2 = (UnkFamily3C *)VirtualPool::AllocateMemory(0x30);
		if (pUVar2 == (UnkFamily3C *)0x0) {
		pUVar2 = (UnkFamily3C *)0x0;
		}
		else {
		pUVar2 = UnkFamily3C::Construct(pUVar2,this);
		}
		*(UnkFamily3C **)&this->field_0xb4 = pUVar2;
		this_00 = (UnkFamily3B *)VirtualPool::AllocateMemory(0xd0);
		if (this_00 == (UnkFamily3B *)0x0) {
		iVar3 = 0;
		}
		else {
		iVar3 = UnkFamily3B::Construct(this_00,this);
		}
		*(int *)&this->field_0xbc = iVar3;
		}
		this->field11_0x98 = 0;
		this->field12_0x9c = 0;
		this->field13_0xa0 = 0;
		this->field17_0xb0 = (UnkFamily3D *)0x0;
		this->data = (US001 *)0x0;
		this->field15_0xa8 = 0;
		this->field22_0xb8 = (undefined *)0x0;
		this->field16_0xac = 0;
		ppNVar4 = (UNV039 *)VirtualPool::AllocateMemory(0x130);
		if (ppNVar4 == (UNV039 *)0x0) {
		ppNVar4 = (UNV039 *)0x0;
		}
		else {
		*(NodeRelated2C **)ppNVar4 = this;
		AutoClass40::Construct(&ppNVar4->ac40a);
		AutoClass40::Construct(&ppNVar4->ac40b);
		UNV039::thunk_FUN_0006a5c0(ppNVar4);
		}
		this->field27_0xc0 = ppNVar4;
		switch(iVar1) {
		case 0:case 2:pvVar5 = (UNV030 *)VirtualPool::AllocateMemory(0x40);
		if (pvVar5 == (UNV030 *)0x0) {
		pUVar4 = (UNV030 *)0x0;
		}
		else {
		pUVar4 = UNV030::thunk_FUN_00083fb0(pvVar5,this);
		}
		this->field11_0x98 = pUVar4;
		break;
		case 1:pUVar4 = (UNV030 *)VirtualPool::AllocateMemory(0x40);
		if (pUVar4 == (UNV030 *)0x0) {
		pUVar4 = (UNV030 *)0x0;
		}
		else {
		pUVar4 = UNV030::thunk_FUN_00083fb0(pUVar4,this);
		}
		this->field11_0x98 = pUVar4;
		pvVar6 = (UNV029 *)VirtualPool::AllocateMemory(0x30);
		if (pvVar6 == (UNV029 *)0x0) {
		pUVar6 = (UNV029 *)0x0;
		}
		else {
		pUVar6 = UNV029::thunk_FUN_00085230(pvVar6,this);
		}
		this->field13_0xa0 = pUVar6;
		pvVar7 = (UNV031 *)VirtualPool::AllocateMemory(0x460);
		if (pvVar7 == (UNV031 *)0x0) {
		this->data = (US001 *)0x0;
		}
		else {
		pUVar7 = UNV031::thunk_FUN_0009b5c0(pvVar7,this);
		this->data = (US001 *)pUVar7;
		}
		goto LAB_0006e782;
		case 3:pvVar8 = (UNV034 *)VirtualPool::AllocateMemory(0x170);
		if (pvVar8 == (UNV034 *)0x0) {
		this->field12_0x9c = 0;
		}
		else {
		pUVar5 = UNV034::thunk_FUN_0009b4e0(pvVar8,(uint)this);
		this->field12_0x9c = pUVar5;
		}
		break;
		default:goto switchD_0006e688_caseD_4;
		case 5:pUVar6 = (UNV029 *)VirtualPool::AllocateMemory(0x30);
		if (pUVar6 == (UNV029 *)0x0) {
		pUVar6 = (UNV029 *)0x0;
		}
		else {
		pUVar6 = UNV029::thunk_FUN_00085230(pUVar6,this);
		}
		this->field13_0xa0 = pUVar6;
		pUVar7 = (UNV031 *)VirtualPool::AllocateMemory(0x460);
		if (pUVar7 == (UNV031 *)0x0) {
		pUVar7 = (UNV031 *)0x0;
		}
		else {
		pUVar7 = UNV031::thunk_FUN_0009b5c0(pUVar7,this);
		}
		this->data = (US001 *)pUVar7;
		goto LAB_0006e7ec;
		}
		pUVar6 = (UNV029 *)VirtualPool::AllocateMemory(0x30);
		if (pUVar6 == (UNV029 *)0x0) {
		this->field13_0xa0 = 0;
		}
		else {
		pUVar6 = UNV029::thunk_FUN_00085230(pUVar6,this);
		this->field13_0xa0 = pUVar6;
		}
		LAB_0006e7ec:pvVar9 = VirtualPool::AllocateMemory(0x14);
		if (pvVar9 == (void *)0x0) {
		uVar10 = 0;
		}
		else {
		uVar10 = thunk_FUN_000870a0(pvVar9,this);
		}
		this->field15_0xa8 = uVar10;
		LAB_0006e782:pvVar9 = VirtualPool::AllocateMemory(0xa0);
		if (pvVar9 != (void *)0x0) {
		uVar10 = thunk_FUN_00091fc0(pvVar9,this);
		this->field16_0xac = uVar10;
		return;
		}
		this->field16_0xac = 0;
		switchD_0006e688_caseD_4:return;
		}
		
	*/
	return;
}

void NodeRelated2C::FUN_00074060(int param_1, int param_2, byte param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2C::FUN_00074060(NodeRelated2C *this,int param_1,int param_2,undefined param_3){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceTransform *pIVar4;
		InstanceContext *pIVar5;
		UnkFamily6C *this_00;
		UnkFamily6B *this_01;
		UnkFamily6D *this_02;
		UnkFamily6E *this_03;
		InstanceNodeInput *pIVar6;
		UnkFamily6F *this_04;
		int *piVar7;
		UnkFamily6A *this_05;
		UnkFamily6C *var;
		NodeInputB *pNVar8;
		NodeInputB *local_58;
		float local_54;
		float local_50;
		float local_4c;
		float local_48;
		float local_44;
		float fStack64;
		float fStack60;
		undefined auStack56 [16];
		undefined auStack40 [36];
		thunk_FUN_00066500(this);
		if ((int *)this->field22_0xb8 == (int *)0x0) {
		local_48 = (this->parent).field1_0x60.z;
		local_44 = (this->parent).field1_0x60.w;
		local_4c = (this->parent).field1_0x60.y;
		local_50 = (this->parent).field1_0x60.x;
		local_58 = (NodeInputB *)(local_48 * local_48 + local_4c * local_4c + local_50 * local_50);
		local_54 = SQRT((float)local_58);
		if (local_54 < FLOAT_0038b69c) {
		pIVar4 = (((this->parent).parent.ctx)->parent).transform;
		InstanceTransform::FillMatrix(pIVar4);
		local_44 = (pIVar4->matrix).m34;
		local_50 = (pIVar4->matrix).m31 * FLOAT_0038b69c;
		local_4c = (pIVar4->matrix).m32 * FLOAT_0038b69c;
		local_48 = (pIVar4->matrix).m33 * FLOAT_0038b69c;
		}
		}
		else {
		(**(code **)(*(int *)this->field22_0xb8 + 0x20))(&local_50);
		thunk_FUN_00073fd0(this,true);
		if ((int *)this->field22_0xb8 != (int *)0x0) {
		(**(code **)(*(int *)this->field22_0xb8 + 8))(1);
		}
		}
		switch(param_1) {
		case 1:this_00 = (UnkFamily6C *)VirtualPool::AllocateMemory(0x5b0);
		if (this_00 == (UnkFamily6C *)0x0) {
		LAB_00074386:var = (UnkFamily6C *)0x0;
		}
		else {
		var = UnkFamily6C::Construct(this_00,(int)this,param_2);
		}
		break;
		default:local_58 = (NodeInputB *)0x0;
		goto LAB_00074300;
		case 3:this_02 = (UnkFamily6D *)VirtualPool::AllocateMemory(0x660);
		if (this_02 == (UnkFamily6D *)0x0) goto LAB_00074386;
		var = (UnkFamily6C *)UnkFamily6D::Construct(this_02,(int)this,param_2);
		break;
		case 5:this_03 = (UnkFamily6E *)VirtualPool::AllocateMemory(0x120);
		if (this_03 == (UnkFamily6E *)0x0) {
		var = (UnkFamily6C *)0x0;
		}
		else {
		var = (UnkFamily6C *)UnkFamily6E::Construct(this_03,(int)this,param_2,param_3);
		}
		pNVar8 = (NodeInputB *)VirtualPool::AllocateMemory(0x14);
		if (pNVar8 == (NodeInputB *)0x0) {
		local_58 = (NodeInputB *)0x0;
		}
		else {
		local_58 = NodeInputB::Construct(pNVar8,param_3);
		}
		goto LAB_0007424a;
		case 6:this_01 = (UnkFamily6B *)VirtualPool::AllocateMemory(0x260);
		if (this_01 == (UnkFamily6B *)0x0) goto LAB_00074386;
		var = (UnkFamily6C *)UnkFamily6B::Construct(this_01,(int)this,param_2);
		break;
		case 7:this_05 = (UnkFamily6A *)VirtualPool::AllocateMemory(0x170);
		if (this_05 == (UnkFamily6A *)0x0) goto LAB_00074386;
		var = (UnkFamily6C *)UnkFamily6A::Construct(this_05,(int)this);
		}
		pNVar8 = (NodeInputB *)VirtualPool::AllocateMemory(0x14);
		if (pNVar8 == (NodeInputB *)0x0) {
		local_58 = (NodeInputB *)0x0;
		}
		else {
		local_58 = NodeInputB::Construct(pNVar8,0);
		}
		LAB_0007424a:if ((UnkFamily6D *)var != (UnkFamily6D *)0x0) {
		pIVar5 = (this->parent).parent.ctx;
		(*(code *)(((UnkFamily6D *)var)->parent).vtable[10])(auStack40 + 8,auStack56 + 8);
		FUN_0013a450((int)&(pIVar5->parent).field14_0x20,(Vector4 *)auStack40,(Vector4 *)auStack56,'\x01','\0');
		pIVar4 = (((this->parent).parent.ctx)->parent).transform;
		if ((*(byte *)&pIVar4->field3_0x60 & 4) != 0) {
		fVar1 = (pIVar4->matrix).m44;
		fVar2 = (pIVar4->matrix).m43;
		fVar3 = (pIVar4->matrix).m42;
		(pIVar4->position).x = (pIVar4->matrix).m41;
		(pIVar4->position).y = fVar3;
		(pIVar4->position).z = fVar2;
		(pIVar4->position).w = fVar1;
		pIVar4->field3_0x60 = (float)((uint)pIVar4->field3_0x60 & 0xfffffffa);
		}
		local_48 = (pIVar4->position).x;
		local_44 = (pIVar4->position).y;
		fStack64 = (pIVar4->position).z;
		fStack60 = (pIVar4->position).w;
		thunk_FUN_0007f080((int)var,&local_48);
		(*(code *)(((UnkFamily6D *)var)->parent).vtable[0xb])(&local_58);
		thunk_FUN_00073b50((int)this,(int *)var);
		}
		LAB_00074300:pIVar6 = (InstanceNodeInput *)InstanceDataList::GetNode(&((this->parent).parent.ctx)->nodes,Input);
		if (pIVar6 != (InstanceNodeInput *)0x0) {
		InstanceNodeInput::thunk_FUN_000aea70(pIVar6,local_58);
		}
		if ((((param_1 == 1) || (param_1 == 3)) &&(this_04 = (UnkFamily6F *)VirtualPool::AllocateMemory(0x100), this_04 != (UnkFamily6F *)0x0))&& (piVar7 = (int *)UnkFamily6F::Construct(this_04,8,param_2,this), piVar7 != (int *)0x0)) {
		thunk_FUN_00073b50(param_2,piVar7);
		}
		if ((param_2 != 0) &&(pIVar6 = (InstanceNodeInput *)InstanceDataList::GetNode((InstanceDataList *)(*(int *)(param_2 + 0x10) + 0xe4),Input),pIVar6 != (InstanceNodeInput *)0x0)) {
		InstanceNodeInput::thunk_FUN_000aea70(pIVar6,0);
		pIVar6->field19_0x30 = pIVar6->field19_0x30 & 0xfffffffe;
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2C::FUN_00073d40(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2C::FUN_00073d40(NodeRelated2C *this,char param_1){
		void *pvVar1;
		US001 *ptr;
		UNV039 *ptr_00;
		pvVar1 = (void *)this->field11_0x98;
		if (pvVar1 != (void *)0x0) {
		::EmptyFunction();
		VirtualPool::FreeMemory(pvVar1);
		}
		pvVar1 = (void *)this->field12_0x9c;
		if (pvVar1 != (void *)0x0) {
		AutoClass40::Dispose((AutoClass40 *)((int)pvVar1 + 0x150));
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)((int)pvVar1 + 0xc4));
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)((int)pvVar1 + 0xc0));
		InstanceContextSmartPtr::Release((InstanceContextRefCounter **)((int)pvVar1 + 0x14));
		VirtualPool::FreeMemory(pvVar1);
		}
		pvVar1 = (void *)this->field13_0xa0;
		if (pvVar1 != (void *)0x0) {
		::EmptyFunction();
		VirtualPool::FreeMemory(pvVar1);
		}
		if (this->field17_0xb0 != (UnkFamily3D *)0x0) {
		(*(code *)((this->field17_0xb0->parent).vtable)->Dispose)(1);
		}
		ptr = this->data;
		if (ptr != (US001 *)0x0) {
		thunk_FUN_0007c2f0((int)ptr);
		VirtualPool::FreeMemory(ptr);
		}
		pvVar1 = (void *)this->field15_0xa8;
		if (pvVar1 != (void *)0x0) {
		::EmptyFunction();
		VirtualPool::FreeMemory(pvVar1);
		}
		if ((param_1 != '\0') && ((int *)this->field22_0xb8 != (int *)0x0)) {
		(**(code **)(*(int *)this->field22_0xb8 + 0x40))();
		}
		if ((int *)this->field22_0xb8 != (int *)0x0) {
		(**(code **)(*(int *)this->field22_0xb8 + 8))(1);
		}
		pvVar1 = (void *)this->field16_0xac;
		if (pvVar1 != (void *)0x0) {
		::EmptyFunction();
		VirtualPool::FreeMemory(pvVar1);
		}
		ptr_00 = this->field27_0xc0;
		if (ptr_00 != (UNV039 *)0x0) {
		AutoClass40::Dispose(&ptr_00->ac40b);
		AutoClass40::Dispose(&ptr_00->ac40a);
		VirtualPool::FreeMemory(ptr_00);
		}
		this->field11_0x98 = 0;
		this->field12_0x9c = 0;
		this->field13_0xa0 = 0;
		this->field17_0xb0 = (UnkFamily3D *)0x0;
		this->data = (US001 *)0x0;
		this->field15_0xa8 = 0;
		this->field22_0xb8 = (undefined *)0x0;
		this->field16_0xac = 0;
		this->field27_0xc0 = (UNV039 *)0x0;
		if (param_1 != '\0') {
		if (*(undefined4 **)&this->field_0xb4 != (undefined4 *)0x0) {
		(**(code **)**(undefined4 **)&this->field_0xb4)(1);
		}
		if (*(undefined4 **)&this->field_0xbc != (undefined4 *)0x0) {
		(**(code **)**(undefined4 **)&this->field_0xbc)(1);
		}
		*(undefined4 *)&this->field_0xb4 = 0;
		*(undefined4 *)&this->field_0xbc = 0;
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2C::FUN_00068850(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2C::FUN_00068850(NodeRelated2C *this,char param_1){
		float fVar1;
		float fVar2;
		float fVar3;
		InstanceTransform *pIVar4;
		NodeRelated1Abstract *pNVar5;
		pIVar4 = (((this->parent).parent.ctx)->parent).transform;
		pNVar5 = (this->parent).parent.related;
		if ((*(byte *)&pIVar4->field3_0x60 & 4) != 0) {
		fVar1 = (pIVar4->matrix).m44;
		fVar2 = (pIVar4->matrix).m43;
		fVar3 = (pIVar4->matrix).m42;
		(pIVar4->position).x = (pIVar4->matrix).m41;
		(pIVar4->position).y = fVar3;
		(pIVar4->position).z = fVar2;
		(pIVar4->position).w = fVar1;
		pIVar4->field3_0x60 = (float)((uint)pIVar4->field3_0x60 & 0xfffffffa);
		}
		fVar1 = (pIVar4->position).y;
		fVar2 = (pIVar4->position).z;
		fVar3 = (pIVar4->position).w;
		(this->field8_0x80).x = (pIVar4->position).x;
		(this->field8_0x80).y = fVar1;
		(this->field8_0x80).z = fVar2;
		(this->field8_0x80).w = fVar3;
		if (param_1 != '\0') {
		NodeRelated2Abstract::FUN_001ac940((NodeRelated2Abstract *)this,0x21,(InstanceContextRefCounter *)(this->parent).parent.ctx,false,false);
		}
		pNVar5[1].field5_0x8 = pNVar5[1].field5_0x8 & 0xffffbfffU | 0x2000;
		pNVar5 = (this->parent).parent.related;
		pNVar5[1].vtable = (undefined **)((uint)pNVar5[1].vtable | 0x20);
		return;
		}
		
	*/
	return;
}

void NodeRelated2C::FUN_00068910() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeRelated2C::FUN_00068910(NodeRelated2C *this){
		float fVar1;
		float fVar2;
		uint uVar3;
		NodeRelated1Abstract *pNVar4;
		InstanceTransform *pIVar5;
		Vector4 *unaff_ESI;
		undefined4 unaff_EDI;
		float fVar6;
		uVar3 = this->field1_0x70;
		pNVar4 = (this->parent).parent.related;
		pIVar5 = (((this->parent).parent.ctx)->parent).transform;
		if ((*(byte *)&pIVar5->field3_0x60 & 4) != 0) {
		fVar6 = (pIVar5->matrix).m44;
		fVar1 = (pIVar5->matrix).m43;
		fVar2 = (pIVar5->matrix).m42;
		(pIVar5->position).x = (pIVar5->matrix).m41;
		(pIVar5->position).y = fVar2;
		(pIVar5->position).z = fVar1;
		(pIVar5->position).w = fVar6;
		pIVar5->field3_0x60 = (float)((uint)pIVar5->field3_0x60 & 0xfffffffa);
		}
		fVar6 = (this->field8_0x80).y - (pIVar5->position).y;
		if ((uVar3 & 0x2000) == 0) {
		if (((uint)pNVar4[1].field5_0x8 >> 0xd & 1) == 0) {
		if ((((uint)pNVar4[1].field5_0x8 >> 0x18 & 1) == 0) && (FLOAT_0038aec0 <= fVar6)) {
		NodeRelated2Abstract::FUN_001ac940((NodeRelated2Abstract *)this,0xb,(InstanceContextRefCounter *)(this->parent).parent.ctx,false,false);
		}
		}
		else if (FLOAT_0038aebc <= fVar6) {
		NodeRelated2Abstract::FUN_001ac940((NodeRelated2Abstract *)this,0x22,(InstanceContextRefCounter *)(this->parent).parent.ctx,false,false);
		pNVar4[1].field5_0x8 = pNVar4[1].field5_0x8 & 0xffffdfffU | 0x4000;
		if (*(int *)&this->field_0xbc != 0) {
		*(float *)(*(int *)&this->field_0xbc + 0x60) = FLOAT_003865d0;
		}
		}
		}
		if (((uint)(this->parent).parent.related[1].vtable >> 2 & 1) != 0) {
		(*(this->parent).parent.vtable[1].Method6)((NodeRelated2Abstract *)this,1,unaff_EDI,unaff_ESI);
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2C::FUN_00068a00(char param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2C::FUN_00068a00(NodeRelated2C *this,char param_1){
		NodeRelated1Abstract *pNVar1;
		uint uVar2;
		pNVar1 = (this->parent).parent.related;
		uVar2 = pNVar1->field7_0x10 & 0xff;
		if ((uVar2 == 0xe) || (uVar2 == 0xd)) {
		pNVar1->field7_0x10 = pNVar1->field7_0x10 & 0xfffffbff;
		}
		uVar2 = pNVar1->field7_0x10 & 0xff;
		if (((uVar2 != 6) && (uVar2 != 10)) && (param_1 != '\0')) {
		if ((uVar2 == 7) || (uVar2 == 0xb)) {
		uVar2 = 0x2a;
		}
		else if (((uint)pNVar1[1].field5_0x8 >> 0xe & 1) == 0) {
		uVar2 = (((uint)pNVar1[1].vtable >> 4 & 1) != 0) + 0x27;
		}
		else {
		uVar2 = 0x29;
		if (*(int *)&this->field_0xbc != 0) {
		*(float *)(*(int *)&this->field_0xbc + 0x60) = FLOAT_003865d4;
		}
		}
		NodeRelated2Abstract::FUN_001ac940((NodeRelated2Abstract *)this,uVar2,(InstanceContextRefCounter *)(this->parent).parent.ctx,false,false);
		}
		pNVar1[1].field5_0x8 = pNVar1[1].field5_0x8 & 0xfeffffff;
		pNVar1 = (this->parent).parent.related + 1;
		pNVar1->vtable = (undefined **)((uint)pNVar1->vtable & 0xffffffdf);
		this->field1_0x70 = this->field1_0x70 & 0xffffdfff;
		return;
		}
		
	*/
	return;
}

void NodeRelated2C::Method17(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2C::Method17(NodeRelated2C *this,undefined4 param_1){
		Matrix4Array *pMVar1;
		int iVar2;
		InstanceNodeOGI *pIVar4;
		Matrix4 *pMVar3;
		InstanceNodeOGI *pIVar3;
		Matrix4 *pMVar4;
		float fVar5;
		float local_20;
		undefined4 local_1c;
		float local_18;
		float local_14;
		local_20 = 0.0;
		local_1c = 0;
		local_18 = 0.0;
		local_14 = FLOAT_0038639c;
		iVar2 = BlackboardAbstract::GetIntValue((this->parent).parent.blackboard,0);
		fVar5 = FLOAT_0038b3c0;
		if ((iVar2 == 0) ||(iVar2 = BlackboardAbstract::GetIntValue((this->parent).parent.blackboard,0),fVar5 = FLOAT_0038a92c, iVar2 == 1)) {
		local_1c = 0;
		local_18 = FLOAT_0038b3bc;
		local_14 = FLOAT_0038639c;
		local_20 = fVar5;
		}
		pIVar4 = (InstanceNodeOGI *)InstanceDataList::GetNode(&((this->parent).parent.ctx)->nodes,OGI);
		if (((pIVar4->field4_0x24 == (InstanceNodeOGISub *)0x0) ||(pMVar1 = pIVar4->field4_0x24->matrixArray2, pMVar1 == (Matrix4Array *)0x0)) ||(pMVar3 = pMVar1->array[7], pMVar3 == (Matrix4 *)0x0)) {
		pMVar3 = (Matrix4 *)0x0;
		}
		else {
		pMVar3 = FUN_001f8be0(pMVar3);
		}
		pIVar3 = (InstanceNodeOGI *)InstanceDataList::GetNode(&((this->parent).parent.ctx)->nodes,OGI);
		if (((pIVar3->field4_0x24 == (InstanceNodeOGISub *)0x0) ||(pMVar1 = pIVar3->field4_0x24->matrixArray2, pMVar1 == (Matrix4Array *)0x0)) ||(pMVar4 = pMVar1->array[6], pMVar4 == (Matrix4 *)0x0)) {
		pMVar4 = (Matrix4 *)0x0;
		}
		else {
		pMVar4 = FUN_001f8be0(pMVar4);
		}
		if ((pMVar3 != (Matrix4 *)0x0) && (pMVar4 != (Matrix4 *)0x0)) {
		FUN_00195fb0(param_1,(int)(this->parent).parent.ctx,(int)pMVar4,&local_20);
		local_20 = local_20 * FLOAT_0038aec4;
		FUN_00195fb0(param_1,(int)(this->parent).parent.ctx,(int)pMVar3,&local_20);
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2C::Method15() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeRelated2C::Method15(NodeRelated2C *this){
		int *piVar1;
		InstanceTransform *pIVar2;
		InstanceContext *pIVar3;
		bool bVar4;
		float fVar5;
		float local_60;
		float local_5c;
		float local_58;
		float local_54;
		undefined local_50 [76];
		pIVar2 = (((this->parent).parent.ctx)->parent).transform;
		InstanceTransform::FillMatrix(pIVar2);
		local_60 = (pIVar2->matrix).m31;
		local_58 = (pIVar2->matrix).m33;
		local_54 = (pIVar2->matrix).m34;
		local_5c = 0.0;
		if (local_58 * local_58 + local_60 * local_60 < FLOAT_0038a7e8) {
		pIVar2 = (((this->parent).parent.ctx)->parent).transform;
		InstanceTransform::FillMatrix(pIVar2);
		local_60 = (pIVar2->matrix).m21;
		local_58 = (pIVar2->matrix).m23;
		local_54 = (pIVar2->matrix).m24;
		}
		fVar5 = local_58 * local_58 + local_60 * local_60;
		if (fVar5 <= EPSILON) {
		fVar5 = 0.0;
		}
		else {
		fVar5 = FLOAT_0038639c / SQRT(fVar5);
		}
		local_60 = local_60 * fVar5;
		local_5c = fVar5 * 0.0;
		local_58 = local_58 * fVar5;
		FUN_000e8990(local_50,&local_60);
		pIVar3 = (this->parent).parent.ctx;
		bVar4 = InstanceTransform::thunk_FUN_00026aa0((pIVar3->parent).transform,(InstanceTransform *)local_50);
		if (bVar4 != false) {
		InstanceContext::RegisterCtxPtrToList(pIVar3);
		}
		piVar1 = &((this->parent).parent.related)->field7_0x10;
		*piVar1 = *piVar1 & 0xffefffff;
		pIVar3 = (this->parent).parent.ctx;
		(pIVar3->parent).flags = (pIVar3->parent).flags | 0x10;
		return;
		}
		
	*/
	return;
}

void NodeRelated2C::Method7(InstanceContext* ctx, int param_2, Vector4* param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2C::Method7(NodeRelated2C *this,InstanceContext *ctx,int param_2,Vector4 *param_3){
		float length;
		Vector4 local_20;
		float height;
		height = param_3->y;
		length = param_3->z * param_3->z + height * height + param_3->x * param_3->x;
		if (length <= EPSILON) {
		length = 0.0;
		}
		else {
		length = FLOAT_0038639c / SQRT(length);
		}
		if ((height * length < FLOAT_0038b798) &&(*(float *)(param_2 + 4) <= FLOAT_0038aec4 && FLOAT_0038aec4 != *(float *)(param_2 + 4))) {
		local_20.x = 0.0;
		local_20.y = FLOAT_0038aec4;
		local_20.z = 0.0;
		local_20.w = FLOAT_0038639c;
		thunk_FUN_0006f930(this,ctx,&local_20);
		return;
		}
		if (FLOAT_0038a83c < height * length) {
		local_20.x = 0.0;
		local_20.y = FLOAT_0038639c;
		local_20.z = 0.0;
		local_20.w = FLOAT_0038639c;
		thunk_FUN_0006f930(this,ctx,&local_20);
		return;
		}
		thunk_FUN_0006f930(this,ctx,&Vector4_0039ef70);
		return;
		}
		
	*/
	return;
}

void NodeRelated2C::Update(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2C::Update(NodeRelated2C *this,int param_1){
		InstanceContextSmartPtr *this_00;
		AutoClass8 *pvVar4;
		AutoClass40 *pAVar5;
		InstanceContextSmartPtr *puVar6;
		Vector4 local_30;
		Vector4 local_20;
		InstanceContextSmartPtr *temp_85f5966dec3;
		InstanceContext *ctx;
		float posW;
		float posY;
		float posZ;
		InstanceTransform *transform;
		NodeRelated2E::Update(&this->parent,param_1);
		ctx = (this->parent).parent.ctx;
		this->field1_0x70 = this->field1_0x70 & 0xffffff02 | 2;
		this->field10_0x94 = 0;
		transform = (ctx->parent).transform;
		if ((*(byte *)&transform->field3_0x60 & 4) != 0) {
		posW = (transform->matrix).m44;
		posZ = (transform->matrix).m43;
		posY = (transform->matrix).m42;
		(transform->position).x = (transform->matrix).m41;
		(transform->position).y = posY;
		(transform->position).z = posZ;
		(transform->position).w = posW;
		transform->field3_0x60 = (float)((uint)transform->field3_0x60 & 0xfffffffa);
		}
		(this->position).x = (transform->position).x;
		(this->position).y = (transform->position).y;
		(this->position).z = (transform->position).z;
		(this->position).w = (transform->position).w;
		this->field9_0x90 = 0;
		this->field1_0x70 = this->field1_0x70 & 0xffffcfff;
		thunk_FUN_00073d40(this,'\x01');
		thunk_FUN_0006e580(this,'\x01');
		local_30.x = FLOAT_0038b79c;
		local_30.y = FLOAT_0038a83c;
		local_30.z = FLOAT_0038b79c;
		local_30.w = FLOAT_0038639c;
		local_20.x = FLOAT_0038b7a8;
		local_20.y = FLOAT_0038ae94;
		local_20.z = FLOAT_0038b7a8;
		local_20.w = FLOAT_0038639c;
		if (DAT_004937b8 == (AutoClass8 *)0x0) {
		pvVar4 = (AutoClass8 *)VirtualPool::AllocateMemory(0x124);
		if (pvVar4 == (AutoClass8 *)0x0) {
		DAT_004937b8 = (AutoClass8 *)0x0;
		}
		else {
		DAT_004937b8 = AutoClass8::Construct(pvVar4);
		}
		}
		pAVar5 = AutoClass8::Add(DAT_004937b8,&local_20,&local_30);
		local_20.x = FLOAT_0038aea8;
		local_20.y = FLOAT_0038a840;
		local_30.y = FLOAT_00386ab4;
		this->field28_0xc4 = pAVar5;
		local_20.z = local_20.x;
		local_20.w = FLOAT_0038639c;
		local_30.x = FLOAT_0038b7a4;
		local_30.z = FLOAT_0038b7a4;
		local_30.w = FLOAT_0038639c;
		if (DAT_004937b8 == (AutoClass8 *)0x0) {
		pvVar4 = (AutoClass8 *)VirtualPool::AllocateMemory(0x124);
		if (pvVar4 == (AutoClass8 *)0x0) {
		DAT_004937b8 = (AutoClass8 *)0x0;
		}
		else {
		DAT_004937b8 = AutoClass8::Construct(pvVar4);
		}
		}
		pAVar5 = AutoClass8::Add(DAT_004937b8,&local_30,&local_20);
		this->field29_0xc8 = pAVar5;
		FUN_00152e90((undefined4 *)&this->field_0x110);
		*(undefined4 *)&this->field_0xf4 = 0;
		*(undefined4 *)&this->field_0xf8 = 0;
		*(undefined4 *)&this->field_0xfc = 0;
		*(undefined4 *)&this->field_0x100 = 0;
		*(undefined4 *)&this->field_0x104 = 0;
		*(undefined4 *)&this->field_0x108 = 0;
		*(undefined4 *)&this->field_0x10c = 0;
		this->field36_0xf0 = 0;
		(this->field35_0xe0).x = Vector4_0039ef70.x;
		(this->field35_0xe0).y = Vector4_0039ef70.y;
		(this->field35_0xe0).z = Vector4_0039ef70.z;
		(this->field35_0xe0).w = FLOAT_0038639c;
		*(undefined4 *)&this->field_0x198 = 0;
		*(undefined4 *)&this->field_0x194 = 0;
		thunk_FUN_000663d0(this,(int)&DAT_0049d820);
		this_00 = &this->field290_0x200;
		this->field1_0x70 = this->field1_0x70 & 0xfffff0ff;
		if ((this_00->refCounter != (InstanceContextRefCounter *)0x0) &&(this_00->refCounter->ctx != (InstanceContext *)0x0)) {
		InstanceContextSmartPtr::Release(&this_00->refCounter);
		this_00->refCounter = (InstanceContextRefCounter *)0x0;
		}
		posW = FLOAT_0038639c;
		*(undefined4 *)&this->field_0x208 = 0;
		*(undefined4 *)&this->field_0x204 = 0xffffffff;
		*(undefined4 *)&this->field_0x260 = 0;
		*(float *)&this->field_0x264 = posW;
		*(undefined4 *)&this->field_0x268 = 0;
		*(float *)&this->field_0x26c = posW;
		(this->parent).field1_0x60.x = Vector4_0039ef70.x;
		(this->parent).field1_0x60.y = Vector4_0039ef70.y;
		(this->parent).field1_0x60.z = Vector4_0039ef70.z;
		(this->parent).field1_0x60.w = posW;
		*(undefined4 *)&this->field_0x270 = 0;
		*(undefined4 *)&this->field_0x278 = 0;
		*(undefined4 *)&this->field_0x27c = 0;
		(this->field415_0x280).x = (this->position).x;
		(this->field415_0x280).y = (this->position).y;
		(this->field415_0x280).z = (this->position).z;
		(this->field415_0x280).w = (this->position).w;
		(this->field209_0x1a0).x = Vector4_0039ef70.x;
		(this->field209_0x1a0).y = Vector4_0039ef70.y;
		(this->field209_0x1a0).z = Vector4_0039ef70.z;
		(this->field209_0x1a0).w = posW;
		ctx = (this->parent).parent.ctx;
		*(undefined4 *)&this->field_0xcc = 0;
		AutoClass2::FUN_001372d0(&(ctx->parent).field14_0x20);
		ctx = (this->parent).parent.ctx;
		puVar6 = &this->field416_0x290;
		(ctx->parent).flags = (ctx->parent).flags | 0x20000;
		if ((puVar6->refCounter != (InstanceContextRefCounter *)0x0) &&(puVar6->refCounter->ctx != (InstanceContext *)0x0)) {
		InstanceContextSmartPtr::Release(&puVar6->refCounter);
		puVar6->refCounter = (InstanceContextRefCounter *)0x0;
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2C::FUN_000761d0(float param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2C::FUN_000761d0(NodeRelated2C *this,float param_1){
		Vector4 *this_00;
		NodeRelated1Abstract *pNVar1;
		uint uVar2;
		byte bVar3;
		int iVar4;
		uint uVar5;
		InstanceNodeAbstract *pIVar6;
		float fVar7;
		if (((byte)this->field1_0x70 & 0xf) == 2) {
		iVar4 = BlackboardAbstract::GetIntValue((this->parent).parent.blackboard,0);
		if ((iVar4 != 4) && (this->field27_0xc0 != (UNV039 *)0x0)) {
		thunk_FUN_00069150((int)this,2.0,20.0);
		}
		}
		if (0 < *(int *)&this->field_0xcc) {
		*(int *)&this->field_0xcc = *(int *)&this->field_0xcc + -1;
		}
		thunk_FUN_000669e0((int)this);
		pNVar1 = (this->parent).parent.related;
		uVar2 = pNVar1->field7_0x10;
		bVar3 = (byte)((uint)pNVar1[1].vtable >> 2) & 1;
		iVar4 = BlackboardAbstract::GetIntValue((this->parent).parent.blackboard,0);
		if (iVar4 == 5) {
		thunk_FUN_00070f20((int)this);
		}
		fVar7 = (float)*(int *)((int)param_1 + 8) * TimePerTick1;
		uVar5 = this->field1_0x70 >> 0xe;
		if (((uVar5 & 1) != 0) || ((char)(this->field1_0x70 >> 8) < '\0')) {
		if ((uVar5 & 1) != 0) {
		if ((int *)this->field22_0xb8 == (int *)0x0) {
		if (((uint)(this->parent).parent.field27_0x40.x >> 0x19 & 1) == 0) {
		thunk_FUN_00075ca0(this,fVar7,(int)pNVar1,bVar3);
		}
		}
		else {
		(**(code **)(*(int *)this->field22_0xb8 + 0x18))(fVar7);
		}
		if (*(void **)&this->field_0xb4 != (void *)0x0) {
		thunk_FUN_00091d10(*(void **)&this->field_0xb4,(int)param_1);
		}
		if (*(int *)&this->field_0xbc != 0) {
		thunk_FUN_0007db30(*(int *)&this->field_0xbc,(int)param_1);
		}
		thunk_FUN_00068600((int)this,(int)param_1);
		if (this->field22_0xb8 == (undefined *)0x0) {
		NodeRelated2E::thunk_FUN_0006b190(&this->parent);
		thunk_FUN_0006eb00((uint)this,(int)param_1,(int)pNVar1);
		}
		*(undefined4 *)&this->field_0xf4 = 0;
		*(undefined4 *)&this->field_0xf8 = 0;
		*(undefined4 *)&this->field_0xfc = 0;
		pNVar1[1].field5_0x8 = pNVar1[1].field5_0x8 & 0xffe0ffff;
		*(float *)&pNVar1[3].field_0x4 = Vector4_0039ef70.x;
		pNVar1[3].field5_0x8 = (int)Vector4_0039ef70.y;
		pNVar1[3].field6_0xc = (int)Vector4_0039ef70.z;
		pNVar1[3].field7_0x10 = (int)FLOAT_0038639c;
		thunk_FUN_0006c310((uint)this);
		return;
		}
		thunk_FUN_00069ce0((int)this);
		thunk_FUN_0006c310((uint)this);
		thunk_FUN_00068600((int)this,(int)param_1);
		return;
		}
		pIVar6 = InstanceDataList::GetNode(&((this->parent).parent.ctx)->nodes,Instance);
		if ((((uVar2 >> 0x14 & 1) == 0) &&((*(byte *)&(((this->parent).parent.ctx)->parent).flags & 0x10) != 0)) &&((~*(byte *)((int)&pIVar6[5].field5_0x10 + 3) & 1) != 0)) {
		pNVar1[1].field5_0x8 = pNVar1[1].field5_0x8 & 0xfffeffff;
		thunk_FUN_00065f10((int)this,(int)param_1,(int)pNVar1);
		thunk_FUN_00066150((int)this,(int)param_1,(int)pNVar1);
		thunk_FUN_00067db0((int)this,param_1,(int)pNVar1);
		thunk_FUN_00065f80((int)this,param_1,(float)pNVar1);
		thunk_FUN_00067c60((int)this,(int)param_1,(int)pNVar1);
		thunk_FUN_00066220((int)this,(int)param_1,(int)pNVar1);
		if (this->field22_0xb8 == (undefined *)0x0) {
		thunk_FUN_00075ca0(this,fVar7,(int)pNVar1,bVar3);
		}
		else {
		thunk_FUN_00065ee0((int)this,(int)param_1);
		}
		if (*(void **)&this->field_0xb4 != (void *)0x0) {
		thunk_FUN_00091d10(*(void **)&this->field_0xb4,(int)param_1);
		}
		thunk_FUN_0006c080((int)this,(int)param_1);
		thunk_FUN_000681c0(this);
		thunk_FUN_00068320(this);
		thunk_FUN_0006e390(this,(int)param_1);
		thunk_FUN_000684f0((int *)this);
		thunk_FUN_00068600((int)this,(int)param_1);
		if (this->field22_0xb8 == (undefined *)0x0) {
		NodeRelated2E::thunk_FUN_0006b190(&this->parent);
		thunk_FUN_0006eb00((uint)this,(int)param_1,(int)pNVar1);
		}
		thunk_FUN_00068da0((int)this);
		*(undefined4 *)&this->field_0xf4 = 0;
		*(undefined4 *)&this->field_0xf8 = 0;
		*(undefined4 *)&this->field_0xfc = 0;
		pNVar1[1].field5_0x8 = pNVar1[1].field5_0x8 & 0xffe1ffff;
		*(float *)&pNVar1[3].field_0x4 = Vector4_0039ef70.x;
		pNVar1[3].field5_0x8 = (int)Vector4_0039ef70.y;
		pNVar1[3].field6_0xc = (int)Vector4_0039ef70.z;
		pNVar1[3].field7_0x10 = (int)FLOAT_0038639c;
		this_00 = &(this->parent).field1_0x60;
		fVar7 = Vector4::GetLength(this_00);
		if (FLOAT_0038b7b0 < fVar7) {
		thunk_FUN_000543a0(&this_00->x);
		fVar7 = FLOAT_0038ae58;
		this_00->x = this_00->x * FLOAT_0038ae58;
		(this->parent).field1_0x60.y = (this->parent).field1_0x60.y * fVar7;
		(this->parent).field1_0x60.z = (this->parent).field1_0x60.z * fVar7;
		thunk_FUN_0006c310((uint)this);
		return;
		}
		}
		else {
		if (*(void **)&this->field_0xb4 != (void *)0x0) {
		thunk_FUN_00091d10(*(void **)&this->field_0xb4,(int)param_1);
		}
		thunk_FUN_00068600((int)this,(int)param_1);
		}
		thunk_FUN_0006c310((uint)this);
		return;
		}
		
	*/
	return;
}

void NodeRelated2C::Dispose(byte param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 * __thiscall NodeRelated2C::Dispose(NodeRelated2C *this,byte param_1){
		CleanUp(this);
		if ((param_1 & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return (undefined4 *)this;
		}
		
	*/
	return;
}

void NodeRelated2C::FUN_0006f6c0(void* param_1, int param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2C::FUN_0006f6c0(NodeRelated2C *this,void *param_1,int param_2){
		InstanceContext *pIVar1;
		undefined uVar2;
		uint uVar3;
		UnkFamily5BA *pUVar4;
		UnkFamily5AA *pUVar5;
		InstanceNodeAbstract *this_00;
		undefined extraout_CL;
		undefined extraout_CL_00;
		NodeRelated2C *pNVar6;
		NodeRelated2C *pNVar7;
		NodeRelated2C *local_4;
		local_4 = this;
		thunk_FUN_00068730((int)this,&local_4,(int)param_1);
		pNVar7 = local_4;
		if (local_4 == (NodeRelated2C *)0x0) {
		return;
		}
		uVar3 = thunk_FUN_00066430((int)this,param_2);
		pUVar4 = (UnkFamily5BA *)VirtualPool::AllocateMemory(0x18);
		if (uVar3 == 0xf) {
		if (pUVar4 == (UnkFamily5BA *)0x0) {
		pUVar5 = (UnkFamily5AA *)0x0;
		}
		else {
		pIVar1 = (this->parent).parent.ctx;
		if (pIVar1 == (InstanceContext *)0x0) {
		pUVar5 = (UnkFamily5AA *)UnkFamily5BA::Construct(pUVar4,4,0,pNVar7);
		}
		else {
		pNVar6 = pNVar7;
		uVar2 = InstanceContextSmartPtr::CreateRef(&pIVar1->smartPtr,pIVar1,0);
		pUVar5 = (UnkFamily5AA *)UnkFamily5BA::Construct(pUVar4,4,uVar2,pNVar6);
		}
		}
		if (pUVar5 != (UnkFamily5AA *)0x0) {
		pUVar5 = (UnkFamily5AA *)UnkFamily5SomeStruct::CreatePayload(&(pUVar5->parent).parent.someStruct,pUVar5,1);
		}
		InstanceContext::FUN_000fa200((InstanceContext *)param_1,(char)pUVar5);
		pUVar4 = (UnkFamily5BA *)VirtualPool::AllocateMemory(0x18);
		if (pUVar4 == (UnkFamily5BA *)0x0) {
		LAB_0006f7a4:pUVar5 = (UnkFamily5AA *)0x0;
		}
		else {
		pIVar1 = (this->parent).parent.ctx;
		if (pIVar1 == (InstanceContext *)0x0) {
		pUVar5 = (UnkFamily5AA *)UnkFamily5BA::Construct(pUVar4,6,0,pNVar7);
		}
		else {
		pNVar6 = pNVar7;
		uVar2 = InstanceContextSmartPtr::CreateRef(&pIVar1->smartPtr,pIVar1,0);
		pUVar5 = (UnkFamily5AA *)UnkFamily5BA::Construct(pUVar4,6,uVar2,pNVar6);
		}
		}
		}
		else {
		if (uVar3 == 0x10) {
		if (pUVar4 == (UnkFamily5BA *)0x0) {
		pUVar5 = (UnkFamily5AA *)0x0;
		}
		else {
		pNVar6 = pNVar7;
		uVar2 = extraout_CL;
		InstanceContextSmartPtr::SetCtx((InstanceContextSmartPtr *)&stack0xffffffe4,(this->parent).parent.ctx);
		pUVar5 = (UnkFamily5AA *)UnkFamily5BA::Construct(pUVar4,5,uVar2,pNVar6);
		}
		if (pUVar5 != (UnkFamily5AA *)0x0) {
		pUVar5 = (UnkFamily5AA *)UnkFamily5SomeStruct::CreatePayload(&(pUVar5->parent).parent.someStruct,pUVar5,1);
		}
		InstanceContext::FUN_000fa200((InstanceContext *)param_1,(char)pUVar5);
		pUVar4 = (UnkFamily5BA *)VirtualPool::AllocateMemory(0x18);
		if (pUVar4 == (UnkFamily5BA *)0x0) {
		pUVar5 = (UnkFamily5AA *)0x0;
		}
		else {
		pNVar6 = pNVar7;
		uVar2 = extraout_CL_00;
		InstanceContextSmartPtr::SetCtx((InstanceContextSmartPtr *)&stack0xffffffe4,(this->parent).parent.ctx);
		pUVar5 = (UnkFamily5AA *)UnkFamily5BA::Construct(pUVar4,6,uVar2,pNVar6);
		}
		if (pUVar5 != (UnkFamily5AA *)0x0) {
		pUVar5 = (UnkFamily5AA *)UnkFamily5SomeStruct::CreatePayload(&(pUVar5->parent).parent.someStruct,pUVar5,1);
		}
		goto LAB_0006f87f;
		}
		if (pUVar4 == (UnkFamily5BA *)0x0) goto LAB_0006f7a4;
		pNVar6 = pNVar7;
		uVar2 = extraout_CL;
		InstanceContextSmartPtr::SetCtx((InstanceContextSmartPtr *)&stack0xffffffe4,(this->parent).parent.ctx);
		pUVar5 = (UnkFamily5AA *)UnkFamily5BA::Construct(pUVar4,uVar3,uVar2,pNVar6);
		}
		if (pUVar5 != (UnkFamily5AA *)0x0) {
		pUVar5 = (UnkFamily5AA *)UnkFamily5SomeStruct::CreatePayload(&(pUVar5->parent).parent.someStruct,pUVar5,1);
		}
		LAB_0006f87f:InstanceContext::FUN_000fa200((InstanceContext *)param_1,(char)pUVar5);
		if (pNVar7 == (NodeRelated2C *)0x1000) {
		pUVar4 = (UnkFamily5BA *)VirtualPool::AllocateMemory(0x18);
		if (pUVar4 == (UnkFamily5BA *)0x0) {
		pUVar5 = (UnkFamily5AA *)0x0;
		}
		else if (param_1 == (void *)0x0) {
		pUVar5 = (UnkFamily5AA *)UnkFamily5BA::Construct(pUVar4,3,0,0x1000);
		}
		else {
		uVar2 = InstanceContextSmartPtr::CreateRef((InstanceContextSmartPtr *)((int)param_1 + 0xc0),(InstanceContext *)param_1,0);
		pUVar5 = (UnkFamily5AA *)UnkFamily5BA::Construct(pUVar4,3,uVar2,pNVar7);
		}
		if (pUVar5 != (UnkFamily5AA *)0x0) {
		pUVar5 = (UnkFamily5AA *)UnkFamily5SomeStruct::CreatePayload(&(pUVar5->parent).parent.someStruct,pUVar5,1);
		}
		InstanceContext::FUN_000fa200((this->parent).parent.ctx,(char)pUVar5);
		}
		if ((char)((uint)*(undefined4 *)((int)param_1 + 0x14) >> 8) < '\0') {
		this_00 = InstanceDataList::GetNode((InstanceDataList *)((int)param_1 + 0xe4),Instance);
		(*this_00->vtable[2].Step)(this_00,(UnkTimePack *)(this->parent).parent.ctx);
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2C::FUN_00066b30(int param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2C::FUN_00066b30(NodeRelated2C *this,int param_1){
		uint uVar1;
		NodeRelated1C *pNVar1;
		pNVar1 = (NodeRelated1C *)(this->parent).parent.related;
		uVar1 = (pNVar1->parent).parent.field7_0x10;
		if ((uVar1 >> 10 & 1) == 0) {
		(pNVar1->parent).parent.field7_0x10 = uVar1 | 0x400;
		this->field1_0x70 = this->field1_0x70 & 0xffffff1f | 0x10;
		if (param_1 == 0) {
		this->invulTime = (int)(TicksPerTime * FLOAT_003865d4);
		}
		else if (param_1 == 1) {
		this->invulTime = (int)(TicksPerTime * FLOAT_0038ae3c);
		return;
		}
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2C::FUN_00066ba0(uint param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2C::FUN_00066ba0(NodeRelated2C *this,InstanceContextRefCounter *param_1){
		this->field36_0xf0 = -1;
		this->field1_0x70 = this->field1_0x70 | 0x4000;
		NodeRelated2Abstract::FUN_001ac940((NodeRelated2Abstract *)this,0x43,param_1,false,false);
		return;
		}
		
	*/
	return;
}

void NodeRelated2C::Method12() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeRelated2C::Method12(NodeRelated2C *this){
		NodeRelated1Abstract *pNVar1;
		float fVar2;
		float fVar3;
		fVar3 = FLOAT_0038b048;
		pNVar1 = (this->parent).parent.related;
		pNVar1[1].vtable = (undefined **)((uint)pNVar1[1].vtable & 0xffffffdf);
		pNVar1[1].field5_0x8 = pNVar1[1].field5_0x8 | 0x1000000;
		pNVar1 = (this->parent).parent.related + 1;
		pNVar1->vtable = (undefined **)((uint)pNVar1->vtable & 0xffffffdf);
		(this->field8_0x80).x = 0.0;
		(this->field8_0x80).z = 0.0;
		fVar2 = FLOAT_0038639c;
		(this->field8_0x80).y = fVar3;
		(this->field8_0x80).w = fVar2;
		if (*(int *)&this->field_0xb4 != 0) {
		thunk_FUN_00091c80(*(int *)&this->field_0xb4);
		return;
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2C::Method16(float param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2C::Method16(NodeRelated2C *this,float param_1){
		int iVar1;
		bool bVar2;
		InstanceNodeInstance *this_01;
		InstanceNodeInstance *this_00;
		if ((((this->field22_0xb8 != (undefined *)0x0) &&(iVar1 = *(int *)(this->field22_0xb8 + 0x18), iVar1 != 0)) &&(this_01 = (InstanceNodeInstance *)InstanceDataList::GetNode((InstanceDataList *)(*(int *)(iVar1 + 0x10) + 0xe4),Instance),this_01 != (InstanceNodeInstance *)0x0)) &&((bVar2 = (*this_01->vtable->IsC)(), bVar2 != false && (this_01[1].body.field_0x98 != '\0')))){
		InstanceNodeInstance::FUN_00177380(this_01,param_1);
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2C::Method13(float* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2C::Method13(NodeRelated2C *this,float *param_1){
		FUN_001725b0((int)(this->parent).parent.ctx,1,param_1,(float *)0x0);
		return;
		}
		
	*/
	return;
}

void NodeRelated2C::Method8(uint* param_1, byte param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2C::Method8(NodeRelated2C *this,undefined4 *param_1,undefined param_2){
		undefined *puVar1;
		NodeRelated1Abstract *pNVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		NodeRelated2C *this_00;
		undefined3 in_stack_00000009;
		NodeRelated1C *pNVar2;
		uVar4 = GameController2->flags >> 0xc & 0x3f;
		if ((uVar4 != 0xc) && (uVar4 != 6)) {
		puVar1 = this->field22_0xb8;
		uVar4 = (uint)*(byte *)(param_1 + 5);
		if (puVar1 == (undefined *)0x0) {
		this_00 = (NodeRelated2C *)0x0;
		}
		else {
		this_00 = *(NodeRelated2C **)(puVar1 + 0x18);
		if ((*(uint *)(puVar1 + 0x10) >> 1 & 1) == 0) {
		this_00 = this;
		this = *(NodeRelated2C **)(puVar1 + 0x18);
		}
		}
		pNVar2 = (NodeRelated1C *)(this->parent).parent.related;
		uVar6 = (uint)(pNVar2->parent).field1_0x14 >> 6 & 0xff;
		if ((uVar6 != 0) &&((((uint)(pNVar2->parent).parent.field7_0x10 >> 10 & 1) == 0 || (0x31 < uVar4)))) {
		(this->parent).parent.vec1.x = (float)*param_1;
		(this->parent).parent.vec1.y = (float)param_1[1];
		(this->parent).parent.vec1.z = (float)param_1[2];
		(this->parent).parent.vec1.w = (float)param_1[3];
		(this->parent).parent.field27_0x40.x = (float)param_1[4];
		*(undefined *)&(this->parent).parent.field27_0x40.y = *(undefined *)(param_1 + 5);
		if (uVar4 < uVar6) {
		uVar4 = uVar6 - uVar4;
		}
		else {
		uVar4 = 0;
		}
		uVar5 = (uVar4 & 0xff) << 6;
		(pNVar2->parent).field1_0x14 = (pNVar2->parent).field1_0x14 & 0xffffc03fU | uVar5;
		if (this_00 != (NodeRelated2C *)0x0) {
		pNVar3 = (this_00->parent).parent.related;
		(this_00->parent).parent.vec1.x = (float)*param_1;
		(this_00->parent).parent.vec1.y = (float)param_1[1];
		(this_00->parent).parent.vec1.z = (float)param_1[2];
		(this_00->parent).parent.vec1.w = (float)param_1[3];
		(this_00->parent).parent.field27_0x40.x = (float)param_1[4];
		*(undefined *)&(this_00->parent).parent.field27_0x40.y = *(undefined *)(param_1 + 5);
		pNVar3[1].vtable = (undefined **)((uint)pNVar3[1].vtable & 0xffffc03f | uVar5);
		}
		if (uVar4 == 0) {
		thunk_FUN_00066ba0(this,_param_2);
		if (this_00 != (NodeRelated2C *)0x0) {
		thunk_FUN_00066ba0(this_00,_param_2);
		return;
		}
		}
		else if (uVar4 != uVar6) {
		thunk_FUN_00069480(this,_param_2);
		thunk_FUN_00066b30(this,0);
		if (this_00 != (NodeRelated2C *)0x0) {
		thunk_FUN_00069480(this_00,_param_2);
		thunk_FUN_00066b30(this_00,0);
		}
		}
		}
		}
		return;
		}
		
	*/
	return;
}

void NodeRelated2C::FUN_000699a0(float* param_1, uint param_2, int param_3) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __thiscall NodeRelated2C::FUN_000699a0(NodeRelated2C *this,float *param_1,uint param_2,int param_3){
		thunk_FUN_00069270((int)this,param_1,param_2,0x17,param_3);
		return;
		}
		
	*/
	return;
}

bool NodeRelated2C::IsB(uint param_1, InstanceNodeKSubA* param_2) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	bool __thiscall NodeRelated2C::IsB(NodeRelated2C *this,undefined4 param_1,InstanceNodeKSubA *param_2){
		InstanceNodeOGISub *this_00;
		void *this_01;
		bool bVar1;
		InstanceContext *ctx;
		InstanceNodeOGI *pIVar3;
		int iVar3;
		InstanceNodeAbstract *pIVar6;
		InstanceNodeInstance *pIVar5;
		undefined uVar2;
		InstanceNodeOGI *pIVar4;
		if (((uint)(param_2->parent).parent.vtable >> 0x12 & 1) == 0) {
		if ((int *)this->field22_0xb8 != (int *)0x0) {
		uVar2 = (**(code **)(*(int *)this->field22_0xb8 + 0x14))(param_1,param_2);
		return (bool)uVar2;
		}
		NodeRelated2Abstract::FUN_001ac940((NodeRelated2Abstract *)this,0x29,(InstanceContextRefCounter *)(this->parent).parent.ctx,false,false);
		}
		else {
		ctx = (InstanceContext *)PTR_00496350;
		if (PTR_00496350 != (InstanceContextRefCounter *)0x0) {
		ctx = PTR_00496350->ctx;
		}
		if (((this->parent).parent.ctx == ctx) &&(iVar3 = *(int *)&(param_2->parent).parent.field_0x4, iVar3 != 0)) {
		iVar3 = *(int *)(iVar3 + 0x1e8);
		FUN_00103f10('\x01');
		DAT_003ec539 = 0;
		FLOAT_0039f278 = FLOAT_0038639c;
		DrawToTexture(iVar3);
		::EmptyFunction();
		}
		pIVar3 = (InstanceNodeOGI *)InstanceDataList::GetNode(&((this->parent).parent.ctx)->nodes,OGI);
		this_00 = pIVar3->field4_0x24;
		InstanceNodeKSubA::FUN_00139650(param_2,&this->position,true);
		InstanceNodeKSubA::FUN_00139650(param_2,&this->field8_0x80,true);
		InstanceNodeKSubA::FUN_00139650(param_2,&this->field209_0x1a0,false);
		InstanceNodeOGISub::FUN_001fb7d0(this_00,param_1,param_2);
		if (this->field17_0xb0 != (UnkFamily3D *)0x0) {
		thunk_FUN_00091e10((int)this->field17_0xb0,param_1,param_2);
		}
		if ((int *)this->field22_0xb8 != (int *)0x0) {
		(**(code **)(*(int *)this->field22_0xb8 + 0x14))(param_1,param_2);
		}
		if (*(int *)&this->field_0xb4 != 0) {
		thunk_FUN_00086070(*(int *)&this->field_0xb4,param_1,param_2);
		}
		iVar3 = BlackboardAbstract::GetIntValue((this->parent).parent.blackboard,0);
		if (iVar3 == 1) {
		pIVar6 = InstanceDataList::GetNode(&((this->parent).parent.ctx)->nodes,Instance);
		if (((pIVar6[0xb].field6_0x14 != 0) && ((*(byte *)(pIVar6[0xb].field6_0x14 + 0x14) & 1) != 0))&& ((~(byte)((uint)pIVar6[5].field5_0x10 >> 0x14) & 1) != 0)) {
		pIVar6[0xb].field6_0x14 = 0;
		}
		this_01 = (void *)pIVar6[0xb].field6_0x14;
		if (this_01 != (void *)0x0) {
		pIVar5 = (InstanceNodeInstance *)InstanceDataList::GetNode((InstanceDataList *)((int)this_01 + 0xe4),Instance);
		if (pIVar5 != (InstanceNodeInstance *)0x0) {
		bVar1 = (*pIVar5->vtable->IsC)();
		if ((bVar1 != false) && (((pIVar5->body).field49_0x80[0xb] & 0x7fff) == 0x264)) {
		FUN_000f8b00(this_01,(int)param_2);
		}
		}
		}
		}
		if (((uint)(param_2->parent).parent.vtable >> 0x12 & 1) != 0) {
		InstanceNodeKSubA::FUN_00139650(param_2,&(this->parent).field1_0x60,false);
		return true;
		}
		}
		return false;
		}
		
	*/
	return false;
}

void NodeRelated2C::Method14() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall NodeRelated2C::Method14(NodeRelated2C *this){
		float fVar1;
		float fVar2;
		InstanceNodeAbstract *pIVar4;
		NodeRelated1C *pNVar2;
		InstanceContext *pIVar3;
		NodeRelated1Abstract *pNVar1;
		int *piVar1;
		fVar2 = FLOAT_0038b048;
		pNVar2 = (NodeRelated1C *)(this->parent).parent.related;
		(pNVar2->parent).field1_0x14 = (pNVar2->parent).field1_0x14 & 0xffffffdf;
		pNVar2->field1_0x1c = pNVar2->field1_0x1c | 0x1000000;
		pNVar1 = (this->parent).parent.related + 1;
		pNVar1->vtable = (undefined **)((uint)pNVar1->vtable & 0xffffffdf);
		(this->field8_0x80).x = 0.0;
		(this->field8_0x80).z = 0.0;
		fVar1 = FLOAT_0038639c;
		(this->field8_0x80).y = fVar2;
		(this->field8_0x80).w = fVar1;
		thunk_FUN_0006faa0((int)this);
		(this->parent).parent.field27_0x40.x = 0.0;
		*(undefined *)&(this->parent).parent.field27_0x40.y = 0;
		(this->parent).parent.vec1.x = Vector4_0039ef70.x;
		(this->parent).parent.vec1.y = Vector4_0039ef70.y;
		(this->parent).parent.vec1.z = Vector4_0039ef70.z;
		(this->parent).parent.vec1.w = Vector4_0039ef70.w;
		pIVar3 = (this->parent).parent.ctx;
		(pIVar3->parent).flags = (pIVar3->parent).flags & 0xffffffef;
		piVar1 = &((this->parent).parent.related)->field7_0x10;
		*piVar1 = *piVar1 | 0x100000;
		pIVar4 = InstanceDataList::GetNode(&((this->parent).parent.ctx)->nodes,Instance);
		(*pIVar4->vtable[3].GetIndex)();
		(*pIVar4->vtable[1].GetBuilderIndex)();
		(*pIVar4->vtable[2].DisposeSomething)((undefined *)0x1);
		return;
		}
		
	*/
	return;
}

void NodeRelated2C::IsD() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined NodeRelated2C::IsD(void){
		return 1;
		}
		
	*/
	return;
}

uint NodeRelated2C::IsC(uint* param_1) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	undefined4 __thiscall NodeRelated2C::IsC(NodeRelated2C *this,undefined4 *param_1){
		*param_1 = (this->parent).field1_0x60.x;
		param_1[1] = (this->parent).field1_0x60.y;
		param_1[2] = (this->parent).field1_0x60.z;
		param_1[3] = (this->parent).field1_0x60.w;
		return CONCAT31((int3)((uint)param_1 >> 8),1);
		}
		
	*/
	return 0;
}

