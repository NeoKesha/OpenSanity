#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/Math/Vector4.h"
#include "headers/Known/Game/InstanceSystem/InstanceNodes/Misc/NodeRelated2/NodeRelated2E.h"

class NodeRelated2C : public NodeRelated2E {
	public:
		uint invulTime;
		US001 * data;
		Vector4 position;

		bool Connect(NodeRelated2C* other);
		void Construct(InstanceMasterInfo* param_1, uint param_2, uint param_3);
		void FUN_0006f930(InstanceContext* param_1, Vector4* param_2);
		void FUN_00073f40(char param_1, Matrix4* param_2, uint param_3, char param_4);
		void FUN_000663d0(int param_1);
		void FUN_00066500();
		void FUN_00073fd0(bool param_1);
		void CleanUp();
		void FUN_0006e580(char param_1);
		void FUN_00074060(int param_1, int param_2, byte param_3);
		void FUN_00073d40(char param_1);
		virtual void FUN_00068850(char param_1);
		virtual void FUN_00068910();
		virtual void FUN_00068a00(char param_1);
		virtual void Method17(uint param_1);
		virtual void Method15();
		virtual void Method7(InstanceContext* ctx, int param_2, Vector4* param_3);
		virtual void Update(int param_1);
		virtual void FUN_000761d0(float param_1);
		void Dispose(byte param_1);
		virtual void FUN_0006f6c0(void* param_1, int param_2);
		void FUN_00066b30(int param_1);
		void FUN_00066ba0(uint param_1);
		virtual void Method12();
		virtual void Method16(float param_1);
		virtual void Method13(float* param_1);
		virtual void Method8(uint* param_1, byte param_2);
		virtual void FUN_000699a0(float* param_1, uint param_2, int param_3);
		virtual bool IsB(uint param_1, InstanceNodeKSubA* param_2);
		virtual void Method14();
		static void IsD();
		virtual uint IsC(uint* param_1);

};
