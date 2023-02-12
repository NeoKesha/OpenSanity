#pragma once

#include "headers/OpenSanityGlobal.h"

class GameObjectResourceReferences {
	public:
		uint flags;
		GameObjectReferenceList * refObjects;
		GameObjectReferenceList * refOgis;
		GameObjectReferenceList * refAnimations;
		GameObjectReferenceList * refCodeModels;
		GameObjectReferenceList * refScripts;
		GameObjectReferenceList * refUnknown;
		GameObjectReferenceList * refSounds;

		void LoadDependencies(uint gameObjectIndex, GameResources* gameResources);
		void Read(MemoryStream* stream);
		void Write(MemoryStream* stream);
		void Dispose(ushort param_1, GameResources* param_2);

};
