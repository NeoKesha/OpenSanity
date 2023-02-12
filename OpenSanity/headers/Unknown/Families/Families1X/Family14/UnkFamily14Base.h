#pragma once

#include "headers/OpenSanityGlobal.h"

class UnkFamily14Base {
	public:
		int distance;

		void FUN_0014ba20(ChunkData* chunkData);
		virtual void FUN_00153b30(float* param_1, float* param_2);
		virtual void FUN_00154250(Vector2* vec);
		void Init();
		void Construct();
		void Construct_5(AutoClass25* param_1);
		virtual void FUN_001535f0(float* param_1);
		static bool IsB();
		static bool IsC();
		virtual bool FUN_00140bf0();
		virtual Matrix4* FUN_00153590(Matrix4* param_1);
		static bool IsA();
		void Dispose(byte param_1);

};
