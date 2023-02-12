#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/TwinString.h"
#include "headers/Known/GameData/InstranceTemplate/InstanceTemplateIdList.h"
#include "headers/Unknown/ParameterTable.h"

class InstanceTemplate {
	public:
		TwinString objectName;
		byte unkByte3;
		byte unkByte4;
		short objectId;
		byte unkByte1;
		byte unkByte2;
		InstanceTemplateIdList idList;
		ParameterTable unkStruct;

		void Construct();
		void Read(MemoryStream* stream);
		bool FUN_001ace00(UnkFamily27Wrapper* param_1);
		void Construct_3(MemoryStream* stream);
		virtual void Write(MemoryStream* stream);

};
