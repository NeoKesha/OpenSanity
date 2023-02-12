#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/GameData/Path/PathBase.h"

class Path : public PathBase {
	public:
		Vector2 * parameters;

		static void Dispose(Path* param_1);
		virtual float FUN_000ecee0(int param_1);
		virtual void FUN_000f1c60(Vector4* param_1, int param_2);
		void Dispose_3(byte param_1);
		virtual void Read(MemoryStream* stream);
		virtual void Write(int* param_1);
		virtual bool Method5(int** param_1);
		static uint GetBuilderIndex();
		Path* Copy(Path* other);

};
