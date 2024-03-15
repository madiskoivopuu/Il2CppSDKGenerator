#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionMatcher"));
	}

	 static IMatcher1ActionEntity*>*& _matcherAOE() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1ActionEntity*>*& _matcherActionType() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1ActionEntity*>*& _matcherActiveCondition() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1ActionEntity*>*& _matcherActor() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1ActionEntity*>*& _matcherAnimator() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyActionEffect() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyActivateStatue() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyActorCooldown() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyActorMagic() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyCharge() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyChat() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyConsume() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyDamage() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyDestroyChildren() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyDestroy() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyDestroyTargets() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyDurabilityDamage() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyFishing() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyHeal() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyHook() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyInPvP() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyLevelCapUp() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyLocationMagic() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyLockUnlock() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyMove() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyOnActorEffect() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyOnAnotherTargetEffect() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyOnTargetEffect() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyOpenWindow() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyPickup() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyPlace() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyPlayerKill() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyPortal() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyResurrect() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplySelectClass() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplySelectMount() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplySelectPet() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplySendInventory() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplySneak() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyStartDialogue() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplySwitchActive() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyTargetMagic() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyTargetNeutralize() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyTax() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	 static IMatcher1ActionEntity*>*& _matcherApplyTeleport() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	 static IMatcher1ActionEntity*>*& _matcherBlockMoveInventory() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	 static IMatcher1ActionEntity*>*& _matcherBlueprint() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	 static IMatcher1ActionEntity*>*& _matcherBreakActionEffect() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	 static IMatcher1ActionEntity*>*& _matcherCompleteOnApply() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	 static IMatcher1ActionEntity*>*& _matcherCompleted() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	 static IMatcher1ActionEntity*>*& _matcherDamageInterrupted() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	 static IMatcher1ActionEntity*>*& _matcherDamageStat() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	 static IMatcher1ActionEntity*>*& _matcherDelay() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	 static IMatcher1ActionEntity*>*& _matcherDismountCooldown() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	 static IMatcher1ActionEntity*>*& _matcherDurationCoef() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	 static IMatcher1ActionEntity*>*& _matcherDuration() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	 static IMatcher1ActionEntity*>*& _matcherFailedApplyOnActorEffect() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	 static IMatcher1ActionEntity*>*& _matcherFailedApplyOnTargetEffect() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	 static IMatcher1ActionEntity*>*& _matcherHealPrediction() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	 static IMatcher1ActionEntity*>*& _matcherHitActionEffect() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	 static IMatcher1ActionEntity*>*& _matcherHitActorCooldown() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	 static IMatcher1ActionEntity*>*& _matcherHitActorMagic() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	 static IMatcher1ActionEntity*>*& _matcherHitTargetMagic() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	 static IMatcher1ActionEntity*>*& _matcherIcon() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	 static IMatcher1ActionEntity*>*& _matcherId() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	 static IMatcher1ActionEntity*>*& _matcherIgnoreArmorPercent() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	 static IMatcher1ActionEntity*>*& _matcherIgnoreControls() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	 static IMatcher1ActionEntity*>*& _matcherIgnoreItemParams() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	 static IMatcher1ActionEntity*>*& _matcherInfinity() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	 static IMatcher1ActionEntity*>*& _matcherInputInterrupted() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	 static IMatcher1ActionEntity*>*& _matcherInventoryItem() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	 static IMatcher1ActionEntity*>*& _matcherItem() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	 static IMatcher1ActionEntity*>*& _matcherLifeSteal() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	 static IMatcher1ActionEntity*>*& _matcherLocalId() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	 static IMatcher1ActionEntity*>*& _matcherLocalRotation() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	 static IMatcher1ActionEntity*>*& _matcherMoveToTarget() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	 static IMatcher1ActionEntity*>*& _matcherNextMustAppliedAction() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	 static IMatcher1ActionEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	 static IMatcher1ActionEntity*>*& _matcherOnActionApply() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	 static IMatcher1ActionEntity*>*& _matcherOnActionStart() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	 static IMatcher1ActionEntity*>*& _matcherOnApply() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	 static IMatcher1ActionEntity*>*& _matcherOnCompletedActorMagic() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	 static IMatcher1ActionEntity*>*& _matcherOnCompletedApplyPlace() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	 static IMatcher1ActionEntity*>*& _matcherOnCompletedTargetEffect() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	 static IMatcher1ActionEntity*>*& _matcherOnCompletedTargetMagic() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	 static IMatcher1ActionEntity*>*& _matcherOnCompletedUse() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	 static IMatcher1ActionEntity*>*& _matcherOnDeath() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	 static IMatcher1ActionEntity*>*& _matcherOnStart() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	 static IMatcher1ActionEntity*>*& _matcherPeriod() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	 static IMatcher1ActionEntity*>*& _matcherProgressQuest() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	 static IMatcher1ActionEntity*>*& _matcherRotateTo() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	 static IMatcher1ActionEntity*>*& _matcherRotateToTarget() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	 static IMatcher1ActionEntity*>*& _matcherRotation() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	 static IMatcher1ActionEntity*>*& _matcherSequenceIndex() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	 static IMatcher1ActionEntity*>*& _matcherSequenceRandom() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	 static IMatcher1ActionEntity*>*& _matcherStartActionEffect() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	 static IMatcher1ActionEntity*>*& _matcherStartTeleport() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	 static IMatcher1ActionEntity*>*& _matcherStartTime() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	 static IMatcher1ActionEntity*>*& _matcherStopMove() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	 static IMatcher1ActionEntity*>*& _matcherSuccessActionType() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	 static IMatcher1ActionEntity*>*& _matcherSuccess() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	 static IMatcher1ActionEntity*>*& _matcherTags() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	 static IMatcher1ActionEntity*>*& _matcherTarget() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	 static IMatcher1ActionEntity*>*& _matcherTargetPosition() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	 static IMatcher1ActionEntity*>*& _matcherTargets() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	 static IMatcher1ActionEntity*>*& _matcherToolTip() {
		return *(IMatcher1ActionEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x348);
	}

	 static IAllOfMatcher1ActionEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1ActionEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x189E904))(0, indices);
	}
	 static IAllOfMatcher1ActionEntity*>* AllOf_1(Il2CppArray<IMatcher1ActionEntity*>*>* matchers) {
		return ((IAllOfMatcher1ActionEntity*>* (*)(void *, Il2CppArray<IMatcher1ActionEntity*>*>*))(Il2CppBase() + 0x189E97C))(0, matchers);
	}
	 static IAnyOfMatcher1ActionEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1ActionEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x189E9F4))(0, indices);
	}
	 static IAnyOfMatcher1ActionEntity*>* AnyOf_1(Il2CppArray<IMatcher1ActionEntity*>*>* matchers) {
		return ((IAnyOfMatcher1ActionEntity*>* (*)(void *, Il2CppArray<IMatcher1ActionEntity*>*>*))(Il2CppBase() + 0x189EA6C))(0, matchers);
	}
	 static IMatcher1ActionEntity*>* get_AOE() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189EAE4))(0);
	}
	 static IMatcher1ActionEntity*>* get_ActionType() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189EC80))(0);
	}
	 static IMatcher1ActionEntity*>* get_ActiveCondition() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189EE00))(0);
	}
	 static IMatcher1ActionEntity*>* get_Actor() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189EF9C))(0);
	}
	 static IMatcher1ActionEntity*>* get_Animator() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189F138))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyActionEffect() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189F2D4))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyActivateStatue() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189F470))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyActorCooldown() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189F60C))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyActorMagic() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189F7A8))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyCharge() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189F944))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyChat() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189FAE0))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyConsume() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189FC7C))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyDamage() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189FE18))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyDestroyChildren() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x189FFB4))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyDestroy() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A0150))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyDestroyTargets() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A02EC))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyDurabilityDamage() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A0488))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyFishing() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A0624))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyHeal() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A07C0))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyHook() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A095C))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyInPvP() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A0AF8))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyLevelCapUp() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A0C94))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyLocationMagic() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A0E30))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyLockUnlock() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A0FCC))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyMove() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A1168))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyOnActorEffect() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A1304))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyOnAnotherTargetEffect() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A14A0))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyOnTargetEffect() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A163C))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyOpenWindow() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A17D8))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyPickup() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A1974))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyPlace() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A1B10))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyPlayerKill() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A1CAC))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyPortal() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A1E48))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyResurrect() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A1FE8))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplySelectClass() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A2188))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplySelectMount() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A2328))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplySelectPet() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A24C8))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplySendInventory() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A2668))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplySneak() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A2808))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyStartDialogue() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A29A8))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplySwitchActive() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A2B48))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyTargetMagic() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A2CE8))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyTargetNeutralize() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A2E88))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyTax() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A3028))(0);
	}
	 static IMatcher1ActionEntity*>* get_ApplyTeleport() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A31C8))(0);
	}
	 static IMatcher1ActionEntity*>* get_BlockMoveInventory() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A3368))(0);
	}
	 static IMatcher1ActionEntity*>* get_Blueprint() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A3508))(0);
	}
	 static IMatcher1ActionEntity*>* get_BreakActionEffect() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A36A8))(0);
	}
	 static IMatcher1ActionEntity*>* get_CompleteOnApply() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A3848))(0);
	}
	 static IMatcher1ActionEntity*>* get_Completed() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A39E8))(0);
	}
	 static IMatcher1ActionEntity*>* get_DamageInterrupted() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A3B88))(0);
	}
	 static IMatcher1ActionEntity*>* get_DamageStat() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A3D28))(0);
	}
	 static IMatcher1ActionEntity*>* get_Delay() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A3EC8))(0);
	}
	 static IMatcher1ActionEntity*>* get_DismountCooldown() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A4068))(0);
	}
	 static IMatcher1ActionEntity*>* get_DurationCoef() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A4208))(0);
	}
	 static IMatcher1ActionEntity*>* get_Duration() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A43A8))(0);
	}
	 static IMatcher1ActionEntity*>* get_FailedApplyOnActorEffect() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A4548))(0);
	}
	 static IMatcher1ActionEntity*>* get_FailedApplyOnTargetEffect() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A46E8))(0);
	}
	 static IMatcher1ActionEntity*>* get_HealPrediction() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A4888))(0);
	}
	 static IMatcher1ActionEntity*>* get_HitActionEffect() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A4A28))(0);
	}
	 static IMatcher1ActionEntity*>* get_HitActorCooldown() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A4BC8))(0);
	}
	 static IMatcher1ActionEntity*>* get_HitActorMagic() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A4D68))(0);
	}
	 static IMatcher1ActionEntity*>* get_HitTargetMagic() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A4F08))(0);
	}
	 static IMatcher1ActionEntity*>* get_Icon() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A50A8))(0);
	}
	 static IMatcher1ActionEntity*>* get_Id() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A5248))(0);
	}
	 static IMatcher1ActionEntity*>* get_IgnoreArmorPercent() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A53E8))(0);
	}
	 static IMatcher1ActionEntity*>* get_IgnoreControls() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A5588))(0);
	}
	 static IMatcher1ActionEntity*>* get_IgnoreItemParams() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A5728))(0);
	}
	 static IMatcher1ActionEntity*>* get_Infinity() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A58C8))(0);
	}
	 static IMatcher1ActionEntity*>* get_InputInterrupted() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A5A68))(0);
	}
	 static IMatcher1ActionEntity*>* get_InventoryItem() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A5C08))(0);
	}
	 static IMatcher1ActionEntity*>* get_Item() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A5DA8))(0);
	}
	 static IMatcher1ActionEntity*>* get_LifeSteal() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A5F48))(0);
	}
	 static IMatcher1ActionEntity*>* get_LocalId() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A60E8))(0);
	}
	 static IMatcher1ActionEntity*>* get_LocalRotation() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A6288))(0);
	}
	 static IMatcher1ActionEntity*>* get_MoveToTarget() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A6428))(0);
	}
	 static IMatcher1ActionEntity*>* get_NextMustAppliedAction() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A65C8))(0);
	}
	 static IMatcher1ActionEntity*>* get_OldBlueprint() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A6768))(0);
	}
	 static IMatcher1ActionEntity*>* get_OnActionApply() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A6908))(0);
	}
	 static IMatcher1ActionEntity*>* get_OnActionStart() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A6AA8))(0);
	}
	 static IMatcher1ActionEntity*>* get_OnApply() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A6C48))(0);
	}
	 static IMatcher1ActionEntity*>* get_OnCompletedActorMagic() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A6DE8))(0);
	}
	 static IMatcher1ActionEntity*>* get_OnCompletedApplyPlace() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A6F88))(0);
	}
	 static IMatcher1ActionEntity*>* get_OnCompletedTargetEffect() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A7128))(0);
	}
	 static IMatcher1ActionEntity*>* get_OnCompletedTargetMagic() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A72C8))(0);
	}
	 static IMatcher1ActionEntity*>* get_OnCompletedUse() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A7468))(0);
	}
	 static IMatcher1ActionEntity*>* get_OnDeath() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A7608))(0);
	}
	 static IMatcher1ActionEntity*>* get_OnStart() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A77A8))(0);
	}
	 static IMatcher1ActionEntity*>* get_Period() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A7948))(0);
	}
	 static IMatcher1ActionEntity*>* get_ProgressQuest() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A7AE8))(0);
	}
	 static IMatcher1ActionEntity*>* get_RotateTo() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A7C88))(0);
	}
	 static IMatcher1ActionEntity*>* get_RotateToTarget() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A7E28))(0);
	}
	 static IMatcher1ActionEntity*>* get_Rotation() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A7FC8))(0);
	}
	 static IMatcher1ActionEntity*>* get_SequenceIndex() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A8168))(0);
	}
	 static IMatcher1ActionEntity*>* get_SequenceRandom() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A8308))(0);
	}
	 static IMatcher1ActionEntity*>* get_StartActionEffect() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A84A8))(0);
	}
	 static IMatcher1ActionEntity*>* get_StartTeleport() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A8648))(0);
	}
	 static IMatcher1ActionEntity*>* get_StartTime() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A87E8))(0);
	}
	 static IMatcher1ActionEntity*>* get_StopMove() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A8988))(0);
	}
	 static IMatcher1ActionEntity*>* get_SuccessActionType() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A8B28))(0);
	}
	 static IMatcher1ActionEntity*>* get_Success() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A8CC8))(0);
	}
	 static IMatcher1ActionEntity*>* get_Tags() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A8E68))(0);
	}
	 static IMatcher1ActionEntity*>* get_Target() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A9008))(0);
	}
	 static IMatcher1ActionEntity*>* get_TargetPosition() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A91A8))(0);
	}
	 static IMatcher1ActionEntity*>* get_Targets() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A9348))(0);
	}
	 static IMatcher1ActionEntity*>* get_ToolTip() {
		return ((IMatcher1ActionEntity*>* (*)(void *))(Il2CppBase() + 0x18A94E8))(0);
	}

};

