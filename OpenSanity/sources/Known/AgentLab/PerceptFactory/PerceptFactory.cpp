#include "headers/Known/AgentLab/PerceptFactory/PerceptFactory.h"

#include "headers/Known/AgentLab/PerceptFactory/Percepts/PerceptAbstract.h"
void PerceptFactory::Dispose(byte flag) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptFactory * __thiscall PerceptFactory::Dispose(PerceptFactory *this,byte flag){
		this->vtable = (PerceptFactory_VTable *)&Builder_VT_Abstract;
		if ((flag & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void* PerceptFactory::BUILD(uint id) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	PerceptAbstract * PerceptFactory::BUILD(int id,int arg){
		PerceptAbstract *result;
		Percept0x0A3 *resut0x0A3;
		Percept0x261 *this;
		Percept0x269 *this_00;
		Percept0x26B *this_01;
		Percept0x098 *this_02;
		Percept0x26D *this_03;
		Percept0x26F *this_04;
		Percept0x270 *this_05;
		Percept0x275 *this_06;
		PerceptAgentIsOnGround *this_07;
		Percept0x276 *this_08;
		PerceptCrateHasRedWumpa *this_09;
		PerceptAgentHitPoints *this_10;
		PerceptWumpaNeededForPayGate *this_11;
		PerceptCanMoveForward *this_12;
		PerceptCanMoveBackwards *this_13;
		PerceptCanStrafeLeft *this_14;
		PerceptCanStrafeRight *this_15;
		PerceptCanFall *this_16;
		PerceptAgentWasTouched *this_17;
		PerceptAgentWasWalkedInto *this_18;
		PerceptAgentWasJumpedOn *this_19;
		PerceptAgentWasHeadbutted *this_20;
		PerceptAgentWasAttacked *this_21;
		PerceptAgentWasSpun *this_22;
		PerceptAgentWasSlid *this_23;
		PerceptWillHitWall *this_24;
		PerceptWillRunOffClif *this_25;
		PerceptAgentWasKneeDropped *this_26;
		Percept0x239 *this_27;
		Percept0x24C *this_28;
		Percept0x24D *this_29;
		Percept0x250 *this_30;
		Percept0x24E *this_31;
		Percept0x24F *this_32;
		Percept0x262 *this_33;
		Percept0x27C *this_34;
		Percept0x263 *this_35;
		Percept0x271 *this_36;
		Percept0x272 *this_37;
		Percept0x27E *this_38;
		PerceptNodeIsAirborne *this_39;
		Percept0x257 *this_40;
		Percept0x258 *this_41;
		Percept0x259 *this_42;
		Percept0x264 *this_43;
		Percept0x267 *this_44;
		Percept0x25B *this_45;
		Percept0x25C *this_46;
		Percept0x25D *this_47;
		Percept0x265 *this_48;
		Percept0x25E *this_49;
		Percept0x25F *this_50;
		Percept0x260 *this_51;
		Percept0x266 *this_52;
		Percept0x247 *this_53;
		PerceptEdgeNeedsFlying *this_54;
		PerceptEdgeNeedsJump *this_55;
		PerceptEdgeNeedsLongJump *this_56;
		PerceptEdgeNeedsHighJump *this_57;
		Percept0x25A *this_58;
		PerceptMeFacingPlayer *this_59;
		PerceptPlayerFacingMe *this_60;
		Percept0x26A *this_61;
		PerceptClearLineOfSightToPlayer *this_62;
		PerceptCanSeePlayer *this_63;
		PerceptPlayerCanSeeMe *this_64;
		Percept0x246 *this_65;
		PerceptHeightAbovePlayer *this_66;
		PerceptHeadLookingAtPlayer *this_67;
		PerceptHeadCanSeePlayer *this_68;
		PerceptAmIHarmful *this_69;
		PerceptPlayerHeadLookingAtMe *this_70;
		PerceptPlayerHeadCanSeeMe *this_71;
		Percept0x09B *this_72;
		Percept0x248 *this_73;
		Percept0x249 *this_74;
		Percept0x23A *this_75;
		Percept0x23B *this_76;
		Percept0x23C *this_77;
		Percept0x23D *this_78;
		Percept0x23E *this_79;
		Percept0x23F *this_80;
		Percept0x240 *this_81;
		Percept0x26E *this_82;
		Percept0x279 *this_83;
		Percept0x27A *this_84;
		PerceptNodeTraffic *this_85;
		Percept0x243 *this_86;
		Percept0x244 *this_87;
		Percept0x245 *this_88;
		Percept0x251 *this_89;
		Percept0x252 *this_90;
		Percept0x273 *this_91;
		Percept0x253 *this_92;
		Percept0x254 *this_93;
		Percept0x255 *this_94;
		Percept0x256 *this_95;
		Percept0x26C *this_96;
		Percept0x280 *this_97;
		Percept0x274 *this_98;
		Percept0x055 *this_99;
		Percept0x053 *this_x00100;
		Percept0x054 *this_x00101;
		Percept0x277 *this_x00102;
		Percept0x278 *this_x00103;
		Percept0x27D *this_x00104;
		Percept0x27F *this_x00105;
		Percept0x283 *this_x00106;
		Percept0x281 *this_x00107;
		if (arg == -0xb) {
		switch(id) {
		case 0:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0;
		result->vtable = &Percept_VT_Next;
		return result;
		}
		break;
		case 1:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 1;
		result->vtable = &Percept_VT_IsCollidable;
		return result;
		}
		break;
		case 2:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 2;
		result->vtable = &Percept_VT_Else;
		return result;
		}
		break;
		case 3:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 3;
		result->vtable = &Percept_VT_Random;
		return result;
		}
		break;
		case 4:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 4;
		result->vtable = &Percept_VT_IsVisible;
		return result;
		}
		break;
		case 5:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 5;
		result->vtable = &Percept_VT_TimeInUnit;
		return result;
		}
		break;
		case 6:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 6;
		result->vtable = &Percept_VT_IsInExternalScript;
		return result;
		}
		break;
		case 7:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 7;
		result->vtable = &Percept_VT_AnimationFinished;
		return result;
		}
		break;
		case 8:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 8;
		result->vtable = &Percept_VT_IsPathComplete;
		return result;
		}
		break;
		case 9:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 9;
		result->vtable = &Percept_VT_MeToInitPosSqrDist;
		return result;
		}
		break;
		case 10:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 10;
		result->vtable = &Percept_VT_MeToFocusSqrDist;
		return result;
		}
		break;
		case 0xb:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0xb;
		result->vtable = &Percept_VT_CurrentKey;
		return result;
		}
		break;
		case 0xc:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0xc;
		result->vtable = &Percept_VT_IsLoadZoneStateSet;
		return result;
		}
		break;
		case 0xd:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0xd;
		result->vtable = &Percept_VT_GotRoute;
		return result;
		}
		break;
		case 0xe:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0xe;
		result->vtable = &Percept_VT_GotKeys;
		return result;
		}
		break;
		case 0x14:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x14;
		result->vtable = &Percept_VT_InsideEdgeStartNode;
		return result;
		}
		break;
		case 0x15:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x15;
		result->vtable = &Percept_VT_InsideEdgeEndNode;
		return result;
		}
		break;
		case 0x16:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x16;
		result->vtable = &Percept_VT_MeFacingFocus;
		return result;
		}
		break;
		case 0x17:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x17;
		result->vtable = &Percept_VT_FocusFacingMe;
		return result;
		}
		break;
		case 0x18:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x18;
		result->vtable = &Percept_VT_ClearLineOfSightToFocus;
		return result;
		}
		break;
		case 0x19:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x19;
		result->vtable = &Percept_VT_FocusAgentCanSeeMe;
		return result;
		}
		break;
		case 0x1a:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x1a;
		result->vtable = &Percept_VT_CanSeeFocus;
		return result;
		}
		break;
		case 0x1b:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x1b;
		result->vtable = &Percept_VT_MeFacingRouteNode;
		return result;
		}
		break;
		case 0x1c:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x1c;
		result->vtable = &Percept_VT_ClearLineOfSightToRouteNode;
		return result;
		}
		break;
		case 0x1d:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x1d;
		result->vtable = &Percept_VT_HeightAboveFocus;
		return result;
		}
		break;
		case 0x23:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x23;
		result->vtable = &Percept_VT_MeFacingCamera;
		return result;
		}
		break;
		case 0x24:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x24;
		result->vtable = &Percept_VT_CameraFacingMe;
		return result;
		}
		break;
		case 0x25:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x25;
		result->vtable = &Percept_VT_InCameraFrustrum;
		return result;
		}
		break;
		case 0x26:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x26;
		result->vtable = &Percept_VT_ClearLineOfSightToCamera;
		return result;
		}
		break;
		case 0x27:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x27;
		result->vtable = &Percept_VT_CameraCanSeeMe;
		return result;
		}
		break;
		case 0x28:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x28;
		result->vtable = &Percept_VT_HeadLookingAtFocus;
		return result;
		}
		break;
		case 0x29:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x29;
		result->vtable = &Percept_VT_HeadCanSeeFocus;
		return result;
		}
		break;
		case 0x2a:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x2a;
		result->vtable = &Percept_VT_HeadLookingAtRouteNode;
		return result;
		}
		break;
		case 0x2b:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x2b;
		result->vtable = &Percept_VT_FocusHeadLookingAtMe;
		return result;
		}
		break;
		case 0x2c:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x2c;
		result->vtable = &Percept_VT_FocusHeadCanSeeMe;
		return result;
		}
		break;
		case 0x2d:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x2d;
		result->vtable = &Percept_VT_GotAnyFocus;
		return result;
		}
		break;
		case 0x2e:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x2e;
		result->vtable = &Percept_VT_FocusActorEquals;
		return result;
		}
		break;
		case 0x2f:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x2f;
		result->vtable = &Percept_VT_ActorSubtypeEquals;
		return result;
		}
		break;
		case 0x30:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x30;
		result->vtable = &Percept_VT_AttachedToAnAgent;
		return result;
		}
		break;
		case 0x31:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x31;
		result->vtable = &Percept_VT_GotAttachedObject;
		return result;
		}
		break;
		case 0x32:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x32;
		result->vtable = &Percept_VT_GotAnyUserMessage;
		return result;
		}
		break;
		case 0x33:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x33;
		result->vtable = &Percept_VT_GotUserMessageEquals;
		return result;
		}
		break;
		case 0x34:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x34;
		result->vtable = &Percept_VT_CurrentKeyEquals;
		return result;
		}
		break;
		case 0x35:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x35;
		result->vtable = &Percept_VT_TouchingTerrain;
		return result;
		}
		break;
		case 0x36:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x36;
		result->vtable = &Percept_VT_TouchingAnyAgent;
		return result;
		}
		break;
		case 0x37:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x37;
		result->vtable = &Percept_VT_GotAttachmentOnExit;
		return result;
		}
		break;
		case 0x38:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x38;
		result->vtable = &Percept_VT_GotFocusObject;
		return result;
		}
		break;
		case 0x39:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x39;
		result->vtable = &Percept_VT_GotFocusPosition;
		return result;
		}
		break;
		case 0x3a:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x3a;
		result->vtable = &Percept_VT_GetAnimationTimeRemaining;
		return result;
		}
		break;
		case 0x3b:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x3b;
		result->vtable = &Percept_VT_CounterValue;
		return result;
		}
		break;
		case 0x3c:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x3c;
		result->vtable = &Percept_VT_CounterValueEqualsThreshold;
		return result;
		}
		break;
		case 0x3d:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x3d;
		result->vtable = &Percept_VT_IsResting;
		return result;
		}
		break;
		case 0x3e:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x3e;
		result->vtable = &Percept_VT_SqrMoveSpeed;
		return result;
		}
		break;
		case 0x3f:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x3f;
		result->vtable = &Percept_VT_FocusHasAttachment;
		return result;
		}
		break;
		case 0x40:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x40;
		result->vtable = &Percept_VT_LostAllAttachments;
		return result;
		}
		break;
		case 0x41:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x41;
		result->vtable = &Percept_VT_IsBusy;
		return result;
		}
		break;
		case 0x42:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x42;
		result->vtable = &Percept_VT_FocusIsBusy;
		return result;
		}
		break;
		case 0x43:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x43;
		result->vtable = &Percept_VT_SoftFlagSet;
		return result;
		}
		break;
		case 0x44:case 0x45:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x45;
		result->vtable = &Percept_VT_MeToCurrentKeySqrDist;
		return result;
		}
		break;
		case 0x46:case 0x47:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x47;
		result->vtable = &Percept_VT_SpeedTowardsNextKey;
		return result;
		}
		break;
		case 0x48:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x48;
		result->vtable = &Percept_VT_BoxAboveIsOverlapped;
		return result;
		}
		break;
		case 0x49:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x49;
		result->vtable = &Percept_VT_GotLinkedObject;
		return result;
		}
		break;
		case 0x4a:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x4a;
		result->vtable = &Percept_VT_XCycle;
		return result;
		}
		break;
		case 0x4b:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x4b;
		result->vtable = &Percept_VT_YCycle;
		return result;
		}
		break;
		case 0x4c:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x4c;
		result->vtable = &Percept_VT_ZCycle;
		return result;
		}
		break;
		case 0x4d:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x4d;
		result->vtable = &Percept_VT_ID_0x4D;
		return result;
		}
		break;
		case 0x4e:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x4e;
		result->vtable = &Percept_VT_ID_0x4E;
		return result;
		}
		break;
		case 0x4f:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x4f;
		result->vtable = &Percept_VT_ID_0x4F;
		return result;
		}
		break;
		case 0x50:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x50;
		result->vtable = &Percept_VT_ID_0x50;
		return result;
		}
		break;
		case 0x51:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x51;
		result->vtable = &Percept_VT_ID_0x51;
		return result;
		}
		break;
		case 0x52:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x52;
		result->vtable = &Percept_VT_ID_0x52;
		return result;
		}
		break;
		case 0x53:this_x00100 = (Percept0x053 *)VirtualPool::AllocateMemory(0x14);
		if (this_x00100 != (Percept0x053 *)0x0) {
		result = (PerceptAbstract *)Percept0x053::Construct(this_x00100);
		return result;
		}
		break;
		case 0x54:this_x00101 = (Percept0x054 *)VirtualPool::AllocateMemory(0x14);
		if (this_x00101 != (Percept0x054 *)0x0) {
		result = (PerceptAbstract *)Percept0x054::Construct(this_x00101);
		return result;
		}
		break;
		case 0x55:this_99 = (Percept0x055 *)VirtualPool::AllocateMemory(0x14);
		if (this_99 != (Percept0x055 *)0x0) {
		result = (PerceptAbstract *)Percept0x055::Construct(this_99);
		return result;
		}
		break;
		case 0x56:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x56;
		result->vtable = &Percept_VT_ID_0x56;
		return result;
		}
		break;
		case 0x57:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x57;
		result->vtable = &Percept_VT_ID_0x57;
		return result;
		}
		break;
		case 0x58:case 0x7b:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x58;
		result->vtable = &Percept_VT_ID_0x58;
		return result;
		}
		break;
		case 0x59:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x59;
		result->vtable = &Percept_VT_ID_0x59;
		return result;
		}
		break;
		case 0x5a:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x5a;
		result->vtable = &Percept_VT_ID_0x5A;
		return result;
		}
		break;
		case 0x5b:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x5b;
		result->vtable = &Percept_VT_ID_0x5B;
		return result;
		}
		break;
		case 0x5c:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x5c;
		result->vtable = &Percept_VT_ID_0x5C;
		return result;
		}
		break;
		case 0x5d:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x5d;
		result->vtable = &Percept_VT_ID_0x5D;
		return result;
		}
		break;
		case 0x5e:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x5e;
		result->vtable = &Percept_VT_ID_0x5E;
		return result;
		}
		break;
		case 0x5f:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x5f;
		result->vtable = &Percept_VT_ID_0x5F;
		return result;
		}
		break;
		case 0x60:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x60;
		result->vtable = &Percept_VT_ID_0x60;
		return result;
		}
		break;
		case 0x61:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x61;
		result->vtable = &Percept_VT_ID_0x61;
		return result;
		}
		break;
		case 0x66:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x66;
		result->vtable = &Percept_VT_ID_0x66;
		return result;
		}
		break;
		case 0x67:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x67;
		result->vtable = &Percept_VT_ID_0x67;
		return result;
		}
		break;
		case 0x68:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x68;
		result->vtable = &Percept_VT_ID_0x68;
		return result;
		}
		break;
		case 0x69:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x69;
		result->vtable = &Percept_VT_ID_0x69;
		return result;
		}
		break;
		case 0x6a:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x6a;
		result->vtable = &Percept_VT_ID_0x6a;
		return result;
		}
		break;
		case 0x6b:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x6b;
		result->vtable = &Percept_VT_ID_0x6b;
		return result;
		}
		break;
		case 0x6c:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x6c;
		result->vtable = &Percept_VT_ID_0x6c;
		return result;
		}
		break;
		case 0x6d:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x6d;
		result->vtable = &Percept_VT_ID_0x6d;
		return result;
		}
		break;
		case 0x6e:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x6e;
		result->vtable = &Percept_VT_ID_0x6e;
		return result;
		}
		break;
		case 0x6f:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x6f;
		result->vtable = &Percept_VT_ID_0x6f;
		return result;
		}
		break;
		case 0x70:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x70;
		result->vtable = &Percept_VT_ID_0x70;
		return result;
		}
		break;
		case 0x71:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x71;
		result->vtable = &Percept_VT_ID_0x71;
		return result;
		}
		break;
		case 0x72:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x72;
		result->vtable = &Percept_VT_ID_0x72;
		return result;
		}
		break;
		case 0x73:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x73;
		result->vtable = &Percept_VT_ID_0x73;
		return result;
		}
		break;
		case 0x74:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x74;
		result->vtable = &Percept_VT_ID_0x74;
		return result;
		}
		break;
		case 0x75:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x75;
		result->vtable = &Percept_VT_ID_0x75;
		return result;
		}
		break;
		case 0x76:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x76;
		result->vtable = &Percept_VT_ID_0x76;
		return result;
		}
		break;
		case 0x77:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x77;
		result->vtable = &Percept_VT_ID_0x77;
		return result;
		}
		break;
		case 0x78:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x78;
		result->vtable = &Percept_VT_ID_0x78;
		return result;
		}
		break;
		case 0x79:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x79;
		result->vtable = &Percept_VT_ID_0x79;
		return result;
		}
		break;
		case 0x7a:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x7a;
		result->vtable = &Percept_VT_ID_0x7a;
		return result;
		}
		break;
		case 0x7c:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x7c;
		result->vtable = &Percept_VT_ID_0x7c;
		return result;
		}
		break;
		case 0x7d:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x7d;
		result->vtable = &Percept_VT_ID_0x7d;
		return result;
		}
		break;
		case 0x7e:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x7e;
		result->vtable = &Percept_VT_ID_0x7e;
		return result;
		}
		break;
		case 0x7f:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x7f;
		result->vtable = &Percept_VT_ID_0x7f;
		return result;
		}
		break;
		case 0x80:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x1c);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x80;
		result->vtable = &Percept_VT_ID_0x80;
		result[1].vtable = (undefined **)0x0;
		result[1].PerceptID = 1;
		return result;
		}
		break;
		case 0x81:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x1c);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x81;
		result->vtable = &Percept_VT_ID_0x80;
		result[1].vtable = (undefined **)0x0;
		result[1].PerceptID = 0;
		return result;
		}
		break;
		case 0x82:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x1c);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x82;
		result->vtable = &Percept_VT_ID_0x80;
		result[1].vtable = (undefined **)0x1;
		result[1].PerceptID = 1;
		return result;
		}
		break;
		case 0x83:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x1c);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x83;
		result->vtable = &Percept_VT_ID_0x80;
		result[1].vtable = (undefined **)0x1;
		result[1].PerceptID = 0;
		return result;
		}
		break;
		case 0x84:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x84;
		result->vtable = &Percept_VT_ID_0x84;
		return result;
		}
		break;
		case 0x85:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x85;
		result->vtable = &Percept_VT_ID_0x85;
		return result;
		}
		break;
		case 0x86:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x86;
		result->vtable = &Percept_VT_ID_0x86;
		return result;
		}
		break;
		case 0x87:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x87;
		result->vtable = &Percept_VT_ID_0x87;
		return result;
		}
		break;
		case 0x88:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x88;
		result->vtable = &Percept_VT_ID_0x88;
		return result;
		}
		break;
		case 0x89:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x89;
		result->vtable = &Percept_VT_ID_0x89;
		return result;
		}
		break;
		case 0x8a:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x8a;
		result->vtable = &Percept_VT_ID_0x8a;
		return result;
		}
		break;
		case 0x8b:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x8b;
		result->vtable = &Percept_VT_ID_0x8b;
		return result;
		}
		break;
		case 0x8c:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x8c;
		result->vtable = &Percept_VT_ID_0x8c;
		return result;
		}
		break;
		case 0x8d:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x8d;
		result->vtable = &Percept_VT_ID_0x8d;
		return result;
		}
		break;
		case 0x8e:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x8e;
		result->vtable = &Percept_VT_ID_0x8e;
		return result;
		}
		break;
		case 0x8f:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x8f;
		result->vtable = &Percept_VT_ID_0x8f;
		return result;
		}
		break;
		case 0x90:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x90;
		result->vtable = &Percept_VT_ID_0x90;
		return result;
		}
		break;
		case 0x91:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x91;
		result->vtable = &Percept_VT_ID_0x91;
		return result;
		}
		break;
		case 0x92:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x92;
		result->vtable = &Percept_VT_ID_0x92;
		return result;
		}
		break;
		case 0x93:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x93;
		result->vtable = &Percept_VT_ID_0x93;
		return result;
		}
		break;
		case 0x94:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x94;
		result->vtable = &Percept_VT_ID_0x94;
		return result;
		}
		break;
		case 0x95:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x95;
		result->vtable = &Percept_VT_ID_0x95;
		return result;
		}
		break;
		case 0x96:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x96;
		result->vtable = &Percept_VT_ID_0x96;
		return result;
		}
		break;
		case 0x97:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x97;
		result->vtable = &Percept_VT_ID_0x97;
		return result;
		}
		break;
		case 0x98:this_02 = (Percept0x098 *)VirtualPool::AllocateMemory(0x14);
		if (this_02 != (Percept0x098 *)0x0) {
		result = (PerceptAbstract *)Percept0x098::Construct(this_02);
		return result;
		}
		break;
		case 0x99:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x99;
		result->vtable = &Percept_VT_ID_0x99;
		return result;
		}
		break;
		case 0x9a:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x9a;
		result->vtable = &Percept_VT_ID_0x9a;
		return result;
		}
		break;
		case 0x9b:this_72 = (Percept0x09B *)VirtualPool::AllocateMemory(0x14);
		if (this_72 != (Percept0x09B *)0x0) {
		result = (PerceptAbstract *)Percept0x09B::Construct(this_72);
		return result;
		}
		break;
		case 0x9c:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x9c;
		result->vtable = &Percept_VT_ID_0x9c;
		return result;
		}
		break;
		case 0x9d:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x9d;
		result->vtable = &Percept_VT_ID_0x9d;
		return result;
		}
		break;
		case 0x9e:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x9e;
		result->vtable = &Percept_VT_ID_0x9e;
		return result;
		}
		break;
		case 0x9f:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x9f;
		result->vtable = &Percept_VT_ID_0x9f;
		return result;
		}
		break;
		case 0xa0:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0xa0;
		result->vtable = &Percept_VT_ID_0xa0;
		return result;
		}
		break;
		case 0xa1:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0xa1;
		result->vtable = &Percept_VT_ID_0xa1;
		return result;
		}
		break;
		case 0xa2:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0xa2;
		result->vtable = &Percept_VT_ID_0xa2;
		return result;
		}
		break;
		case 0xa3:resut0x0A3 = (Percept0x0A3 *)VirtualPool::AllocateMemory(0x18);
		if (resut0x0A3 != (Percept0x0A3 *)0x0) {
		(resut0x0A3->parent).PerceptID = 0;
		(resut0x0A3->parent).vtable = &Percept_VT_ID_0xa3;
		resut0x0A3->unkField = 0;
		*(undefined2 *)&(resut0x0A3->parent).PerceptID = 0xa3;
		return (PerceptAbstract *)resut0x0A3;
		}
		break;
		case 0xa4:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x18);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		result->vtable = &Percept_VT_ID_0xa3;
		result[1].vtable = (undefined **)0x1;
		*(undefined2 *)&result->PerceptID = 0xa4;
		return result;
		}
		break;
		case 0xa5:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x18);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		result->vtable = &Percept_VT_ID_0xa3;
		result[1].vtable = (undefined **)0x2;
		*(undefined2 *)&result->PerceptID = 0xa5;
		return result;
		}
		break;
		case 0xa6:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x18);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		result->vtable = &Percept_VT_ID_0xa3;
		result[1].vtable = (undefined **)0x3;
		*(undefined2 *)&result->PerceptID = 0xa6;
		return result;
		}
		break;
		case 0xa7:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0xa7;
		result->vtable = &Percept_VT_ID_0xa7;
		return result;
		}
		break;
		case 0xa8:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0xa8;
		result->vtable = &Percept_VT_ID_0xa8;
		return result;
		}
		break;
		case 0xa9:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0xa9;
		result->vtable = &Percept_VT_ID_0xa9;
		return result;
		}
		break;
		case 0xaa:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0xaa;
		result->vtable = &Percept_VT_ID_0xaa;
		return result;
		}
		break;
		case 0xab:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0xab;
		result->vtable = &Percept_VT_ID_0xab;
		return result;
		}
		break;
		case 0xac:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0xac;
		result->vtable = &Percept_VT_ID_0xac;
		return result;
		}
		break;
		case 0xad:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0xad;
		result->vtable = &Percept_VT_ID_0xad;
		return result;
		}
		break;
		case 0xae:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0xae;
		result->vtable = &Percept_VT_ID_0xae;
		return result;
		}
		break;
		case 0xaf:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0xaf;
		result->vtable = &Percept_VT_ID_0xaf;
		return result;
		}
		break;
		case 0xb0:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0xb0;
		result->vtable = &Percept_VT_ID_0xb0;
		return result;
		}
		break;
		case 0x200:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x200;
		result->vtable = &Percept_VT_PlayerHitPoints;
		return result;
		}
		break;
		case 0x202:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x202;
		result->vtable = &Percept_VT_PlayerIsCrouching;
		return result;
		}
		break;
		case 0x203:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x203;
		result->vtable = &Percept_VT_PlayerIsGrounded;
		return result;
		}
		break;
		case 0x205:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x205;
		result->vtable = &Percept_VT_MeToPlayerSqrDist;
		return result;
		}
		break;
		case 0x206:this_07 = (PerceptAgentIsOnGround *)VirtualPool::AllocateMemory(0x14);
		if (this_07 != (PerceptAgentIsOnGround *)0x0) {
		result = (PerceptAbstract *)PerceptAgentIsOnGround::Construct(this_07);
		return result;
		}
		break;
		case 0x207:this_09 = (PerceptCrateHasRedWumpa *)VirtualPool::AllocateMemory(0x14);
		if (this_09 != (PerceptCrateHasRedWumpa *)0x0) {
		result = (PerceptAbstract *)PerceptCrateHasRedWumpa::Construct(this_09);
		return result;
		}
		break;
		case 0x208:this_17 = (PerceptAgentWasTouched *)VirtualPool::AllocateMemory(0x14);
		if (this_17 != (PerceptAgentWasTouched *)0x0) {
		result = (PerceptAbstract *)PerceptAgentWasTouched::Construct(this_17);
		return result;
		}
		break;
		case 0x209:this_22 = (PerceptAgentWasSpun *)VirtualPool::AllocateMemory(0x14);
		if (this_22 != (PerceptAgentWasSpun *)0x0) {
		result = (PerceptAbstract *)PerceptAgentWasSpun::Construct(this_22);
		return result;
		}
		break;
		case 0x20a:this_26 = (PerceptAgentWasKneeDropped *)VirtualPool::AllocateMemory(0x14);
		if (this_26 != (PerceptAgentWasKneeDropped *)0x0) {
		result = (PerceptAbstract *)PerceptAgentWasKneeDropped::Construct(this_26);
		return result;
		}
		break;
		case 0x20b:this_23 = (PerceptAgentWasSlid *)VirtualPool::AllocateMemory(0x14);
		if (this_23 != (PerceptAgentWasSlid *)0x0) {
		result = (PerceptAbstract *)PerceptAgentWasSlid::Construct(this_23);
		return result;
		}
		break;
		case 0x20c:this_10 = (PerceptAgentHitPoints *)VirtualPool::AllocateMemory(0x14);
		if (this_10 != (PerceptAgentHitPoints *)0x0) {
		result = (PerceptAbstract *)PerceptAgentHitPoints::Construct(this_10);
		return result;
		}
		break;
		case 0x20d:this_12 = (PerceptCanMoveForward *)VirtualPool::AllocateMemory(0x14);
		if (this_12 != (PerceptCanMoveForward *)0x0) {
		result = (PerceptAbstract *)PerceptCanMoveForward::Construct(this_12);
		return result;
		}
		break;
		case 0x20e:this_13 = (PerceptCanMoveBackwards *)VirtualPool::AllocateMemory(0x14);
		if (this_13 != (PerceptCanMoveBackwards *)0x0) {
		result = (PerceptAbstract *)PerceptCanMoveBackwards::Construct(this_13);
		return result;
		}
		break;
		case 0x20f:this_14 = (PerceptCanStrafeLeft *)VirtualPool::AllocateMemory(0x14);
		if (this_14 != (PerceptCanStrafeLeft *)0x0) {
		result = (PerceptAbstract *)PerceptCanStrafeLeft::Construct(this_14);
		return result;
		}
		break;
		case 0x210:this_15 = (PerceptCanStrafeRight *)VirtualPool::AllocateMemory(0x14);
		if (this_15 != (PerceptCanStrafeRight *)0x0) {
		result = (PerceptAbstract *)PerceptCanStrafeRight::Construct(this_15);
		return result;
		}
		break;
		case 0x211:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x211;
		result->vtable = &Percept_VT_CanJumpForwards;
		return result;
		}
		break;
		case 0x212:this_16 = (PerceptCanFall *)VirtualPool::AllocateMemory(0x14);
		if (this_16 != (PerceptCanFall *)0x0) {
		result = (PerceptAbstract *)PerceptCanFall::Construct(this_16);
		return result;
		}
		break;
		case 0x213:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x213;
		result->vtable = &Percept_VT_WillHitLowWall;
		return result;
		}
		break;
		case 0x214:this_24 = (PerceptWillHitWall *)VirtualPool::AllocateMemory(0x14);
		if (this_24 != (PerceptWillHitWall *)0x0) {
		result = (PerceptAbstract *)PerceptWillHitWall::Construct(this_24);
		return result;
		}
		break;
		case 0x215:this_25 = (PerceptWillRunOffClif *)VirtualPool::AllocateMemory(0x14);
		if (this_25 != (PerceptWillRunOffClif *)0x0) {
		result = (PerceptAbstract *)PerceptWillRunOffClif::Construct(this_25);
		return result;
		}
		break;
		case 0x216:this_21 = (PerceptAgentWasAttacked *)VirtualPool::AllocateMemory(0x14);
		if (this_21 != (PerceptAgentWasAttacked *)0x0) {
		result = (PerceptAbstract *)PerceptAgentWasAttacked::Construct(this_21);
		return result;
		}
		break;
		case 0x217:this_19 = (PerceptAgentWasJumpedOn *)VirtualPool::AllocateMemory(0x14);
		if (this_19 != (PerceptAgentWasJumpedOn *)0x0) {
		result = (PerceptAbstract *)PerceptAgentWasJumpedOn::Construct(this_19);
		return result;
		}
		break;
		case 0x218:this_18 = (PerceptAgentWasWalkedInto *)VirtualPool::AllocateMemory(0x14);
		if (this_18 != (PerceptAgentWasWalkedInto *)0x0) {
		result = (PerceptAbstract *)PerceptAgentWasWalkedInto::Construct(this_18);
		return result;
		}
		break;
		case 0x219:this_20 = (PerceptAgentWasHeadbutted *)VirtualPool::AllocateMemory(0x14);
		if (this_20 != (PerceptAgentWasHeadbutted *)0x0) {
		result = (PerceptAbstract *)PerceptAgentWasHeadbutted::Construct(this_20);
		return result;
		}
		break;
		case 0x21a:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x21a;
		result->vtable = &Percept_VT_PlayerToMyFocusSqrDist;
		return result;
		}
		break;
		case 0x21b:this_11 = (PerceptWumpaNeededForPayGate *)VirtualPool::AllocateMemory(0x14);
		if (this_11 != (PerceptWumpaNeededForPayGate *)0x0) {
		result = (PerceptAbstract *)PerceptWumpaNeededForPayGate::Construct(this_11);
		return result;
		}
		break;
		case 0x21c:this_59 = (PerceptMeFacingPlayer *)VirtualPool::AllocateMemory(0x14);
		if (this_59 != (PerceptMeFacingPlayer *)0x0) {
		result = (PerceptAbstract *)PerceptMeFacingPlayer::Construct(this_59);
		return result;
		}
		break;
		case 0x21d:this_60 = (PerceptPlayerFacingMe *)VirtualPool::AllocateMemory(0x14);
		if (this_60 != (PerceptPlayerFacingMe *)0x0) {
		result = (PerceptAbstract *)PerceptPlayerFacingMe::Construct(this_60);
		return result;
		}
		break;
		case 0x21e:this_62 = (PerceptClearLineOfSightToPlayer *)VirtualPool::AllocateMemory(0x14);
		if (this_62 != (PerceptClearLineOfSightToPlayer *)0x0) {
		result = (PerceptAbstract *)PerceptClearLineOfSightToPlayer::Construct(this_62);
		return result;
		}
		break;
		case 0x21f:this_63 = (PerceptCanSeePlayer *)VirtualPool::AllocateMemory(0x14);
		if (this_63 != (PerceptCanSeePlayer *)0x0) {
		result = (PerceptAbstract *)PerceptCanSeePlayer::Construct(this_63);
		return result;
		}
		break;
		case 0x220:this_64 = (PerceptPlayerCanSeeMe *)VirtualPool::AllocateMemory(0x14);
		if (this_64 != (PerceptPlayerCanSeeMe *)0x0) {
		result = (PerceptAbstract *)PerceptPlayerCanSeeMe::Construct(this_64);
		return result;
		}
		break;
		case 0x221:this_85 = (PerceptNodeTraffic *)VirtualPool::AllocateMemory(0x14);
		if (this_85 != (PerceptNodeTraffic *)0x0) {
		result = (PerceptAbstract *)PerceptNodeTraffic::Construct(this_85);
		return result;
		}
		break;
		case 0x222:this_39 = (PerceptNodeIsAirborne *)VirtualPool::AllocateMemory(0x14);
		if (this_39 != (PerceptNodeIsAirborne *)0x0) {
		result = (PerceptAbstract *)PerceptNodeIsAirborne::Construct(this_39);
		return result;
		}
		break;
		case 0x223:this_55 = (PerceptEdgeNeedsJump *)VirtualPool::AllocateMemory(0x14);
		if (this_55 != (PerceptEdgeNeedsJump *)0x0) {
		result = (PerceptAbstract *)PerceptEdgeNeedsJump::Construct(this_55);
		return result;
		}
		break;
		case 0x224:this_54 = (PerceptEdgeNeedsFlying *)VirtualPool::AllocateMemory(0x14);
		if (this_54 != (PerceptEdgeNeedsFlying *)0x0) {
		result = (PerceptAbstract *)PerceptEdgeNeedsFlying::Construct(this_54);
		return result;
		}
		break;
		case 0x226:this_56 = (PerceptEdgeNeedsLongJump *)VirtualPool::AllocateMemory(0x14);
		if (this_56 != (PerceptEdgeNeedsLongJump *)0x0) {
		result = (PerceptAbstract *)PerceptEdgeNeedsLongJump::Construct(this_56);
		return result;
		}
		break;
		case 0x227:this_57 = (PerceptEdgeNeedsHighJump *)VirtualPool::AllocateMemory(0x14);
		if (this_57 != (PerceptEdgeNeedsHighJump *)0x0) {
		result = (PerceptAbstract *)PerceptEdgeNeedsHighJump::Construct(this_57);
		return result;
		}
		break;
		case 0x228:this_66 = (PerceptHeightAbovePlayer *)VirtualPool::AllocateMemory(0x14);
		if (this_66 != (PerceptHeightAbovePlayer *)0x0) {
		result = (PerceptAbstract *)PerceptHeightAbovePlayer::Construct(this_66);
		return result;
		}
		break;
		case 0x229:this_67 = (PerceptHeadLookingAtPlayer *)VirtualPool::AllocateMemory(0x14);
		if (this_67 != (PerceptHeadLookingAtPlayer *)0x0) {
		result = (PerceptAbstract *)PerceptHeadLookingAtPlayer::Construct(this_67);
		return result;
		}
		break;
		case 0x22a:this_68 = (PerceptHeadCanSeePlayer *)VirtualPool::AllocateMemory(0x14);
		if (this_68 != (PerceptHeadCanSeePlayer *)0x0) {
		result = (PerceptAbstract *)PerceptHeadCanSeePlayer::Construct(this_68);
		return result;
		}
		break;
		case 0x22b:this_70 = (PerceptPlayerHeadLookingAtMe *)VirtualPool::AllocateMemory(0x14);
		if (this_70 != (PerceptPlayerHeadLookingAtMe *)0x0) {
		result = (PerceptAbstract *)PerceptPlayerHeadLookingAtMe::Construct(this_70);
		return result;
		}
		break;
		case 0x22c:this_71 = (PerceptPlayerHeadCanSeeMe *)VirtualPool::AllocateMemory(0x14);
		if (this_71 != (PerceptPlayerHeadCanSeeMe *)0x0) {
		result = (PerceptAbstract *)PerceptPlayerHeadCanSeeMe::Construct(this_71);
		return result;
		}
		break;
		case 0x22d:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x22d;
		result->vtable = &Percept_VT_PlayerIsMoving;
		return result;
		}
		break;
		case 0x22e:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x22e;
		result->vtable = &Percept_VT_PlayerIsWalking;
		return result;
		}
		break;
		case 0x22f:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x22f;
		result->vtable = &Percept_VT_PlayerIsRunning;
		return result;
		}
		break;
		case 0x230:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x230;
		result->vtable = &Percept_VT_PlayerIsCrawling;
		return result;
		}
		break;
		case 0x231:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x231;
		result->vtable = &Percept_VT_PlayerIsFalling;
		return result;
		}
		break;
		case 0x232:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x232;
		result->vtable = &Percept_VT_PlayerIsCoOpLinked;
		return result;
		}
		break;
		case 0x233:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x233;
		result->vtable = &Percept_VT_PlayerHoldingMultiTool;
		return result;
		}
		break;
		case 0x234:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x234;
		result->vtable = &Percept_VT_PlayerIsSlamming;
		return result;
		}
		break;
		case 0x235:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x235;
		result->vtable = &Percept_VT_PlayerIsSpinning;
		return result;
		}
		break;
		case 0x236:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x236;
		result->vtable = &Percept_VT_PlayerIsJumping;
		return result;
		}
		break;
		case 0x237:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x237;
		result->vtable = &Percept_VT_HeadCanSeePlayerUnblocked;
		return result;
		}
		break;
		case 0x238:this_69 = (PerceptAmIHarmful *)VirtualPool::AllocateMemory(0x14);
		if (this_69 != (PerceptAmIHarmful *)0x0) {
		result = (PerceptAbstract *)PerceptAmIHarmful::Construct(this_69);
		return result;
		}
		break;
		case 0x239:this_27 = (Percept0x239 *)VirtualPool::AllocateMemory(0x14);
		if (this_27 != (Percept0x239 *)0x0) {
		result = (PerceptAbstract *)Percept0x239::Construct(this_27);
		return result;
		}
		break;
		case 0x23a:this_75 = (Percept0x23A *)VirtualPool::AllocateMemory(0x14);
		if (this_75 != (Percept0x23A *)0x0) {
		result = (PerceptAbstract *)Percept0x23A::Construct(this_75);
		return result;
		}
		break;
		case 0x23b:this_76 = (Percept0x23B *)VirtualPool::AllocateMemory(0x14);
		if (this_76 != (Percept0x23B *)0x0) {
		result = (PerceptAbstract *)Percept0x23B::Construct(this_76);
		return result;
		}
		break;
		case 0x23c:this_77 = (Percept0x23C *)VirtualPool::AllocateMemory(0x14);
		if (this_77 != (Percept0x23C *)0x0) {
		result = (PerceptAbstract *)Percept0x23C::Construct(this_77);
		return result;
		}
		break;
		case 0x23d:this_78 = (Percept0x23D *)VirtualPool::AllocateMemory(0x14);
		if (this_78 != (Percept0x23D *)0x0) {
		result = (PerceptAbstract *)Percept0x23D::Construct(this_78);
		return result;
		}
		break;
		case 0x23e:this_79 = (Percept0x23E *)VirtualPool::AllocateMemory(0x14);
		if (this_79 != (Percept0x23E *)0x0) {
		result = (PerceptAbstract *)Percept0x23E::Construct(this_79);
		return result;
		}
		break;
		case 0x23f:this_80 = (Percept0x23F *)VirtualPool::AllocateMemory(0x14);
		if (this_80 != (Percept0x23F *)0x0) {
		result = (PerceptAbstract *)Percept0x23F::Construct(this_80);
		return result;
		}
		break;
		case 0x240:this_81 = (Percept0x240 *)VirtualPool::AllocateMemory(0x14);
		if (this_81 != (Percept0x240 *)0x0) {
		result = (PerceptAbstract *)Percept0x240::Construct(this_81);
		return result;
		}
		break;
		case 0x241:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x241;
		result->vtable = &Percept_VT_ID_0x241;
		return result;
		}
		break;
		case 0x242:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x242;
		result->vtable = &Percept_VT_ID_0x242;
		return result;
		}
		break;
		case 0x243:this_86 = (Percept0x243 *)VirtualPool::AllocateMemory(0x14);
		if (this_86 != (Percept0x243 *)0x0) {
		result = (PerceptAbstract *)Percept0x243::Construct(this_86);
		return result;
		}
		break;
		case 0x244:this_87 = (Percept0x244 *)VirtualPool::AllocateMemory(0x14);
		if (this_87 != (Percept0x244 *)0x0) {
		result = (PerceptAbstract *)Percept0x244::Construct(this_87);
		return result;
		}
		break;
		case 0x245:this_88 = (Percept0x245 *)VirtualPool::AllocateMemory(0x14);
		if (this_88 != (Percept0x245 *)0x0) {
		result = (PerceptAbstract *)Percept0x245::Construct(this_88);
		return result;
		}
		break;
		case 0x246:this_65 = (Percept0x246 *)VirtualPool::AllocateMemory(0x14);
		if (this_65 != (Percept0x246 *)0x0) {
		result = (PerceptAbstract *)Percept0x246::Construct(this_65);
		return result;
		}
		break;
		case 0x247:this_53 = (Percept0x247 *)VirtualPool::AllocateMemory(0x14);
		if (this_53 != (Percept0x247 *)0x0) {
		result = (PerceptAbstract *)Percept0x247::Construct(this_53);
		return result;
		}
		break;
		case 0x248:this_73 = (Percept0x248 *)VirtualPool::AllocateMemory(0x14);
		if (this_73 != (Percept0x248 *)0x0) {
		result = (PerceptAbstract *)Percept0x248::Construct(this_73);
		return result;
		}
		break;
		case 0x249:this_74 = (Percept0x249 *)VirtualPool::AllocateMemory(0x14);
		if (this_74 != (Percept0x249 *)0x0) {
		result = (PerceptAbstract *)Percept0x249::Construct(this_74);
		return result;
		}
		break;
		case 0x24a:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x24a;
		result->vtable = &Percept_VT_ID_0x24a;
		return result;
		}
		break;
		case 0x24b:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x24b;
		result->vtable = &Percept_VT_ID_0x24b;
		return result;
		}
		break;
		case 0x24c:this_28 = (Percept0x24C *)VirtualPool::AllocateMemory(0x14);
		if (this_28 != (Percept0x24C *)0x0) {
		result = (PerceptAbstract *)Percept0x24C::Construct(this_28);
		return result;
		}
		break;
		case 0x24d:this_29 = (Percept0x24D *)VirtualPool::AllocateMemory(0x14);
		if (this_29 != (Percept0x24D *)0x0) {
		result = (PerceptAbstract *)Percept0x24D::Construct(this_29);
		return result;
		}
		break;
		case 0x24e:this_31 = (Percept0x24E *)VirtualPool::AllocateMemory(0x14);
		if (this_31 != (Percept0x24E *)0x0) {
		result = (PerceptAbstract *)Percept0x24E::Construct(this_31);
		return result;
		}
		break;
		case 0x24f:this_32 = (Percept0x24F *)VirtualPool::AllocateMemory(0x14);
		if (this_32 != (Percept0x24F *)0x0) {
		result = (PerceptAbstract *)Percept0x24F::Construct(this_32);
		return result;
		}
		break;
		case 0x250:this_30 = (Percept0x250 *)VirtualPool::AllocateMemory(0x14);
		if (this_30 != (Percept0x250 *)0x0) {
		result = (PerceptAbstract *)Percept0x250::Construct(this_30);
		return result;
		}
		break;
		case 0x251:this_89 = (Percept0x251 *)VirtualPool::AllocateMemory(0x14);
		if (this_89 != (Percept0x251 *)0x0) {
		result = (PerceptAbstract *)Percept0x251::Construct(this_89);
		return result;
		}
		break;
		case 0x252:this_90 = (Percept0x252 *)VirtualPool::AllocateMemory(0x14);
		if (this_90 != (Percept0x252 *)0x0) {
		result = (PerceptAbstract *)Percept0x252::Construct(this_90);
		return result;
		}
		break;
		case 0x253:this_92 = (Percept0x253 *)VirtualPool::AllocateMemory(0x14);
		if (this_92 != (Percept0x253 *)0x0) {
		result = (PerceptAbstract *)Percept0x253::Construct(this_92);
		return result;
		}
		break;
		case 0x254:this_93 = (Percept0x254 *)VirtualPool::AllocateMemory(0x14);
		if (this_93 != (Percept0x254 *)0x0) {
		result = (PerceptAbstract *)Percept0x254::Construct(this_93);
		return result;
		}
		break;
		case 0x255:this_94 = (Percept0x255 *)VirtualPool::AllocateMemory(0x14);
		if (this_94 != (Percept0x255 *)0x0) {
		result = (PerceptAbstract *)Percept0x255::Construct(this_94);
		return result;
		}
		break;
		case 0x256:this_95 = (Percept0x256 *)VirtualPool::AllocateMemory(0x14);
		if (this_95 != (Percept0x256 *)0x0) {
		result = (PerceptAbstract *)Percept0x256::Construct(this_95);
		return result;
		}
		break;
		case 599:this_40 = (Percept0x257 *)VirtualPool::AllocateMemory(0x14);
		if (this_40 != (Percept0x257 *)0x0) {
		result = (PerceptAbstract *)Percept0x257::Construct(this_40);
		return result;
		}
		break;
		case 600:this_41 = (Percept0x258 *)VirtualPool::AllocateMemory(0x14);
		if (this_41 != (Percept0x258 *)0x0) {
		result = (PerceptAbstract *)Percept0x258::Construct(this_41);
		return result;
		}
		break;
		case 0x259:this_42 = (Percept0x259 *)VirtualPool::AllocateMemory(0x14);
		if (this_42 != (Percept0x259 *)0x0) {
		result = (PerceptAbstract *)Percept0x259::Construct(this_42);
		return result;
		}
		break;
		case 0x25a:this_58 = (Percept0x25A *)VirtualPool::AllocateMemory(0x14);
		if (this_58 != (Percept0x25A *)0x0) {
		result = (PerceptAbstract *)Percept0x25A::Construct(this_58);
		return result;
		}
		break;
		case 0x25b:this_45 = (Percept0x25B *)VirtualPool::AllocateMemory(0x14);
		if (this_45 != (Percept0x25B *)0x0) {
		result = (PerceptAbstract *)Percept0x25B::Construct(this_45);
		return result;
		}
		break;
		case 0x25c:this_46 = (Percept0x25C *)VirtualPool::AllocateMemory(0x14);
		if (this_46 != (Percept0x25C *)0x0) {
		result = (PerceptAbstract *)Percept0x25C::Construct(this_46);
		return result;
		}
		break;
		case 0x25d:this_47 = (Percept0x25D *)VirtualPool::AllocateMemory(0x14);
		if (this_47 != (Percept0x25D *)0x0) {
		result = (PerceptAbstract *)Percept0x25D::Construct(this_47);
		return result;
		}
		break;
		case 0x25e:this_49 = (Percept0x25E *)VirtualPool::AllocateMemory(0x14);
		if (this_49 != (Percept0x25E *)0x0) {
		result = (PerceptAbstract *)Percept0x25E::Construct(this_49);
		return result;
		}
		break;
		case 0x25f:this_50 = (Percept0x25F *)VirtualPool::AllocateMemory(0x14);
		if (this_50 != (Percept0x25F *)0x0) {
		result = (PerceptAbstract *)Percept0x25F::Construct(this_50);
		return result;
		}
		break;
		case 0x260:this_51 = (Percept0x260 *)VirtualPool::AllocateMemory(0x14);
		if (this_51 != (Percept0x260 *)0x0) {
		result = (PerceptAbstract *)Percept0x260::Construct(this_51);
		return result;
		}
		break;
		case 0x261:this = (Percept0x261 *)VirtualPool::AllocateMemory(0x14);
		if (this != (Percept0x261 *)0x0) {
		result = (PerceptAbstract *)Percept0x261::Construct(this);
		return result;
		}
		break;
		case 0x262:this_33 = (Percept0x262 *)VirtualPool::AllocateMemory(0x14);
		if (this_33 != (Percept0x262 *)0x0) {
		result = (PerceptAbstract *)Percept0x262::Construct(this_33);
		return result;
		}
		break;
		case 0x263:this_35 = (Percept0x263 *)VirtualPool::AllocateMemory(0x14);
		if (this_35 != (Percept0x263 *)0x0) {
		result = (PerceptAbstract *)Percept0x263::Construct(this_35);
		return result;
		}
		break;
		case 0x264:this_43 = (Percept0x264 *)VirtualPool::AllocateMemory(0x14);
		if (this_43 != (Percept0x264 *)0x0) {
		result = (PerceptAbstract *)Percept0x264::Construct(this_43);
		return result;
		}
		break;
		case 0x265:this_48 = (Percept0x265 *)VirtualPool::AllocateMemory(0x14);
		if (this_48 != (Percept0x265 *)0x0) {
		result = (PerceptAbstract *)Percept0x265::Construct(this_48);
		return result;
		}
		break;
		case 0x266:this_52 = (Percept0x266 *)VirtualPool::AllocateMemory(0x14);
		if (this_52 != (Percept0x266 *)0x0) {
		result = (PerceptAbstract *)Percept0x266::Construct(this_52);
		return result;
		}
		break;
		case 0x267:this_44 = (Percept0x267 *)VirtualPool::AllocateMemory(0x14);
		if (this_44 != (Percept0x267 *)0x0) {
		result = (PerceptAbstract *)Percept0x267::Construct(this_44);
		return result;
		}
		break;
		case 0x268:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x268;
		result->vtable = &Percept_VT_ID_0x268;
		return result;
		}
		break;
		case 0x269:this_00 = (Percept0x269 *)VirtualPool::AllocateMemory(0x14);
		if (this_00 != (Percept0x269 *)0x0) {
		result = (PerceptAbstract *)Percept0x269::Construct(this_00);
		return result;
		}
		break;
		case 0x26a:this_61 = (Percept0x26A *)VirtualPool::AllocateMemory(0x14);
		if (this_61 != (Percept0x26A *)0x0) {
		result = (PerceptAbstract *)Percept0x26A::Construct(this_61);
		return result;
		}
		break;
		case 0x26b:this_01 = (Percept0x26B *)VirtualPool::AllocateMemory(0x14);
		if (this_01 != (Percept0x26B *)0x0) {
		result = (PerceptAbstract *)Percept0x26B::Construct(this_01);
		return result;
		}
		break;
		case 0x26c:this_96 = (Percept0x26C *)VirtualPool::AllocateMemory(0x14);
		if (this_96 != (Percept0x26C *)0x0) {
		result = (PerceptAbstract *)Percept0x26C::Construct(this_96);
		return result;
		}
		break;
		case 0x26d:this_03 = (Percept0x26D *)VirtualPool::AllocateMemory(0x14);
		if (this_03 != (Percept0x26D *)0x0) {
		result = (PerceptAbstract *)Percept0x26D::Construct(this_03);
		return result;
		}
		break;
		case 0x26e:this_82 = (Percept0x26E *)VirtualPool::AllocateMemory(0x14);
		if (this_82 != (Percept0x26E *)0x0) {
		result = (PerceptAbstract *)Percept0x26E::Construct(this_82);
		return result;
		}
		break;
		case 0x26f:this_04 = (Percept0x26F *)VirtualPool::AllocateMemory(0x14);
		if (this_04 != (Percept0x26F *)0x0) {
		result = (PerceptAbstract *)Percept0x26F::Construct(this_04);
		return result;
		}
		break;
		case 0x270:this_05 = (Percept0x270 *)VirtualPool::AllocateMemory(0x14);
		if (this_05 != (Percept0x270 *)0x0) {
		result = (PerceptAbstract *)Percept0x270::Construct(this_05);
		return result;
		}
		break;
		case 0x271:this_36 = (Percept0x271 *)VirtualPool::AllocateMemory(0x14);
		if (this_36 != (Percept0x271 *)0x0) {
		result = (PerceptAbstract *)Percept0x271::Construct(this_36);
		return result;
		}
		break;
		case 0x272:this_37 = (Percept0x272 *)VirtualPool::AllocateMemory(0x14);
		if (this_37 != (Percept0x272 *)0x0) {
		result = (PerceptAbstract *)Percept0x272::Construct(this_37);
		return result;
		}
		break;
		case 0x273:this_91 = (Percept0x273 *)VirtualPool::AllocateMemory(0x14);
		if (this_91 != (Percept0x273 *)0x0) {
		result = (PerceptAbstract *)Percept0x273::Construct(this_91);
		return result;
		}
		break;
		case 0x274:this_98 = (Percept0x274 *)VirtualPool::AllocateMemory(0x14);
		if (this_98 != (Percept0x274 *)0x0) {
		result = (PerceptAbstract *)Percept0x274::Construct(this_98);
		return result;
		}
		break;
		case 0x275:this_06 = (Percept0x275 *)VirtualPool::AllocateMemory(0x14);
		if (this_06 != (Percept0x275 *)0x0) {
		result = (PerceptAbstract *)Percept0x275::Construct(this_06);
		return result;
		}
		break;
		case 0x276:this_08 = (Percept0x276 *)VirtualPool::AllocateMemory(0x14);
		if (this_08 != (Percept0x276 *)0x0) {
		result = (PerceptAbstract *)Percept0x276::Construct(this_08);
		return result;
		}
		break;
		case 0x277:this_x00102 = (Percept0x277 *)VirtualPool::AllocateMemory(0x14);
		if (this_x00102 != (Percept0x277 *)0x0) {
		result = (PerceptAbstract *)Percept0x277::Construct(this_x00102);
		return result;
		}
		break;
		case 0x278:this_x00103 = (Percept0x278 *)VirtualPool::AllocateMemory(0x14);
		if (this_x00103 != (Percept0x278 *)0x0) {
		result = (PerceptAbstract *)Percept0x278::Construct(this_x00103);
		return result;
		}
		break;
		case 0x279:this_83 = (Percept0x279 *)VirtualPool::AllocateMemory(0x14);
		if (this_83 != (Percept0x279 *)0x0) {
		result = (PerceptAbstract *)Percept0x279::Construct(this_83);
		return result;
		}
		break;
		case 0x27a:this_84 = (Percept0x27A *)VirtualPool::AllocateMemory(0x14);
		if (this_84 != (Percept0x27A *)0x0) {
		result = (PerceptAbstract *)Percept0x27A::Construct(this_84);
		return result;
		}
		break;
		case 0x27b:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x27b;
		result->vtable = &Percept_VT_ID_0x27b;
		return result;
		}
		break;
		case 0x27c:this_34 = (Percept0x27C *)VirtualPool::AllocateMemory(0x14);
		if (this_34 != (Percept0x27C *)0x0) {
		result = (PerceptAbstract *)Percept0x27C::Construct(this_34);
		return result;
		}
		break;
		case 0x27d:this_x00104 = (Percept0x27D *)VirtualPool::AllocateMemory(0x14);
		if (this_x00104 != (Percept0x27D *)0x0) {
		result = (PerceptAbstract *)Percept0x27D::Construct(this_x00104);
		return result;
		}
		break;
		case 0x27e:this_38 = (Percept0x27E *)VirtualPool::AllocateMemory(0x14);
		if (this_38 != (Percept0x27E *)0x0) {
		result = (PerceptAbstract *)Percept0x27E::Construct(this_38);
		return result;
		}
		break;
		case 0x27f:this_x00105 = (Percept0x27F *)VirtualPool::AllocateMemory(0x14);
		if (this_x00105 != (Percept0x27F *)0x0) {
		result = (PerceptAbstract *)Percept0x27F::Construct(this_x00105);
		return result;
		}
		break;
		case 0x280:this_97 = (Percept0x280 *)VirtualPool::AllocateMemory(0x14);
		if (this_97 != (Percept0x280 *)0x0) {
		result = (PerceptAbstract *)Percept0x280::Construct(this_97);
		return result;
		}
		break;
		case 0x281:this_x00107 = (Percept0x281 *)VirtualPool::AllocateMemory(0x14);
		if (this_x00107 != (Percept0x281 *)0x0) {
		result = (PerceptAbstract *)Percept0x281::Construct(this_x00107);
		return result;
		}
		break;
		case 0x282:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x282;
		result->vtable = &Percept_VT_ID_0x282;
		return result;
		}
		break;
		case 0x283:this_x00106 = (Percept0x283 *)VirtualPool::AllocateMemory(0x14);
		if (this_x00106 != (Percept0x283 *)0x0) {
		result = (PerceptAbstract *)Percept0x283::Construct(this_x00106);
		return result;
		}
		break;
		case 0x284:result = (PerceptAbstract *)VirtualPool::AllocateMemory(0x14);
		if (result != (PerceptAbstract *)0x0) {
		result->PerceptID = 0;
		*(undefined2 *)&result->PerceptID = 0x284;
		result->vtable = &Percept_VT_ID_0x284;
		return result;
		}
		}
		}
		return (PerceptAbstract *)0x0;
		}
		
	*/
	return null;
}

void PerceptFactory::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall PerceptFactory::Construct(PerceptFactory *this){
		this->vtable = (PerceptFactory_VTable *)&AgentLab_VT_PerceptFactory;
		return;
		}
		
	*/
	return;
}

