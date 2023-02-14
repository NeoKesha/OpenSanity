#include "headers/Known/Oleg/OlegBase.h"

#include "headers/Known/Graphics/FontRenderer/FontRenderer.h"
#include "headers/Unknown/SomeState.h"
#include "headers/Known/Oleg/Modules/OlegModuleAbstract.h"

OlegBase::OlegBase() {
	int i;
	OlegMask* maskPtrHigh;
	OlegMask* maskPtrLow;
	this->field2_0x8 = 0;
	this->field3_0xc = 0;
	for (int i = 0; i < 64; ++i) {
		this->modules[i] = null;
	}

	for (i = 0; i < 64; ++i) {
		this->uiPresetMask[i].high = 0;
		this->uiPresetMask[i].low = 0;
	}
}

OlegBase::~OlegBase() {

}

void OlegBase::ProcessAll(SomeState* timeState) {
	for (int i = 0; i < 64; ++i) {
		if (this->modules[i] != null) {
			this->modules[i]->Process(timeState);
		}
	}
}

void OlegBase::Render(FontRenderer* fontRenderer) {
	for (int i = 0; i < 64; ++i) {
		if (this->modules[i] != null) {
			this->modules[i]->Render(fontRenderer);
		}
	}
}

void OlegBase::CallAll1() {
	for (int i = 0; i < 64; ++i) {
		if (this->modules[i] != null) {
			this->modules[i]->CallOther1();
		}
	}
}

void OlegBase::CallAll2() {
	for (int i = 0; i < 64; ++i) {
		if (this->modules[i] != null) {
			this->modules[i]->CallOther2();
		}
	}
}

void OlegBase::FUN_001a0d10() {
	for (int i = 0; i < 64; ++i) {
		if (this->modules[i] != null) {
			this->modules[i]->Reset();
		}
	}
}
