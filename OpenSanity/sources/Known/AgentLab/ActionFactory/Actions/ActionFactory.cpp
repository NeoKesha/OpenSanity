#include "headers/Known/AgentLab/ActionFactory/Actions/ActionFactory.h"

#include "headers/Known/AgentLab/ActionFactory/Actions/ActionAbstract.h"
void ActionFactory::Dispose(byte flag) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionFactory * __thiscall ActionFactory::Dispose(ActionFactory *this,byte flag){
		this->vtable = (ActionFactory_VTable *)&Builder_VT_Abstract;
		if ((flag & 1) != 0) {
		VirtualPool::FreeMemory(this);
		}
		return this;
		}
		
	*/
	return;
}

void* ActionFactory::BUILD(uint id) {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	ActionAbstract * ActionFactory::BUILD(int id,int arg){
		ActionSetObject *pAVar1;
		ActionKeep *pAVar2;
		Action0x0D0 *pAVar3;
		Action0x0D1 *pAVar4;
		ActionDestroyMe *pAVar5;
		Action0x07A *pAVar6;
		ActionAddTrail *pAVar7;
		Action0x285 *pAVar8;
		Action0x0B2 *pAVar9;
		ActionSetKey *pAVar10;
		ActionRunScriptSlot *pAVar11;
		Action0x0AB *pAVar12;
		Action0x0AC *pAVar13;
		Action0x0B7 *pAVar14;
		Action0x0B8 *pAVar15;
		Action0x0C6 *pAVar16;
		ActionSetBehaviourPriority *pAVar17;
		ActionSpawnResidentAgent *pAVar18;
		Action0x09D *pAVar19;
		Action0x0A3 *pAVar20;
		Action0x0A4 *pAVar21;
		Action0x288 *pAVar22;
		ActionUnsupportAbove *pAVar23;
		Action0x095 *pAVar24;
		ActionRequestAttachmentFocus *pAVar25;
		Action0x07D *pAVar26;
		Action0x079 *pAVar27;
		ActionSetFocusProperties *pAVar28;
		Action0x0C8 *pAVar29;
		ActionDoAnim *pAVar30;
		ActionClearAnim *pAVar31;
		ActionForceAnimUpdate *pAVar32;
		ActionSetShadow *pAVar33;
		ActionSetShadowCircle *pAVar34;
		ActionSetShadowMesh *pAVar35;
		ActionSetShadowRectangle *pAVar36;
		ActionDummy197 *pAVar37;
		ActionDoSound *pAVar38;
		Action0x0C2 *pAVar39;
		Action0x0B9 *pAVar40;
		Action0x0D7 *pAVar41;
		ActionSetSound *pAVar42;
		ActionBeginMusic *pAVar43;
		ActionEndContextMusic *pAVar44;
		Action0x0B0 *pAVar45;
		ActionSetWoble *pAVar46;
		ActionAlertWobblePhase *pAVar47;
		Action0x098 *pAVar48;
		Action0x094 *pAVar49;
		ActionStoreCurrentSpace *pAVar50;
		ActionPosWarp *pAVar51;
		Action0x0B1 *pAVar52;
		Action0x096 *pAVar53;
		Action0x099 *pAVar54;
		ActionTriggerLinkedObjects *pAVar55;
		Action0x084 *pAVar56;
		Action0x246 *pAVar57;
		Action0x088 *pAVar58;
		Action0x089 *pAVar59;
		Action0x08A *pAVar60;
		Action0x08B *pAVar61;
		Action0x08C *pAVar62;
		ActionSendUserMessage *pAVar63;
		ActionBroadcastUserMessage *pAVar64;
		Action0x0D2 *pAVar65;
		Action0x075 *pAVar66;
		Action0x076 *pAVar67;
		ActionRequestMessSourceAsFocus *pAVar68;
		Action0x09C *pAVar69;
		ActionSetCollisions *pAVar70;
		Action0x276 *pAVar71;
		Action0x0A6 *pAVar72;
		ActionSetLogicalRadius *pAVar73;
		ActionContinueColliderMotion *pAVar74;
		ActionColliderLaunchNow *pAVar75;
		Action0x0C1 *pAVar76;
		ActionApplyImpulse *pAVar77;
		Action0x07F *pAVar78;
		Action0x0CB *pAVar79;
		ActionSetContactSpringy *pAVar80;
		ActionBecomeSticky *pAVar81;
		ActionBecomeNormal *pAVar82;
		Action0x266 *pAVar83;
		Action0x09E *pAVar84;
		ActionSetSurface *pAVar85;
		Action0x082 *pAVar86;
		Action0x24B *pAVar87;
		Action0x0A8 *pAVar88;
		ActionAttachSpring *pAVar89;
		ActionDropAttachedObject *pAVar90;
		ActionThrowAttachedObject *pAVar91;
		ActionDestroySpawnedAttachment *pAVar92;
		ActionForceVolumeController *pAVar93;
		ActionSetCounter *pAVar94;
		ActionModifyCounter *pAVar95;
		Action0x0A2 *pAVar96;
		Action0x0AA *pAVar97;
		ActionNowTransformJoint *pAVar98;
		Action0x092 *pAVar99;
		Action0x05F *pAVar100;
		Action0x060 *pAVar101;
		ActionAttachFocusObject *pAVar102;
		ActionSetFocusToKey *pAVar103;
		ActionSetFocusToAgent *pAVar104;
		ActionRequestMessagersFocus *pAVar105;
		ActionSetFocusPosition *pAVar106;
		ActionAddNoiseToFocusPos *pAVar107;
		ActionCreateCrateContents *pAVar108;
		ActionCreateDamage *pAVar109;
		Action0x269 *pAVar110;
		ActionDamageOriginator *pAVar111;
		ActionSetAgent *pAVar112;
		ActionSetPlayerMode *pAVar113;
		Action0x216 *pAVar114;
		Action0x287 *pAVar115;
		ActionFadeoutScreen *pAVar116;
		ActionDisplayBottomText *pAVar117;
		ActionDisplayBottomTextInstance *pAVar118;
		ActionCutsceneStart *pAVar119;
		ActionCutsceneEnd *pAVar120;
		ActionShowBottomText *pAVar121;
		ActionHideBottomText *pAVar122;
		Action0x0B4 *pAVar123;
		ActionSetCrate *pAVar124;
		Action0x23E *pAVar125;
		ActionControllerRumble *pAVar126;
		Action0x281 *pAVar127;
		ActionCharacterSoundProxy *pAVar128;
		Action0x242 *pAVar129;
		ActionSetPlayerInput *pAVar130;
		ActionApplyVelocity *pAVar131;
		ActionApplyVelocityToSelf *pAVar132;
		ActionNowGoBackCollidable *pAVar133;
		ActionSetChiChiGrass *pAVar134;
		Action0x293 *pAVar135;
		ActionDismissCharacter *pAVar136;
		Action0x268 *pAVar137;
		Action0x267 *pAVar138;
		ActionSwitchCharacter *pAVar139;
		ActionPlayerVehicleBounce *pAVar140;
		ActionSetKeyNearestPlayer *pAVar141;
		ActionRaycastFocusPosition *pAVar142;
		Action0x23F *pAVar143;
		ActionRequestFocus *pAVar144;
		Action0x0A9 *pAVar145;
		Action0x0CC *pAVar146;
		Action0x0CD *pAVar147;
		Action0x243 *pAVar148;
		ActionSetRayTests *pAVar149;
		ActionDummy536 *pAVar150;
		ActionSetCamera *pAVar151;
		Action0x247 *pAVar152;
		Action0x24F *pAVar153;
		ActionCameraSaveLoadParams *pAVar154;
		ActionToggleCutsceneCamera *pAVar155;
		Action0x253 *pAVar156;
		Action0x274 *pAVar157;
		Action0x275 *pAVar158;
		ActionAbstract *pAVar159;
		ActionAttachAllLinkedAgents *pAVar160;
		ActionPickUpGem *pAVar161;
		ActionPickUpWumpa *pAVar162;
		ActionSetPickup *pAVar163;
		ActionSetProjectile *pAVar164;
		ActionShoot *pAVar165;
		ActionGetShortRoute *pAVar166;
		Action0x23D *pAVar167;
		ActionSetPlayRespawnPosition *pAVar168;
		ActionDummy568 *pAVar169;
		ActionSetVehicleRollerbrawl *pAVar170;
		ActionSetVehicleHumiliskate *pAVar171;
		ActionSetVehicleHoverboard *pAVar172;
		Action0x23C *pAVar173;
		ActionEnableBossMode *pAVar174;
		ActionStartWhackaworm *pAVar175;
		Action0x286 *pAVar176;
		Action0x278 *pAVar177;
		Action0x28F *pAVar178;
		Action0x295 *pAVar179;
		Action0x292 *pAVar180;
		ActionPlayMovie *pAVar181;
		if (arg == -10) {
		switch(id) {
		case 1:case 0x21d:pAVar7 = (ActionAddTrail *)VirtualPool::AllocateMemory(0x80);
		if (pAVar7 != (ActionAddTrail *)0x0) {
		pAVar7 = ActionAddTrail::Construct(pAVar7);
		return &pAVar7->parent;
		}
		break;
		case 2:case 0x21e:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ClearTrail;
		return pAVar159;
		}
		break;
		case 3:pAVar51 = (ActionPosWarp *)VirtualPool::AllocateMemory(0x20);
		if (pAVar51 != (ActionPosWarp *)0x0) {
		pAVar51 = ActionPosWarp::Construct(pAVar51,0);
		return &pAVar51->parent;
		}
		break;
		case 4:pAVar10 = (ActionSetKey *)VirtualPool::AllocateMemory(0x10);
		if (pAVar10 != (ActionSetKey *)0x0) {
		pAVar10 = ActionSetKey::Construct(pAVar10);
		return &pAVar10->parent;
		}
		break;
		case 5:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_NextKey;
		return pAVar159;
		}
		break;
		case 7:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_RestartPrevious;
		return pAVar159;
		}
		break;
		case 8:pAVar18 = (ActionSpawnResidentAgent *)VirtualPool::AllocateMemory(0x40);
		if (pAVar18 != (ActionSpawnResidentAgent *)0x0) {
		pAVar18 = ActionSpawnResidentAgent::Construct(pAVar18,0);
		return &pAVar18->parent;
		}
		break;
		case 9:case 0x21f:pAVar30 = (ActionDoAnim *)VirtualPool::AllocateMemory(0x24);
		if (pAVar30 != (ActionDoAnim *)0x0) {
		pAVar30 = ActionDoAnim::Construct(pAVar30);
		return &pAVar30->parent;
		}
		break;
		case 10:case 0x220:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x30);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_DoParticle;
		return pAVar159;
		}
		break;
		case 0xb:case 0x221:pAVar38 = (ActionDoSound *)VirtualPool::AllocateMemory(0x48);
		if (pAVar38 != (ActionDoSound *)0x0) {
		pAVar38 = ActionDoSound::Construct(pAVar38);
		return &pAVar38->parent;
		}
		break;
		case 0xc:pAVar46 = (ActionSetWoble *)VirtualPool::AllocateMemory(0x94);
		if (pAVar46 != (ActionSetWoble *)0x0) {
		pAVar46 = ActionSetWoble::Construct(pAVar46);
		return &pAVar46->parent;
		}
		break;
		case 0xd:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ClearWobble;
		return pAVar159;
		}
		break;
		case 0xe:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_NowMoveForwards;
		pAVar159[1].vtable = (ActionAbstract_VTable *)0x0;
		return pAVar159;
		}
		break;
		case 0xf:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_NowMoveBackwards;
		pAVar159[1].vtable = (ActionAbstract_VTable *)0x0;
		return pAVar159;
		}
		break;
		case 0x10:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_NowStrafeLeft;
		pAVar159[1].vtable = (ActionAbstract_VTable *)0x0;
		return pAVar159;
		}
		break;
		case 0x11:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_NowStrafeRight;
		pAVar159[1].vtable = (ActionAbstract_VTable *)0x0;
		return pAVar159;
		}
		break;
		case 0x12:case 0x13:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_NowTurnLeft;
		pAVar159[1].vtable = (ActionAbstract_VTable *)0x0;
		return pAVar159;
		}
		break;
		case 0x17:pAVar98 = (ActionNowTransformJoint *)VirtualPool::AllocateMemory(0x10);
		if (pAVar98 != (ActionNowTransformJoint *)0x0) {
		pAVar98 = ActionNowTransformJoint::Construct(pAVar98,2);
		return &pAVar98->parent;
		}
		break;
		case 0x18:pAVar98 = (ActionNowTransformJoint *)VirtualPool::AllocateMemory(0x10);
		if (pAVar98 != (ActionNowTransformJoint *)0x0) {
		pAVar98 = ActionNowTransformJoint::Construct(pAVar98,1);
		return &pAVar98->parent;
		}
		break;
		case 0x1b:pAVar50 = (ActionStoreCurrentSpace *)VirtualPool::AllocateMemory(0x10);
		if (pAVar50 != (ActionStoreCurrentSpace *)0x0) {
		pAVar50 = ActionStoreCurrentSpace::Construct(pAVar50);
		return &pAVar50->parent;
		}
		break;
		case 0x1c:pAVar103 = (ActionSetFocusToKey *)VirtualPool::AllocateMemory(0x10);
		if (pAVar103 != (ActionSetFocusToKey *)0x0) {
		pAVar103 = ActionSetFocusToKey::Construct(pAVar103,0);
		return &pAVar103->parent;
		}
		break;
		case 0x1d:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x20);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_RotWarp;
		return pAVar159;
		}
		break;
		case 0x1f:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ClearThreats;
		*(undefined *)&pAVar159[1].vtable = 0;
		return pAVar159;
		}
		break;
		case 0x21:pAVar55 = (ActionTriggerLinkedObjects *)VirtualPool::AllocateMemory(0x10);
		if (pAVar55 != (ActionTriggerLinkedObjects *)0x0) {
		pAVar55 = ActionTriggerLinkedObjects::Construct(pAVar55);
		return &pAVar55->parent;
		}
		break;
		case 0x22:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_SetState;
		*(undefined *)&pAVar159[1].vtable = 0;
		return pAVar159;
		}
		break;
		case 0x23:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ToggleState;
		return pAVar159;
		}
		break;
		case 0x24:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_NextRouteNode;
		return pAVar159;
		}
		break;
		case 0x27:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_DiscardRoute;
		return pAVar159;
		}
		break;
		case 0x28:pAVar73 = (ActionSetLogicalRadius *)VirtualPool::AllocateMemory(0x14);
		if (pAVar73 != (ActionSetLogicalRadius *)0x0) {
		pAVar73 = ActionSetLogicalRadius::Construct(pAVar73);
		return &pAVar73->parent;
		}
		break;
		case 0x2a:pAVar17 = (ActionSetBehaviourPriority *)VirtualPool::AllocateMemory(0x10);
		if (pAVar17 != (ActionSetBehaviourPriority *)0x0) {
		pAVar17 = ActionSetBehaviourPriority::Construct(pAVar17);
		return &pAVar17->parent;
		}
		break;
		case 0x2c:pAVar70 = (ActionSetCollisions *)VirtualPool::AllocateMemory(0x50);
		if (pAVar70 != (ActionSetCollisions *)0x0) {
		pAVar70 = ActionSetCollisions::Construct(pAVar70);
		return &pAVar70->parent;
		}
		break;
		case 0x2d:pAVar104 = (ActionSetFocusToAgent *)VirtualPool::AllocateMemory(0x10);
		if (pAVar104 != (ActionSetFocusToAgent *)0x0) {
		pAVar104 = ActionSetFocusToAgent::Construct(pAVar104,0);
		return &pAVar104->parent;
		}
		break;
		case 0x2f:case 0x40:pAVar102 = (ActionAttachFocusObject *)VirtualPool::AllocateMemory(0x30);
		if (pAVar102 != (ActionAttachFocusObject *)0x0) {
		pAVar102 = ActionAttachFocusObject::Construct(pAVar102,0);
		return &pAVar102->parent;
		}
		break;
		case 0x30:pAVar90 = (ActionDropAttachedObject *)VirtualPool::AllocateMemory(0x40);
		if (pAVar90 != (ActionDropAttachedObject *)0x0) {
		pAVar90 = ActionDropAttachedObject::Construct(pAVar90);
		return &pAVar90->parent;
		}
		break;
		case 0x31:pAVar91 = (ActionThrowAttachedObject *)VirtualPool::AllocateMemory(0x30);
		if (pAVar91 != (ActionThrowAttachedObject *)0x0) {
		pAVar91 = ActionThrowAttachedObject::Construct(pAVar91);
		return &pAVar91->parent;
		}
		break;
		case 0x32:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_UnsupportOverFocus;
		return pAVar159;
		}
		break;
		case 0x33:pAVar23 = (ActionUnsupportAbove *)VirtualPool::AllocateMemory(0x20);
		if (pAVar23 != (ActionUnsupportAbove *)0x0) {
		pAVar23 = ActionUnsupportAbove::Construct(pAVar23);
		return &pAVar23->parent;
		}
		break;
		case 0x34:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ClearFocus;
		return pAVar159;
		}
		break;
		case 0x35:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ClearCollisions;
		return pAVar159;
		}
		break;
		case 0x36:case 0x41:pAVar63 = (ActionSendUserMessage *)VirtualPool::AllocateMemory(0x20);
		if (pAVar63 != (ActionSendUserMessage *)0x0) {
		pAVar63 = ActionSendUserMessage::Construct(pAVar63);
		return &pAVar63->parent;
		}
		break;
		case 0x37:pAVar64 = (ActionBroadcastUserMessage *)VirtualPool::AllocateMemory(0x40);
		if (pAVar64 != (ActionBroadcastUserMessage *)0x0) {
		pAVar64 = ActionBroadcastUserMessage::Construct(pAVar64);
		return &pAVar64->parent;
		}
		break;
		case 0x38:pAVar31 = (ActionClearAnim *)VirtualPool::AllocateMemory(0x14);
		if (pAVar31 != (ActionClearAnim *)0x0) {
		pAVar31 = ActionClearAnim::Construct(pAVar31);
		return &pAVar31->parent;
		}
		break;
		case 0x39:pAVar25 = (ActionRequestAttachmentFocus *)VirtualPool::AllocateMemory(0x10);
		if (pAVar25 != (ActionRequestAttachmentFocus *)0x0) {
		pAVar25 = ActionRequestAttachmentFocus::Construct(pAVar25);
		return &pAVar25->parent;
		}
		break;
		case 0x3b:pAVar105 = (ActionRequestMessagersFocus *)VirtualPool::AllocateMemory(0x10);
		if (pAVar105 != (ActionRequestMessagersFocus *)0x0) {
		pAVar105 = ActionRequestMessagersFocus::Construct(pAVar105,0);
		return &pAVar105->parent;
		}
		break;
		case 0x3c:pAVar106 = (ActionSetFocusPosition *)VirtualPool::AllocateMemory(0x60);
		if (pAVar106 != (ActionSetFocusPosition *)0x0) {
		pAVar106 = ActionSetFocusPosition::Construct(pAVar106,0);
		return &pAVar106->parent;
		}
		break;
		case 0x3d:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_StopMoving;
		return pAVar159;
		}
		break;
		case 0x3e:pAVar107 = (ActionAddNoiseToFocusPos *)VirtualPool::AllocateMemory(0x20);
		if (pAVar107 != (ActionAddNoiseToFocusPos *)0x0) {
		pAVar107 = ActionAddNoiseToFocusPos::Construct(pAVar107,0);
		return &pAVar107->parent;
		}
		break;
		case 0x3f:case 0x213:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_RestartDefaultBehaviour;
		return pAVar159;
		}
		break;
		case 0x42:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ClearUserMessage;
		return pAVar159;
		}
		break;
		case 0x43:pAVar68 = (ActionRequestMessSourceAsFocus *)VirtualPool::AllocateMemory(0x10);
		if (pAVar68 != (ActionRequestMessSourceAsFocus *)0x0) {
		pAVar68 = ActionRequestMessSourceAsFocus::Construct(pAVar68,0);
		return &pAVar68->parent;
		}
		break;
		case 0x44:pAVar94 = (ActionSetCounter *)VirtualPool::AllocateMemory(0x14);
		if (pAVar94 != (ActionSetCounter *)0x0) {
		pAVar94 = ActionSetCounter::Construct(pAVar94);
		return &pAVar94->parent;
		}
		break;
		case 0x45:pAVar95 = (ActionModifyCounter *)VirtualPool::AllocateMemory(0x18);
		if (pAVar95 != (ActionModifyCounter *)0x0) {
		pAVar95 = ActionModifyCounter::Construct(pAVar95);
		return &pAVar95->parent;
		}
		break;
		case 0x46:pAVar74 = (ActionContinueColliderMotion *)VirtualPool::AllocateMemory(0x30);
		if (pAVar74 != (ActionContinueColliderMotion *)0x0) {
		pAVar74 = ActionContinueColliderMotion::Construct(pAVar74);
		return &pAVar74->parent;
		}
		break;
		case 0x47:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_RevertColliderMotion;
		return pAVar159;
		}
		break;
		case 0x48:pAVar75 = (ActionColliderLaunchNow *)VirtualPool::AllocateMemory(0x50);
		if (pAVar75 != (ActionColliderLaunchNow *)0x0) {
		pAVar75 = ActionColliderLaunchNow::Construct(pAVar75);
		return &pAVar75->parent;
		}
		break;
		case 0x4a:pAVar32 = (ActionForceAnimUpdate *)VirtualPool::AllocateMemory(0x10);
		if (pAVar32 != (ActionForceAnimUpdate *)0x0) {
		pAVar32 = ActionForceAnimUpdate::Construct(pAVar32);
		return &pAVar32->parent;
		}
		break;
		case 0x4b:pAVar92 = (ActionDestroySpawnedAttachment *)VirtualPool::AllocateMemory(0x10);
		if (pAVar92 != (ActionDestroySpawnedAttachment *)0x0) {
		pAVar92 = ActionDestroySpawnedAttachment::Construct(pAVar92);
		return &pAVar92->parent;
		}
		break;
		case 0x4c:pAVar77 = (ActionApplyImpulse *)VirtualPool::AllocateMemory(0x30);
		if (pAVar77 != (ActionApplyImpulse *)0x0) {
		pAVar77 = ActionApplyImpulse::Construct(pAVar77);
		return &pAVar77->parent;
		}
		break;
		case 0x4d:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_RequestDetach;
		return pAVar159;
		}
		break;
		case 0x4e:pAVar1 = (ActionSetObject *)VirtualPool::AllocateMemory(0x14);
		if (pAVar1 != (ActionSetObject *)0x0) {
		pAVar1 = ActionSetObject::Construct(pAVar1);
		return &pAVar1->parent;
		}
		break;
		case 0x4f:pAVar2 = (ActionKeep *)VirtualPool::AllocateMemory(0x10);
		if (pAVar2 != (ActionKeep *)0x0) {
		pAVar2 = ActionKeep::Construct(pAVar2);
		return &pAVar2->parent;
		}
		break;
		case 0x50:pAVar89 = (ActionAttachSpring *)VirtualPool::AllocateMemory(0x50);
		if (pAVar89 != (ActionAttachSpring *)0x0) {
		pAVar89 = ActionAttachSpring::Construct(pAVar89);
		return &pAVar89->parent;
		}
		break;
		case 0x51:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_DetachAllSprings;
		return pAVar159;
		}
		break;
		case 0x52:case 0x53:pAVar80 = (ActionSetContactSpringy *)VirtualPool::AllocateMemory(0x94);
		if (pAVar80 != (ActionSetContactSpringy *)0x0) {
		pAVar80 = ActionSetContactSpringy::Construct(pAVar80);
		return &pAVar80->parent;
		}
		break;
		case 0x54:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ClearContactResponse;
		return pAVar159;
		}
		break;
		case 0x55:pAVar5 = (ActionDestroyMe *)VirtualPool::AllocateMemory(0x10);
		if (pAVar5 != (ActionDestroyMe *)0x0) {
		pAVar5 = ActionDestroyMe::Construct(pAVar5);
		return &pAVar5->parent;
		}
		break;
		case 0x56:pAVar42 = (ActionSetSound *)VirtualPool::AllocateMemory(0x28);
		if (pAVar42 != (ActionSetSound *)0x0) {
		pAVar42 = ActionSetSound::Construct(pAVar42);
		return &pAVar42->parent;
		}
		break;
		case 0x57:pAVar47 = (ActionAlertWobblePhase *)VirtualPool::AllocateMemory(0x1c);
		if (pAVar47 != (ActionAlertWobblePhase *)0x0) {
		pAVar47 = ActionAlertWobblePhase::Construct(pAVar47);
		return &pAVar47->parent;
		}
		break;
		case 0x58:pAVar43 = (ActionBeginMusic *)VirtualPool::AllocateMemory(0x20);
		if (pAVar43 != (ActionBeginMusic *)0x0) {
		pAVar43 = ActionBeginMusic::Construct(pAVar43);
		return &pAVar43->parent;
		}
		break;
		case 0x59:pAVar44 = (ActionEndContextMusic *)VirtualPool::AllocateMemory(0x10);
		if (pAVar44 != (ActionEndContextMusic *)0x0) {
		pAVar44 = ActionEndContextMusic::Construct(pAVar44);
		return &pAVar44->parent;
		}
		break;
		case 0x5a:pAVar104 = (ActionSetFocusToAgent *)VirtualPool::AllocateMemory(0x10);
		if (pAVar104 != (ActionSetFocusToAgent *)0x0) {
		pAVar104 = ActionSetFocusToAgent::Construct(pAVar104,1);
		return &pAVar104->parent;
		}
		break;
		case 0x5b:pAVar104 = (ActionSetFocusToAgent *)VirtualPool::AllocateMemory(0x10);
		if (pAVar104 != (ActionSetFocusToAgent *)0x0) {
		pAVar104 = ActionSetFocusToAgent::Construct(pAVar104,2);
		return &pAVar104->parent;
		}
		break;
		case 0x5c:case 0x5d:case 0x249:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_PickUpExtraLife;
		pAVar159[1].vtable = (ActionAbstract_VTable *)0x0;
		return pAVar159;
		}
		break;
		case 0x5e:pAVar102 = (ActionAttachFocusObject *)VirtualPool::AllocateMemory(0x30);
		if (pAVar102 != (ActionAttachFocusObject *)0x0) {
		pAVar102 = ActionAttachFocusObject::Construct(pAVar102,2);
		return &pAVar102->parent;
		}
		break;
		case 0x5f:pAVar100 = (Action0x05F *)VirtualPool::AllocateMemory(0x10);
		if (pAVar100 != (Action0x05F *)0x0) {
		pAVar100 = Action0x05F::Construct(pAVar100);
		return &pAVar100->parent;
		}
		break;
		case 0x60:pAVar101 = (Action0x060 *)VirtualPool::AllocateMemory(0xc0);
		if (pAVar101 != (Action0x060 *)0x0) {
		pAVar101 = Action0x060::Construct(pAVar101);
		return &pAVar101->parent;
		}
		break;
		case 0x61:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x061;
		return pAVar159;
		}
		break;
		case 0x62:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x062;
		return pAVar159;
		}
		break;
		case 99:pAVar105 = (ActionRequestMessagersFocus *)VirtualPool::AllocateMemory(0x10);
		if (pAVar105 != (ActionRequestMessagersFocus *)0x0) {
		pAVar105 = ActionRequestMessagersFocus::Construct(pAVar105,1);
		return &pAVar105->parent;
		}
		break;
		case 100:pAVar105 = (ActionRequestMessagersFocus *)VirtualPool::AllocateMemory(0x10);
		if (pAVar105 != (ActionRequestMessagersFocus *)0x0) {
		pAVar105 = ActionRequestMessagersFocus::Construct(pAVar105,2);
		return &pAVar105->parent;
		}
		break;
		case 0x65:pAVar68 = (ActionRequestMessSourceAsFocus *)VirtualPool::AllocateMemory(0x10);
		if (pAVar68 != (ActionRequestMessSourceAsFocus *)0x0) {
		pAVar68 = ActionRequestMessSourceAsFocus::Construct(pAVar68,1);
		return &pAVar68->parent;
		}
		break;
		case 0x66:pAVar68 = (ActionRequestMessSourceAsFocus *)VirtualPool::AllocateMemory(0x10);
		if (pAVar68 != (ActionRequestMessSourceAsFocus *)0x0) {
		pAVar68 = ActionRequestMessSourceAsFocus::Construct(pAVar68,2);
		return &pAVar68->parent;
		}
		break;
		case 0x67:pAVar103 = (ActionSetFocusToKey *)VirtualPool::AllocateMemory(0x10);
		if (pAVar103 != (ActionSetFocusToKey *)0x0) {
		pAVar103 = ActionSetFocusToKey::Construct(pAVar103,3);
		return &pAVar103->parent;
		}
		break;
		case 0x68:pAVar104 = (ActionSetFocusToAgent *)VirtualPool::AllocateMemory(0x10);
		if (pAVar104 != (ActionSetFocusToAgent *)0x0) {
		pAVar104 = ActionSetFocusToAgent::Construct(pAVar104,3);
		return &pAVar104->parent;
		}
		break;
		case 0x69:pAVar51 = (ActionPosWarp *)VirtualPool::AllocateMemory(0x20);
		if (pAVar51 != (ActionPosWarp *)0x0) {
		pAVar51 = ActionPosWarp::Construct(pAVar51,1);
		return &pAVar51->parent;
		}
		break;
		case 0x6a:pAVar105 = (ActionRequestMessagersFocus *)VirtualPool::AllocateMemory(0x10);
		if (pAVar105 != (ActionRequestMessagersFocus *)0x0) {
		pAVar105 = ActionRequestMessagersFocus::Construct(pAVar105,3);
		return &pAVar105->parent;
		}
		break;
		case 0x6c:pAVar106 = (ActionSetFocusPosition *)VirtualPool::AllocateMemory(0x60);
		if (pAVar106 != (ActionSetFocusPosition *)0x0) {
		pAVar106 = ActionSetFocusPosition::Construct(pAVar106,3);
		return &pAVar106->parent;
		}
		break;
		case 0x6d:pAVar107 = (ActionAddNoiseToFocusPos *)VirtualPool::AllocateMemory(0x20);
		if (pAVar107 != (ActionAddNoiseToFocusPos *)0x0) {
		pAVar107 = ActionAddNoiseToFocusPos::Construct(pAVar107,3);
		return &pAVar107->parent;
		}
		break;
		case 0x6e:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x06E;
		return pAVar159;
		}
		break;
		case 0x6f:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x06F;
		return pAVar159;
		}
		break;
		case 0x70:pAVar18 = (ActionSpawnResidentAgent *)VirtualPool::AllocateMemory(0x40);
		if (pAVar18 != (ActionSpawnResidentAgent *)0x0) {
		pAVar18 = ActionSpawnResidentAgent::Construct(pAVar18,1);
		return &pAVar18->parent;
		}
		break;
		case 0x71:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x1c);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x071;
		return pAVar159;
		}
		break;
		case 0x72:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x072;
		return pAVar159;
		}
		break;
		case 0x73:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x073;
		return pAVar159;
		}
		break;
		case 0x74:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x074;
		return pAVar159;
		}
		break;
		case 0x75:pAVar66 = (Action0x075 *)VirtualPool::AllocateMemory(0x14);
		if (pAVar66 != (Action0x075 *)0x0) {
		pAVar66 = Action0x075::Construct(pAVar66);
		return &pAVar66->parent;
		}
		break;
		case 0x76:pAVar67 = (Action0x076 *)VirtualPool::AllocateMemory(0x14);
		if (pAVar67 != (Action0x076 *)0x0) {
		pAVar67 = Action0x076::Construct(pAVar67);
		return &pAVar67->parent;
		}
		break;
		case 0x77:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x077;
		return pAVar159;
		}
		break;
		case 0x78:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x078;
		return pAVar159;
		}
		break;
		case 0x79:pAVar27 = (Action0x079 *)VirtualPool::AllocateMemory(0x14);
		if (pAVar27 != (Action0x079 *)0x0) {
		pAVar27 = Action0x079::Construct(pAVar27);
		return &pAVar27->parent;
		}
		break;
		case 0x7a:pAVar6 = (Action0x07A *)VirtualPool::AllocateMemory(0x10);
		if (pAVar6 != (Action0x07A *)0x0) {
		pAVar6 = Action0x07A::Construct(pAVar6);
		return &pAVar6->parent;
		}
		break;
		case 0x7b:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x07B;
		return pAVar159;
		}
		break;
		case 0x7c:pAVar11 = (ActionRunScriptSlot *)VirtualPool::AllocateMemory(0x10);
		if (pAVar11 != (ActionRunScriptSlot *)0x0) {
		pAVar11 = ActionRunScriptSlot::Construct(pAVar11);
		return &pAVar11->parent;
		}
		break;
		case 0x7d:pAVar26 = (Action0x07D *)VirtualPool::AllocateMemory(0x20);
		if (pAVar26 != (Action0x07D *)0x0) {
		pAVar26 = Action0x07D::Construct(pAVar26);
		return &pAVar26->parent;
		}
		break;
		case 0x7e:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x07E;
		return pAVar159;
		}
		break;
		case 0x7f:pAVar78 = (Action0x07F *)VirtualPool::AllocateMemory(0x10);
		if (pAVar78 != (Action0x07F *)0x0) {
		pAVar78 = Action0x07F::Construct(pAVar78);
		return &pAVar78->parent;
		}
		break;
		case 0x80:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x080;
		return pAVar159;
		}
		break;
		case 0x81:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x081;
		return pAVar159;
		}
		break;
		case 0x82:pAVar86 = (Action0x082 *)VirtualPool::AllocateMemory(0x1c);
		if (pAVar86 != (Action0x082 *)0x0) {
		pAVar86 = Action0x082::Construct(pAVar86);
		return &pAVar86->parent;
		}
		break;
		case 0x83:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x083;
		return pAVar159;
		}
		break;
		case 0x84:pAVar56 = (Action0x084 *)VirtualPool::AllocateMemory(0x10);
		if (pAVar56 != (Action0x084 *)0x0) {
		pAVar56 = Action0x084::Construct(pAVar56);
		return &pAVar56->parent;
		}
		break;
		case 0x85:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x085;
		return pAVar159;
		}
		break;
		case 0x86:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x086;
		return pAVar159;
		}
		break;
		case 0x87:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x087;
		return pAVar159;
		}
		break;
		case 0x88:pAVar58 = (Action0x088 *)VirtualPool::AllocateMemory(0x14);
		if (pAVar58 != (Action0x088 *)0x0) {
		pAVar58 = Action0x088::Construct(pAVar58);
		return &pAVar58->parent;
		}
		break;
		case 0x89:pAVar59 = (Action0x089 *)VirtualPool::AllocateMemory(0x14);
		if (pAVar59 != (Action0x089 *)0x0) {
		pAVar59 = Action0x089::Construct(pAVar59);
		return &pAVar59->parent;
		}
		break;
		case 0x8a:pAVar60 = (Action0x08A *)VirtualPool::AllocateMemory(0x14);
		if (pAVar60 != (Action0x08A *)0x0) {
		pAVar60 = Action0x08A::Construct(pAVar60);
		return &pAVar60->parent;
		}
		break;
		case 0x8b:pAVar61 = (Action0x08B *)VirtualPool::AllocateMemory(0x10);
		if (pAVar61 != (Action0x08B *)0x0) {
		pAVar61 = Action0x08B::Construct(pAVar61);
		return &pAVar61->parent;
		}
		break;
		case 0x8c:pAVar62 = (Action0x08C *)VirtualPool::AllocateMemory(0x10);
		if (pAVar62 != (Action0x08C *)0x0) {
		pAVar62 = Action0x08C::Construct(pAVar62);
		return &pAVar62->parent;
		}
		break;
		case 0x8d:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x08D;
		pAVar159[1].vtable = (ActionAbstract_VTable *)0x0;
		return pAVar159;
		}
		break;
		case 0x8e:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x08E;
		pAVar159[1].vtable = (ActionAbstract_VTable *)0x0;
		return pAVar159;
		}
		break;
		case 0x8f:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x08F;
		return pAVar159;
		}
		break;
		case 0x90:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x090;
		return pAVar159;
		}
		break;
		case 0x91:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x091;
		*(undefined2 *)&pAVar159[1].vtable = 0;
		return pAVar159;
		}
		break;
		case 0x92:pAVar99 = (Action0x092 *)VirtualPool::AllocateMemory(0x10);
		if (pAVar99 != (Action0x092 *)0x0) {
		pAVar99 = Action0x092::Construct(pAVar99,0);
		return &pAVar99->parent;
		}
		break;
		case 0x93:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x093;
		return pAVar159;
		}
		break;
		case 0x94:pAVar49 = (Action0x094 *)VirtualPool::AllocateMemory(0x1c);
		if (pAVar49 != (Action0x094 *)0x0) {
		pAVar49 = Action0x094::Construct(pAVar49);
		return &pAVar49->parent;
		}
		break;
		case 0x95:pAVar24 = (Action0x095 *)VirtualPool::AllocateMemory(0x14);
		if (pAVar24 != (Action0x095 *)0x0) {
		pAVar24 = Action0x095::Construct(pAVar24);
		return &pAVar24->parent;
		}
		break;
		case 0x96:pAVar53 = (Action0x096 *)VirtualPool::AllocateMemory(0x18);
		if (pAVar53 != (Action0x096 *)0x0) {
		pAVar53 = Action0x096::Construct(pAVar53);
		return &pAVar53->parent;
		}
		break;
		case 0x97:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x097;
		return pAVar159;
		}
		break;
		case 0x98:pAVar48 = (Action0x098 *)VirtualPool::AllocateMemory(0x1c);
		if (pAVar48 != (Action0x098 *)0x0) {
		pAVar48 = Action0x098::Construct(pAVar48);
		return &pAVar48->parent;
		}
		break;
		case 0x99:pAVar54 = (Action0x099 *)VirtualPool::AllocateMemory(0x20);
		if (pAVar54 != (Action0x099 *)0x0) {
		pAVar54 = Action0x099::Construct(pAVar54);
		return &pAVar54->parent;
		}
		break;
		case 0x9a:pAVar99 = (Action0x092 *)VirtualPool::AllocateMemory(0x10);
		if (pAVar99 != (Action0x092 *)0x0) {
		pAVar99 = Action0x092::Construct(pAVar99,3);
		return &pAVar99->parent;
		}
		break;
		case 0x9b:pAVar99 = (Action0x092 *)VirtualPool::AllocateMemory(0x10);
		if (pAVar99 != (Action0x092 *)0x0) {
		pAVar99 = Action0x092::Construct(pAVar99,1);
		return &pAVar99->parent;
		}
		break;
		case 0x9c:pAVar69 = (Action0x09C *)VirtualPool::AllocateMemory(0x10);
		if (pAVar69 != (Action0x09C *)0x0) {
		pAVar69 = Action0x09C::Construct(pAVar69);
		return &pAVar69->parent;
		}
		break;
		case 0x9d:pAVar19 = (Action0x09D *)VirtualPool::AllocateMemory(0x14);
		if (pAVar19 != (Action0x09D *)0x0) {
		pAVar19 = Action0x09D::Construct(pAVar19);
		return &pAVar19->parent;
		}
		break;
		case 0x9e:pAVar84 = (Action0x09E *)VirtualPool::AllocateMemory(0x98);
		if (pAVar84 != (Action0x09E *)0x0) {
		pAVar84 = Action0x09E::Construct(pAVar84);
		return &pAVar84->parent;
		}
		break;
		case 0x9f:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x09F;
		return pAVar159;
		}
		break;
		case 0xa0:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0A0;
		return pAVar159;
		}
		break;
		case 0xa1:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0A1;
		return pAVar159;
		}
		break;
		case 0xa2:pAVar96 = (Action0x0A2 *)VirtualPool::AllocateMemory(0x14);
		if (pAVar96 != (Action0x0A2 *)0x0) {
		pAVar96 = Action0x0A2::Construct(pAVar96);
		return &pAVar96->parent;
		}
		break;
		case 0xa3:pAVar20 = (Action0x0A3 *)VirtualPool::AllocateMemory(0x14);
		if (pAVar20 != (Action0x0A3 *)0x0) {
		pAVar20 = Action0x0A3::Construct(pAVar20);
		return &pAVar20->parent;
		}
		break;
		case 0xa4:pAVar21 = (Action0x0A4 *)VirtualPool::AllocateMemory(0x18);
		if (pAVar21 != (Action0x0A4 *)0x0) {
		pAVar21 = Action0x0A4::Construct(pAVar21);
		return &pAVar21->parent;
		}
		break;
		case 0xa5:pAVar93 = (ActionForceVolumeController *)VirtualPool::AllocateMemory(0x40);
		if (pAVar93 != (ActionForceVolumeController *)0x0) {
		pAVar93 = ActionForceVolumeController::Construct(pAVar93);
		return &pAVar93->parent;
		}
		break;
		case 0xa6:pAVar72 = (Action0x0A6 *)VirtualPool::AllocateMemory(0x10);
		if (pAVar72 != (Action0x0A6 *)0x0) {
		pAVar72 = Action0x0A6::Construct(pAVar72);
		return &pAVar72->parent;
		}
		break;
		case 0xa7:pAVar85 = (ActionSetSurface *)VirtualPool::AllocateMemory(0x10);
		if (pAVar85 != (ActionSetSurface *)0x0) {
		pAVar85 = ActionSetSurface::Construct(pAVar85);
		return &pAVar85->parent;
		}
		break;
		case 0xa8:pAVar88 = (Action0x0A8 *)VirtualPool::AllocateMemory(0x30);
		if (pAVar88 != (Action0x0A8 *)0x0) {
		pAVar88 = Action0x0A8::Construct(pAVar88);
		return &pAVar88->parent;
		}
		break;
		case 0xa9:pAVar145 = (Action0x0A9 *)VirtualPool::AllocateMemory(0x14);
		if (pAVar145 != (Action0x0A9 *)0x0) {
		pAVar145 = Action0x0A9::Construct(pAVar145);
		return &pAVar145->parent;
		}
		break;
		case 0xaa:pAVar97 = (Action0x0AA *)VirtualPool::AllocateMemory(0x18);
		if (pAVar97 != (Action0x0AA *)0x0) {
		pAVar97 = Action0x0AA::Construct(pAVar97);
		return &pAVar97->parent;
		}
		break;
		case 0xab:pAVar12 = (Action0x0AB *)VirtualPool::AllocateMemory(0x14);
		if (pAVar12 != (Action0x0AB *)0x0) {
		pAVar12 = Action0x0AB::Construct(pAVar12);
		return &pAVar12->parent;
		}
		break;
		case 0xac:pAVar13 = (Action0x0AC *)VirtualPool::AllocateMemory(0x14);
		if (pAVar13 != (Action0x0AC *)0x0) {
		pAVar13 = Action0x0AC::Construct(pAVar13);
		return &pAVar13->parent;
		}
		break;
		case 0xad:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0AD;
		*(undefined *)&pAVar159[1].vtable = 0;
		return pAVar159;
		}
		break;
		case 0xae:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0AE;
		return pAVar159;
		}
		break;
		case 0xaf:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0AF;
		return pAVar159;
		}
		break;
		case 0xb0:pAVar45 = (Action0x0B0 *)VirtualPool::AllocateMemory(0x14);
		if (pAVar45 != (Action0x0B0 *)0x0) {
		pAVar45 = Action0x0B0::Construct(pAVar45);
		return &pAVar45->parent;
		}
		break;
		case 0xb1:pAVar52 = (Action0x0B1 *)VirtualPool::AllocateMemory(0x30);
		if (pAVar52 != (Action0x0B1 *)0x0) {
		pAVar52 = Action0x0B1::Construct(pAVar52,0);
		return &pAVar52->parent;
		}
		break;
		case 0xb2:pAVar9 = (Action0x0B2 *)VirtualPool::AllocateMemory(0x30);
		if (pAVar9 != (Action0x0B2 *)0x0) {
		pAVar9 = Action0x0B2::Construct(pAVar9);
		return &pAVar9->parent;
		}
		break;
		case 0xb3:pAVar52 = (Action0x0B1 *)VirtualPool::AllocateMemory(0x30);
		if (pAVar52 != (Action0x0B1 *)0x0) {
		pAVar52 = Action0x0B1::Construct(pAVar52,1);
		return &pAVar52->parent;
		}
		break;
		case 0xb4:pAVar123 = (Action0x0B4 *)VirtualPool::AllocateMemory(0x14);
		if (pAVar123 != (Action0x0B4 *)0x0) {
		pAVar123 = Action0x0B4::Construct(pAVar123);
		return &pAVar123->parent;
		}
		break;
		case 0xb5:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0B5;
		return pAVar159;
		}
		break;
		case 0xb6:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0B6;
		return pAVar159;
		}
		break;
		case 0xb7:pAVar14 = (Action0x0B7 *)VirtualPool::AllocateMemory(0x10);
		if (pAVar14 != (Action0x0B7 *)0x0) {
		pAVar14 = Action0x0B7::Construct(pAVar14);
		return &pAVar14->parent;
		}
		break;
		case 0xb8:pAVar15 = (Action0x0B8 *)VirtualPool::AllocateMemory(0x14);
		if (pAVar15 != (Action0x0B8 *)0x0) {
		pAVar15 = Action0x0B8::Construct(pAVar15);
		return &pAVar15->parent;
		}
		break;
		case 0xb9:pAVar40 = (Action0x0B9 *)VirtualPool::AllocateMemory(0x14);
		if (pAVar40 != (Action0x0B9 *)0x0) {
		pAVar40 = Action0x0B9::Construct(pAVar40);
		return &pAVar40->parent;
		}
		break;
		case 0xba:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0BA;
		return pAVar159;
		}
		break;
		case 0xbb:pAVar33 = (ActionSetShadow *)VirtualPool::AllocateMemory(0x1c);
		if (pAVar33 != (ActionSetShadow *)0x0) {
		pAVar33 = ActionSetShadow::Construct(pAVar33);
		return &pAVar33->parent;
		}
		break;
		case 0xbc:pAVar34 = (ActionSetShadowCircle *)VirtualPool::AllocateMemory(0x24);
		if (pAVar34 != (ActionSetShadowCircle *)0x0) {
		pAVar34 = ActionSetShadowCircle::Construct(pAVar34);
		return &pAVar34->parent;
		}
		break;
		case 0xbd:pAVar35 = (ActionSetShadowMesh *)VirtualPool::AllocateMemory(0x20);
		if (pAVar35 != (ActionSetShadowMesh *)0x0) {
		pAVar35 = ActionSetShadowMesh::Construct(pAVar35);
		return &pAVar35->parent;
		}
		break;
		case 0xbe:pAVar36 = (ActionSetShadowRectangle *)VirtualPool::AllocateMemory(0x24);
		if (pAVar36 != (ActionSetShadowRectangle *)0x0) {
		pAVar36 = ActionSetShadowRectangle::Construct(pAVar36);
		return &pAVar36->parent;
		}
		break;
		case 0xbf:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ShadowToggle;
		pAVar159[1].vtable = (ActionAbstract_VTable *)0x0;
		return pAVar159;
		}
		break;
		case 0xc0:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0C0;
		pAVar159[1].vtable = (ActionAbstract_VTable *)0x0;
		return pAVar159;
		}
		break;
		case 0xc1:pAVar76 = (Action0x0C1 *)VirtualPool::AllocateMemory(0x30);
		if (pAVar76 != (Action0x0C1 *)0x0) {
		pAVar76 = Action0x0C1::Construct(pAVar76);
		return &pAVar76->parent;
		}
		break;
		case 0xc2:pAVar39 = (Action0x0C2 *)VirtualPool::AllocateMemory(0x14);
		if (pAVar39 != (Action0x0C2 *)0x0) {
		pAVar39 = Action0x0C2::Construct(pAVar39);
		return &pAVar39->parent;
		}
		break;
		case 0xc3:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0C3;
		return pAVar159;
		}
		break;
		case 0xc4:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0C4;
		return pAVar159;
		}
		break;
		case 0xc5:pAVar37 = (ActionDummy197 *)VirtualPool::AllocateMemory(0x40);
		if (pAVar37 != (ActionDummy197 *)0x0) {
		pAVar37 = ActionDummy197::Construct(pAVar37);
		return &pAVar37->parent;
		}
		break;
		case 0xc6:pAVar16 = (Action0x0C6 *)VirtualPool::AllocateMemory(0x18);
		if (pAVar16 != (Action0x0C6 *)0x0) {
		pAVar16 = Action0x0C6::Construct(pAVar16);
		return &pAVar16->parent;
		}
		break;
		case 199:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x20);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0C7;
		*(undefined *)&pAVar159[2].field1_0x4 = 0;
		return pAVar159;
		}
		break;
		case 200:pAVar29 = (Action0x0C8 *)VirtualPool::AllocateMemory(0x18);
		if (pAVar29 != (Action0x0C8 *)0x0) {
		pAVar29 = Action0x0C8::Construct(pAVar29,1);
		return &pAVar29->parent;
		}
		break;
		case 0xc9:pAVar29 = (Action0x0C8 *)VirtualPool::AllocateMemory(0x18);
		if (pAVar29 != (Action0x0C8 *)0x0) {
		pAVar29 = Action0x0C8::Construct(pAVar29,0);
		return &pAVar29->parent;
		}
		break;
		case 0xca:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0CA;
		return pAVar159;
		}
		break;
		case 0xcb:pAVar79 = (Action0x0CB *)VirtualPool::AllocateMemory(0x10);
		if (pAVar79 != (Action0x0CB *)0x0) {
		pAVar79 = Action0x0CB::Construct(pAVar79);
		return &pAVar79->parent;
		}
		break;
		case 0xcc:pAVar146 = (Action0x0CC *)VirtualPool::AllocateMemory(0x2c);
		if (pAVar146 != (Action0x0CC *)0x0) {
		pAVar146 = Action0x0CC::Construct(pAVar146);
		return &pAVar146->parent;
		}
		break;
		case 0xcd:pAVar147 = (Action0x0CD *)VirtualPool::AllocateMemory(0x14);
		if (pAVar147 != (Action0x0CD *)0x0) {
		pAVar147 = Action0x0CD::Construct(pAVar147);
		return &pAVar147->parent;
		}
		break;
		case 0xce:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0CE;
		return pAVar159;
		}
		break;
		case 0xcf:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0CF;
		return pAVar159;
		}
		break;
		case 0xd0:pAVar3 = (Action0x0D0 *)VirtualPool::AllocateMemory(0x10);
		if (pAVar3 != (Action0x0D0 *)0x0) {
		pAVar3 = Action0x0D0::Construct(pAVar3);
		return &pAVar3->parent;
		}
		break;
		case 0xd1:pAVar4 = (Action0x0D1 *)VirtualPool::AllocateMemory(0x10);
		if (pAVar4 != (Action0x0D1 *)0x0) {
		pAVar4 = Action0x0D1::Construct(pAVar4);
		return &pAVar4->parent;
		}
		break;
		case 0xd2:pAVar65 = (Action0x0D2 *)VirtualPool::AllocateMemory(0x14);
		if (pAVar65 != (Action0x0D2 *)0x0) {
		pAVar65 = Action0x0D2::Construct(pAVar65);
		return &pAVar65->parent;
		}
		break;
		case 0xd3:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0D3;
		return pAVar159;
		}
		break;
		case 0xd4:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0D4;
		return pAVar159;
		}
		break;
		case 0xd5:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x0D5;
		return pAVar159;
		}
		break;
		case 0xd6:pAVar126 = (ActionControllerRumble *)VirtualPool::AllocateMemory(0x10);
		if (pAVar126 != (ActionControllerRumble *)0x0) {
		pAVar126 = ActionControllerRumble::Construct(pAVar126);
		return &pAVar126->parent;
		}
		break;
		case 0xd7:pAVar41 = (Action0x0D7 *)VirtualPool::AllocateMemory(0x18);
		if (pAVar41 != (Action0x0D7 *)0x0) {
		pAVar41 = Action0x0D7::Construct(pAVar41);
		return &pAVar41->parent;
		}
		break;
		case 0x200:pAVar108 = (ActionCreateCrateContents *)VirtualPool::AllocateMemory(0x14);
		if (pAVar108 != (ActionCreateCrateContents *)0x0) {
		pAVar108 = ActionCreateCrateContents::Construct(pAVar108);
		return &pAVar108->parent;
		}
		break;
		case 0x201:pAVar162 = (ActionPickUpWumpa *)VirtualPool::AllocateMemory(0x10);
		if (pAVar162 != (ActionPickUpWumpa *)0x0) {
		pAVar162 = ActionPickUpWumpa::Contrust(pAVar162);
		return &pAVar162->parent;
		}
		break;
		case 0x202:case 0x222:pAVar109 = (ActionCreateDamage *)VirtualPool::AllocateMemory(0x40);
		if (pAVar109 != (ActionCreateDamage *)0x0) {
		pAVar109 = ActionCreateDamage::Construct(pAVar109);
		return &pAVar109->parent;
		}
		break;
		case 0x203:pAVar112 = (ActionSetAgent *)VirtualPool::AllocateMemory(0x10);
		if (pAVar112 != (ActionSetAgent *)0x0) {
		pAVar112 = ActionSetAgent::Construct(pAVar112);
		return &pAVar112->parent;
		}
		break;
		case 0x204:pAVar168 = (ActionSetPlayRespawnPosition *)VirtualPool::AllocateMemory(0x10);
		if (pAVar168 != (ActionSetPlayRespawnPosition *)0x0) {
		pAVar168 = ActionSetPlayRespawnPosition::Construct(pAVar168);
		return &pAVar168->parent;
		}
		break;
		case 0x205:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ResetGame;
		return pAVar159;
		}
		break;
		case 0x206:pAVar124 = (ActionSetCrate *)VirtualPool::AllocateMemory(0x14);
		if (pAVar124 != (ActionSetCrate *)0x0) {
		pAVar124 = ActionSetCrate::Construct(pAVar124);
		return &pAVar124->parent;
		}
		break;
		case 0x207:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_TriggerBalancedCrateFalling;
		return pAVar159;
		}
		break;
		case 0x208:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_PickUpHealth;
		return pAVar159;
		}
		break;
		case 0x209:pAVar130 = (ActionSetPlayerInput *)VirtualPool::AllocateMemory(0x14);
		if (pAVar130 != (ActionSetPlayerInput *)0x0) {
		pAVar130 = ActionSetPlayerInput::Construct(pAVar130);
		return &pAVar130->parent;
		}
		break;
		case 0x20a:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_TriggerAllNitroCrates;
		return pAVar159;
		}
		break;
		case 0x20b:pAVar131 = (ActionApplyVelocity *)VirtualPool::AllocateMemory(0x3c);
		if (pAVar131 != (ActionApplyVelocity *)0x0) {
		pAVar131 = ActionApplyVelocity::Construct(pAVar131);
		return &pAVar131->parent;
		}
		break;
		case 0x20c:pAVar141 = (ActionSetKeyNearestPlayer *)VirtualPool::AllocateMemory(0x1c);
		if (pAVar141 != (ActionSetKeyNearestPlayer *)0x0) {
		pAVar141 = ActionSetKeyNearestPlayer::Construct(pAVar141);
		return &pAVar141->parent;
		}
		break;
		case 0x20d:pAVar142 = (ActionRaycastFocusPosition *)VirtualPool::AllocateMemory(0x40);
		if (pAVar142 != (ActionRaycastFocusPosition *)0x0) {
		pAVar142 = ActionRaycastFocusPosition::Construct(pAVar142);
		return &pAVar142->parent;
		}
		break;
		case 0x20e:pAVar132 = (ActionApplyVelocityToSelf *)VirtualPool::AllocateMemory(0x2c);
		if (pAVar132 != (ActionApplyVelocityToSelf *)0x0) {
		pAVar132 = ActionApplyVelocityToSelf::Construct(pAVar132);
		return &pAVar132->parent;
		}
		break;
		case 0x20f:pAVar134 = (ActionSetChiChiGrass *)VirtualPool::AllocateMemory(0x10);
		if (pAVar134 != (ActionSetChiChiGrass *)0x0) {
		pAVar134 = ActionSetChiChiGrass::Construct(pAVar134);
		return &pAVar134->parent;
		}
		break;
		case 0x210:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ReduceHitPoints;
		pAVar159[1].vtable = (ActionAbstract_VTable *)0x0;
		return pAVar159;
		}
		break;
		case 0x211:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_SetHitPoints;
		pAVar159[1].vtable = (ActionAbstract_VTable *)0x0;
		return pAVar159;
		}
		break;
		case 0x212:pAVar149 = (ActionSetRayTests *)VirtualPool::AllocateMemory(0x20);
		if (pAVar149 != (ActionSetRayTests *)0x0) {
		pAVar149 = ActionSetRayTests::Construct(pAVar149);
		return &pAVar149->parent;
		}
		break;
		case 0x214:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_NowGoForwardCollidable;
		pAVar159[1].vtable = (ActionAbstract_VTable *)0x0;
		return pAVar159;
		}
		break;
		case 0x215:pAVar133 = (ActionNowGoBackCollidable *)VirtualPool::AllocateMemory(0x10);
		if (pAVar133 != (ActionNowGoBackCollidable *)0x0) {
		pAVar133 = ActionNowGoBackCollidable::Construct(pAVar133);
		return &pAVar133->parent;
		}
		break;
		case 0x216:pAVar114 = (Action0x216 *)VirtualPool::AllocateMemory(0x14);
		if (pAVar114 != (Action0x216 *)0x0) {
		pAVar114 = Action0x216::Construct(pAVar114);
		return &pAVar114->parent;
		}
		break;
		case 0x217:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_PickUpCrystal;
		return pAVar159;
		}
		break;
		case 0x218:pAVar150 = (ActionDummy536 *)VirtualPool::AllocateMemory(0x10);
		if (pAVar150 != (ActionDummy536 *)0x0) {
		pAVar150 = ActionDummy536::Construct(pAVar150);
		return &pAVar150->parent;
		}
		break;
		case 0x219:pAVar161 = (ActionPickUpGem *)VirtualPool::AllocateMemory(0x10);
		if (pAVar161 != (ActionPickUpGem *)0x0) {
		pAVar161 = ActionPickUpGem::Construct(pAVar161);
		return &pAVar161->parent;
		}
		break;
		case 0x21a:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_Dummy538;
		return pAVar159;
		}
		break;
		case 0x21b:pAVar163 = (ActionSetPickup *)VirtualPool::AllocateMemory(0x1c);
		if (pAVar163 != (ActionSetPickup *)0x0) {
		pAVar163 = ActionSetPickup::Construct(pAVar163);
		return &pAVar163->parent;
		}
		break;
		case 0x21c:pAVar164 = (ActionSetProjectile *)VirtualPool::AllocateMemory(0x24);
		if (pAVar164 != (ActionSetProjectile *)0x0) {
		pAVar164 = ActionSetProjectile::Construct(pAVar164);
		return &pAVar164->parent;
		}
		break;
		case 0x224:pAVar165 = (ActionShoot *)VirtualPool::AllocateMemory(0x30);
		if (pAVar165 != (ActionShoot *)0x0) {
		pAVar165 = ActionShoot::Construct(pAVar165);
		return &pAVar165->parent;
		}
		break;
		case 0x225:pAVar166 = (ActionGetShortRoute *)VirtualPool::AllocateMemory(0x50);
		if (pAVar166 != (ActionGetShortRoute *)0x0) {
		pAVar166 = ActionGetShortRoute::Construct(pAVar166);
		return &pAVar166->parent;
		}
		break;
		case 0x226:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_FuelPayGate;
		return pAVar159;
		}
		break;
		case 0x227:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_OpenAllLinkedFurniture;
		return pAVar159;
		}
		break;
		case 0x228:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_CloseAllLinkedFurniture;
		return pAVar159;
		}
		break;
		case 0x229:pAVar160 = (ActionAttachAllLinkedAgents *)VirtualPool::AllocateMemory(0x10);
		if (pAVar160 != (ActionAttachAllLinkedAgents *)0x0) {
		pAVar160 = ActionAttachAllLinkedAgents::Construct(pAVar160);
		return &pAVar160->parent;
		}
		break;
		case 0x22a:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_DetachAllLinkedAgents;
		return pAVar159;
		}
		break;
		case 0x22b:pAVar171 = (ActionSetVehicleHumiliskate *)VirtualPool::AllocateMemory(0x18);
		if (pAVar171 != (ActionSetVehicleHumiliskate *)0x0) {
		pAVar171 = ActionSetVehicleHumiliskate::Construct(pAVar171);
		return &pAVar171->parent;
		}
		break;
		case 0x22c:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_SetFocusToPlayer;
		return pAVar159;
		}
		break;
		case 0x22d:pAVar144 = (ActionRequestFocus *)VirtualPool::AllocateMemory(0x40);
		if (pAVar144 != (ActionRequestFocus *)0x0) {
		pAVar144 = ActionRequestFocus::Construct(pAVar144,0);
		return &pAVar144->parent;
		}
		break;
		case 0x22e:pAVar28 = (ActionSetFocusProperties *)VirtualPool::AllocateMemory(0x10);
		if (pAVar28 != (ActionSetFocusProperties *)0x0) {
		pAVar28 = ActionSetFocusProperties::Construct(pAVar28);
		return &pAVar28->parent;
		}
		break;
		case 0x22f:pAVar151 = (ActionSetCamera *)VirtualPool::AllocateMemory(0x18);
		if (pAVar151 != (ActionSetCamera *)0x0) {
		pAVar151 = ActionSetCamera::Construct(pAVar151);
		return &pAVar151->parent;
		}
		break;
		case 0x230:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_RestoreCameraDefaults;
		return pAVar159;
		}
		break;
		case 0x231:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_LinkToFocusCharacter;
		return pAVar159;
		}
		break;
		case 0x232:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_UnlinkCharacters;
		return pAVar159;
		}
		break;
		case 0x233:pAVar111 = (ActionDamageOriginator *)VirtualPool::AllocateMemory(0x40);
		if (pAVar111 != (ActionDamageOriginator *)0x0) {
		pAVar111 = ActionDamageOriginator::Construct(pAVar111);
		return &pAVar111->parent;
		}
		break;
		case 0x234:pAVar144 = (ActionRequestFocus *)VirtualPool::AllocateMemory(0x40);
		if (pAVar144 != (ActionRequestFocus *)0x0) {
		pAVar144 = ActionRequestFocus::Construct(pAVar144,1);
		return &pAVar144->parent;
		}
		break;
		case 0x235:pAVar144 = (ActionRequestFocus *)VirtualPool::AllocateMemory(0x40);
		if (pAVar144 != (ActionRequestFocus *)0x0) {
		pAVar144 = ActionRequestFocus::Construct(pAVar144,2);
		return &pAVar144->parent;
		}
		break;
		case 0x236:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x236;
		return pAVar159;
		}
		break;
		case 0x237:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x237;
		return pAVar159;
		}
		break;
		case 0x238:pAVar169 = (ActionDummy568 *)VirtualPool::AllocateMemory(0x2c);
		if (pAVar169 != (ActionDummy568 *)0x0) {
		pAVar169 = ActionDummy568::Construct(pAVar169);
		return &pAVar169->parent;
		}
		break;
		case 0x239:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ExitVehicleMode;
		pAVar159[1].vtable = (ActionAbstract_VTable *)0x0;
		return pAVar159;
		}
		break;
		case 0x23a:pAVar170 = (ActionSetVehicleRollerbrawl *)VirtualPool::AllocateMemory(0x10);
		if (pAVar170 != (ActionSetVehicleRollerbrawl *)0x0) {
		pAVar170 = ActionSetVehicleRollerbrawl::Construct(pAVar170);
		return &pAVar170->parent;
		}
		break;
		case 0x23b:pAVar172 = (ActionSetVehicleHoverboard *)VirtualPool::AllocateMemory(0x10);
		if (pAVar172 != (ActionSetVehicleHoverboard *)0x0) {
		pAVar172 = ActionSetVehicleHoverboard::Construct(pAVar172);
		return &pAVar172->parent;
		}
		break;
		case 0x23c:pAVar173 = (Action0x23C *)VirtualPool::AllocateMemory(0x94);
		if (pAVar173 != (Action0x23C *)0x0) {
		pAVar173 = Action0x23C::Construct(pAVar173);
		return &pAVar173->parent;
		}
		break;
		case 0x23d:pAVar167 = (Action0x23D *)VirtualPool::AllocateMemory(0x18);
		if (pAVar167 != (Action0x23D *)0x0) {
		pAVar167 = Action0x23D::Construct(pAVar167);
		return &pAVar167->parent;
		}
		break;
		case 0x23e:pAVar125 = (Action0x23E *)VirtualPool::AllocateMemory(0x54);
		if (pAVar125 != (Action0x23E *)0x0) {
		pAVar125 = Action0x23E::Construct(pAVar125);
		return &pAVar125->parent;
		}
		break;
		case 0x23f:pAVar143 = (Action0x23F *)VirtualPool::AllocateMemory(0x14);
		if (pAVar143 != (Action0x23F *)0x0) {
		pAVar143 = Action0x23F::Construct(pAVar143);
		return &pAVar143->parent;
		}
		break;
		case 0x240:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x240;
		*(undefined *)&pAVar159[1].vtable = 0;
		return pAVar159;
		}
		break;
		case 0x241:pAVar81 = (ActionBecomeSticky *)VirtualPool::AllocateMemory(0x1c);
		if (pAVar81 != (ActionBecomeSticky *)0x0) {
		pAVar81 = ActionBecomeSticky::Construct(pAVar81);
		return &pAVar81->parent;
		}
		break;
		case 0x242:pAVar129 = (Action0x242 *)VirtualPool::AllocateMemory(0x10);
		if (pAVar129 != (Action0x242 *)0x0) {
		pAVar129 = Action0x242::Construct(pAVar129);
		return &pAVar129->parent;
		}
		break;
		case 0x243:pAVar148 = (Action0x243 *)VirtualPool::AllocateMemory(0x10);
		if (pAVar148 != (Action0x243 *)0x0) {
		pAVar148 = Action0x243::Construct(pAVar148);
		return &pAVar148->parent;
		}
		break;
		case 0x244:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x20);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x244;
		return pAVar159;
		}
		break;
		case 0x245:pAVar82 = (ActionBecomeNormal *)VirtualPool::AllocateMemory(0x10);
		if (pAVar82 != (ActionBecomeNormal *)0x0) {
		pAVar82 = ActionBecomeNormal::Construct(pAVar82);
		return &pAVar82->parent;
		}
		break;
		case 0x246:pAVar57 = (Action0x246 *)VirtualPool::AllocateMemory(0x4c);
		if (pAVar57 != (Action0x246 *)0x0) {
		pAVar57 = Action0x246::Construct(pAVar57);
		return &pAVar57->parent;
		}
		break;
		case 0x247:pAVar152 = (Action0x247 *)VirtualPool::AllocateMemory(0x54);
		if (pAVar152 != (Action0x247 *)0x0) {
		pAVar152 = Action0x247::Construct(pAVar152);
		return &pAVar152->parent;
		}
		break;
		case 0x248:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_Dummy584;
		return pAVar159;
		}
		break;
		case 0x24a:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_Dummy586;
		*(undefined2 *)&pAVar159[1].vtable = 0;
		return pAVar159;
		}
		break;
		case 0x24b:pAVar87 = (Action0x24B *)VirtualPool::AllocateMemory(0x10);
		if (pAVar87 != (Action0x24B *)0x0) {
		pAVar87 = Action0x24B::Construct(pAVar87);
		return &pAVar87->parent;
		}
		break;
		case 0x24c:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_PlayerFaceTowardsCamera;
		return pAVar159;
		}
		break;
		case 0x24d:pAVar119 = (ActionCutsceneStart *)VirtualPool::AllocateMemory(0x10);
		if (pAVar119 != (ActionCutsceneStart *)0x0) {
		pAVar119 = ActionCutsceneStart::Construct(pAVar119);
		return &pAVar119->parent;
		}
		break;
		case 0x24e:pAVar120 = (ActionCutsceneEnd *)VirtualPool::AllocateMemory(0x10);
		if (pAVar120 != (ActionCutsceneEnd *)0x0) {
		pAVar120 = ActionCutsceneEnd::Construct(pAVar120);
		return &pAVar120->parent;
		}
		break;
		case 0x24f:pAVar153 = (Action0x24F *)VirtualPool::AllocateMemory(0x3c);
		if (pAVar153 != (Action0x24F *)0x0) {
		pAVar153 = Action0x24F::Construct(pAVar153);
		return &pAVar153->parent;
		}
		break;
		case 0x250:pAVar154 = (ActionCameraSaveLoadParams *)VirtualPool::AllocateMemory(0x10);
		if (pAVar154 != (ActionCameraSaveLoadParams *)0x0) {
		pAVar154 = ActionCameraSaveLoadParams::Construct(pAVar154,0);
		return &pAVar154->parent;
		}
		break;
		case 0x251:pAVar154 = (ActionCameraSaveLoadParams *)VirtualPool::AllocateMemory(0x10);
		if (pAVar154 != (ActionCameraSaveLoadParams *)0x0) {
		pAVar154 = ActionCameraSaveLoadParams::Construct(pAVar154,1);
		return &pAVar154->parent;
		}
		break;
		case 0x252:pAVar155 = (ActionToggleCutsceneCamera *)VirtualPool::AllocateMemory(0x14);
		if (pAVar155 != (ActionToggleCutsceneCamera *)0x0) {
		pAVar155 = ActionToggleCutsceneCamera::Construct(pAVar155);
		return &pAVar155->parent;
		}
		break;
		case 0x253:pAVar156 = (Action0x253 *)VirtualPool::AllocateMemory(0x18);
		if (pAVar156 != (Action0x253 *)0x0) {
		pAVar156 = Action0x253::Construct(pAVar156);
		return &pAVar156->parent;
		}
		break;
		case 0x254:pAVar175 = (ActionStartWhackaworm *)VirtualPool::AllocateMemory(0x18);
		if (pAVar175 != (ActionStartWhackaworm *)0x0) {
		pAVar175 = ActionStartWhackaworm::Construct(pAVar175);
		return &pAVar175->parent;
		}
		break;
		case 0x255:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_WhackawormProgress;
		pAVar159[1].vtable = (ActionAbstract_VTable *)0x0;
		return pAVar159;
		}
		break;
		case 0x256:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_WhackawormEnd;
		return pAVar159;
		}
		break;
		case 599:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x257;
		return pAVar159;
		}
		break;
		case 600:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x258;
		return pAVar159;
		}
		break;
		case 0x259:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_SetVehicleWrestleCreature;
		return pAVar159;
		}
		break;
		case 0x25a:pAVar116 = (ActionFadeoutScreen *)VirtualPool::AllocateMemory(0x24);
		if (pAVar116 != (ActionFadeoutScreen *)0x0) {
		pAVar116 = ActionFadeoutScreen::Construct(pAVar116);
		return &pAVar116->parent;
		}
		break;
		case 0x25b:pAVar117 = (ActionDisplayBottomText *)VirtualPool::AllocateMemory(0x28);
		if (pAVar117 != (ActionDisplayBottomText *)0x0) {
		pAVar117 = ActionDisplayBottomText::Construct(pAVar117);
		return &pAVar117->parent;
		}
		break;
		case 0x25c:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x25c;
		return pAVar159;
		}
		break;
		case 0x25d:pAVar136 = (ActionDismissCharacter *)VirtualPool::AllocateMemory(0x10);
		if (pAVar136 != (ActionDismissCharacter *)0x0) {
		pAVar136 = ActionDismissCharacter::Construct(pAVar136);
		return &pAVar136->parent;
		}
		break;
		case 0x25e:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x25E;
		return pAVar159;
		}
		break;
		case 0x25f:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x25F;
		return pAVar159;
		}
		break;
		case 0x260:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_BottomTextClear;
		return pAVar159;
		}
		break;
		case 0x261:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_Dummy609;
		return pAVar159;
		}
		break;
		case 0x262:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_Dummy610;
		return pAVar159;
		}
		break;
		case 0x263:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x263;
		return pAVar159;
		}
		break;
		case 0x264:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x264;
		return pAVar159;
		}
		break;
		case 0x265:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_DisablePlayerControl;
		return pAVar159;
		}
		break;
		case 0x266:pAVar83 = (Action0x266 *)VirtualPool::AllocateMemory(0x10);
		if (pAVar83 != (Action0x266 *)0x0) {
		pAVar83 = Action0x266::Construct(pAVar83);
		return &pAVar83->parent;
		}
		break;
		case 0x267:pAVar138 = (Action0x267 *)VirtualPool::AllocateMemory(0x10);
		if (pAVar138 != (Action0x267 *)0x0) {
		pAVar138 = Action0x267::Construct(pAVar138);
		return &pAVar138->parent;
		}
		break;
		case 0x268:pAVar137 = (Action0x268 *)VirtualPool::AllocateMemory(0x10);
		if (pAVar137 != (Action0x268 *)0x0) {
		pAVar137 = Action0x268::Construct(pAVar137);
		return &pAVar137->parent;
		}
		break;
		case 0x269:pAVar110 = (Action0x269 *)VirtualPool::AllocateMemory(0x18);
		if (pAVar110 != (Action0x269 *)0x0) {
		pAVar110 = Action0x269::Construct(pAVar110);
		return &pAVar110->parent;
		}
		break;
		case 0x26a:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ForceGameOver;
		return pAVar159;
		}
		break;
		case 0x26b:pAVar121 = (ActionShowBottomText *)VirtualPool::AllocateMemory(0x10);
		if (pAVar121 != (ActionShowBottomText *)0x0) {
		pAVar121 = ActionShowBottomText::Construct(pAVar121);
		return &pAVar121->parent;
		}
		break;
		case 0x26c:pAVar122 = (ActionHideBottomText *)VirtualPool::AllocateMemory(0x10);
		if (pAVar122 != (ActionHideBottomText *)0x0) {
		pAVar122 = ActionHideBottomText::Construct(pAVar122);
		return &pAVar122->parent;
		}
		break;
		case 0x26d:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x26D;
		return pAVar159;
		}
		break;
		case 0x26e:pAVar128 = (ActionCharacterSoundProxy *)VirtualPool::AllocateMemory(0x10);
		if (pAVar128 != (ActionCharacterSoundProxy *)0x0) {
		pAVar128 = ActionCharacterSoundProxy::Construct(pAVar128);
		return &pAVar128->parent;
		}
		break;
		case 0x26f:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x26F;
		return pAVar159;
		}
		break;
		case 0x270:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x270;
		return pAVar159;
		}
		break;
		case 0x271:pAVar139 = (ActionSwitchCharacter *)VirtualPool::AllocateMemory(0x14);
		if (pAVar139 != (ActionSwitchCharacter *)0x0) {
		pAVar139 = ActionSwitchCharacter::Construct(pAVar139);
		return &pAVar139->parent;
		}
		break;
		case 0x272:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x272;
		return pAVar159;
		}
		break;
		case 0x273:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x273;
		return pAVar159;
		}
		break;
		case 0x274:pAVar157 = (Action0x274 *)VirtualPool::AllocateMemory(0x14);
		if (pAVar157 != (Action0x274 *)0x0) {
		pAVar157 = Action0x274::Construct(pAVar157);
		return &pAVar157->parent;
		}
		break;
		case 0x275:pAVar158 = (Action0x275 *)VirtualPool::AllocateMemory(0x18);
		if (pAVar158 != (Action0x275 *)0x0) {
		pAVar158 = Action0x275::Construct(pAVar158);
		return &pAVar158->parent;
		}
		break;
		case 0x276:pAVar71 = (Action0x276 *)VirtualPool::AllocateMemory(0x10);
		if (pAVar71 != (Action0x276 *)0x0) {
		pAVar71 = Action0x276::Construct(pAVar71);
		return &pAVar71->parent;
		}
		break;
		case 0x277:pAVar140 = (ActionPlayerVehicleBounce *)VirtualPool::AllocateMemory(0x10);
		if (pAVar140 != (ActionPlayerVehicleBounce *)0x0) {
		pAVar140 = ActionPlayerVehicleBounce::Construct(pAVar140);
		return &pAVar140->parent;
		}
		break;
		case 0x278:pAVar177 = (Action0x278 *)VirtualPool::AllocateMemory(0x10);
		if (pAVar177 != (Action0x278 *)0x0) {
		pAVar177 = Action0x278::Construct(pAVar177);
		return &pAVar177->parent;
		}
		break;
		case 0x279:pAVar113 = (ActionSetPlayerMode *)VirtualPool::AllocateMemory(0x18);
		if (pAVar113 != (ActionSetPlayerMode *)0x0) {
		pAVar113 = ActionSetPlayerMode::Construct(pAVar113);
		return &pAVar113->parent;
		}
		break;
		case 0x27a:pAVar181 = (ActionPlayMovie *)VirtualPool::AllocateMemory(0x14);
		if (pAVar181 != (ActionPlayMovie *)0x0) {
		pAVar181 = ActionPlayMovie::Construct(pAVar181);
		return &pAVar181->parent;
		}
		break;
		case 0x27c:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_AddAmmo;
		return pAVar159;
		}
		break;
		case 0x27d:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x27D;
		return pAVar159;
		}
		break;
		case 0x27e:pAVar174 = (ActionEnableBossMode *)VirtualPool::AllocateMemory(0x18);
		if (pAVar174 != (ActionEnableBossMode *)0x0) {
		pAVar174 = ActionEnableBossMode::Construct(pAVar174);
		return &pAVar174->parent;
		}
		break;
		case 0x27f:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_BossModeDamage;
		pAVar159[1].vtable = (ActionAbstract_VTable *)0x0;
		return pAVar159;
		}
		break;
		case 0x280:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_BossModeEnd;
		return pAVar159;
		}
		break;
		case 0x281:pAVar127 = (Action0x281 *)VirtualPool::AllocateMemory(0x24);
		if (pAVar127 != (Action0x281 *)0x0) {
		pAVar127 = Action0x281::Construct(pAVar127,0);
		return &pAVar127->parent;
		}
		break;
		case 0x282:pAVar127 = (Action0x281 *)VirtualPool::AllocateMemory(0x24);
		if (pAVar127 != (Action0x281 *)0x0) {
		pAVar127 = Action0x281::Construct(pAVar127,2);
		return &pAVar127->parent;
		}
		break;
		case 0x283:pAVar127 = (Action0x281 *)VirtualPool::AllocateMemory(0x24);
		if (pAVar127 != (Action0x281 *)0x0) {
		pAVar127 = Action0x281::Construct(pAVar127,1);
		return &pAVar127->parent;
		}
		break;
		case 0x284:pAVar127 = (Action0x281 *)VirtualPool::AllocateMemory(0x24);
		if (pAVar127 != (Action0x281 *)0x0) {
		pAVar127 = Action0x281::Construct(pAVar127,3);
		return &pAVar127->parent;
		}
		break;
		case 0x285:pAVar8 = (Action0x285 *)VirtualPool::AllocateMemory(0x10);
		if (pAVar8 != (Action0x285 *)0x0) {
		pAVar8 = Action0x285::Construct(pAVar8);
		return &pAVar8->parent;
		}
		break;
		case 0x286:pAVar176 = (Action0x286 *)VirtualPool::AllocateMemory(0x10);
		if (pAVar176 != (Action0x286 *)0x0) {
		pAVar176 = Action0x286::Construct(pAVar176);
		return &pAVar176->parent;
		}
		break;
		case 0x287:pAVar115 = (Action0x287 *)VirtualPool::AllocateMemory(0x14);
		if (pAVar115 != (Action0x287 *)0x0) {
		pAVar115 = Action0x287::Construct(pAVar115);
		return &pAVar115->parent;
		}
		break;
		case 0x288:pAVar22 = (Action0x288 *)VirtualPool::AllocateMemory(0x10);
		if (pAVar22 != (Action0x288 *)0x0) {
		pAVar22 = Action0x288::Construct(pAVar22);
		return &pAVar22->parent;
		}
		break;
		case 0x289:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x289;
		return pAVar159;
		}
		break;
		case 0x28a:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x28A;
		pAVar159[1].vtable = (ActionAbstract_VTable *)0x0;
		return pAVar159;
		}
		break;
		case 0x28b:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x28B;
		pAVar159[1].vtable = (ActionAbstract_VTable *)0x0;
		return pAVar159;
		}
		break;
		case 0x28c:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_CameraTopdownMode;
		return pAVar159;
		}
		break;
		case 0x28d:pAVar127 = (Action0x281 *)VirtualPool::AllocateMemory(0x24);
		if (pAVar127 != (Action0x281 *)0x0) {
		pAVar127 = Action0x281::Construct(pAVar127,4);
		return &pAVar127->parent;
		}
		break;
		case 0x28e:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_PlayCredits;
		return pAVar159;
		}
		break;
		case 0x28f:pAVar178 = (Action0x28F *)VirtualPool::AllocateMemory(0x28);
		if (pAVar178 != (Action0x28F *)0x0) {
		pAVar178 = Action0x28F::Construct(pAVar178);
		return &pAVar178->parent;
		}
		break;
		case 0x290:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x290;
		return pAVar159;
		}
		break;
		case 0x291:pAVar118 = (ActionDisplayBottomTextInstance *)VirtualPool::AllocateMemory(0x24);
		if (pAVar118 != (ActionDisplayBottomTextInstance *)0x0) {
		pAVar118 = ActionDisplayBottomTextInstance::Construct(pAVar118);
		return &pAVar118->parent;
		}
		break;
		case 0x292:pAVar180 = (Action0x292 *)VirtualPool::AllocateMemory(0x28);
		if (pAVar180 != (Action0x292 *)0x0) {
		pAVar180 = Action0x292::Construct(pAVar180);
		return &pAVar180->parent;
		}
		break;
		case 0x293:pAVar135 = (Action0x293 *)VirtualPool::AllocateMemory(0x10);
		if (pAVar135 != (Action0x293 *)0x0) {
		pAVar135 = Action0x293::Construct(pAVar135);
		return &pAVar135->parent;
		}
		break;
		case 0x294:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0x10);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ID_0x294;
		return pAVar159;
		}
		break;
		case 0x295:pAVar179 = (Action0x295 *)VirtualPool::AllocateMemory(0x68);
		if (pAVar179 != (Action0x295 *)0x0) {
		pAVar179 = Action0x295::Construct(pAVar179);
		return &pAVar179->parent;
		}
		break;
		case 0x296:pAVar159 = (ActionAbstract *)VirtualPool::AllocateMemory(0xc);
		if (pAVar159 != (ActionAbstract *)0x0) {
		pAVar159->nextAction = (ActionAbstract *)0x0;
		pAVar159->field1_0x4 = 0xffffff;
		pAVar159->vtable = (ActionAbstract_VTable *)&Action_VT_ResetCamera;
		return pAVar159;
		}
		}
		}
		return (ActionAbstract *)0x0;
		}
		
	*/
	return null;
}

void ActionFactory::Construct() {
	Logging::LogUnimplemented(__FUNCSIG__);
	/*
	void __fastcall ActionFactory::Construct(ActionFactory *this){
		this->vtable = (ActionFactory_VTable *)&AgentLab_VT_ActionFactory;
		return;
		}
		
	*/
	return;
}

