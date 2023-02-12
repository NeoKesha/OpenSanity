#include "headers/SortLater/FontCollection.h"

#include "headers/Known/Iterators/TypeB/Iterator0X/Iterator1/IteratorB1.h"
#include "headers/Unknown/AutoClasses/AutoClass58.h"
#include "headers/Known/Graphics/Font/Font.h"

void FontCollection::CleanUp() {
	IteratorB1 iterator;
	iterator.collection = this;

	for (iterator.index = 0; (-1 < iterator.index && ((uint)iterator.index < (uint)(iterator.collection)->fontsCount)); ++iterator.index) {
		AutoClass58* ptr = *iterator.Get();
		if (ptr != null) {
			ptr->Clear();
			delete ptr->textRendererCollection.array;
			delete ptr;
		}
	}
	delete fonts;
	return;
}

int* FontCollection::FUN_00113970(Font* font) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int * __thiscall FontCollection::FUN_00113970(FontCollection *this,Font *font){
		uint uVar1;
		int **ppiVar2;
		for (uVar1 = 0;
		 (-1 < (int)uVar1 && (uVar1 < (uint)this->fontsCount));
		 uVar1 = uVar1 + 1) {
		ppiVar2 = (int **)(*(code *)PTR_Get_00391c78)();
		if ((Font *)**ppiVar2 == font) {
		return (int *)(Font **)*ppiVar2;
		}
		}
		return (int *)0x0;
		}
		
	*/
	return null;
}

AutoClass58* FontCollection::CreateWrapperAndAddFont(Font* font) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	AutoClass58 * __thiscall FontCollection::CreateWrapperAndAddFont(FontCollection *this,Font *font){
		AutoClass58 *pAVar1;
		AutoClass58 *unkClass;
		RendererText **ppRVar2;
		pAVar1 = (AutoClass58 *)FUN_00113970(this,font);
		if (pAVar1 == (AutoClass58 *)0x0) {
		unkClass = (AutoClass58 *)VirtualPool::AllocateMemory(0x14);
		if (unkClass != (AutoClass58 *)0x0) {
		unkClass->font = font;
		(unkClass->textRendererCollection).count = 0;
		(unkClass->textRendererCollection).capacity = 10;
		(unkClass->textRendererCollection).step = 10;
		ppRVar2 = (RendererText **)VirtualPool::AllocateMemory(0x28);
		(unkClass->textRendererCollection).array = ppRVar2;
		AddFont(this,unkClass);
		return unkClass;
		}
		AddFont(this,(AutoClass58 *)0x0);
		pAVar1 = (AutoClass58 *)0x0;
		}
		return pAVar1;
		}
		
	*/
	return null;
}

int FontCollection::AddFont(AutoClass58* font) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	int __thiscall FontCollection::AddFont(FontCollection *this,AutoClass58 *font){
		int iVar1;
		AutoClass58 **newFonts;
		int i;
		int cnt;
		int pvVar1;
		if (this->fontsCount == this->totalSpace) {
		cnt = this->field3_0xc + this->totalSpace;
		newFonts = (AutoClass58 **)VirtualPool::AllocateMemory(cnt * 4);
		i = 0;
		if (this->fontsCount != 0) {
		do {
		newFonts[i] = this->fonts[i];
		i = i + 1;
		}
		 while ((uint)i < (uint)this->fontsCount);
		}
		VirtualPool::FreeMemory(this->fonts);
		this->totalSpace = cnt;
		this->fonts = newFonts;
		}
		this->fonts[this->fontsCount] = font;
		iVar1 = this->fontsCount;
		this->fontsCount = iVar1 + 1;
		return iVar1;
		}
		
	*/
	return 0;
}

