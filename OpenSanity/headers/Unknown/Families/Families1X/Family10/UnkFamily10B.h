#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Unknown/Families/Families1X/Family10/V/UnkFamily10VF.h"
#include "headers/Unknown/Families/Families1X/Family10/V/UnkFamily10VB.h"
#include "headers/Unknown/Families/Families1X/Family10/V/UnkFamily10VD.h"
#include "headers/Unknown/Families/Families1X/Family10/UnkFamily10Base.h"
#include "headers/Unknown/Families/Families1X/Family10/V/UnkFamily10VG.h"
#include "headers/Unknown/Families/Families1X/Family10/V/UnkFamily10VC.h"
#include "headers/Unknown/Families/Families1X/Family10/V/UnkFamily10VE.h"

class UnkFamily10B : public UnkFamily10Base {
	public:
		UnkFamily10VB gallery1;
		UnkFamily10VC gallery2;
		UnkFamily10VD gallery3;
		UnkFamily10VE gallery4;
		UnkFamily10VF gallery5;
		UnkFamily10VG gallery6;

		void Construct();
		void CleanUp();
		virtual void FUN_000a6c70();
		void Dispose(byte param_1);

};
