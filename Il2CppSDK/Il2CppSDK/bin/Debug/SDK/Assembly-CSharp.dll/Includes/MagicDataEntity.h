#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicDataEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicDataEntity"));
	}

	template <typename T = ApplyInPvPComponent*> static T& applyInPvPComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = BurnedComponent*> static T& burnedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = CursedComponent*> static T& cursedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = DamageImmuneComponent*> static T& damageImmuneComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = DebuffImmuneComponent*> static T& debuffImmuneComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = DisabledComponent*> static T& disabledComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = DisarmingFeetComponent*> static T& disarmingFeetComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = DisarmingWeaponComponent*> static T& disarmingWeaponComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = DualWeaponComponent*> static T& dualWeaponComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = DurationPredictionComponent*> static T& durationPredictionComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = FallenComponent*> static T& fallenComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = FollowTargetComponent*> static T& followTargetComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = FrozenComponent*> static T& frozenComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = GhostComponent*> static T& ghostComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = HealingComponent*> static T& healingComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = HiddenComponent*> static T& hiddenComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = ImmortalComponent*> static T& immortalComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = ImpotentImmuneComponent*> static T& impotentImmuneComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = InPvPComponent*> static T& inPvPComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = InstabilityComponent*> static T& instabilityComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = InvisibleComponent*> static T& invisibleComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = KnockdownComponent*> static T& knockdownComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = LostControlComponent*> static T& lostControlComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = LostControlImmuneComponent*> static T& lostControlImmuneComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = MinimapHiddenComponent*> static T& minimapHiddenComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = NotAggressiveComponent*> static T& notAggressiveComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = PatrollingComponent*> static T& patrollingComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = PermanentMovingComponent*> static T& permanentMovingComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = PersonalForTargetComponent*> static T& personalForTargetComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = PoisonedComponent*> static T& poisonedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = QuestTargetComponent*> static T& questTargetComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = RemovableComponent*> static T& removableComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = RemoveOnMoveComponent*> static T& removeOnMoveComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = RidingComponent*> static T& ridingComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = RootImmuneComponent*> static T& rootImmuneComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = RunesDisabledComponent*> static T& runesDisabledComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = SilenceImmuneComponent*> static T& silenceImmuneComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = SneakComponent*> static T& sneakComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = SneakDamageImmuneComponent*> static T& sneakDamageImmuneComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = SneakImmuneComponent*> static T& sneakImmuneComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = SpeedDecImmuneComponent*> static T& speedDecImmuneComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = SprintComponent*> static T& sprintComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = StunImmuneComponent*> static T& stunImmuneComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = TriggerTargetComponent*> static T& triggerTargetComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = TrueVisionComponent*> static T& trueVisionComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = UnhiddenComponent*> static T& unhiddenComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120D76C))(this);
	}
	template <typename T = ActivationComponent*> T get_activation() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120D81C))(this);
	}
	template <typename T = bool> T get_hasActivation() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC3EC))(this);
	}
	template <typename T = void> T AddActivation(Il2CppString* newCondition, float newActiveDelay, float newDeactiveDelay) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, float, float))(Il2CppBase() + 0x120D8A4))(this, newCondition, newActiveDelay, newDeactiveDelay);
	}
	template <typename T = void> T ReplaceActivation(Il2CppString* newCondition, float newActiveDelay, float newDeactiveDelay) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, float, float))(Il2CppBase() + 0x120D9CC))(this, newCondition, newActiveDelay, newDeactiveDelay);
	}
	template <typename T = void> T RemoveActivation() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120DAF4))(this);
	}
	template <typename T = ActiveComponent*> T get_active() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120DB00))(this);
	}
	template <typename T = bool> T get_hasActive() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120D398))(this);
	}
	template <typename T = void> T AddActive(bool newValue) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x120D3A4))(this, newValue);
	}
	template <typename T = void> T ReplaceActive(bool newValue) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x120DB88))(this, newValue);
	}
	template <typename T = void> T RemoveActive() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120DC90))(this);
	}
	template <typename T = ActiveConditionComponent*> T get_activeCondition() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120D4B8))(this);
	}
	template <typename T = bool> T get_hasActiveCondition() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120D4AC))(this);
	}
	template <typename T = void> T AddActiveCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x120DC9C))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T ReplaceActiveCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x120DDEC))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T RemoveActiveCondition() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120DF3C))(this);
	}
	template <typename T = ActiveEffectComponent*> T get_activeEffect() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120DF48))(this);
	}
	template <typename T = bool> T get_hasActiveEffect() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120DFD0))(this);
	}
	template <typename T = void> T AddActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x120DFDC))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x120E178))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveActiveEffect() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120E314))(this);
	}
	template <typename T = AddChanceComponent*> T get_addChance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120E320))(this);
	}
	template <typename T = bool> T get_hasAddChance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120E3A8))(this);
	}
	template <typename T = void> T AddAddChance(Il2CppString* newName, float newValue) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, float))(Il2CppBase() + 0x120E3B4))(this, newName, newValue);
	}
	template <typename T = void> T ReplaceAddChance(Il2CppString* newName, float newValue) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, float))(Il2CppBase() + 0x120E4D8))(this, newName, newValue);
	}
	template <typename T = void> T RemoveAddChance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120E5FC))(this);
	}
	template <typename T = ApplyDamageComponent*> T get_applyDamage() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC410))(this);
	}
	template <typename T = bool> T get_hasApplyDamage() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC004))(this);
	}
	template <typename T = void> T AddApplyDamage(float newDelay, Il2CppString* newName, float newMaxTargetPlayerHealthCoef, bool newIgnoreDamageCoef, DamageDependType* newDepend, float newMaxValue) {
		return ((T (*)(MagicDataEntity*, float, Il2CppString*, float, bool, DamageDependType*, float))(Il2CppBase() + 0x120E608))(this, newDelay, newName, newMaxTargetPlayerHealthCoef, newIgnoreDamageCoef, newDepend, newMaxValue);
	}
	template <typename T = void> T ReplaceApplyDamage(float newDelay, Il2CppString* newName, float newMaxTargetPlayerHealthCoef, bool newIgnoreDamageCoef, DamageDependType* newDepend, float newMaxValue) {
		return ((T (*)(MagicDataEntity*, float, Il2CppString*, float, bool, DamageDependType*, float))(Il2CppBase() + 0x120E760))(this, newDelay, newName, newMaxTargetPlayerHealthCoef, newIgnoreDamageCoef, newDepend, newMaxValue);
	}
	template <typename T = void> T RemoveApplyDamage() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120E8B8))(this);
	}
	template <typename T = ApplyDestroyComponent*> T get_applyDestroy() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120E8C4))(this);
	}
	template <typename T = bool> T get_hasApplyDestroy() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120E94C))(this);
	}
	template <typename T = void> T AddApplyDestroy(float newDelay, bool newInstantly) {
		return ((T (*)(MagicDataEntity*, float, bool))(Il2CppBase() + 0x120E958))(this, newDelay, newInstantly);
	}
	template <typename T = void> T ReplaceApplyDestroy(float newDelay, bool newInstantly) {
		return ((T (*)(MagicDataEntity*, float, bool))(Il2CppBase() + 0x120EA70))(this, newDelay, newInstantly);
	}
	template <typename T = void> T RemoveApplyDestroy() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120EB88))(this);
	}
	template <typename T = ApplyHealComponent*> T get_applyHeal() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120EB94))(this);
	}
	template <typename T = bool> T get_hasApplyHeal() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120EC1C))(this);
	}
	template <typename T = void> T AddApplyHeal(float newDelay, HealParams* newParams) {
		return ((T (*)(MagicDataEntity*, float, HealParams*))(Il2CppBase() + 0x120EC28))(this, newDelay, newParams);
	}
	template <typename T = void> T ReplaceApplyHeal(float newDelay, HealParams* newParams) {
		return ((T (*)(MagicDataEntity*, float, HealParams*))(Il2CppBase() + 0x120ED40))(this, newDelay, newParams);
	}
	template <typename T = void> T RemoveApplyHeal() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120EE58))(this);
	}
	template <typename T = bool> T get_isApplyInPvP() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120EE64))(this);
	}
	template <typename T = void> T set_isApplyInPvP(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x120EE70))(this, value);
	}
	template <typename T = ApplyMagicComponent*> T get_applyMagic() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120EF88))(this);
	}
	template <typename T = bool> T get_hasApplyMagic() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120F010))(this);
	}
	template <typename T = void> T AddApplyMagic(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Nullable1float>* newDuration, bool newSourceDuration) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, Nullable1float>*, bool))(Il2CppBase() + 0x120F01C))(this, newName, newNames, newDuration, newSourceDuration);
	}
	template <typename T = void> T ReplaceApplyMagic(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Nullable1float>* newDuration, bool newSourceDuration) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, Nullable1float>*, bool))(Il2CppBase() + 0x120F160))(this, newName, newNames, newDuration, newSourceDuration);
	}
	template <typename T = void> T RemoveApplyMagic() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120F2A4))(this);
	}
	template <typename T = ApplyOnActorEffectComponent*> T get_applyOnActorEffect() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120F2B0))(this);
	}
	template <typename T = bool> T get_hasApplyOnActorEffect() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120F338))(this);
	}
	template <typename T = void> T AddApplyOnActorEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x120F344))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceApplyOnActorEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x120F4E0))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveApplyOnActorEffect() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120F67C))(this);
	}
	template <typename T = ApplyOnTargetEffectComponent*> T get_applyOnTargetEffect() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120F688))(this);
	}
	template <typename T = bool> T get_hasApplyOnTargetEffect() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120F710))(this);
	}
	template <typename T = void> T AddApplyOnTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x120F71C))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceApplyOnTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x120F8B8))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveApplyOnTargetEffect() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120FA54))(this);
	}
	template <typename T = ApplyPlaceComponent*> T get_applyPlace() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120FA60))(this);
	}
	template <typename T = bool> T get_hasApplyPlace() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120FAE8))(this);
	}
	template <typename T = void> T AddApplyPlace(ApplyPlaceParams* newParams, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(MagicDataEntity*, ApplyPlaceParams*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x120FAF4))(this, newParams, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceApplyPlace(ApplyPlaceParams* newParams, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(MagicDataEntity*, ApplyPlaceParams*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x120FC2C))(this, newParams, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveApplyPlace() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120FD64))(this);
	}
	template <typename T = ApplyTeleportComponent*> T get_applyTeleport() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120FD70))(this);
	}
	template <typename T = bool> T get_hasApplyTeleport() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120FDF8))(this);
	}
	template <typename T = void> T AddApplyTeleport(Il2CppString* newTargetName, TargetsSelector* newSelector, DirectionSource* newDirection, float newOffset, bool newIgnoreWall) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, TargetsSelector*, DirectionSource*, float, bool))(Il2CppBase() + 0x120FE04))(this, newTargetName, newSelector, newDirection, newOffset, newIgnoreWall);
	}
	template <typename T = void> T ReplaceApplyTeleport(Il2CppString* newTargetName, TargetsSelector* newSelector, DirectionSource* newDirection, float newOffset, bool newIgnoreWall) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, TargetsSelector*, DirectionSource*, float, bool))(Il2CppBase() + 0x120FF58))(this, newTargetName, newSelector, newDirection, newOffset, newIgnoreWall);
	}
	template <typename T = void> T RemoveApplyTeleport() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12100AC))(this);
	}
	template <typename T = ApplyTenacityRegenerationComponent*> T get_applyTenacityRegeneration() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12100B8))(this);
	}
	template <typename T = bool> T get_hasApplyTenacityRegeneration() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1210140))(this);
	}
	template <typename T = void> T AddApplyTenacityRegeneration(bool newDependsOnMaxTenacity, float newValue) {
		return ((T (*)(MagicDataEntity*, bool, float))(Il2CppBase() + 0x121014C))(this, newDependsOnMaxTenacity, newValue);
	}
	template <typename T = void> T ReplaceApplyTenacityRegeneration(bool newDependsOnMaxTenacity, float newValue) {
		return ((T (*)(MagicDataEntity*, bool, float))(Il2CppBase() + 0x1210264))(this, newDependsOnMaxTenacity, newValue);
	}
	template <typename T = void> T RemoveApplyTenacityRegeneration() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121037C))(this);
	}
	template <typename T = ArmorDecComponent*> T get_armorDec() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1210388))(this);
	}
	template <typename T = bool> T get_hasArmorDec() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1210410))(this);
	}
	template <typename T = void> T AddArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121041C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1210530))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveArmorDec() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1210644))(this);
	}
	template <typename T = ArmorDecPercentComponent*> T get_armorDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1210650))(this);
	}
	template <typename T = bool> T get_hasArmorDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12106D8))(this);
	}
	template <typename T = void> T AddArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12106E4))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12107F8))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveArmorDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121090C))(this);
	}
	template <typename T = ArmorIncComponent*> T get_armorInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1210918))(this);
	}
	template <typename T = bool> T get_hasArmorInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12109A0))(this);
	}
	template <typename T = void> T AddArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12109AC))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1210AC0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveArmorInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1210BD4))(this);
	}
	template <typename T = ArmorIncPercentComponent*> T get_armorIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1210BE0))(this);
	}
	template <typename T = bool> T get_hasArmorIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1210C68))(this);
	}
	template <typename T = void> T AddArmorIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1210C74))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceArmorIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1210D88))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveArmorIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1210E9C))(this);
	}
	template <typename T = AttackPriorityComponent*> T get_attackPriority() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1210EA8))(this);
	}
	template <typename T = bool> T get_hasAttackPriority() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1210F30))(this);
	}
	template <typename T = void> T AddAttackPriority(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1210F3C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceAttackPriority(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1211050))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveAttackPriority() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1211164))(this);
	}
	template <typename T = AttackRadiusIncPercentComponent*> T get_attackRadiusIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1211170))(this);
	}
	template <typename T = bool> T get_hasAttackRadiusIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12111F8))(this);
	}
	template <typename T = void> T AddAttackRadiusIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1211204))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceAttackRadiusIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1211318))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveAttackRadiusIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121142C))(this);
	}
	template <typename T = AttackSpeedDecPercentComponent*> T get_attackSpeedDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1211438))(this);
	}
	template <typename T = bool> T get_hasAttackSpeedDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12114C0))(this);
	}
	template <typename T = void> T AddAttackSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12114CC))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceAttackSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12115E0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveAttackSpeedDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12116F4))(this);
	}
	template <typename T = AttackSpeedIncPercentComponent*> T get_attackSpeedIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1211700))(this);
	}
	template <typename T = bool> T get_hasAttackSpeedIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1211788))(this);
	}
	template <typename T = void> T AddAttackSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1211794))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceAttackSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12118A8))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveAttackSpeedIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12119BC))(this);
	}
	template <typename T = AttractorComponent*> T get_attractor() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12119C8))(this);
	}
	template <typename T = bool> T get_hasAttractor() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1211A50))(this);
	}
	template <typename T = void> T AddAttractor(DirectionType* newDirection, float newDistance, Il2CppString* newProjectileName, Il2CppArray<uintptr_t>* newOnCollisionMagics) {
		return ((T (*)(MagicDataEntity*, DirectionType*, float, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1211A5C))(this, newDirection, newDistance, newProjectileName, newOnCollisionMagics);
	}
	template <typename T = void> T ReplaceAttractor(DirectionType* newDirection, float newDistance, Il2CppString* newProjectileName, Il2CppArray<uintptr_t>* newOnCollisionMagics) {
		return ((T (*)(MagicDataEntity*, DirectionType*, float, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1211BA4))(this, newDirection, newDistance, newProjectileName, newOnCollisionMagics);
	}
	template <typename T = void> T RemoveAttractor() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1211CEC))(this);
	}
	template <typename T = AuraComponent*> T get_aura() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1211CF8))(this);
	}
	template <typename T = bool> T get_hasAura() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1211D80))(this);
	}
	template <typename T = void> T AddAura(Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<uintptr_t>* newList, TargetsSelector* newSelector) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, TargetsSelector*))(Il2CppBase() + 0x1211D8C))(this, newActiveCondition, newName, newList, newSelector);
	}
	template <typename T = void> T ReplaceAura(Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<uintptr_t>* newList, TargetsSelector* newSelector) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, TargetsSelector*))(Il2CppBase() + 0x1211EE4))(this, newActiveCondition, newName, newList, newSelector);
	}
	template <typename T = void> T RemoveAura() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121203C))(this);
	}
	template <typename T = AutoRotationComponent*> T get_autoRotation() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11F2680))(this);
	}
	template <typename T = bool> T get_hasAutoRotation() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11F2674))(this);
	}
	template <typename T = void> T AddAutoRotation(float newSpeed) {
		return ((T (*)(MagicDataEntity*, float))(Il2CppBase() + 0x1212048))(this, newSpeed);
	}
	template <typename T = void> T ReplaceAutoRotation(float newSpeed) {
		return ((T (*)(MagicDataEntity*, float))(Il2CppBase() + 0x121214C))(this, newSpeed);
	}
	template <typename T = void> T RemoveAutoRotation() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1212250))(this);
	}
	template <typename T = BackstabDamageBonusComponent*> T get_backstabDamageBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121225C))(this);
	}
	template <typename T = bool> T get_hasBackstabDamageBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12122E4))(this);
	}
	template <typename T = void> T AddBackstabDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12122F0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceBackstabDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1212404))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveBackstabDamageBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1212518))(this);
	}
	template <typename T = BackstabResistanceComponent*> T get_backstabResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1212524))(this);
	}
	template <typename T = bool> T get_hasBackstabResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12125AC))(this);
	}
	template <typename T = void> T AddBackstabResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12125B8))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceBackstabResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12126CC))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveBackstabResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12127E0))(this);
	}
	template <typename T = BlueprintComponent*> T get_blueprint() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11F539C))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120D810))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(MagicDataEntity*, Il2CppString*))(Il2CppBase() + 0x12127EC))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(MagicDataEntity*, Il2CppString*))(Il2CppBase() + 0x1212900))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1212A14))(this);
	}
	template <typename T = BowResistanceComponent*> T get_bowResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1212A20))(this);
	}
	template <typename T = bool> T get_hasBowResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1212AA8))(this);
	}
	template <typename T = void> T AddBowResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1212AB4))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceBowResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1212BC8))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveBowResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1212CDC))(this);
	}
	template <typename T = bool> T get_isBurned() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1212CE8))(this);
	}
	template <typename T = void> T set_isBurned(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1212CF4))(this, value);
	}
	template <typename T = ChanceComponent*> T get_chance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1212E0C))(this);
	}
	template <typename T = bool> T get_hasChance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120CC84))(this);
	}
	template <typename T = void> T AddChance(float newValue, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(MagicDataEntity*, float, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1212E94))(this, newValue, newName, newNames);
	}
	template <typename T = void> T ReplaceChance(float newValue, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(MagicDataEntity*, float, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1212FCC))(this, newValue, newName, newNames);
	}
	template <typename T = void> T RemoveChance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120CC90))(this);
	}
	template <typename T = ChangeDurationByLostHpComponent*> T get_changeDurationByLostHp() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1213104))(this);
	}
	template <typename T = bool> T get_hasChangeDurationByLostHp() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121318C))(this);
	}
	template <typename T = void> T AddChangeDurationByLostHp(DamageCondition* newDamageCondition, float newSecondsByPercent) {
		return ((T (*)(MagicDataEntity*, DamageCondition*, float))(Il2CppBase() + 0x1213198))(this, newDamageCondition, newSecondsByPercent);
	}
	template <typename T = void> T ReplaceChangeDurationByLostHp(DamageCondition* newDamageCondition, float newSecondsByPercent) {
		return ((T (*)(MagicDataEntity*, DamageCondition*, float))(Il2CppBase() + 0x12132BC))(this, newDamageCondition, newSecondsByPercent);
	}
	template <typename T = void> T RemoveChangeDurationByLostHp() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12133E0))(this);
	}
	template <typename T = ChangeTargetCooldownComponent*> T get_changeTargetCooldown() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12133EC))(this);
	}
	template <typename T = bool> T get_hasChangeTargetCooldown() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1213474))(this);
	}
	template <typename T = void> T AddChangeTargetCooldown(bool newPerHpDmgPercent, float newValue, Il2CppString* newItemTag) {
		return ((T (*)(MagicDataEntity*, bool, float, Il2CppString*))(Il2CppBase() + 0x1213480))(this, newPerHpDmgPercent, newValue, newItemTag);
	}
	template <typename T = void> T ReplaceChangeTargetCooldown(bool newPerHpDmgPercent, float newValue, Il2CppString* newItemTag) {
		return ((T (*)(MagicDataEntity*, bool, float, Il2CppString*))(Il2CppBase() + 0x12135B0))(this, newPerHpDmgPercent, newValue, newItemTag);
	}
	template <typename T = void> T RemoveChangeTargetCooldown() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12136E0))(this);
	}
	template <typename T = ChildrenComponent*> T get_children() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12136EC))(this);
	}
	template <typename T = bool> T get_hasChildren() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1213774))(this);
	}
	template <typename T = void> T AddChildren(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(MagicDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1213780))(this, newNames);
	}
	template <typename T = void> T ReplaceChildren(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(MagicDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1213894))(this, newNames);
	}
	template <typename T = void> T RemoveChildren() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12139A8))(this);
	}
	template <typename T = ClassCooldownReduceComponent*> T get_classCooldownReduce() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12139B4))(this);
	}
	template <typename T = bool> T get_hasClassCooldownReduce() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1213A3C))(this);
	}
	template <typename T = void> T AddClassCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1213A48))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceClassCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1213B5C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveClassCooldownReduce() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1213C70))(this);
	}
	template <typename T = CoefChanceComponent*> T get_coefChance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1213C7C))(this);
	}
	template <typename T = bool> T get_hasCoefChance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1213D04))(this);
	}
	template <typename T = void> T AddCoefChance(Il2CppString* newName, float newValue) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, float))(Il2CppBase() + 0x1213D10))(this, newName, newValue);
	}
	template <typename T = void> T ReplaceCoefChance(Il2CppString* newName, float newValue) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, float))(Il2CppBase() + 0x1213E34))(this, newName, newValue);
	}
	template <typename T = void> T RemoveCoefChance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1213F58))(this);
	}
	template <typename T = CollisionMagicComponent*> T get_collisionMagic() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1213F64))(this);
	}
	template <typename T = bool> T get_hasCollisionMagic() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1213FEC))(this);
	}
	template <typename T = void> T AddCollisionMagic(Il2CppArray<uintptr_t>* newNames, float newPeriod, Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<uintptr_t>* newList, TargetsSelector* newSelector) {
		return ((T (*)(MagicDataEntity*, Il2CppArray<uintptr_t>*, float, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, TargetsSelector*))(Il2CppBase() + 0x1213FF8))(this, newNames, newPeriod, newActiveCondition, newName, newList, newSelector);
	}
	template <typename T = void> T ReplaceCollisionMagic(Il2CppArray<uintptr_t>* newNames, float newPeriod, Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<uintptr_t>* newList, TargetsSelector* newSelector) {
		return ((T (*)(MagicDataEntity*, Il2CppArray<uintptr_t>*, float, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, TargetsSelector*))(Il2CppBase() + 0x121417C))(this, newNames, newPeriod, newActiveCondition, newName, newList, newSelector);
	}
	template <typename T = void> T RemoveCollisionMagic() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1214300))(this);
	}
	template <typename T = CooldownComponent*> T get_cooldown() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120B8E4))(this);
	}
	template <typename T = bool> T get_hasCooldown() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120B8D8))(this);
	}
	template <typename T = void> T AddCooldown(float newValue, float newInitial) {
		return ((T (*)(MagicDataEntity*, float, float))(Il2CppBase() + 0x121430C))(this, newValue, newInitial);
	}
	template <typename T = void> T ReplaceCooldown(float newValue, float newInitial) {
		return ((T (*)(MagicDataEntity*, float, float))(Il2CppBase() + 0x120B96C))(this, newValue, newInitial);
	}
	template <typename T = void> T RemoveCooldown() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120CDB0))(this);
	}
	template <typename T = CountComponent*> T get_count() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1214414))(this);
	}
	template <typename T = bool> T get_hasCount() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121449C))(this);
	}
	template <typename T = void> T AddCount(int32_t newValue) {
		return ((T (*)(MagicDataEntity*, int32_t))(Il2CppBase() + 0x12144A8))(this, newValue);
	}
	template <typename T = void> T ReplaceCount(int32_t newValue) {
		return ((T (*)(MagicDataEntity*, int32_t))(Il2CppBase() + 0x12145AC))(this, newValue);
	}
	template <typename T = void> T RemoveCount() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12146B0))(this);
	}
	template <typename T = CreepDamageBonusComponent*> T get_creepDamageBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120B594))(this);
	}
	template <typename T = bool> T get_hasCreepDamageBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120B588))(this);
	}
	template <typename T = void> T AddCreepDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12146BC))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceCreepDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x120B61C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveCreepDamageBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12147D0))(this);
	}
	template <typename T = CreepResistanceComponent*> T get_creepResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12147DC))(this);
	}
	template <typename T = bool> T get_hasCreepResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1214864))(this);
	}
	template <typename T = void> T AddCreepResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1214870))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceCreepResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1214984))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveCreepResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1214A98))(this);
	}
	template <typename T = bool> T get_isCursed() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1214AA4))(this);
	}
	template <typename T = void> T set_isCursed(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1214AB0))(this, value);
	}
	template <typename T = DamageBlockComponent*> T get_damageBlock() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1214BC8))(this);
	}
	template <typename T = bool> T get_hasDamageBlock() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1214C50))(this);
	}
	template <typename T = void> T AddDamageBlock(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1214C5C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageBlock(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1214D70))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageBlock() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1214E84))(this);
	}
	template <typename T = DamageBlockIncPercentComponent*> T get_damageBlockIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1214E90))(this);
	}
	template <typename T = bool> T get_hasDamageBlockIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120AEE8))(this);
	}
	template <typename T = void> T AddDamageBlockIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1214F18))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageBlockIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121502C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageBlockIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1215140))(this);
	}
	template <typename T = DamageBonusForMissingHealthComponent*> T get_damageBonusForMissingHealth() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121514C))(this);
	}
	template <typename T = bool> T get_hasDamageBonusForMissingHealth() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12151D4))(this);
	}
	template <typename T = void> T AddDamageBonusForMissingHealth(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12151E0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageBonusForMissingHealth(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12152F4))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageBonusForMissingHealth() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1215408))(this);
	}
	template <typename T = DamageComponent*> T get_damage() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC538))(this);
	}
	template <typename T = bool> T get_hasDamage() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC52C))(this);
	}
	template <typename T = void> T AddDamage(float newValue) {
		return ((T (*)(MagicDataEntity*, float))(Il2CppBase() + 0x1215414))(this, newValue);
	}
	template <typename T = void> T ReplaceDamage(float newValue) {
		return ((T (*)(MagicDataEntity*, float))(Il2CppBase() + 0x1215518))(this, newValue);
	}
	template <typename T = void> T RemoveDamage() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121561C))(this);
	}
	template <typename T = DamageDecComponent*> T get_damageDec() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1215628))(this);
	}
	template <typename T = bool> T get_hasDamageDec() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12156B0))(this);
	}
	template <typename T = void> T AddDamageDec(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12156BC))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageDec(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12157D0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageDec() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12158E4))(this);
	}
	template <typename T = DamageDecPercentComponent*> T get_damageDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12158F0))(this);
	}
	template <typename T = bool> T get_hasDamageDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1215978))(this);
	}
	template <typename T = void> T AddDamageDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1215984))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1215A98))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1215BAC))(this);
	}
	template <typename T = bool> T get_isDamageImmune() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1215BB8))(this);
	}
	template <typename T = void> T set_isDamageImmune(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1215BC4))(this, value);
	}
	template <typename T = DamageIncComponent*> T get_damageInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1215CDC))(this);
	}
	template <typename T = bool> T get_hasDamageInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1215D64))(this);
	}
	template <typename T = void> T AddDamageInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1215D70))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1215E84))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1215F98))(this);
	}
	template <typename T = DamageIncPercentComponent*> T get_damageIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120AEF4))(this);
	}
	template <typename T = bool> T get_hasDamageIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1215FA4))(this);
	}
	template <typename T = void> T AddDamageIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1215FB0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x120AF7C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12160C4))(this);
	}
	template <typename T = DamageReflectComponent*> T get_damageReflect() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12160D0))(this);
	}
	template <typename T = bool> T get_hasDamageReflect() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1216158))(this);
	}
	template <typename T = void> T AddDamageReflect(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1216164))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageReflect(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x120CC9C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageReflect() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1216278))(this);
	}
	template <typename T = DamageResistanceComponent*> T get_damageResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1216284))(this);
	}
	template <typename T = bool> T get_hasDamageResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121630C))(this);
	}
	template <typename T = void> T AddDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1216318))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121642C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1216540))(this);
	}
	template <typename T = DamageShieldComponent*> T get_damageShield() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FBF7C))(this);
	}
	template <typename T = bool> T get_hasDamageShield() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FBF70))(this);
	}
	template <typename T = void> T AddDamageShield(DamageShieldDepends* newDepends, float newValue) {
		return ((T (*)(MagicDataEntity*, DamageShieldDepends*, float))(Il2CppBase() + 0x121654C))(this, newDepends, newValue);
	}
	template <typename T = void> T ReplaceDamageShield(DamageShieldDepends* newDepends, float newValue) {
		return ((T (*)(MagicDataEntity*, DamageShieldDepends*, float))(Il2CppBase() + 0x1216660))(this, newDepends, newValue);
	}
	template <typename T = void> T RemoveDamageShield() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1216774))(this);
	}
	template <typename T = DamageStatComponent*> T get_damageStat() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1216780))(this);
	}
	template <typename T = bool> T get_hasDamageStat() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1216808))(this);
	}
	template <typename T = void> T AddDamageStat(DamageStatType* newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((T (*)(MagicDataEntity*, DamageStatType*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1216814))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename T = void> T ReplaceDamageStat(DamageStatType* newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((T (*)(MagicDataEntity*, DamageStatType*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x12169D8))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename T = void> T RemoveDamageStat() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1216B9C))(this);
	}
	template <typename T = DamageTypeComponent*> T get_damageType() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1216BA8))(this);
	}
	template <typename T = bool> T get_hasDamageType() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1216C30))(this);
	}
	template <typename T = void> T AddDamageType(DamageType* newValue) {
		return ((T (*)(MagicDataEntity*, DamageType*))(Il2CppBase() + 0x1216C3C))(this, newValue);
	}
	template <typename T = void> T ReplaceDamageType(DamageType* newValue) {
		return ((T (*)(MagicDataEntity*, DamageType*))(Il2CppBase() + 0x1216D40))(this, newValue);
	}
	template <typename T = void> T RemoveDamageType() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1216E44))(this);
	}
	template <typename T = DamageVulnerabilityComponent*> T get_damageVulnerability() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1216E50))(this);
	}
	template <typename T = bool> T get_hasDamageVulnerability() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1216ED8))(this);
	}
	template <typename T = void> T AddDamageVulnerability(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1216EE4))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageVulnerability(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1216FF8))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageVulnerability() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121710C))(this);
	}
	template <typename T = DebuffComponent*> T get_debuff() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1217118))(this);
	}
	template <typename T = bool> T get_hasDebuff() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1200684))(this);
	}
	template <typename T = void> T AddDebuff(bool newNoAggro) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x12171A0))(this, newNoAggro);
	}
	template <typename T = void> T ReplaceDebuff(bool newNoAggro) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x12172A8))(this, newNoAggro);
	}
	template <typename T = void> T RemoveDebuff() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12173B0))(this);
	}
	template <typename T = bool> T get_isDebuffImmune() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12173BC))(this);
	}
	template <typename T = void> T set_isDebuffImmune(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x12173C8))(this, value);
	}
	template <typename T = DelayComponent*> T get_delay() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12174E0))(this);
	}
	template <typename T = bool> T get_hasDelay() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1217568))(this);
	}
	template <typename T = void> T AddDelay(float newValue) {
		return ((T (*)(MagicDataEntity*, float))(Il2CppBase() + 0x1217574))(this, newValue);
	}
	template <typename T = void> T ReplaceDelay(float newValue) {
		return ((T (*)(MagicDataEntity*, float))(Il2CppBase() + 0x1217678))(this, newValue);
	}
	template <typename T = void> T RemoveDelay() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121777C))(this);
	}
	template <typename T = DescriptionItemComponent*> T get_descriptionItem() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1217788))(this);
	}
	template <typename T = bool> T get_hasDescriptionItem() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1217810))(this);
	}
	template <typename T = void> T AddDescriptionItem(Il2CppString* newName, bool newShowCooldown, bool newHidden) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, bool, bool))(Il2CppBase() + 0x121781C))(this, newName, newShowCooldown, newHidden);
	}
	template <typename T = void> T ReplaceDescriptionItem(Il2CppString* newName, bool newShowCooldown, bool newHidden) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, bool, bool))(Il2CppBase() + 0x1217950))(this, newName, newShowCooldown, newHidden);
	}
	template <typename T = void> T RemoveDescriptionItem() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1217A84))(this);
	}
	template <typename T = bool> T get_isDisabled() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1217A90))(this);
	}
	template <typename T = void> T set_isDisabled(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1217A9C))(this, value);
	}
	template <typename T = bool> T get_isDisarmingFeet() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1217BB4))(this);
	}
	template <typename T = void> T set_isDisarmingFeet(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1217BC0))(this, value);
	}
	template <typename T = bool> T get_isDisarmingWeapon() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1217CD8))(this);
	}
	template <typename T = void> T set_isDisarmingWeapon(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1217CE4))(this, value);
	}
	template <typename T = DispelComponent*> T get_dispel() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1217DFC))(this);
	}
	template <typename T = bool> T get_hasDispel() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1217E84))(this);
	}
	template <typename T = void> T AddDispel(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppString* newTag, Il2CppArray<uintptr_t>* newAnyTags, bool newBuffs, bool newByActor, bool newControls, int32_t newMaxCount, Il2CppString* newSuccessEffect) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, bool, bool, int32_t, Il2CppString*))(Il2CppBase() + 0x1217E90))(this, newName, newNames, newTag, newAnyTags, newBuffs, newByActor, newControls, newMaxCount, newSuccessEffect);
	}
	template <typename T = void> T ReplaceDispel(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppString* newTag, Il2CppArray<uintptr_t>* newAnyTags, bool newBuffs, bool newByActor, bool newControls, int32_t newMaxCount, Il2CppString* newSuccessEffect) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, bool, bool, int32_t, Il2CppString*))(Il2CppBase() + 0x1218044))(this, newName, newNames, newTag, newAnyTags, newBuffs, newByActor, newControls, newMaxCount, newSuccessEffect);
	}
	template <typename T = void> T RemoveDispel() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12181F8))(this);
	}
	template <typename T = DotComponent*> T get_dot() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC4A4))(this);
	}
	template <typename T = bool> T get_hasDot() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC498))(this);
	}
	template <typename T = void> T AddDot(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1218204))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDot(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1218318))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDot() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121842C))(this);
	}
	template <typename T = DotResistanceComponent*> T get_dotResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1218438))(this);
	}
	template <typename T = bool> T get_hasDotResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12184C0))(this);
	}
	template <typename T = void> T AddDotResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12184CC))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDotResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12185E0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDotResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12186F4))(this);
	}
	template <typename T = bool> T get_isDualWeapon() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1218700))(this);
	}
	template <typename T = void> T set_isDualWeapon(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121870C))(this, value);
	}
	template <typename T = DurationComponent*> T get_duration() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FBEE8))(this);
	}
	template <typename T = bool> T get_hasDuration() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FBE54))(this);
	}
	template <typename T = void> T AddDuration(float newValue) {
		return ((T (*)(MagicDataEntity*, float))(Il2CppBase() + 0x1218824))(this, newValue);
	}
	template <typename T = void> T ReplaceDuration(float newValue) {
		return ((T (*)(MagicDataEntity*, float))(Il2CppBase() + 0x1218928))(this, newValue);
	}
	template <typename T = void> T RemoveDuration() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1218A2C))(this);
	}
	template <typename T = bool> T get_isDurationPrediction() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1218A38))(this);
	}
	template <typename T = void> T set_isDurationPrediction(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1218A44))(this, value);
	}
	template <typename T = EquipTagsComponent*> T get_equipTags() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1218B5C))(this);
	}
	template <typename T = bool> T get_hasEquipTags() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1218BE4))(this);
	}
	template <typename T = void> T AddEquipTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(MagicDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1218BF0))(this, newValues);
	}
	template <typename T = void> T ReplaceEquipTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(MagicDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1218D04))(this, newValues);
	}
	template <typename T = void> T RemoveEquipTags() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1218E18))(this);
	}
	template <typename T = EventEffectComponent*> T get_eventEffect() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1218E24))(this);
	}
	template <typename T = bool> T get_hasEventEffect() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1218EAC))(this);
	}
	template <typename T = void> T AddEventEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1218EB8))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceEventEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1219054))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveEventEffect() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12191F0))(this);
	}
	template <typename T = ExpGainIncPercentComponent*> T get_expGainIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12191FC))(this);
	}
	template <typename T = bool> T get_hasExpGainIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1219284))(this);
	}
	template <typename T = void> T AddExpGainIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1219290))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceExpGainIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12193A4))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveExpGainIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12194B8))(this);
	}
	template <typename T = bool> T get_isFallen() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12194C4))(this);
	}
	template <typename T = void> T set_isFallen(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x12194D0))(this, value);
	}
	template <typename T = bool> T get_isFollowTarget() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12195E8))(this);
	}
	template <typename T = void> T set_isFollowTarget(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x12195F4))(this, value);
	}
	template <typename T = bool> T get_isFrozen() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121970C))(this);
	}
	template <typename T = void> T set_isFrozen(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1219718))(this, value);
	}
	template <typename T = GadgetCooldownReduceComponent*> T get_gadgetCooldownReduce() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1219830))(this);
	}
	template <typename T = bool> T get_hasGadgetCooldownReduce() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12198B8))(this);
	}
	template <typename T = void> T AddGadgetCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12198C4))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceGadgetCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12199D8))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveGadgetCooldownReduce() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1219AEC))(this);
	}
	template <typename T = GenderComponent*> T get_gender() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1219AF8))(this);
	}
	template <typename T = bool> T get_hasGender() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1219B80))(this);
	}
	template <typename T = void> T AddGender(Gender* newType) {
		return ((T (*)(MagicDataEntity*, Gender*))(Il2CppBase() + 0x1219B8C))(this, newType);
	}
	template <typename T = void> T ReplaceGender(Gender* newType) {
		return ((T (*)(MagicDataEntity*, Gender*))(Il2CppBase() + 0x1219C90))(this, newType);
	}
	template <typename T = void> T RemoveGender() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1219D94))(this);
	}
	template <typename T = bool> T get_isGhost() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC404))(this);
	}
	template <typename T = void> T set_isGhost(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1219DA0))(this, value);
	}
	template <typename T = GiveQuestComponent*> T get_giveQuest() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1219EB8))(this);
	}
	template <typename T = bool> T get_hasGiveQuest() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1219F40))(this);
	}
	template <typename T = void> T AddGiveQuest(bool newDontStart, Il2CppString* newName, Il2CppString* newTag) {
		return ((T (*)(MagicDataEntity*, bool, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1219F4C))(this, newDontStart, newName, newTag);
	}
	template <typename T = void> T ReplaceGiveQuest(bool newDontStart, Il2CppString* newName, Il2CppString* newTag) {
		return ((T (*)(MagicDataEntity*, bool, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x121A088))(this, newDontStart, newName, newTag);
	}
	template <typename T = void> T RemoveGiveQuest() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121A1C4))(this);
	}
	template <typename T = GradeComponent*> T get_grade() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121A1D0))(this);
	}
	template <typename T = bool> T get_hasGrade() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121A258))(this);
	}
	template <typename T = void> T AddGrade(int32_t newValue) {
		return ((T (*)(MagicDataEntity*, int32_t))(Il2CppBase() + 0x121A264))(this, newValue);
	}
	template <typename T = void> T ReplaceGrade(int32_t newValue) {
		return ((T (*)(MagicDataEntity*, int32_t))(Il2CppBase() + 0x121A368))(this, newValue);
	}
	template <typename T = void> T RemoveGrade() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121A46C))(this);
	}
	template <typename T = GuildBossDamageBonusComponent*> T get_guildBossDamageBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121A478))(this);
	}
	template <typename T = bool> T get_hasGuildBossDamageBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121A500))(this);
	}
	template <typename T = void> T AddGuildBossDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121A50C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceGuildBossDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121A620))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveGuildBossDamageBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121A734))(this);
	}
	template <typename T = HealComponent*> T get_heal() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121A740))(this);
	}
	template <typename T = bool> T get_hasHeal() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121A7C8))(this);
	}
	template <typename T = void> T AddHeal(float newValue) {
		return ((T (*)(MagicDataEntity*, float))(Il2CppBase() + 0x121A7D4))(this, newValue);
	}
	template <typename T = void> T ReplaceHeal(float newValue) {
		return ((T (*)(MagicDataEntity*, float))(Il2CppBase() + 0x121A8D8))(this, newValue);
	}
	template <typename T = void> T RemoveHeal() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121A9DC))(this);
	}
	template <typename T = bool> T get_isHealing() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121A9E8))(this);
	}
	template <typename T = void> T set_isHealing(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121A9F4))(this, value);
	}
	template <typename T = HealingSkillCooldownReduceComponent*> T get_healingSkillCooldownReduce() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121AB0C))(this);
	}
	template <typename T = bool> T get_hasHealingSkillCooldownReduce() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121AB94))(this);
	}
	template <typename T = void> T AddHealingSkillCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121ABA0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHealingSkillCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121ACB4))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHealingSkillCooldownReduce() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121ADC8))(this);
	}
	template <typename T = HeavyArmorDecComponent*> T get_heavyArmorDec() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121ADD4))(this);
	}
	template <typename T = bool> T get_hasHeavyArmorDec() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121AE5C))(this);
	}
	template <typename T = void> T AddHeavyArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121AE68))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHeavyArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121AF7C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHeavyArmorDec() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121B090))(this);
	}
	template <typename T = HeavyArmorDecPercentComponent*> T get_heavyArmorDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121B09C))(this);
	}
	template <typename T = bool> T get_hasHeavyArmorDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121B124))(this);
	}
	template <typename T = void> T AddHeavyArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121B130))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHeavyArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121B244))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHeavyArmorDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121B358))(this);
	}
	template <typename T = HeavyArmorIncComponent*> T get_heavyArmorInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121B364))(this);
	}
	template <typename T = bool> T get_hasHeavyArmorInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121B3EC))(this);
	}
	template <typename T = void> T AddHeavyArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121B3F8))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHeavyArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121B50C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHeavyArmorInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121B620))(this);
	}
	template <typename T = HeavyArmorIncPercentComponent*> T get_heavyArmorIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121B62C))(this);
	}
	template <typename T = bool> T get_hasHeavyArmorIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121B6B4))(this);
	}
	template <typename T = void> T AddHeavyArmorIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121B6C0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHeavyArmorIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121B7D4))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHeavyArmorIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121B8E8))(this);
	}
	template <typename T = bool> T get_isHidden() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121B8F4))(this);
	}
	template <typename T = void> T set_isHidden(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121B900))(this, value);
	}
	template <typename T = HotComponent*> T get_hot() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC364))(this);
	}
	template <typename T = bool> T get_hasHot() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC358))(this);
	}
	template <typename T = void> T AddHot(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121BA18))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHot(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121BB2C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHot() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121BC40))(this);
	}
	template <typename T = HungerSpeedDecPercentComponent*> T get_hungerSpeedDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121BC4C))(this);
	}
	template <typename T = bool> T get_hasHungerSpeedDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121BCD4))(this);
	}
	template <typename T = void> T AddHungerSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121BCE0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHungerSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121BDF4))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHungerSpeedDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121BF08))(this);
	}
	template <typename T = HungerSpeedIncPercentComponent*> T get_hungerSpeedIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121BF14))(this);
	}
	template <typename T = bool> T get_hasHungerSpeedIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121BF9C))(this);
	}
	template <typename T = void> T AddHungerSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121BFA8))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHungerSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121C0BC))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHungerSpeedIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121C1D0))(this);
	}
	template <typename T = IcelandResistanceComponent*> T get_icelandResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121C1DC))(this);
	}
	template <typename T = bool> T get_hasIcelandResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121C264))(this);
	}
	template <typename T = void> T AddIcelandResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121C270))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceIcelandResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121C384))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveIcelandResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121C498))(this);
	}
	template <typename T = IconComponent*> T get_icon() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121C4A4))(this);
	}
	template <typename T = bool> T get_hasIcon() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121C52C))(this);
	}
	template <typename T = void> T AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x121C538))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x121C690))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T RemoveIcon() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121C7E8))(this);
	}
	template <typename T = IgnoreArmorPercentComponent*> T get_ignoreArmorPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121C7F4))(this);
	}
	template <typename T = bool> T get_hasIgnoreArmorPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121C87C))(this);
	}
	template <typename T = void> T AddIgnoreArmorPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121C888))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceIgnoreArmorPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x120CB70))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveIgnoreArmorPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121C99C))(this);
	}
	template <typename T = ImmobilizedDamageBonusComponent*> T get_immobilizedDamageBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121C9A8))(this);
	}
	template <typename T = bool> T get_hasImmobilizedDamageBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121CA30))(this);
	}
	template <typename T = void> T AddImmobilizedDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121CA3C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceImmobilizedDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121CB50))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveImmobilizedDamageBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121CC64))(this);
	}
	template <typename T = bool> T get_isImmortal() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC3F8))(this);
	}
	template <typename T = void> T set_isImmortal(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121CC70))(this, value);
	}
	template <typename T = ImmunityComponent*> T get_immunity() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121CD88))(this);
	}
	template <typename T = bool> T get_hasImmunity() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121CE10))(this);
	}
	template <typename T = void> T AddImmunity(Il2CppArray<uintptr_t>* newTags, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(MagicDataEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x121CE1C))(this, newTags, newNames);
	}
	template <typename T = void> T ReplaceImmunity(Il2CppArray<uintptr_t>* newTags, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(MagicDataEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x121CF44))(this, newTags, newNames);
	}
	template <typename T = void> T RemoveImmunity() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121D06C))(this);
	}
	template <typename T = ImpotentComponent*> T get_impotent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121D078))(this);
	}
	template <typename T = bool> T get_hasImpotent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121D100))(this);
	}
	template <typename T = void> T AddImpotent(bool newIgnoreImmune) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121D10C))(this, newIgnoreImmune);
	}
	template <typename T = void> T ReplaceImpotent(bool newIgnoreImmune) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121D214))(this, newIgnoreImmune);
	}
	template <typename T = void> T RemoveImpotent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121D31C))(this);
	}
	template <typename T = bool> T get_isImpotentImmune() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121D328))(this);
	}
	template <typename T = void> T set_isImpotentImmune(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121D334))(this, value);
	}
	template <typename T = bool> T get_isInPvP() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121D44C))(this);
	}
	template <typename T = void> T set_isInPvP(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121D458))(this, value);
	}
	template <typename T = IncomingHealBonusComponent*> T get_incomingHealBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121D570))(this);
	}
	template <typename T = bool> T get_hasIncomingHealBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121D5F8))(this);
	}
	template <typename T = void> T AddIncomingHealBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121D604))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceIncomingHealBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121D718))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveIncomingHealBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121D82C))(this);
	}
	template <typename T = IncomingHealReductionComponent*> T get_incomingHealReduction() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121D838))(this);
	}
	template <typename T = bool> T get_hasIncomingHealReduction() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121D8C0))(this);
	}
	template <typename T = void> T AddIncomingHealReduction(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121D8CC))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceIncomingHealReduction(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121D9E0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveIncomingHealReduction() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121DAF4))(this);
	}
	template <typename T = bool> T get_isInstability() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121DB00))(this);
	}
	template <typename T = void> T set_isInstability(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121DB0C))(this, value);
	}
	template <typename T = InteractCollisionComponent*> T get_interactCollision() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121DC24))(this);
	}
	template <typename T = bool> T get_hasInteractCollision() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121DCAC))(this);
	}
	template <typename T = void> T AddInteractCollision(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121DCB8))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceInteractCollision(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121DDCC))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveInteractCollision() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121DEE0))(this);
	}
	template <typename T = InteractionAccessComponent*> T get_interactionAccess() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121DEEC))(this);
	}
	template <typename T = bool> T get_hasInteractionAccess() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121DF74))(this);
	}
	template <typename T = void> T AddInteractionAccess(Il2CppString* newActorCondition, Il2CppString* newTargetCondition) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x121DF80))(this, newActorCondition, newTargetCondition);
	}
	template <typename T = void> T ReplaceInteractionAccess(Il2CppString* newActorCondition, Il2CppString* newTargetCondition) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x121E0A8))(this, newActorCondition, newTargetCondition);
	}
	template <typename T = void> T RemoveInteractionAccess() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121E1D0))(this);
	}
	template <typename T = InterruptTargetComponent*> T get_interruptTarget() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121E1DC))(this);
	}
	template <typename T = bool> T get_hasInterruptTarget() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121E264))(this);
	}
	template <typename T = void> T AddInterruptTarget(bool newAction, bool newSneak, bool newPursuitTarget) {
		return ((T (*)(MagicDataEntity*, bool, bool, bool))(Il2CppBase() + 0x121E270))(this, newAction, newSneak, newPursuitTarget);
	}
	template <typename T = void> T ReplaceInterruptTarget(bool newAction, bool newSneak, bool newPursuitTarget) {
		return ((T (*)(MagicDataEntity*, bool, bool, bool))(Il2CppBase() + 0x121E398))(this, newAction, newSneak, newPursuitTarget);
	}
	template <typename T = void> T RemoveInterruptTarget() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121E4C0))(this);
	}
	template <typename T = bool> T get_isInvisible() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121E4CC))(this);
	}
	template <typename T = void> T set_isInvisible(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121E4D8))(this, value);
	}
	template <typename T = ItemComponent*> T get_item() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121E5F0))(this);
	}
	template <typename T = bool> T get_hasItem() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121E678))(this);
	}
	template <typename T = void> T AddItem(Il2CppString* newName) {
		return ((T (*)(MagicDataEntity*, Il2CppString*))(Il2CppBase() + 0x121E684))(this, newName);
	}
	template <typename T = void> T ReplaceItem(Il2CppString* newName) {
		return ((T (*)(MagicDataEntity*, Il2CppString*))(Il2CppBase() + 0x121E798))(this, newName);
	}
	template <typename T = void> T RemoveItem() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121E8AC))(this);
	}
	template <typename T = bool> T get_isKnockdown() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121E8B8))(this);
	}
	template <typename T = void> T set_isKnockdown(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121E8C4))(this, value);
	}
	template <typename T = LifeStealComponent*> T get_lifeSteal() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120B3EC))(this);
	}
	template <typename T = bool> T get_hasLifeSteal() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120B3E0))(this);
	}
	template <typename T = void> T AddLifeSteal(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121E9DC))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceLifeSteal(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x120B474))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveLifeSteal() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121EAF0))(this);
	}
	template <typename T = LightArmorDecComponent*> T get_lightArmorDec() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121EAFC))(this);
	}
	template <typename T = bool> T get_hasLightArmorDec() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121EB84))(this);
	}
	template <typename T = void> T AddLightArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121EB90))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceLightArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121ECA4))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveLightArmorDec() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121EDB8))(this);
	}
	template <typename T = LightArmorDecPercentComponent*> T get_lightArmorDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121EDC4))(this);
	}
	template <typename T = bool> T get_hasLightArmorDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121EE4C))(this);
	}
	template <typename T = void> T AddLightArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121EE58))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceLightArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121EF6C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveLightArmorDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121F080))(this);
	}
	template <typename T = LightArmorIncComponent*> T get_lightArmorInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121F08C))(this);
	}
	template <typename T = bool> T get_hasLightArmorInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121F114))(this);
	}
	template <typename T = void> T AddLightArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121F120))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceLightArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121F234))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveLightArmorInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121F348))(this);
	}
	template <typename T = LightArmorIncPercentComponent*> T get_lightArmorIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121F354))(this);
	}
	template <typename T = bool> T get_hasLightArmorIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121F3DC))(this);
	}
	template <typename T = void> T AddLightArmorIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121F3E8))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceLightArmorIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121F4FC))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveLightArmorIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121F610))(this);
	}
	template <typename T = LocationPlayerMagicComponent*> T get_locationPlayerMagic() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121F61C))(this);
	}
	template <typename T = bool> T get_hasLocationPlayerMagic() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121F6A4))(this);
	}
	template <typename T = void> T AddLocationPlayerMagic(Il2CppArray<uintptr_t>* newNames, bool newAsChildren) {
		return ((T (*)(MagicDataEntity*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x121F6B0))(this, newNames, newAsChildren);
	}
	template <typename T = void> T ReplaceLocationPlayerMagic(Il2CppArray<uintptr_t>* newNames, bool newAsChildren) {
		return ((T (*)(MagicDataEntity*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x121F7D0))(this, newNames, newAsChildren);
	}
	template <typename T = void> T RemoveLocationPlayerMagic() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121F8F0))(this);
	}
	template <typename T = bool> T get_isLostControl() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121F8FC))(this);
	}
	template <typename T = void> T set_isLostControl(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121F908))(this, value);
	}
	template <typename T = bool> T get_isLostControlImmune() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121FA20))(this);
	}
	template <typename T = void> T set_isLostControlImmune(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121FA2C))(this, value);
	}
	template <typename T = MagicIconComponent*> T get_magicIcon() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121FB44))(this);
	}
	template <typename T = bool> T get_hasMagicIcon() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121FBCC))(this);
	}
	template <typename T = void> T AddMagicIcon(Il2CppString* newAssetPath, MagicIconShowType* newShow, bool newShowCount, MagicIconViewerType* newViewer, bool newShowWhenNotActive, bool newGroupByActor) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, MagicIconShowType*, bool, MagicIconViewerType*, bool, bool))(Il2CppBase() + 0x121FBD8))(this, newAssetPath, newShow, newShowCount, newViewer, newShowWhenNotActive, newGroupByActor);
	}
	template <typename T = void> T ReplaceMagicIcon(Il2CppString* newAssetPath, MagicIconShowType* newShow, bool newShowCount, MagicIconViewerType* newViewer, bool newShowWhenNotActive, bool newGroupByActor) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, MagicIconShowType*, bool, MagicIconViewerType*, bool, bool))(Il2CppBase() + 0x121FD30))(this, newAssetPath, newShow, newShowCount, newViewer, newShowWhenNotActive, newGroupByActor);
	}
	template <typename T = void> T RemoveMagicIcon() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x121FE88))(this);
	}
	template <typename T = MagicTriggerComponent*> T get_magicTrigger() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120CAE8))(this);
	}
	template <typename T = bool> T get_hasMagicTrigger() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120D38C))(this);
	}
	template <typename T = void> T AddMagicTrigger(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, MagicTriggerType* newTypes) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, MagicTriggerType*))(Il2CppBase() + 0x121FE94))(this, newName, newNames, newTypes);
	}
	template <typename T = void> T ReplaceMagicTrigger(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, MagicTriggerType* newTypes) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, MagicTriggerType*))(Il2CppBase() + 0x121FFCC))(this, newName, newNames, newTypes);
	}
	template <typename T = void> T RemoveMagicTrigger() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1220104))(this);
	}
	template <typename T = MapSpeedIncPercentComponent*> T get_mapSpeedIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1220110))(this);
	}
	template <typename T = bool> T get_hasMapSpeedIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1220198))(this);
	}
	template <typename T = void> T AddMapSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12201A4))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMapSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12202B8))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMapSpeedIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12203CC))(this);
	}
	template <typename T = MasteryPointsBonusComponent*> T get_masteryPointsBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12203D8))(this);
	}
	template <typename T = bool> T get_hasMasteryPointsBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1220460))(this);
	}
	template <typename T = void> T AddMasteryPointsBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122046C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMasteryPointsBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1220580))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMasteryPointsBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1220694))(this);
	}
	template <typename T = MaxDamageReflectComponent*> T get_maxDamageReflect() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12206A0))(this);
	}
	template <typename T = bool> T get_hasMaxDamageReflect() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1220728))(this);
	}
	template <typename T = void> T AddMaxDamageReflect(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1220734))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxDamageReflect(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1220848))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxDamageReflect() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122095C))(this);
	}
	template <typename T = MaxHealthDecPercentComponent*> T get_maxHealthDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1220968))(this);
	}
	template <typename T = bool> T get_hasMaxHealthDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12209F0))(this);
	}
	template <typename T = void> T AddMaxHealthDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12209FC))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxHealthDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1220B10))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxHealthDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1220C24))(this);
	}
	template <typename T = MaxHealthIncComponent*> T get_maxHealthInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120B244))(this);
	}
	template <typename T = bool> T get_hasMaxHealthInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120B238))(this);
	}
	template <typename T = void> T AddMaxHealthInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1220C30))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxHealthInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x120B2CC))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxHealthInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1220D44))(this);
	}
	template <typename T = MaxHealthIncPercentComponent*> T get_maxHealthIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120B09C))(this);
	}
	template <typename T = bool> T get_hasMaxHealthIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120B090))(this);
	}
	template <typename T = void> T AddMaxHealthIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1220D50))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxHealthIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x120B124))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxHealthIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1220E64))(this);
	}
	template <typename T = MaxIncomingDamageComponent*> T get_maxIncomingDamage() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1220E70))(this);
	}
	template <typename T = bool> T get_hasMaxIncomingDamage() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1220EF8))(this);
	}
	template <typename T = void> T AddMaxIncomingDamage(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1220F04))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxIncomingDamage(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1221018))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxIncomingDamage() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122112C))(this);
	}
	template <typename T = MaxTenacityComponent*> T get_maxTenacity() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1221138))(this);
	}
	template <typename T = bool> T get_hasMaxTenacity() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12211C0))(this);
	}
	template <typename T = void> T AddMaxTenacity(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12211CC))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxTenacity(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12212E0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxTenacity() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12213F4))(this);
	}
	template <typename T = MaxTenacityIncComponent*> T get_maxTenacityInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1221400))(this);
	}
	template <typename T = bool> T get_hasMaxTenacityInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1221488))(this);
	}
	template <typename T = void> T AddMaxTenacityInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1221494))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxTenacityInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12215A8))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxTenacityInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12216BC))(this);
	}
	template <typename T = MaxTenacityIncPercentComponent*> T get_maxTenacityIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12216C8))(this);
	}
	template <typename T = bool> T get_hasMaxTenacityIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1221750))(this);
	}
	template <typename T = void> T AddMaxTenacityIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122175C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxTenacityIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1221870))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxTenacityIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1221984))(this);
	}
	template <typename T = MediumArmorDecComponent*> T get_mediumArmorDec() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1221990))(this);
	}
	template <typename T = bool> T get_hasMediumArmorDec() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1221A18))(this);
	}
	template <typename T = void> T AddMediumArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1221A24))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMediumArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1221B38))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMediumArmorDec() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1221C4C))(this);
	}
	template <typename T = MediumArmorDecPercentComponent*> T get_mediumArmorDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1221C58))(this);
	}
	template <typename T = bool> T get_hasMediumArmorDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1221CE0))(this);
	}
	template <typename T = void> T AddMediumArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1221CEC))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMediumArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1221E00))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMediumArmorDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1221F14))(this);
	}
	template <typename T = MediumArmorIncComponent*> T get_mediumArmorInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1221F20))(this);
	}
	template <typename T = bool> T get_hasMediumArmorInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1221FA8))(this);
	}
	template <typename T = void> T AddMediumArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1221FB4))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMediumArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12220C8))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMediumArmorInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12221DC))(this);
	}
	template <typename T = MediumArmorIncPercentComponent*> T get_mediumArmorIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12221E8))(this);
	}
	template <typename T = bool> T get_hasMediumArmorIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1222270))(this);
	}
	template <typename T = void> T AddMediumArmorIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122227C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMediumArmorIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1222390))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMediumArmorIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12224A4))(this);
	}
	template <typename T = MeleeResistanceComponent*> T get_meleeResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12224B0))(this);
	}
	template <typename T = bool> T get_hasMeleeResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1222538))(this);
	}
	template <typename T = void> T AddMeleeResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1222544))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMeleeResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1222658))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMeleeResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122276C))(this);
	}
	template <typename T = MetabolismDamageResistanceComponent*> T get_metabolismDamageResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1222778))(this);
	}
	template <typename T = bool> T get_hasMetabolismDamageResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1222800))(this);
	}
	template <typename T = void> T AddMetabolismDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122280C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMetabolismDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1222920))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMetabolismDamageResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1222A34))(this);
	}
	template <typename T = MetabolismDamageVulnerabilityComponent*> T get_metabolismDamageVulnerability() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1222A40))(this);
	}
	template <typename T = bool> T get_hasMetabolismDamageVulnerability() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1222AC8))(this);
	}
	template <typename T = void> T AddMetabolismDamageVulnerability(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1222AD4))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMetabolismDamageVulnerability(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1222BE8))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMetabolismDamageVulnerability() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1222CFC))(this);
	}
	template <typename T = bool> T get_isMinimapHidden() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1222D08))(this);
	}
	template <typename T = void> T set_isMinimapHidden(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1222D14))(this, value);
	}
	template <typename T = ModifiersCatchComponent*> T get_modifiersCatch() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1222E2C))(this);
	}
	template <typename T = bool> T get_hasModifiersCatch() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1222EB4))(this);
	}
	template <typename T = void> T AddModifiersCatch(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(MagicDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1222EC0))(this, newValues);
	}
	template <typename T = void> T ReplaceModifiersCatch(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(MagicDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x120D658))(this, newValues);
	}
	template <typename T = void> T RemoveModifiersCatch() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1222FD4))(this);
	}
	template <typename T = MorphingWeaponComponent*> T get_morphingWeapon() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1222FE0))(this);
	}
	template <typename T = bool> T get_hasMorphingWeapon() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1223068))(this);
	}
	template <typename T = void> T AddMorphingWeapon(ItemConditionComponent* newItemCondition, Il2CppString* newName) {
		return ((T (*)(MagicDataEntity*, ItemConditionComponent*, Il2CppString*))(Il2CppBase() + 0x1223074))(this, newItemCondition, newName);
	}
	template <typename T = void> T ReplaceMorphingWeapon(ItemConditionComponent* newItemCondition, Il2CppString* newName) {
		return ((T (*)(MagicDataEntity*, ItemConditionComponent*, Il2CppString*))(Il2CppBase() + 0x122319C))(this, newItemCondition, newName);
	}
	template <typename T = void> T RemoveMorphingWeapon() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12232C4))(this);
	}
	template <typename T = MountSpeedComponent*> T get_mountSpeed() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12232D0))(this);
	}
	template <typename T = bool> T get_hasMountSpeed() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1223358))(this);
	}
	template <typename T = void> T AddMountSpeed(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1223364))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMountSpeed(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1223478))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMountSpeed() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122358C))(this);
	}
	template <typename T = MountSpeedDecPercentComponent*> T get_mountSpeedDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1223598))(this);
	}
	template <typename T = bool> T get_hasMountSpeedDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1223620))(this);
	}
	template <typename T = void> T AddMountSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122362C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMountSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1223740))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMountSpeedDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1223854))(this);
	}
	template <typename T = MountSpeedIncPercentComponent*> T get_mountSpeedIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1223860))(this);
	}
	template <typename T = bool> T get_hasMountSpeedIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12238E8))(this);
	}
	template <typename T = void> T AddMountSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12238F4))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMountSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1223A08))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMountSpeedIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1223B1C))(this);
	}
	template <typename T = bool> T get_isNotAggressive() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1223B28))(this);
	}
	template <typename T = void> T set_isNotAggressive(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1223B34))(this, value);
	}
	template <typename T = NotificationComponent*> T get_notification() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1223C4C))(this);
	}
	template <typename T = bool> T get_hasNotification() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1223CD4))(this);
	}
	template <typename T = void> T AddNotification(bool newFromSourceItem, Il2CppString* newValue, Il2CppString* newValueFormat, Il2CppString* newColor, Il2CppString* newIcon) {
		return ((T (*)(MagicDataEntity*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1223CE0))(this, newFromSourceItem, newValue, newValueFormat, newColor, newIcon);
	}
	template <typename T = void> T ReplaceNotification(bool newFromSourceItem, Il2CppString* newValue, Il2CppString* newValueFormat, Il2CppString* newColor, Il2CppString* newIcon) {
		return ((T (*)(MagicDataEntity*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1223E4C))(this, newFromSourceItem, newValue, newValueFormat, newColor, newIcon);
	}
	template <typename T = void> T RemoveNotification() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1223FB8))(this);
	}
	template <typename T = OldBlueprintComponent*> T get_oldBlueprint() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1223FC4))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122404C))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(MagicDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1224058))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(MagicDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x122416C))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1224280))(this);
	}
	template <typename T = OnDurationEndComponent*> T get_onDurationEnd() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122428C))(this);
	}
	template <typename T = bool> T get_hasOnDurationEnd() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1224314))(this);
	}
	template <typename T = void> T AddOnDurationEnd(Nullable1int32_t>* newMaxCount, Il2CppString* newSpawnMagic, Il2CppArray<uintptr_t>* newSpawnMagics, bool newDeath) {
		return ((T (*)(MagicDataEntity*, Nullable1int32_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1224320))(this, newMaxCount, newSpawnMagic, newSpawnMagics, newDeath);
	}
	template <typename T = void> T ReplaceOnDurationEnd(Nullable1int32_t>* newMaxCount, Il2CppString* newSpawnMagic, Il2CppArray<uintptr_t>* newSpawnMagics, bool newDeath) {
		return ((T (*)(MagicDataEntity*, Nullable1int32_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1224464))(this, newMaxCount, newSpawnMagic, newSpawnMagics, newDeath);
	}
	template <typename T = void> T RemoveOnDurationEnd() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12245A8))(this);
	}
	template <typename T = OnRemoveComponent*> T get_onRemove() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12245B4))(this);
	}
	template <typename T = bool> T get_hasOnRemove() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122463C))(this);
	}
	template <typename T = void> T AddOnRemove(bool newBreakeSourceAction, bool newActivateTarget, bool newUnlockTarget, float newDismountGlobalCooldown, Il2CppString* newEffect, Il2CppString* newSpawnMagic, Il2CppArray<uintptr_t>* newSpawnMagics) {
		return ((T (*)(MagicDataEntity*, bool, bool, bool, float, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1224648))(this, newBreakeSourceAction, newActivateTarget, newUnlockTarget, newDismountGlobalCooldown, newEffect, newSpawnMagic, newSpawnMagics);
	}
	template <typename T = void> T ReplaceOnRemove(bool newBreakeSourceAction, bool newActivateTarget, bool newUnlockTarget, float newDismountGlobalCooldown, Il2CppString* newEffect, Il2CppString* newSpawnMagic, Il2CppArray<uintptr_t>* newSpawnMagics) {
		return ((T (*)(MagicDataEntity*, bool, bool, bool, float, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12247C8))(this, newBreakeSourceAction, newActivateTarget, newUnlockTarget, newDismountGlobalCooldown, newEffect, newSpawnMagic, newSpawnMagics);
	}
	template <typename T = void> T RemoveOnRemove() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1224948))(this);
	}
	template <typename T = OnRemoveCooldownComponent*> T get_onRemoveCooldown() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1224954))(this);
	}
	template <typename T = bool> T get_hasOnRemoveCooldown() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12249DC))(this);
	}
	template <typename T = void> T AddOnRemoveCooldown(Il2CppString* newItemName, float newCooldown, float newGroupCooldown) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, float, float))(Il2CppBase() + 0x12249E8))(this, newItemName, newCooldown, newGroupCooldown);
	}
	template <typename T = void> T ReplaceOnRemoveCooldown(Il2CppString* newItemName, float newCooldown, float newGroupCooldown) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, float, float))(Il2CppBase() + 0x1224B10))(this, newItemName, newCooldown, newGroupCooldown);
	}
	template <typename T = void> T RemoveOnRemoveCooldown() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1224C38))(this);
	}
	template <typename T = OutcomingHealBonusComponent*> T get_outcomingHealBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1224C44))(this);
	}
	template <typename T = bool> T get_hasOutcomingHealBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1224CCC))(this);
	}
	template <typename T = void> T AddOutcomingHealBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1224CD8))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceOutcomingHealBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1224DEC))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveOutcomingHealBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1224F00))(this);
	}
	template <typename T = OverrideCooldownComponent*> T get_overrideCooldown() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1224F0C))(this);
	}
	template <typename T = bool> T get_hasOverrideCooldown() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1224F94))(this);
	}
	template <typename T = void> T AddOverrideCooldown(Il2CppString* newTag, float newValue) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, float))(Il2CppBase() + 0x1224FA0))(this, newTag, newValue);
	}
	template <typename T = void> T ReplaceOverrideCooldown(Il2CppString* newTag, float newValue) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, float))(Il2CppBase() + 0x12250C4))(this, newTag, newValue);
	}
	template <typename T = void> T RemoveOverrideCooldown() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12251E8))(this);
	}
	template <typename T = bool> T get_isPatrolling() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12251F4))(this);
	}
	template <typename T = void> T set_isPatrolling(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1225200))(this, value);
	}
	template <typename T = PermanentComponent*> T get_permanent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1225318))(this);
	}
	template <typename T = bool> T get_hasPermanent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12253A0))(this);
	}
	template <typename T = void> T AddPermanent(bool newSaveOnDeath) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x12253AC))(this, newSaveOnDeath);
	}
	template <typename T = void> T ReplacePermanent(bool newSaveOnDeath) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x12254B4))(this, newSaveOnDeath);
	}
	template <typename T = void> T RemovePermanent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12255BC))(this);
	}
	template <typename T = bool> T get_isPermanentMoving() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12255C8))(this);
	}
	template <typename T = void> T set_isPermanentMoving(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x12255D4))(this, value);
	}
	template <typename T = PersonalComponent*> T get_personal() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12256EC))(this);
	}
	template <typename T = bool> T get_hasPersonal() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1225774))(this);
	}
	template <typename T = void> T AddPersonal(int64_t newPlayerId) {
		return ((T (*)(MagicDataEntity*, int64_t))(Il2CppBase() + 0x1225780))(this, newPlayerId);
	}
	template <typename T = void> T ReplacePersonal(int64_t newPlayerId) {
		return ((T (*)(MagicDataEntity*, int64_t))(Il2CppBase() + 0x1225884))(this, newPlayerId);
	}
	template <typename T = void> T RemovePersonal() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1225988))(this);
	}
	template <typename T = bool> T get_isPersonalForTarget() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1225994))(this);
	}
	template <typename T = void> T set_isPersonalForTarget(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x12259A0))(this, value);
	}
	template <typename T = PetExperienceBonusComponent*> T get_petExperienceBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1225AB8))(this);
	}
	template <typename T = bool> T get_hasPetExperienceBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1225B40))(this);
	}
	template <typename T = void> T AddPetExperienceBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1225B4C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplacePetExperienceBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1225C60))(this, newValue, newGroup);
	}
	template <typename T = void> T RemovePetExperienceBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1225D74))(this);
	}
	template <typename T = PlayerDamageBonusComponent*> T get_playerDamageBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120B73C))(this);
	}
	template <typename T = bool> T get_hasPlayerDamageBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x120B730))(this);
	}
	template <typename T = void> T AddPlayerDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1225D80))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplacePlayerDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x120B7C4))(this, newValue, newGroup);
	}
	template <typename T = void> T RemovePlayerDamageBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1225E94))(this);
	}
	template <typename T = PlayerDamageReductionComponent*> T get_playerDamageReduction() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1225EA0))(this);
	}
	template <typename T = bool> T get_hasPlayerDamageReduction() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1225F28))(this);
	}
	template <typename T = void> T AddPlayerDamageReduction(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1225F34))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplacePlayerDamageReduction(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1226048))(this, newValue, newGroup);
	}
	template <typename T = void> T RemovePlayerDamageReduction() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122615C))(this);
	}
	template <typename T = PlayerResistanceComponent*> T get_playerResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1226168))(this);
	}
	template <typename T = bool> T get_hasPlayerResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12261F0))(this);
	}
	template <typename T = void> T AddPlayerResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12261FC))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplacePlayerResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1226310))(this, newValue, newGroup);
	}
	template <typename T = void> T RemovePlayerResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1226424))(this);
	}
	template <typename T = bool> T get_isPoisoned() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1226430))(this);
	}
	template <typename T = void> T set_isPoisoned(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x122643C))(this, value);
	}
	template <typename T = PowerIncComponent*> T get_powerInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1226554))(this);
	}
	template <typename T = bool> T get_hasPowerInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12265DC))(this);
	}
	template <typename T = void> T AddPowerInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12265E8))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplacePowerInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12266FC))(this, newValue, newGroup);
	}
	template <typename T = void> T RemovePowerInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1226810))(this);
	}
	template <typename T = PursuitComponent*> T get_pursuit() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122681C))(this);
	}
	template <typename T = bool> T get_hasPursuit() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12268A4))(this);
	}
	template <typename T = void> T AddPursuit(float newDistance, float newEvadeDistance, float newAngle, float newBackCooldown, bool newPriorityOnPlayers, Il2CppString* newTargetCondition, bool newIgnoreBorder) {
		return ((T (*)(MagicDataEntity*, float, float, float, float, bool, Il2CppString*, bool))(Il2CppBase() + 0x12268B0))(this, newDistance, newEvadeDistance, newAngle, newBackCooldown, newPriorityOnPlayers, newTargetCondition, newIgnoreBorder);
	}
	template <typename T = void> T ReplacePursuit(float newDistance, float newEvadeDistance, float newAngle, float newBackCooldown, bool newPriorityOnPlayers, Il2CppString* newTargetCondition, bool newIgnoreBorder) {
		return ((T (*)(MagicDataEntity*, float, float, float, float, bool, Il2CppString*, bool))(Il2CppBase() + 0x1226A0C))(this, newDistance, newEvadeDistance, newAngle, newBackCooldown, newPriorityOnPlayers, newTargetCondition, newIgnoreBorder);
	}
	template <typename T = void> T RemovePursuit() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1226B68))(this);
	}
	template <typename T = bool> T get_isQuestTarget() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1226B74))(this);
	}
	template <typename T = void> T set_isQuestTarget(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1226B80))(this, value);
	}
	template <typename T = RangedResistanceComponent*> T get_rangedResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1226C98))(this);
	}
	template <typename T = bool> T get_hasRangedResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1226D20))(this);
	}
	template <typename T = void> T AddRangedResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1226D2C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceRangedResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1226E40))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveRangedResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1226F54))(this);
	}
	template <typename T = bool> T get_isRemovable() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FFC58))(this);
	}
	template <typename T = void> T set_isRemovable(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1226F60))(this, value);
	}
	template <typename T = RemoveConditionComponent*> T get_removeCondition() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1227078))(this);
	}
	template <typename T = bool> T get_hasRemoveCondition() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1227100))(this);
	}
	template <typename T = void> T AddRemoveCondition(float newTargetHpCoefLess, float newTargetHpCoefMore, bool newActorDestroyed, bool newActionDestroyed, bool newActionApplied, bool newActorNotEquipSourceItem, Il2CppArray<uintptr_t>* newActorNoEquipTags, Il2CppArray<uintptr_t>* newTargetNoEquipTags, Il2CppString* newTargetNoEquipClass, Nullable1bool>* newTargetSneaked, Il2CppString* newTargetHasntMagic, Nullable1bool>* newTargetRiding, Il2CppString* newTargetCondition, Il2CppString* newActorCondition) {
		return ((T (*)(MagicDataEntity*, float, float, bool, bool, bool, bool, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppString*, Nullable1bool>*, Il2CppString*, Nullable1bool>*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x122710C))(this, newTargetHpCoefLess, newTargetHpCoefMore, newActorDestroyed, newActionDestroyed, newActionApplied, newActorNotEquipSourceItem, newActorNoEquipTags, newTargetNoEquipTags, newTargetNoEquipClass, newTargetSneaked, newTargetHasntMagic, newTargetRiding, newTargetCondition, newActorCondition);
	}
	template <typename T = void> T ReplaceRemoveCondition(float newTargetHpCoefLess, float newTargetHpCoefMore, bool newActorDestroyed, bool newActionDestroyed, bool newActionApplied, bool newActorNotEquipSourceItem, Il2CppArray<uintptr_t>* newActorNoEquipTags, Il2CppArray<uintptr_t>* newTargetNoEquipTags, Il2CppString* newTargetNoEquipClass, Nullable1bool>* newTargetSneaked, Il2CppString* newTargetHasntMagic, Nullable1bool>* newTargetRiding, Il2CppString* newTargetCondition, Il2CppString* newActorCondition) {
		return ((T (*)(MagicDataEntity*, float, float, bool, bool, bool, bool, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppString*, Nullable1bool>*, Il2CppString*, Nullable1bool>*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1227300))(this, newTargetHpCoefLess, newTargetHpCoefMore, newActorDestroyed, newActionDestroyed, newActionApplied, newActorNotEquipSourceItem, newActorNoEquipTags, newTargetNoEquipTags, newTargetNoEquipClass, newTargetSneaked, newTargetHasntMagic, newTargetRiding, newTargetCondition, newActorCondition);
	}
	template <typename T = void> T RemoveRemoveCondition() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12274F4))(this);
	}
	template <typename T = RemoveOnActionComponent*> T get_removeOnAction() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1227500))(this);
	}
	template <typename T = bool> T get_hasRemoveOnAction() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1227588))(this);
	}
	template <typename T = void> T AddRemoveOnAction(Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, ActionType* newType, ActionType* newNoType, Nullable1bool>* newInstant) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, ActionType*, ActionType*, Nullable1bool>*))(Il2CppBase() + 0x1227594))(this, newName, newTag, newNoTag, newType, newNoType, newInstant);
	}
	template <typename T = void> T ReplaceRemoveOnAction(Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, ActionType* newType, ActionType* newNoType, Nullable1bool>* newInstant) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, ActionType*, ActionType*, Nullable1bool>*))(Il2CppBase() + 0x12276F8))(this, newName, newTag, newNoTag, newType, newNoType, newInstant);
	}
	template <typename T = void> T RemoveRemoveOnAction() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122785C))(this);
	}
	template <typename T = bool> T get_isRemoveOnMove() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1227868))(this);
	}
	template <typename T = void> T set_isRemoveOnMove(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1227874))(this, value);
	}
	template <typename T = RemoveOnUseComponent*> T get_removeOnUse() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122798C))(this);
	}
	template <typename T = bool> T get_hasRemoveOnUse() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1227A14))(this);
	}
	template <typename T = void> T AddRemoveOnUse(Il2CppArray<uintptr_t>* newTags, Il2CppArray<uintptr_t>* newNames, bool newRemoveSource) {
		return ((T (*)(MagicDataEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1227A20))(this, newTags, newNames, newRemoveSource);
	}
	template <typename T = void> T ReplaceRemoveOnUse(Il2CppArray<uintptr_t>* newTags, Il2CppArray<uintptr_t>* newNames, bool newRemoveSource) {
		return ((T (*)(MagicDataEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1227B5C))(this, newTags, newNames, newRemoveSource);
	}
	template <typename T = void> T RemoveRemoveOnUse() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1227C98))(this);
	}
	template <typename T = RepeatMagicComponent*> T get_repeatMagic() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1227CA4))(this);
	}
	template <typename T = bool> T get_hasRepeatMagic() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1227D2C))(this);
	}
	template <typename T = void> T AddRepeatMagic(Il2CppArray<uintptr_t>* newNames, float newDelay, float newPeriod, bool newAsChildren, Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<uintptr_t>* newList, TargetsSelector* newSelector) {
		return ((T (*)(MagicDataEntity*, Il2CppArray<uintptr_t>*, float, float, bool, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, TargetsSelector*))(Il2CppBase() + 0x1227D38))(this, newNames, newDelay, newPeriod, newAsChildren, newActiveCondition, newName, newList, newSelector);
	}
	template <typename T = void> T ReplaceRepeatMagic(Il2CppArray<uintptr_t>* newNames, float newDelay, float newPeriod, bool newAsChildren, Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<uintptr_t>* newList, TargetsSelector* newSelector) {
		return ((T (*)(MagicDataEntity*, Il2CppArray<uintptr_t>*, float, float, bool, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, TargetsSelector*))(Il2CppBase() + 0x1227ECC))(this, newNames, newDelay, newPeriod, newAsChildren, newActiveCondition, newName, newList, newSelector);
	}
	template <typename T = void> T RemoveRepeatMagic() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1228060))(this);
	}
	template <typename T = RestoreMetabolismComponent*> T get_restoreMetabolism() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122806C))(this);
	}
	template <typename T = bool> T get_hasRestoreMetabolism() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12280F4))(this);
	}
	template <typename T = void> T AddRestoreMetabolism(float newThirst, float newHunger) {
		return ((T (*)(MagicDataEntity*, float, float))(Il2CppBase() + 0x1228100))(this, newThirst, newHunger);
	}
	template <typename T = void> T ReplaceRestoreMetabolism(float newThirst, float newHunger) {
		return ((T (*)(MagicDataEntity*, float, float))(Il2CppBase() + 0x1228208))(this, newThirst, newHunger);
	}
	template <typename T = void> T RemoveRestoreMetabolism() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1228310))(this);
	}
	template <typename T = bool> T get_isRiding() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122831C))(this);
	}
	template <typename T = void> T set_isRiding(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1228328))(this, value);
	}
	template <typename T = bool> T get_isRootImmune() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1228440))(this);
	}
	template <typename T = void> T set_isRootImmune(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x122844C))(this, value);
	}
	template <typename T = RootedComponent*> T get_rooted() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1228564))(this);
	}
	template <typename T = bool> T get_hasRooted() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12285EC))(this);
	}
	template <typename T = void> T AddRooted(bool newStackable, bool newIgnoreImmune) {
		return ((T (*)(MagicDataEntity*, bool, bool))(Il2CppBase() + 0x12285F8))(this, newStackable, newIgnoreImmune);
	}
	template <typename T = void> T ReplaceRooted(bool newStackable, bool newIgnoreImmune) {
		return ((T (*)(MagicDataEntity*, bool, bool))(Il2CppBase() + 0x122870C))(this, newStackable, newIgnoreImmune);
	}
	template <typename T = void> T RemoveRooted() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1228820))(this);
	}
	template <typename T = RuneComponent*> T get_rune() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122882C))(this);
	}
	template <typename T = bool> T get_hasRune() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12288B4))(this);
	}
	template <typename T = void> T AddRune(RuneType* newType) {
		return ((T (*)(MagicDataEntity*, RuneType*))(Il2CppBase() + 0x12288C0))(this, newType);
	}
	template <typename T = void> T ReplaceRune(RuneType* newType) {
		return ((T (*)(MagicDataEntity*, RuneType*))(Il2CppBase() + 0x120C9E4))(this, newType);
	}
	template <typename T = void> T RemoveRune() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12289C4))(this);
	}
	template <typename T = bool> T get_isRunesDisabled() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12289D0))(this);
	}
	template <typename T = void> T set_isRunesDisabled(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x12289DC))(this, value);
	}
	template <typename T = SatiationReductionComponent*> T get_satiationReduction() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1228AF4))(this);
	}
	template <typename T = bool> T get_hasSatiationReduction() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1228B7C))(this);
	}
	template <typename T = void> T AddSatiationReduction(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1228B88))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSatiationReduction(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1228C9C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSatiationReduction() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1228DB0))(this);
	}
	template <typename T = ScaleByDistanceComponent*> T get_scaleByDistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FBE60))(this);
	}
	template <typename T = bool> T get_hasScaleByDistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FBE48))(this);
	}
	template <typename T = void> T AddScaleByDistance(float newMaxDistance, float newMaxDamageCoef, float newMaxDurationCoef) {
		return ((T (*)(MagicDataEntity*, float, float, float))(Il2CppBase() + 0x1228DBC))(this, newMaxDistance, newMaxDamageCoef, newMaxDurationCoef);
	}
	template <typename T = void> T ReplaceScaleByDistance(float newMaxDistance, float newMaxDamageCoef, float newMaxDurationCoef) {
		return ((T (*)(MagicDataEntity*, float, float, float))(Il2CppBase() + 0x1228ED4))(this, newMaxDistance, newMaxDamageCoef, newMaxDurationCoef);
	}
	template <typename T = void> T RemoveScaleByDistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1228FEC))(this);
	}
	template <typename T = SecondMagicIconComponent*> T get_secondMagicIcon() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1228FF8))(this);
	}
	template <typename T = bool> T get_hasSecondMagicIcon() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1229080))(this);
	}
	template <typename T = void> T AddSecondMagicIcon(Il2CppString* newAssetPath, MagicIconShowType* newShow, bool newShowCount, MagicIconViewerType* newViewer, bool newShowWhenNotActive, bool newGroupByActor) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, MagicIconShowType*, bool, MagicIconViewerType*, bool, bool))(Il2CppBase() + 0x122908C))(this, newAssetPath, newShow, newShowCount, newViewer, newShowWhenNotActive, newGroupByActor);
	}
	template <typename T = void> T ReplaceSecondMagicIcon(Il2CppString* newAssetPath, MagicIconShowType* newShow, bool newShowCount, MagicIconViewerType* newViewer, bool newShowWhenNotActive, bool newGroupByActor) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, MagicIconShowType*, bool, MagicIconViewerType*, bool, bool))(Il2CppBase() + 0x12291E4))(this, newAssetPath, newShow, newShowCount, newViewer, newShowWhenNotActive, newGroupByActor);
	}
	template <typename T = void> T RemoveSecondMagicIcon() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122933C))(this);
	}
	template <typename T = SetMagicComponent*> T get_setMagic() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1229348))(this);
	}
	template <typename T = bool> T get_hasSetMagic() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FA938))(this);
	}
	template <typename T = void> T AddSetMagic(Il2CppString* newCaption, Il2CppString* newCountParamText, Il2CppArray<uintptr_t>* newItems) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12293D0))(this, newCaption, newCountParamText, newItems);
	}
	template <typename T = void> T ReplaceSetMagic(Il2CppString* newCaption, Il2CppString* newCountParamText, Il2CppArray<uintptr_t>* newItems) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1229514))(this, newCaption, newCountParamText, newItems);
	}
	template <typename T = void> T RemoveSetMagic() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1229658))(this);
	}
	template <typename T = SilenceComponent*> T get_silence() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1229664))(this);
	}
	template <typename T = bool> T get_hasSilence() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x12296EC))(this);
	}
	template <typename T = void> T AddSilence(bool newIgnoreImmune) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x12296F8))(this, newIgnoreImmune);
	}
	template <typename T = void> T ReplaceSilence(bool newIgnoreImmune) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1229800))(this, newIgnoreImmune);
	}
	template <typename T = void> T RemoveSilence() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1229908))(this);
	}
	template <typename T = bool> T get_isSilenceImmune() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1229914))(this);
	}
	template <typename T = void> T set_isSilenceImmune(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1229920))(this, value);
	}
	template <typename T = SkillDamageBonusComponent*> T get_skillDamageBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1229A38))(this);
	}
	template <typename T = bool> T get_hasSkillDamageBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1229AC0))(this);
	}
	template <typename T = void> T AddSkillDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1229ACC))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSkillDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1229BE0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSkillDamageBonus() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1229CF4))(this);
	}
	template <typename T = SneakBackstabComponent*> T get_sneakBackstab() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1229D00))(this);
	}
	template <typename T = bool> T get_hasSneakBackstab() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1229D88))(this);
	}
	template <typename T = void> T AddSneakBackstab(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1229D94))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSneakBackstab(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1229EA8))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSneakBackstab() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1229FBC))(this);
	}
	template <typename T = bool> T get_isSneak() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x1229FC8))(this);
	}
	template <typename T = void> T set_isSneak(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1229FD4))(this, value);
	}
	template <typename T = bool> T get_isSneakDamageImmune() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122A0EC))(this);
	}
	template <typename T = void> T set_isSneakDamageImmune(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x122A0F8))(this, value);
	}
	template <typename T = SneakDamageResistanceComponent*> T get_sneakDamageResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122A210))(this);
	}
	template <typename T = bool> T get_hasSneakDamageResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122A298))(this);
	}
	template <typename T = void> T AddSneakDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122A2A4))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSneakDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122A3B8))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSneakDamageResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122A4CC))(this);
	}
	template <typename T = bool> T get_isSneakImmune() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122A4D8))(this);
	}
	template <typename T = void> T set_isSneakImmune(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x122A4E4))(this, value);
	}
	template <typename T = bool> T get_isSpeedDecImmune() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122A5FC))(this);
	}
	template <typename T = void> T set_isSpeedDecImmune(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x122A608))(this, value);
	}
	template <typename T = SpeedDecPercentComponent*> T get_speedDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122A720))(this);
	}
	template <typename T = bool> T get_hasSpeedDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122A7A8))(this);
	}
	template <typename T = void> T AddSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122A7B4))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122A8C8))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSpeedDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122A9DC))(this);
	}
	template <typename T = SpeedIncComponent*> T get_speedInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122A9E8))(this);
	}
	template <typename T = bool> T get_hasSpeedInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122AA70))(this);
	}
	template <typename T = void> T AddSpeedInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122AA7C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSpeedInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122AB90))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSpeedInc() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122ACA4))(this);
	}
	template <typename T = SpeedIncPercentComponent*> T get_speedIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122ACB0))(this);
	}
	template <typename T = bool> T get_hasSpeedIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122AD38))(this);
	}
	template <typename T = void> T AddSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122AD44))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122AE58))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSpeedIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122AF6C))(this);
	}
	template <typename T = SpeedMovingComponent*> T get_speedMoving() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122AF78))(this);
	}
	template <typename T = bool> T get_hasSpeedMoving() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122B000))(this);
	}
	template <typename T = void> T AddSpeedMoving(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122B00C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSpeedMoving(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122B120))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSpeedMoving() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122B234))(this);
	}
	template <typename T = SplashComponent*> T get_splash() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122B240))(this);
	}
	template <typename T = bool> T get_hasSplash() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FD214))(this);
	}
	template <typename T = void> T AddSplash(Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newSequence, Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<uintptr_t>* newList, TargetsSelector* newSelector) {
		return ((T (*)(MagicDataEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, TargetsSelector*))(Il2CppBase() + 0x122B2C8))(this, newNames, newSequence, newActiveCondition, newName, newList, newSelector);
	}
	template <typename T = void> T ReplaceSplash(Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newSequence, Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<uintptr_t>* newList, TargetsSelector* newSelector) {
		return ((T (*)(MagicDataEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, TargetsSelector*))(Il2CppBase() + 0x122B450))(this, newNames, newSequence, newActiveCondition, newName, newList, newSelector);
	}
	template <typename T = void> T RemoveSplash() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122B5D8))(this);
	}
	template <typename T = SplashResistanceComponent*> T get_splashResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122B5E4))(this);
	}
	template <typename T = bool> T get_hasSplashResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122B66C))(this);
	}
	template <typename T = void> T AddSplashResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122B678))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSplashResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122B78C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSplashResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122B8A0))(this);
	}
	template <typename T = bool> T get_isSprint() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122B8AC))(this);
	}
	template <typename T = void> T set_isSprint(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x122B8B8))(this, value);
	}
	template <typename T = StackMagicComponent*> T get_stackMagic() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FD220))(this);
	}
	template <typename T = bool> T get_hasStackMagic() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FA92C))(this);
	}
	template <typename T = void> T AddStackMagic(Il2CppString* newGroup, int32_t newMaxCount, int32_t newMaxUseCount, bool newDontResetDuration, float newMaxDuration, bool newByActor, Il2CppArray<uintptr_t>* newMagicByStack) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, int32_t, int32_t, bool, float, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x122B9D0))(this, newGroup, newMaxCount, newMaxUseCount, newDontResetDuration, newMaxDuration, newByActor, newMagicByStack);
	}
	template <typename T = void> T ReplaceStackMagic(Il2CppString* newGroup, int32_t newMaxCount, int32_t newMaxUseCount, bool newDontResetDuration, float newMaxDuration, bool newByActor, Il2CppArray<uintptr_t>* newMagicByStack) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, int32_t, int32_t, bool, float, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x122BB3C))(this, newGroup, newMaxCount, newMaxUseCount, newDontResetDuration, newMaxDuration, newByActor, newMagicByStack);
	}
	template <typename T = void> T RemoveStackMagic() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122BCA8))(this);
	}
	template <typename T = StartChanceComponent*> T get_startChance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122BCB4))(this);
	}
	template <typename T = bool> T get_hasStartChance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FD208))(this);
	}
	template <typename T = void> T AddStartChance(float newValue, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(MagicDataEntity*, float, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x122BD3C))(this, newValue, newName, newNames);
	}
	template <typename T = void> T ReplaceStartChance(float newValue, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(MagicDataEntity*, float, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x122BE74))(this, newValue, newName, newNames);
	}
	template <typename T = void> T RemoveStartChance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122BFAC))(this);
	}
	template <typename T = StartConditionComponent*> T get_startCondition() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122BFB8))(this);
	}
	template <typename T = bool> T get_hasStartCondition() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FB8DC))(this);
	}
	template <typename T = void> T AddStartCondition(Il2CppString* newSourceCondition, Il2CppString* newTargetCondition) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x122C040))(this, newSourceCondition, newTargetCondition);
	}
	template <typename T = void> T ReplaceStartCondition(Il2CppString* newSourceCondition, Il2CppString* newTargetCondition) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x122C168))(this, newSourceCondition, newTargetCondition);
	}
	template <typename T = void> T RemoveStartCondition() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122C290))(this);
	}
	template <typename T = StartCooldownComponent*> T get_startCooldown() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FB8F4))(this);
	}
	template <typename T = bool> T get_hasStartCooldown() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FB8E8))(this);
	}
	template <typename T = void> T AddStartCooldown(Il2CppString* newGroup, float newValue) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, float))(Il2CppBase() + 0x122C29C))(this, newGroup, newValue);
	}
	template <typename T = void> T ReplaceStartCooldown(Il2CppString* newGroup, float newValue) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, float))(Il2CppBase() + 0x122C3C0))(this, newGroup, newValue);
	}
	template <typename T = void> T RemoveStartCooldown() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122C4E4))(this);
	}
	template <typename T = StatusResistanceComponent*> T get_statusResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122C4F0))(this);
	}
	template <typename T = bool> T get_hasStatusResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122C578))(this);
	}
	template <typename T = void> T AddStatusResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122C584))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceStatusResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122C698))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveStatusResistance() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122C7AC))(this);
	}
	template <typename T = StatusVulnerabilityComponent*> T get_statusVulnerability() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122C7B8))(this);
	}
	template <typename T = bool> T get_hasStatusVulnerability() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122C840))(this);
	}
	template <typename T = void> T AddStatusVulnerability(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122C84C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceStatusVulnerability(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122C960))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveStatusVulnerability() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122CA74))(this);
	}
	template <typename T = bool> T get_isStunImmune() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122CA80))(this);
	}
	template <typename T = void> T set_isStunImmune(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x122CA8C))(this, value);
	}
	template <typename T = StunnedComponent*> T get_stunned() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122CBA4))(this);
	}
	template <typename T = bool> T get_hasStunned() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122CC2C))(this);
	}
	template <typename T = void> T AddStunned(bool newStackable, bool newIgnoreImmune) {
		return ((T (*)(MagicDataEntity*, bool, bool))(Il2CppBase() + 0x122CC38))(this, newStackable, newIgnoreImmune);
	}
	template <typename T = void> T ReplaceStunned(bool newStackable, bool newIgnoreImmune) {
		return ((T (*)(MagicDataEntity*, bool, bool))(Il2CppBase() + 0x122CD4C))(this, newStackable, newIgnoreImmune);
	}
	template <typename T = void> T RemoveStunned() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122CE60))(this);
	}
	template <typename T = TagsComponent*> T get_tags() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FB988))(this);
	}
	template <typename T = bool> T get_hasTags() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FB97C))(this);
	}
	template <typename T = void> T AddTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(MagicDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x122CE6C))(this, newValues);
	}
	template <typename T = void> T ReplaceTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(MagicDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x122CF80))(this, newValues);
	}
	template <typename T = void> T RemoveTags() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122D094))(this);
	}
	template <typename T = TargetPositionComponent*> T get_targetPosition() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122D0A0))(this);
	}
	template <typename T = bool> T get_hasTargetPosition() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FBA10))(this);
	}
	template <typename T = void> T AddTargetPosition(float newX, float newY) {
		return ((T (*)(MagicDataEntity*, float, float))(Il2CppBase() + 0x122D128))(this, newX, newY);
	}
	template <typename T = void> T ReplaceTargetPosition(float newX, float newY) {
		return ((T (*)(MagicDataEntity*, float, float))(Il2CppBase() + 0x122D230))(this, newX, newY);
	}
	template <typename T = void> T RemoveTargetPosition() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122D338))(this);
	}
	template <typename T = TargetTagsComponent*> T get_targetTags() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122D344))(this);
	}
	template <typename T = bool> T get_hasTargetTags() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122D3CC))(this);
	}
	template <typename T = void> T AddTargetTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(MagicDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x122D3D8))(this, newValues);
	}
	template <typename T = void> T ReplaceTargetTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(MagicDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x122D4EC))(this, newValues);
	}
	template <typename T = void> T RemoveTargetTags() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122D600))(this);
	}
	template <typename T = TeamUnhiddenComponent*> T get_teamUnhidden() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122D60C))(this);
	}
	template <typename T = bool> T get_hasTeamUnhidden() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122D694))(this);
	}
	template <typename T = void> T AddTeamUnhidden(HashSet1int64_t>* newTeams) {
		return ((T (*)(MagicDataEntity*, HashSet1int64_t>*))(Il2CppBase() + 0x122D6A0))(this, newTeams);
	}
	template <typename T = void> T ReplaceTeamUnhidden(HashSet1int64_t>* newTeams) {
		return ((T (*)(MagicDataEntity*, HashSet1int64_t>*))(Il2CppBase() + 0x122D7B4))(this, newTeams);
	}
	template <typename T = void> T RemoveTeamUnhidden() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122D8C8))(this);
	}
	template <typename T = ThirstSpeedDecPercentComponent*> T get_thirstSpeedDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122D8D4))(this);
	}
	template <typename T = bool> T get_hasThirstSpeedDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122D95C))(this);
	}
	template <typename T = void> T AddThirstSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122D968))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceThirstSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122DA7C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveThirstSpeedDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122DB90))(this);
	}
	template <typename T = ThirstSpeedIncPercentComponent*> T get_thirstSpeedIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122DB9C))(this);
	}
	template <typename T = bool> T get_hasThirstSpeedIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122DC24))(this);
	}
	template <typename T = void> T AddThirstSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122DC30))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceThirstSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122DD44))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveThirstSpeedIncPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122DE58))(this);
	}
	template <typename T = TimeOutExitDecPercentComponent*> T get_timeOutExitDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122DE64))(this);
	}
	template <typename T = bool> T get_hasTimeOutExitDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122DEEC))(this);
	}
	template <typename T = void> T AddTimeOutExitDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122DEF8))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceTimeOutExitDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122E00C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveTimeOutExitDecPercent() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122E120))(this);
	}
	template <typename T = ToolTipComponent*> T get_toolTip() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122E12C))(this);
	}
	template <typename T = bool> T get_hasToolTip() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122E1B4))(this);
	}
	template <typename T = void> T AddToolTip(ToolTipValue* newValue) {
		return ((T (*)(MagicDataEntity*, ToolTipValue*))(Il2CppBase() + 0x122E1C0))(this, newValue);
	}
	template <typename T = void> T ReplaceToolTip(ToolTipValue* newValue) {
		return ((T (*)(MagicDataEntity*, ToolTipValue*))(Il2CppBase() + 0x122E2D4))(this, newValue);
	}
	template <typename T = void> T RemoveToolTip() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122E3E8))(this);
	}
	template <typename T = TotComponent*> T get_tot() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122E3F4))(this);
	}
	template <typename T = bool> T get_hasTot() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122E47C))(this);
	}
	template <typename T = void> T AddTot(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122E488))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceTot(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122E59C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveTot() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122E6B0))(this);
	}
	template <typename T = TransferMagicComponent*> T get_transferMagic() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122E6BC))(this);
	}
	template <typename T = bool> T get_hasTransferMagic() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122E744))(this);
	}
	template <typename T = void> T AddTransferMagic(Il2CppString* newTargetCondition, MagicCondition* newMagicCondition, bool newResetDuration) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, MagicCondition*, bool))(Il2CppBase() + 0x122E750))(this, newTargetCondition, newMagicCondition, newResetDuration);
	}
	template <typename T = void> T ReplaceTransferMagic(Il2CppString* newTargetCondition, MagicCondition* newMagicCondition, bool newResetDuration) {
		return ((T (*)(MagicDataEntity*, Il2CppString*, MagicCondition*, bool))(Il2CppBase() + 0x122E88C))(this, newTargetCondition, newMagicCondition, newResetDuration);
	}
	template <typename T = void> T RemoveTransferMagic() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122E9C8))(this);
	}
	template <typename T = bool> T get_isTriggerTarget() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122E9D4))(this);
	}
	template <typename T = void> T set_isTriggerTarget(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x120D540))(this, value);
	}
	template <typename T = bool> T get_isTrueVision() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122E9E0))(this);
	}
	template <typename T = void> T set_isTrueVision(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x122E9EC))(this, value);
	}
	template <typename T = bool> T get_isUnhidden() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122EB04))(this);
	}
	template <typename T = void> T set_isUnhidden(bool value) {
		return ((T (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x122EB10))(this, value);
	}
	template <typename T = UseCountComponent*> T get_useCount() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122EC28))(this);
	}
	template <typename T = bool> T get_hasUseCount() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122ECB0))(this);
	}
	template <typename T = void> T AddUseCount(int32_t newValue) {
		return ((T (*)(MagicDataEntity*, int32_t))(Il2CppBase() + 0x122ECBC))(this, newValue);
	}
	template <typename T = void> T ReplaceUseCount(int32_t newValue) {
		return ((T (*)(MagicDataEntity*, int32_t))(Il2CppBase() + 0x122EDC0))(this, newValue);
	}
	template <typename T = void> T RemoveUseCount() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122EEC4))(this);
	}
	template <typename T = VipMagicComponent*> T get_vipMagic() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122EED0))(this);
	}
	template <typename T = bool> T get_hasVipMagic() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122EF58))(this);
	}
	template <typename T = void> T AddVipMagic(VipBonusType* newType) {
		return ((T (*)(MagicDataEntity*, VipBonusType*))(Il2CppBase() + 0x122EF64))(this, newType);
	}
	template <typename T = void> T ReplaceVipMagic(VipBonusType* newType) {
		return ((T (*)(MagicDataEntity*, VipBonusType*))(Il2CppBase() + 0x122F068))(this, newType);
	}
	template <typename T = void> T RemoveVipMagic() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122F16C))(this);
	}
	template <typename T = WeaponDotComponent*> T get_weaponDot() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC5C0))(this);
	}
	template <typename T = bool> T get_hasWeaponDot() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC010))(this);
	}
	template <typename T = void> T AddWeaponDot(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122F178))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceWeaponDot(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122F28C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveWeaponDot() {
		return ((T (*)(MagicDataEntity*))(Il2CppBase() + 0x122F3A0))(this);
	}

};

