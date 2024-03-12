#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionMatcher"));
	}

	template <typename T = void*> static T& _matcherAOE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherActionType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherActiveCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& _matcherActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& _matcherAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& _matcherApplyActionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& _matcherApplyActivateStatue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& _matcherApplyActorCooldown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& _matcherApplyActorMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& _matcherApplyCharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& _matcherApplyChat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = void*> static T& _matcherApplyConsume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = void*> static T& _matcherApplyDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = void*> static T& _matcherApplyDestroyChildren() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = void*> static T& _matcherApplyDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = void*> static T& _matcherApplyDestroyTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = void*> static T& _matcherApplyDurabilityDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = void*> static T& _matcherApplyFishing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = void*> static T& _matcherApplyHeal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = void*> static T& _matcherApplyHook() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = void*> static T& _matcherApplyInPvP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = void*> static T& _matcherApplyLevelCapUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = void*> static T& _matcherApplyLocationMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = void*> static T& _matcherApplyLockUnlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = void*> static T& _matcherApplyMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = void*> static T& _matcherApplyOnActorEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = void*> static T& _matcherApplyOnAnotherTargetEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = void*> static T& _matcherApplyOnTargetEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = void*> static T& _matcherApplyOpenWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = void*> static T& _matcherApplyPickup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = void*> static T& _matcherApplyPlace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = void*> static T& _matcherApplyPlayerKill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = void*> static T& _matcherApplyPortal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = void*> static T& _matcherApplyResurrect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = void*> static T& _matcherApplySelectClass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = void*> static T& _matcherApplySelectMount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = void*> static T& _matcherApplySelectPet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = void*> static T& _matcherApplySendInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = void*> static T& _matcherApplySneak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = void*> static T& _matcherApplyStartDialogue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = void*> static T& _matcherApplySwitchActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = void*> static T& _matcherApplyTargetMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = void*> static T& _matcherApplyTargetNeutralize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = void*> static T& _matcherApplyTax() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = void*> static T& _matcherApplyTeleport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = void*> static T& _matcherBlockMoveInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = void*> static T& _matcherBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = void*> static T& _matcherBreakActionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = void*> static T& _matcherCompleteOnApply() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = void*> static T& _matcherCompleted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = void*> static T& _matcherDamageInterrupted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = void*> static T& _matcherDamageStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = void*> static T& _matcherDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = void*> static T& _matcherDismountCooldown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = void*> static T& _matcherDurationCoef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = void*> static T& _matcherDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = void*> static T& _matcherFailedApplyOnActorEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = void*> static T& _matcherFailedApplyOnTargetEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = void*> static T& _matcherHealPrediction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = void*> static T& _matcherHitActionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = void*> static T& _matcherHitActorCooldown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = void*> static T& _matcherHitActorMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = void*> static T& _matcherHitTargetMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = void*> static T& _matcherIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = void*> static T& _matcherId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = void*> static T& _matcherIgnoreArmorPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = void*> static T& _matcherIgnoreControls() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = void*> static T& _matcherIgnoreItemParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = void*> static T& _matcherInfinity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = void*> static T& _matcherInputInterrupted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = void*> static T& _matcherInventoryItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = void*> static T& _matcherItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = void*> static T& _matcherLifeSteal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = void*> static T& _matcherLocalId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = void*> static T& _matcherLocalRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = void*> static T& _matcherMoveToTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = void*> static T& _matcherNextMustAppliedAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = void*> static T& _matcherOldBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = void*> static T& _matcherOnActionApply() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = void*> static T& _matcherOnActionStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = void*> static T& _matcherOnApply() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = void*> static T& _matcherOnCompletedActorMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = void*> static T& _matcherOnCompletedApplyPlace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	template <typename T = void*> static T& _matcherOnCompletedTargetEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	template <typename T = void*> static T& _matcherOnCompletedTargetMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	template <typename T = void*> static T& _matcherOnCompletedUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	template <typename T = void*> static T& _matcherOnDeath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	template <typename T = void*> static T& _matcherOnStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	template <typename T = void*> static T& _matcherPeriod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	template <typename T = void*> static T& _matcherProgressQuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	template <typename T = void*> static T& _matcherRotateTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	template <typename T = void*> static T& _matcherRotateToTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	template <typename T = void*> static T& _matcherRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	template <typename T = void*> static T& _matcherSequenceIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	template <typename T = void*> static T& _matcherSequenceRandom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	template <typename T = void*> static T& _matcherStartActionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	template <typename T = void*> static T& _matcherStartTeleport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	template <typename T = void*> static T& _matcherStartTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	template <typename T = void*> static T& _matcherStopMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	template <typename T = void*> static T& _matcherSuccessActionType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	template <typename T = void*> static T& _matcherSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	template <typename T = void*> static T& _matcherTags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	template <typename T = void*> static T& _matcherTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	template <typename T = void*> static T& _matcherTargetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	template <typename T = void*> static T& _matcherTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	template <typename T = void*> static T& _matcherToolTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x348);
	}

	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x189E904))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x189E97C))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x189E9F4))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x189EA6C))(0, matchers);
	}
	template <typename T = void*> static T get_AOE() {
		return ((T (*)(void *))(Il2CppBase() + 0x189EAE4))(0);
	}
	template <typename T = void*> static T get_ActionType() {
		return ((T (*)(void *))(Il2CppBase() + 0x189EC80))(0);
	}
	template <typename T = void*> static T get_ActiveCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x189EE00))(0);
	}
	template <typename T = void*> static T get_Actor() {
		return ((T (*)(void *))(Il2CppBase() + 0x189EF9C))(0);
	}
	template <typename T = void*> static T get_Animator() {
		return ((T (*)(void *))(Il2CppBase() + 0x189F138))(0);
	}
	template <typename T = void*> static T get_ApplyActionEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x189F2D4))(0);
	}
	template <typename T = void*> static T get_ApplyActivateStatue() {
		return ((T (*)(void *))(Il2CppBase() + 0x189F470))(0);
	}
	template <typename T = void*> static T get_ApplyActorCooldown() {
		return ((T (*)(void *))(Il2CppBase() + 0x189F60C))(0);
	}
	template <typename T = void*> static T get_ApplyActorMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x189F7A8))(0);
	}
	template <typename T = void*> static T get_ApplyCharge() {
		return ((T (*)(void *))(Il2CppBase() + 0x189F944))(0);
	}
	template <typename T = void*> static T get_ApplyChat() {
		return ((T (*)(void *))(Il2CppBase() + 0x189FAE0))(0);
	}
	template <typename T = void*> static T get_ApplyConsume() {
		return ((T (*)(void *))(Il2CppBase() + 0x189FC7C))(0);
	}
	template <typename T = void*> static T get_ApplyDamage() {
		return ((T (*)(void *))(Il2CppBase() + 0x189FE18))(0);
	}
	template <typename T = void*> static T get_ApplyDestroyChildren() {
		return ((T (*)(void *))(Il2CppBase() + 0x189FFB4))(0);
	}
	template <typename T = void*> static T get_ApplyDestroy() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A0150))(0);
	}
	template <typename T = void*> static T get_ApplyDestroyTargets() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A02EC))(0);
	}
	template <typename T = void*> static T get_ApplyDurabilityDamage() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A0488))(0);
	}
	template <typename T = void*> static T get_ApplyFishing() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A0624))(0);
	}
	template <typename T = void*> static T get_ApplyHeal() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A07C0))(0);
	}
	template <typename T = void*> static T get_ApplyHook() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A095C))(0);
	}
	template <typename T = void*> static T get_ApplyInPvP() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A0AF8))(0);
	}
	template <typename T = void*> static T get_ApplyLevelCapUp() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A0C94))(0);
	}
	template <typename T = void*> static T get_ApplyLocationMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A0E30))(0);
	}
	template <typename T = void*> static T get_ApplyLockUnlock() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A0FCC))(0);
	}
	template <typename T = void*> static T get_ApplyMove() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A1168))(0);
	}
	template <typename T = void*> static T get_ApplyOnActorEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A1304))(0);
	}
	template <typename T = void*> static T get_ApplyOnAnotherTargetEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A14A0))(0);
	}
	template <typename T = void*> static T get_ApplyOnTargetEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A163C))(0);
	}
	template <typename T = void*> static T get_ApplyOpenWindow() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A17D8))(0);
	}
	template <typename T = void*> static T get_ApplyPickup() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A1974))(0);
	}
	template <typename T = void*> static T get_ApplyPlace() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A1B10))(0);
	}
	template <typename T = void*> static T get_ApplyPlayerKill() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A1CAC))(0);
	}
	template <typename T = void*> static T get_ApplyPortal() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A1E48))(0);
	}
	template <typename T = void*> static T get_ApplyResurrect() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A1FE8))(0);
	}
	template <typename T = void*> static T get_ApplySelectClass() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A2188))(0);
	}
	template <typename T = void*> static T get_ApplySelectMount() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A2328))(0);
	}
	template <typename T = void*> static T get_ApplySelectPet() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A24C8))(0);
	}
	template <typename T = void*> static T get_ApplySendInventory() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A2668))(0);
	}
	template <typename T = void*> static T get_ApplySneak() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A2808))(0);
	}
	template <typename T = void*> static T get_ApplyStartDialogue() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A29A8))(0);
	}
	template <typename T = void*> static T get_ApplySwitchActive() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A2B48))(0);
	}
	template <typename T = void*> static T get_ApplyTargetMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A2CE8))(0);
	}
	template <typename T = void*> static T get_ApplyTargetNeutralize() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A2E88))(0);
	}
	template <typename T = void*> static T get_ApplyTax() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A3028))(0);
	}
	template <typename T = void*> static T get_ApplyTeleport() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A31C8))(0);
	}
	template <typename T = void*> static T get_BlockMoveInventory() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A3368))(0);
	}
	template <typename T = void*> static T get_Blueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A3508))(0);
	}
	template <typename T = void*> static T get_BreakActionEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A36A8))(0);
	}
	template <typename T = void*> static T get_CompleteOnApply() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A3848))(0);
	}
	template <typename T = void*> static T get_Completed() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A39E8))(0);
	}
	template <typename T = void*> static T get_DamageInterrupted() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A3B88))(0);
	}
	template <typename T = void*> static T get_DamageStat() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A3D28))(0);
	}
	template <typename T = void*> static T get_Delay() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A3EC8))(0);
	}
	template <typename T = void*> static T get_DismountCooldown() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A4068))(0);
	}
	template <typename T = void*> static T get_DurationCoef() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A4208))(0);
	}
	template <typename T = void*> static T get_Duration() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A43A8))(0);
	}
	template <typename T = void*> static T get_FailedApplyOnActorEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A4548))(0);
	}
	template <typename T = void*> static T get_FailedApplyOnTargetEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A46E8))(0);
	}
	template <typename T = void*> static T get_HealPrediction() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A4888))(0);
	}
	template <typename T = void*> static T get_HitActionEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A4A28))(0);
	}
	template <typename T = void*> static T get_HitActorCooldown() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A4BC8))(0);
	}
	template <typename T = void*> static T get_HitActorMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A4D68))(0);
	}
	template <typename T = void*> static T get_HitTargetMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A4F08))(0);
	}
	template <typename T = void*> static T get_Icon() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A50A8))(0);
	}
	template <typename T = void*> static T get_Id() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A5248))(0);
	}
	template <typename T = void*> static T get_IgnoreArmorPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A53E8))(0);
	}
	template <typename T = void*> static T get_IgnoreControls() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A5588))(0);
	}
	template <typename T = void*> static T get_IgnoreItemParams() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A5728))(0);
	}
	template <typename T = void*> static T get_Infinity() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A58C8))(0);
	}
	template <typename T = void*> static T get_InputInterrupted() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A5A68))(0);
	}
	template <typename T = void*> static T get_InventoryItem() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A5C08))(0);
	}
	template <typename T = void*> static T get_Item() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A5DA8))(0);
	}
	template <typename T = void*> static T get_LifeSteal() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A5F48))(0);
	}
	template <typename T = void*> static T get_LocalId() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A60E8))(0);
	}
	template <typename T = void*> static T get_LocalRotation() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A6288))(0);
	}
	template <typename T = void*> static T get_MoveToTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A6428))(0);
	}
	template <typename T = void*> static T get_NextMustAppliedAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A65C8))(0);
	}
	template <typename T = void*> static T get_OldBlueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A6768))(0);
	}
	template <typename T = void*> static T get_OnActionApply() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A6908))(0);
	}
	template <typename T = void*> static T get_OnActionStart() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A6AA8))(0);
	}
	template <typename T = void*> static T get_OnApply() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A6C48))(0);
	}
	template <typename T = void*> static T get_OnCompletedActorMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A6DE8))(0);
	}
	template <typename T = void*> static T get_OnCompletedApplyPlace() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A6F88))(0);
	}
	template <typename T = void*> static T get_OnCompletedTargetEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A7128))(0);
	}
	template <typename T = void*> static T get_OnCompletedTargetMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A72C8))(0);
	}
	template <typename T = void*> static T get_OnCompletedUse() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A7468))(0);
	}
	template <typename T = void*> static T get_OnDeath() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A7608))(0);
	}
	template <typename T = void*> static T get_OnStart() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A77A8))(0);
	}
	template <typename T = void*> static T get_Period() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A7948))(0);
	}
	template <typename T = void*> static T get_ProgressQuest() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A7AE8))(0);
	}
	template <typename T = void*> static T get_RotateTo() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A7C88))(0);
	}
	template <typename T = void*> static T get_RotateToTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A7E28))(0);
	}
	template <typename T = void*> static T get_Rotation() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A7FC8))(0);
	}
	template <typename T = void*> static T get_SequenceIndex() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A8168))(0);
	}
	template <typename T = void*> static T get_SequenceRandom() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A8308))(0);
	}
	template <typename T = void*> static T get_StartActionEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A84A8))(0);
	}
	template <typename T = void*> static T get_StartTeleport() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A8648))(0);
	}
	template <typename T = void*> static T get_StartTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A87E8))(0);
	}
	template <typename T = void*> static T get_StopMove() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A8988))(0);
	}
	template <typename T = void*> static T get_SuccessActionType() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A8B28))(0);
	}
	template <typename T = void*> static T get_Success() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A8CC8))(0);
	}
	template <typename T = void*> static T get_Tags() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A8E68))(0);
	}
	template <typename T = void*> static T get_Target() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A9008))(0);
	}
	template <typename T = void*> static T get_TargetPosition() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A91A8))(0);
	}
	template <typename T = void*> static T get_Targets() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A9348))(0);
	}
	template <typename T = void*> static T get_ToolTip() {
		return ((T (*)(void *))(Il2CppBase() + 0x18A94E8))(0);
	}

};

}
