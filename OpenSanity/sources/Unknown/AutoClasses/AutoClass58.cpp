#include "headers/Unknown/AutoClasses/AutoClass58.h"

#include "headers/Known/Graphics/Font/Font.h"
void AutoClass58::DrawAll() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void AutoClass58::DrawAll(AutoClass58 *this){
		Font *this_00;
		uint uVar1;
		RendererText **renderer;
		if ((this->textRendererCollection).count != 0) {
		this_00 = this->font;
		(*((this_00->parent).vtable)->Method1)();
		for (uVar1 = 0;
		 (-1 < (int)uVar1 && (uVar1 < (uint)(this->textRendererCollection).count));
		uVar1 = uVar1 + 1) {
		renderer = (RendererText **)(*(code *)PTR_Get_00391c34)();
		(*((this_00->parent).vtable)->DrawText)(this_00,*renderer);
		}
		(*((this_00->parent).vtable)->Method3)();
		}
		return;
		}
		
	*/
	return;
}

void AutoClass58::Clear() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall AutoClass58::Clear(AutoClass58 *this){
		uint uVar1;
		void **ppvVar2;
		void *renderer;
		for (uVar1 = 0;
		 (-1 < (int)uVar1 && (uVar1 < (uint)(this->textRendererCollection).count));
		uVar1 = uVar1 + 1) {
		ppvVar2 = (void **)(*(code *)PTR_Get_00391c54)();
		renderer = *ppvVar2;
		if (renderer != (void *)0x0) {
		TwinString::Dispose((TwinString *)((int)renderer + 0x18));
		VirtualPool::FreeMemory(renderer);
		}
		}
		(this->textRendererCollection).count = 0;
		return;
		}
		
	*/
	return;
}

