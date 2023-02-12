#pragma once

#include "headers/OpenSanityGlobal.h"

class CodeModel {
	public:
		uint index;
		uint header;
		GameObjectScriptPack * scriptPackArray;
		ActionAbstract * firstAction;
		short * packIds;

		void FUN_001a7eb0(byte cnt);
		virtual void CleanUp();
		static void InitCodeModelAction(byte index);
		static void InitCodeModelAction_3(byte index);
		void InitCodeModel();
		void InitCodeModel_5();
		virtual void Write(MemoryStream* stream);
		void Construct(MemoryStream* stream);

};
