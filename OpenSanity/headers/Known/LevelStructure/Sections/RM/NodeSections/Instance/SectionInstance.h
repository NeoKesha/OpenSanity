#pragma once

#include "headers/OpenSanityGlobal.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Instance/Trigger/SectionInstanceTrigger.h"
#include "headers/Known/LevelStructure/Sections/RM/SectionAbstract/SectionAbstract.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Instance/AiPosition/SectionInstanceAiPosition.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Instance/Camera/SectionInstanceCamera.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Instance/Template/SectionInstanceTemplate.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Instance/Path/SectionInstancePath.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Instance/Instance/SectionInstanceInstance.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Instance/Position/SectionInstancePosition.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Instance/CollisionSurface/SectionInstanceCollisionSurface.h"
#include "headers/Known/LevelStructure/Sections/RM/NodeSections/Instance/AiPath/SectionInstanceAiPath.h"

class SectionInstance : public SectionAbstract {
	public:
		InstanceSectionResources * instanceResources;
		SectionInstanceTemplate instanceTemplateSection;
		SectionInstanceInstance instanceSection;
		SectionInstanceAiPosition aiPositionSection;
		SectionInstanceAiPath aiPathSection;
		SectionInstancePosition positionSection;
		SectionInstancePath pathSection;
		SectionInstanceTrigger triggerSection;
		SectionInstanceCamera cameraSection;
		SectionInstanceCollisionSurface collisionSurfaceSection;

		void Construct(InstanceSectionResources* instanceSectionResources);
		virtual void CleanUp();
		void Dispose(byte param_1);
		virtual void Write(int index, MemoryStream* stream);
		virtual int GetElementCount();
		static byte ReturnNum();
		static bool IsOne(int param_1);
		virtual SectionReaderInstance* GetReader(uint param_1, uint* param_2, int* param_3);
		virtual bool Write_8(MemoryStream* stream, uint* param_2, uint* param_3);
		static void EmptyFunction();
		static void EmptyFunction_10();
		virtual void UnkMethod3();
		virtual void ReadInternal(uint index, int sectionOffset);

};
