#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionMatcher"));
	}

	 static IMatcher1<ActionEntity*>*& _matcherAOE() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<ActionEntity*>*& _matcherActionType() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<ActionEntity*>*& _matcherActiveCondition() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<ActionEntity*>*& _matcherActor() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<ActionEntity*>*& _matcherAnimator() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyActionEffect() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyActivateStatue() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyActorCooldown() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyActorMagic() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyCharge() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyChat() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyConsume() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyDamage() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyDestroyChildren() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyDestroy() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyDestroyTargets() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyDurabilityDamage() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyFishing() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyHeal() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyHook() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyInPvP() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyLevelCapUp() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyLocationMagic() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyLockUnlock() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyMove() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyOnActorEffect() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyOnAnotherTargetEffect() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyOnTargetEffect() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyOpenWindow() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyPickup() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyPlace() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyPlayerKill() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyPortal() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyResurrect() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplySelectClass() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplySelectMount() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplySelectPet() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplySendInventory() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplySneak() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyStartDialogue() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplySwitchActive() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyTargetMagic() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyTargetNeutralize() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyTax() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	 static IMatcher1<ActionEntity*>*& _matcherApplyTeleport() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	 static IMatcher1<ActionEntity*>*& _matcherBlockMoveInventory() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	 static IMatcher1<ActionEntity*>*& _matcherBlueprint() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	 static IMatcher1<ActionEntity*>*& _matcherBreakActionEffect() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	 static IMatcher1<ActionEntity*>*& _matcherCompleteOnApply() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	 static IMatcher1<ActionEntity*>*& _matcherCompleted() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	 static IMatcher1<ActionEntity*>*& _matcherDamageInterrupted() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	 static IMatcher1<ActionEntity*>*& _matcherDamageStat() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	 static IMatcher1<ActionEntity*>*& _matcherDelay() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	 static IMatcher1<ActionEntity*>*& _matcherDismountCooldown() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	 static IMatcher1<ActionEntity*>*& _matcherDurationCoef() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	 static IMatcher1<ActionEntity*>*& _matcherDuration() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	 static IMatcher1<ActionEntity*>*& _matcherFailedApplyOnActorEffect() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	 static IMatcher1<ActionEntity*>*& _matcherFailedApplyOnTargetEffect() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	 static IMatcher1<ActionEntity*>*& _matcherHealPrediction() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	 static IMatcher1<ActionEntity*>*& _matcherHitActionEffect() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	 static IMatcher1<ActionEntity*>*& _matcherHitActorCooldown() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	 static IMatcher1<ActionEntity*>*& _matcherHitActorMagic() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	 static IMatcher1<ActionEntity*>*& _matcherHitTargetMagic() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	 static IMatcher1<ActionEntity*>*& _matcherIcon() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	 static IMatcher1<ActionEntity*>*& _matcherId() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	 static IMatcher1<ActionEntity*>*& _matcherIgnoreArmorPercent() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	 static IMatcher1<ActionEntity*>*& _matcherIgnoreControls() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	 static IMatcher1<ActionEntity*>*& _matcherIgnoreItemParams() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	 static IMatcher1<ActionEntity*>*& _matcherInfinity() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	 static IMatcher1<ActionEntity*>*& _matcherInputInterrupted() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	 static IMatcher1<ActionEntity*>*& _matcherInventoryItem() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	 static IMatcher1<ActionEntity*>*& _matcherItem() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	 static IMatcher1<ActionEntity*>*& _matcherLifeSteal() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	 static IMatcher1<ActionEntity*>*& _matcherLocalId() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	 static IMatcher1<ActionEntity*>*& _matcherLocalRotation() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	 static IMatcher1<ActionEntity*>*& _matcherMoveToTarget() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	 static IMatcher1<ActionEntity*>*& _matcherNextMustAppliedAction() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	 static IMatcher1<ActionEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	 static IMatcher1<ActionEntity*>*& _matcherOnActionApply() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	 static IMatcher1<ActionEntity*>*& _matcherOnActionStart() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	 static IMatcher1<ActionEntity*>*& _matcherOnApply() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	 static IMatcher1<ActionEntity*>*& _matcherOnCompletedActorMagic() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	 static IMatcher1<ActionEntity*>*& _matcherOnCompletedApplyPlace() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	 static IMatcher1<ActionEntity*>*& _matcherOnCompletedTargetEffect() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	 static IMatcher1<ActionEntity*>*& _matcherOnCompletedTargetMagic() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	 static IMatcher1<ActionEntity*>*& _matcherOnCompletedUse() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	 static IMatcher1<ActionEntity*>*& _matcherOnDeath() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	 static IMatcher1<ActionEntity*>*& _matcherOnStart() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	 static IMatcher1<ActionEntity*>*& _matcherPeriod() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	 static IMatcher1<ActionEntity*>*& _matcherProgressQuest() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	 static IMatcher1<ActionEntity*>*& _matcherRotateTo() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	 static IMatcher1<ActionEntity*>*& _matcherRotateToTarget() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	 static IMatcher1<ActionEntity*>*& _matcherRotation() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	 static IMatcher1<ActionEntity*>*& _matcherSequenceIndex() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	 static IMatcher1<ActionEntity*>*& _matcherSequenceRandom() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	 static IMatcher1<ActionEntity*>*& _matcherStartActionEffect() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	 static IMatcher1<ActionEntity*>*& _matcherStartTeleport() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	 static IMatcher1<ActionEntity*>*& _matcherStartTime() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	 static IMatcher1<ActionEntity*>*& _matcherStopMove() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	 static IMatcher1<ActionEntity*>*& _matcherSuccessActionType() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	 static IMatcher1<ActionEntity*>*& _matcherSuccess() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	 static IMatcher1<ActionEntity*>*& _matcherTags() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	 static IMatcher1<ActionEntity*>*& _matcherTarget() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	 static IMatcher1<ActionEntity*>*& _matcherTargetPosition() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	 static IMatcher1<ActionEntity*>*& _matcherTargets() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	 static IMatcher1<ActionEntity*>*& _matcherToolTip() {
		return *(IMatcher1<ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x348);
	}

	 static IAllOfMatcher1<ActionEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<ActionEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x189E904))(0, indices);
	}
	 static IAllOfMatcher1<ActionEntity*>* AllOf_1(Il2CppArray<IMatcher1<ActionEntity*>*>* matchers) {
		return ((IAllOfMatcher1<ActionEntity*>* (*)(void *, Il2CppArray<IMatcher1<ActionEntity*>*>*))(Il2CppBase() + 0x189E97C))(0, matchers);
	}
	 static IAnyOfMatcher1<ActionEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<ActionEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x189E9F4))(0, indices);
	}
	 static IAnyOfMatcher1<ActionEntity*>* AnyOf_1(Il2CppArray<IMatcher1<ActionEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<ActionEntity*>* (*)(void *, Il2CppArray<IMatcher1<ActionEntity*>*>*))(Il2CppBase() + 0x189EA6C))(0, matchers);
	}
	 static IMatcher1<ActionEntity*>* get_AOE() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189EAE4))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ActionType() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189EC80))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ActiveCondition() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189EE00))(0);
	}
	 static IMatcher1<ActionEntity*>* get_Actor() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189EF9C))(0);
	}
	 static IMatcher1<ActionEntity*>* get_Animator() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189F138))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyActionEffect() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189F2D4))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyActivateStatue() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189F470))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyActorCooldown() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189F60C))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyActorMagic() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189F7A8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyCharge() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189F944))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyChat() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189FAE0))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyConsume() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189FC7C))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyDamage() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189FE18))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyDestroyChildren() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189FFB4))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyDestroy() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A0150))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyDestroyTargets() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A02EC))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyDurabilityDamage() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A0488))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyFishing() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A0624))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyHeal() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A07C0))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyHook() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A095C))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyInPvP() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A0AF8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyLevelCapUp() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A0C94))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyLocationMagic() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A0E30))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyLockUnlock() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A0FCC))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyMove() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A1168))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyOnActorEffect() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A1304))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyOnAnotherTargetEffect() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A14A0))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyOnTargetEffect() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A163C))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyOpenWindow() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A17D8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyPickup() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A1974))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyPlace() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A1B10))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyPlayerKill() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A1CAC))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyPortal() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A1E48))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyResurrect() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A1FE8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplySelectClass() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A2188))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplySelectMount() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A2328))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplySelectPet() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A24C8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplySendInventory() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A2668))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplySneak() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A2808))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyStartDialogue() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A29A8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplySwitchActive() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A2B48))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyTargetMagic() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A2CE8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyTargetNeutralize() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A2E88))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyTax() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A3028))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ApplyTeleport() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A31C8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_BlockMoveInventory() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A3368))(0);
	}
	 static IMatcher1<ActionEntity*>* get_Blueprint() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A3508))(0);
	}
	 static IMatcher1<ActionEntity*>* get_BreakActionEffect() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A36A8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_CompleteOnApply() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A3848))(0);
	}
	 static IMatcher1<ActionEntity*>* get_Completed() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A39E8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_DamageInterrupted() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A3B88))(0);
	}
	 static IMatcher1<ActionEntity*>* get_DamageStat() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A3D28))(0);
	}
	 static IMatcher1<ActionEntity*>* get_Delay() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A3EC8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_DismountCooldown() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A4068))(0);
	}
	 static IMatcher1<ActionEntity*>* get_DurationCoef() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A4208))(0);
	}
	 static IMatcher1<ActionEntity*>* get_Duration() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A43A8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_FailedApplyOnActorEffect() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A4548))(0);
	}
	 static IMatcher1<ActionEntity*>* get_FailedApplyOnTargetEffect() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A46E8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_HealPrediction() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A4888))(0);
	}
	 static IMatcher1<ActionEntity*>* get_HitActionEffect() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A4A28))(0);
	}
	 static IMatcher1<ActionEntity*>* get_HitActorCooldown() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A4BC8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_HitActorMagic() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A4D68))(0);
	}
	 static IMatcher1<ActionEntity*>* get_HitTargetMagic() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A4F08))(0);
	}
	 static IMatcher1<ActionEntity*>* get_Icon() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A50A8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_Id() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A5248))(0);
	}
	 static IMatcher1<ActionEntity*>* get_IgnoreArmorPercent() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A53E8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_IgnoreControls() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A5588))(0);
	}
	 static IMatcher1<ActionEntity*>* get_IgnoreItemParams() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A5728))(0);
	}
	 static IMatcher1<ActionEntity*>* get_Infinity() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A58C8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_InputInterrupted() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A5A68))(0);
	}
	 static IMatcher1<ActionEntity*>* get_InventoryItem() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A5C08))(0);
	}
	 static IMatcher1<ActionEntity*>* get_Item() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A5DA8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_LifeSteal() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A5F48))(0);
	}
	 static IMatcher1<ActionEntity*>* get_LocalId() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A60E8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_LocalRotation() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A6288))(0);
	}
	 static IMatcher1<ActionEntity*>* get_MoveToTarget() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A6428))(0);
	}
	 static IMatcher1<ActionEntity*>* get_NextMustAppliedAction() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A65C8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_OldBlueprint() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A6768))(0);
	}
	 static IMatcher1<ActionEntity*>* get_OnActionApply() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A6908))(0);
	}
	 static IMatcher1<ActionEntity*>* get_OnActionStart() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A6AA8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_OnApply() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A6C48))(0);
	}
	 static IMatcher1<ActionEntity*>* get_OnCompletedActorMagic() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A6DE8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_OnCompletedApplyPlace() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A6F88))(0);
	}
	 static IMatcher1<ActionEntity*>* get_OnCompletedTargetEffect() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A7128))(0);
	}
	 static IMatcher1<ActionEntity*>* get_OnCompletedTargetMagic() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A72C8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_OnCompletedUse() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A7468))(0);
	}
	 static IMatcher1<ActionEntity*>* get_OnDeath() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A7608))(0);
	}
	 static IMatcher1<ActionEntity*>* get_OnStart() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A77A8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_Period() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A7948))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ProgressQuest() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A7AE8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_RotateTo() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A7C88))(0);
	}
	 static IMatcher1<ActionEntity*>* get_RotateToTarget() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A7E28))(0);
	}
	 static IMatcher1<ActionEntity*>* get_Rotation() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A7FC8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_SequenceIndex() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A8168))(0);
	}
	 static IMatcher1<ActionEntity*>* get_SequenceRandom() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A8308))(0);
	}
	 static IMatcher1<ActionEntity*>* get_StartActionEffect() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A84A8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_StartTeleport() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A8648))(0);
	}
	 static IMatcher1<ActionEntity*>* get_StartTime() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A87E8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_StopMove() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A8988))(0);
	}
	 static IMatcher1<ActionEntity*>* get_SuccessActionType() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A8B28))(0);
	}
	 static IMatcher1<ActionEntity*>* get_Success() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A8CC8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_Tags() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A8E68))(0);
	}
	 static IMatcher1<ActionEntity*>* get_Target() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A9008))(0);
	}
	 static IMatcher1<ActionEntity*>* get_TargetPosition() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A91A8))(0);
	}
	 static IMatcher1<ActionEntity*>* get_Targets() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A9348))(0);
	}
	 static IMatcher1<ActionEntity*>* get_ToolTip() {
		return ((IMatcher1<ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A94E8))(0);
	}

};

