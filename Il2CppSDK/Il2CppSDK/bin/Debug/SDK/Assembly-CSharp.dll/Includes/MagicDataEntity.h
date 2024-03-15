#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicDataEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicDataEntity"));
	}

	template <typename R = ApplyInPvPComponent*> static R& applyInPvPComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = BurnedComponent*> static R& burnedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = CursedComponent*> static R& cursedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = DamageImmuneComponent*> static R& damageImmuneComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = DebuffImmuneComponent*> static R& debuffImmuneComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = DisabledComponent*> static R& disabledComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename R = DisarmingFeetComponent*> static R& disarmingFeetComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename R = DisarmingWeaponComponent*> static R& disarmingWeaponComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename R = DualWeaponComponent*> static R& dualWeaponComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename R = DurationPredictionComponent*> static R& durationPredictionComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename R = FallenComponent*> static R& fallenComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename R = FollowTargetComponent*> static R& followTargetComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename R = FrozenComponent*> static R& frozenComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename R = GhostComponent*> static R& ghostComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename R = HealingComponent*> static R& healingComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename R = HiddenComponent*> static R& hiddenComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename R = ImmortalComponent*> static R& immortalComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename R = ImpotentImmuneComponent*> static R& impotentImmuneComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename R = InPvPComponent*> static R& inPvPComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename R = InstabilityComponent*> static R& instabilityComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename R = InvisibleComponent*> static R& invisibleComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename R = KnockdownComponent*> static R& knockdownComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename R = LostControlComponent*> static R& lostControlComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename R = LostControlImmuneComponent*> static R& lostControlImmuneComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename R = MinimapHiddenComponent*> static R& minimapHiddenComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename R = NotAggressiveComponent*> static R& notAggressiveComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename R = PatrollingComponent*> static R& patrollingComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename R = PermanentMovingComponent*> static R& permanentMovingComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename R = PersonalForTargetComponent*> static R& personalForTargetComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename R = PoisonedComponent*> static R& poisonedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename R = QuestTargetComponent*> static R& questTargetComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename R = RemovableComponent*> static R& removableComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename R = RemoveOnMoveComponent*> static R& removeOnMoveComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename R = RidingComponent*> static R& ridingComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename R = RootImmuneComponent*> static R& rootImmuneComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename R = RunesDisabledComponent*> static R& runesDisabledComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename R = SilenceImmuneComponent*> static R& silenceImmuneComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename R = SneakComponent*> static R& sneakComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename R = SneakDamageImmuneComponent*> static R& sneakDamageImmuneComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename R = SneakImmuneComponent*> static R& sneakImmuneComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename R = SpeedDecImmuneComponent*> static R& speedDecImmuneComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename R = SprintComponent*> static R& sprintComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename R = StunImmuneComponent*> static R& stunImmuneComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename R = TriggerTargetComponent*> static R& triggerTargetComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename R = TrueVisionComponent*> static R& trueVisionComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename R = UnhiddenComponent*> static R& unhiddenComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120D76C))(this);
	}
	template <typename R = ActivationComponent*> R get_activation() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120D81C))(this);
	}
	template <typename R = bool> R get_hasActivation() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC3EC))(this);
	}
	template <typename R = void> R AddActivation(Il2CppString* newCondition, float newActiveDelay, float newDeactiveDelay) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, float, float))(Il2CppBase() + 0x120D8A4))(this, newCondition, newActiveDelay, newDeactiveDelay);
	}
	template <typename R = void> R ReplaceActivation(Il2CppString* newCondition, float newActiveDelay, float newDeactiveDelay) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, float, float))(Il2CppBase() + 0x120D9CC))(this, newCondition, newActiveDelay, newDeactiveDelay);
	}
	template <typename R = void> R RemoveActivation() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120DAF4))(this);
	}
	template <typename R = ActiveComponent*> R get_active() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120DB00))(this);
	}
	template <typename R = bool> R get_hasActive() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120D398))(this);
	}
	template <typename R = void> R AddActive(bool newValue) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x120D3A4))(this, newValue);
	}
	template <typename R = void> R ReplaceActive(bool newValue) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x120DB88))(this, newValue);
	}
	template <typename R = void> R RemoveActive() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120DC90))(this);
	}
	template <typename R = ActiveConditionComponent*> R get_activeCondition() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120D4B8))(this);
	}
	template <typename R = bool> R get_hasActiveCondition() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120D4AC))(this);
	}
	template <typename R = void> R AddActiveCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x120DC9C))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R ReplaceActiveCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x120DDEC))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R RemoveActiveCondition() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120DF3C))(this);
	}
	template <typename R = ActiveEffectComponent*> R get_activeEffect() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120DF48))(this);
	}
	template <typename R = bool> R get_hasActiveEffect() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120DFD0))(this);
	}
	template <typename R = void> R AddActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x120DFDC))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x120E178))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveActiveEffect() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120E314))(this);
	}
	template <typename R = AddChanceComponent*> R get_addChance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120E320))(this);
	}
	template <typename R = bool> R get_hasAddChance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120E3A8))(this);
	}
	template <typename R = void> R AddAddChance(Il2CppString* newName, float newValue) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, float))(Il2CppBase() + 0x120E3B4))(this, newName, newValue);
	}
	template <typename R = void> R ReplaceAddChance(Il2CppString* newName, float newValue) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, float))(Il2CppBase() + 0x120E4D8))(this, newName, newValue);
	}
	template <typename R = void> R RemoveAddChance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120E5FC))(this);
	}
	template <typename R = ApplyDamageComponent*> R get_applyDamage() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC410))(this);
	}
	template <typename R = bool> R get_hasApplyDamage() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC004))(this);
	}
	template <typename R = void> R AddApplyDamage(float newDelay, Il2CppString* newName, float newMaxTargetPlayerHealthCoef, bool newIgnoreDamageCoef, DamageDependType* newDepend, float newMaxValue) {
		return ((R (*)(MagicDataEntity*, float, Il2CppString*, float, bool, DamageDependType*, float))(Il2CppBase() + 0x120E608))(this, newDelay, newName, newMaxTargetPlayerHealthCoef, newIgnoreDamageCoef, newDepend, newMaxValue);
	}
	template <typename R = void> R ReplaceApplyDamage(float newDelay, Il2CppString* newName, float newMaxTargetPlayerHealthCoef, bool newIgnoreDamageCoef, DamageDependType* newDepend, float newMaxValue) {
		return ((R (*)(MagicDataEntity*, float, Il2CppString*, float, bool, DamageDependType*, float))(Il2CppBase() + 0x120E760))(this, newDelay, newName, newMaxTargetPlayerHealthCoef, newIgnoreDamageCoef, newDepend, newMaxValue);
	}
	template <typename R = void> R RemoveApplyDamage() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120E8B8))(this);
	}
	template <typename R = ApplyDestroyComponent*> R get_applyDestroy() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120E8C4))(this);
	}
	template <typename R = bool> R get_hasApplyDestroy() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120E94C))(this);
	}
	template <typename R = void> R AddApplyDestroy(float newDelay, bool newInstantly) {
		return ((R (*)(MagicDataEntity*, float, bool))(Il2CppBase() + 0x120E958))(this, newDelay, newInstantly);
	}
	template <typename R = void> R ReplaceApplyDestroy(float newDelay, bool newInstantly) {
		return ((R (*)(MagicDataEntity*, float, bool))(Il2CppBase() + 0x120EA70))(this, newDelay, newInstantly);
	}
	template <typename R = void> R RemoveApplyDestroy() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120EB88))(this);
	}
	template <typename R = ApplyHealComponent*> R get_applyHeal() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120EB94))(this);
	}
	template <typename R = bool> R get_hasApplyHeal() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120EC1C))(this);
	}
	template <typename R = void> R AddApplyHeal(float newDelay, HealParams* newParams) {
		return ((R (*)(MagicDataEntity*, float, HealParams*))(Il2CppBase() + 0x120EC28))(this, newDelay, newParams);
	}
	template <typename R = void> R ReplaceApplyHeal(float newDelay, HealParams* newParams) {
		return ((R (*)(MagicDataEntity*, float, HealParams*))(Il2CppBase() + 0x120ED40))(this, newDelay, newParams);
	}
	template <typename R = void> R RemoveApplyHeal() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120EE58))(this);
	}
	template <typename R = bool> R get_isApplyInPvP() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120EE64))(this);
	}
	template <typename R = void> R set_isApplyInPvP(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x120EE70))(this, value);
	}
	template <typename R = ApplyMagicComponent*> R get_applyMagic() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120EF88))(this);
	}
	template <typename R = bool> R get_hasApplyMagic() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120F010))(this);
	}
	template <typename R = void> R AddApplyMagic(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Nullable1float>* newDuration, bool newSourceDuration) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Nullable1float>*, bool))(Il2CppBase() + 0x120F01C))(this, newName, newNames, newDuration, newSourceDuration);
	}
	template <typename R = void> R ReplaceApplyMagic(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Nullable1float>* newDuration, bool newSourceDuration) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Nullable1float>*, bool))(Il2CppBase() + 0x120F160))(this, newName, newNames, newDuration, newSourceDuration);
	}
	template <typename R = void> R RemoveApplyMagic() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120F2A4))(this);
	}
	template <typename R = ApplyOnActorEffectComponent*> R get_applyOnActorEffect() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120F2B0))(this);
	}
	template <typename R = bool> R get_hasApplyOnActorEffect() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120F338))(this);
	}
	template <typename R = void> R AddApplyOnActorEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x120F344))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceApplyOnActorEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x120F4E0))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveApplyOnActorEffect() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120F67C))(this);
	}
	template <typename R = ApplyOnTargetEffectComponent*> R get_applyOnTargetEffect() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120F688))(this);
	}
	template <typename R = bool> R get_hasApplyOnTargetEffect() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120F710))(this);
	}
	template <typename R = void> R AddApplyOnTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x120F71C))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceApplyOnTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x120F8B8))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveApplyOnTargetEffect() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120FA54))(this);
	}
	template <typename R = ApplyPlaceComponent*> R get_applyPlace() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120FA60))(this);
	}
	template <typename R = bool> R get_hasApplyPlace() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120FAE8))(this);
	}
	template <typename R = void> R AddApplyPlace(ApplyPlaceParams* newParams, Il2CppArray<ApplyPlaceItem*>* newItems, int32_t newRandomCount) {
		return ((R (*)(MagicDataEntity*, ApplyPlaceParams*, Il2CppArray<ApplyPlaceItem*>*, int32_t))(Il2CppBase() + 0x120FAF4))(this, newParams, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceApplyPlace(ApplyPlaceParams* newParams, Il2CppArray<ApplyPlaceItem*>* newItems, int32_t newRandomCount) {
		return ((R (*)(MagicDataEntity*, ApplyPlaceParams*, Il2CppArray<ApplyPlaceItem*>*, int32_t))(Il2CppBase() + 0x120FC2C))(this, newParams, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveApplyPlace() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120FD64))(this);
	}
	template <typename R = ApplyTeleportComponent*> R get_applyTeleport() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120FD70))(this);
	}
	template <typename R = bool> R get_hasApplyTeleport() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120FDF8))(this);
	}
	template <typename R = void> R AddApplyTeleport(Il2CppString* newTargetName, TargetsSelector* newSelector, DirectionSource* newDirection, float newOffset, bool newIgnoreWall) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, TargetsSelector*, DirectionSource*, float, bool))(Il2CppBase() + 0x120FE04))(this, newTargetName, newSelector, newDirection, newOffset, newIgnoreWall);
	}
	template <typename R = void> R ReplaceApplyTeleport(Il2CppString* newTargetName, TargetsSelector* newSelector, DirectionSource* newDirection, float newOffset, bool newIgnoreWall) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, TargetsSelector*, DirectionSource*, float, bool))(Il2CppBase() + 0x120FF58))(this, newTargetName, newSelector, newDirection, newOffset, newIgnoreWall);
	}
	template <typename R = void> R RemoveApplyTeleport() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12100AC))(this);
	}
	template <typename R = ApplyTenacityRegenerationComponent*> R get_applyTenacityRegeneration() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12100B8))(this);
	}
	template <typename R = bool> R get_hasApplyTenacityRegeneration() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1210140))(this);
	}
	template <typename R = void> R AddApplyTenacityRegeneration(bool newDependsOnMaxTenacity, float newValue) {
		return ((R (*)(MagicDataEntity*, bool, float))(Il2CppBase() + 0x121014C))(this, newDependsOnMaxTenacity, newValue);
	}
	template <typename R = void> R ReplaceApplyTenacityRegeneration(bool newDependsOnMaxTenacity, float newValue) {
		return ((R (*)(MagicDataEntity*, bool, float))(Il2CppBase() + 0x1210264))(this, newDependsOnMaxTenacity, newValue);
	}
	template <typename R = void> R RemoveApplyTenacityRegeneration() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121037C))(this);
	}
	template <typename R = ArmorDecComponent*> R get_armorDec() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1210388))(this);
	}
	template <typename R = bool> R get_hasArmorDec() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1210410))(this);
	}
	template <typename R = void> R AddArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121041C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1210530))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveArmorDec() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1210644))(this);
	}
	template <typename R = ArmorDecPercentComponent*> R get_armorDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1210650))(this);
	}
	template <typename R = bool> R get_hasArmorDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12106D8))(this);
	}
	template <typename R = void> R AddArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12106E4))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12107F8))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveArmorDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121090C))(this);
	}
	template <typename R = ArmorIncComponent*> R get_armorInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1210918))(this);
	}
	template <typename R = bool> R get_hasArmorInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12109A0))(this);
	}
	template <typename R = void> R AddArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12109AC))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1210AC0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveArmorInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1210BD4))(this);
	}
	template <typename R = ArmorIncPercentComponent*> R get_armorIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1210BE0))(this);
	}
	template <typename R = bool> R get_hasArmorIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1210C68))(this);
	}
	template <typename R = void> R AddArmorIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1210C74))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceArmorIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1210D88))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveArmorIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1210E9C))(this);
	}
	template <typename R = AttackPriorityComponent*> R get_attackPriority() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1210EA8))(this);
	}
	template <typename R = bool> R get_hasAttackPriority() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1210F30))(this);
	}
	template <typename R = void> R AddAttackPriority(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1210F3C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceAttackPriority(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1211050))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveAttackPriority() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1211164))(this);
	}
	template <typename R = AttackRadiusIncPercentComponent*> R get_attackRadiusIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1211170))(this);
	}
	template <typename R = bool> R get_hasAttackRadiusIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12111F8))(this);
	}
	template <typename R = void> R AddAttackRadiusIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1211204))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceAttackRadiusIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1211318))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveAttackRadiusIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121142C))(this);
	}
	template <typename R = AttackSpeedDecPercentComponent*> R get_attackSpeedDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1211438))(this);
	}
	template <typename R = bool> R get_hasAttackSpeedDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12114C0))(this);
	}
	template <typename R = void> R AddAttackSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12114CC))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceAttackSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12115E0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveAttackSpeedDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12116F4))(this);
	}
	template <typename R = AttackSpeedIncPercentComponent*> R get_attackSpeedIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1211700))(this);
	}
	template <typename R = bool> R get_hasAttackSpeedIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1211788))(this);
	}
	template <typename R = void> R AddAttackSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1211794))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceAttackSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12118A8))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveAttackSpeedIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12119BC))(this);
	}
	template <typename R = AttractorComponent*> R get_attractor() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12119C8))(this);
	}
	template <typename R = bool> R get_hasAttractor() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1211A50))(this);
	}
	template <typename R = void> R AddAttractor(DirectionType* newDirection, float newDistance, Il2CppString* newProjectileName, Il2CppArray<Il2CppString*>* newOnCollisionMagics) {
		return ((R (*)(MagicDataEntity*, DirectionType*, float, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1211A5C))(this, newDirection, newDistance, newProjectileName, newOnCollisionMagics);
	}
	template <typename R = void> R ReplaceAttractor(DirectionType* newDirection, float newDistance, Il2CppString* newProjectileName, Il2CppArray<Il2CppString*>* newOnCollisionMagics) {
		return ((R (*)(MagicDataEntity*, DirectionType*, float, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1211BA4))(this, newDirection, newDistance, newProjectileName, newOnCollisionMagics);
	}
	template <typename R = void> R RemoveAttractor() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1211CEC))(this);
	}
	template <typename R = AuraComponent*> R get_aura() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1211CF8))(this);
	}
	template <typename R = bool> R get_hasAura() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1211D80))(this);
	}
	template <typename R = void> R AddAura(Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<Item*>* newList, TargetsSelector* newSelector) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Item*>*, TargetsSelector*))(Il2CppBase() + 0x1211D8C))(this, newActiveCondition, newName, newList, newSelector);
	}
	template <typename R = void> R ReplaceAura(Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<Item*>* newList, TargetsSelector* newSelector) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Item*>*, TargetsSelector*))(Il2CppBase() + 0x1211EE4))(this, newActiveCondition, newName, newList, newSelector);
	}
	template <typename R = void> R RemoveAura() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121203C))(this);
	}
	template <typename R = AutoRotationComponent*> R get_autoRotation() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11F2680))(this);
	}
	template <typename R = bool> R get_hasAutoRotation() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11F2674))(this);
	}
	template <typename R = void> R AddAutoRotation(float newSpeed) {
		return ((R (*)(MagicDataEntity*, float))(Il2CppBase() + 0x1212048))(this, newSpeed);
	}
	template <typename R = void> R ReplaceAutoRotation(float newSpeed) {
		return ((R (*)(MagicDataEntity*, float))(Il2CppBase() + 0x121214C))(this, newSpeed);
	}
	template <typename R = void> R RemoveAutoRotation() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1212250))(this);
	}
	template <typename R = BackstabDamageBonusComponent*> R get_backstabDamageBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121225C))(this);
	}
	template <typename R = bool> R get_hasBackstabDamageBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12122E4))(this);
	}
	template <typename R = void> R AddBackstabDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12122F0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceBackstabDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1212404))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveBackstabDamageBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1212518))(this);
	}
	template <typename R = BackstabResistanceComponent*> R get_backstabResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1212524))(this);
	}
	template <typename R = bool> R get_hasBackstabResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12125AC))(this);
	}
	template <typename R = void> R AddBackstabResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12125B8))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceBackstabResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12126CC))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveBackstabResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12127E0))(this);
	}
	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11F539C))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120D810))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(MagicDataEntity*, Il2CppString*))(Il2CppBase() + 0x12127EC))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(MagicDataEntity*, Il2CppString*))(Il2CppBase() + 0x1212900))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1212A14))(this);
	}
	template <typename R = BowResistanceComponent*> R get_bowResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1212A20))(this);
	}
	template <typename R = bool> R get_hasBowResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1212AA8))(this);
	}
	template <typename R = void> R AddBowResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1212AB4))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceBowResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1212BC8))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveBowResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1212CDC))(this);
	}
	template <typename R = bool> R get_isBurned() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1212CE8))(this);
	}
	template <typename R = void> R set_isBurned(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1212CF4))(this, value);
	}
	template <typename R = ChanceComponent*> R get_chance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1212E0C))(this);
	}
	template <typename R = bool> R get_hasChance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120CC84))(this);
	}
	template <typename R = void> R AddChance(float newValue, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(MagicDataEntity*, float, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1212E94))(this, newValue, newName, newNames);
	}
	template <typename R = void> R ReplaceChance(float newValue, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(MagicDataEntity*, float, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1212FCC))(this, newValue, newName, newNames);
	}
	template <typename R = void> R RemoveChance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120CC90))(this);
	}
	template <typename R = ChangeDurationByLostHpComponent*> R get_changeDurationByLostHp() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1213104))(this);
	}
	template <typename R = bool> R get_hasChangeDurationByLostHp() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121318C))(this);
	}
	template <typename R = void> R AddChangeDurationByLostHp(DamageCondition* newDamageCondition, float newSecondsByPercent) {
		return ((R (*)(MagicDataEntity*, DamageCondition*, float))(Il2CppBase() + 0x1213198))(this, newDamageCondition, newSecondsByPercent);
	}
	template <typename R = void> R ReplaceChangeDurationByLostHp(DamageCondition* newDamageCondition, float newSecondsByPercent) {
		return ((R (*)(MagicDataEntity*, DamageCondition*, float))(Il2CppBase() + 0x12132BC))(this, newDamageCondition, newSecondsByPercent);
	}
	template <typename R = void> R RemoveChangeDurationByLostHp() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12133E0))(this);
	}
	template <typename R = ChangeTargetCooldownComponent*> R get_changeTargetCooldown() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12133EC))(this);
	}
	template <typename R = bool> R get_hasChangeTargetCooldown() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1213474))(this);
	}
	template <typename R = void> R AddChangeTargetCooldown(bool newPerHpDmgPercent, float newValue, Il2CppString* newItemTag) {
		return ((R (*)(MagicDataEntity*, bool, float, Il2CppString*))(Il2CppBase() + 0x1213480))(this, newPerHpDmgPercent, newValue, newItemTag);
	}
	template <typename R = void> R ReplaceChangeTargetCooldown(bool newPerHpDmgPercent, float newValue, Il2CppString* newItemTag) {
		return ((R (*)(MagicDataEntity*, bool, float, Il2CppString*))(Il2CppBase() + 0x12135B0))(this, newPerHpDmgPercent, newValue, newItemTag);
	}
	template <typename R = void> R RemoveChangeTargetCooldown() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12136E0))(this);
	}
	template <typename R = ChildrenComponent*> R get_children() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12136EC))(this);
	}
	template <typename R = bool> R get_hasChildren() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1213774))(this);
	}
	template <typename R = void> R AddChildren(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(MagicDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1213780))(this, newNames);
	}
	template <typename R = void> R ReplaceChildren(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(MagicDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1213894))(this, newNames);
	}
	template <typename R = void> R RemoveChildren() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12139A8))(this);
	}
	template <typename R = ClassCooldownReduceComponent*> R get_classCooldownReduce() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12139B4))(this);
	}
	template <typename R = bool> R get_hasClassCooldownReduce() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1213A3C))(this);
	}
	template <typename R = void> R AddClassCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1213A48))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceClassCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1213B5C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveClassCooldownReduce() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1213C70))(this);
	}
	template <typename R = CoefChanceComponent*> R get_coefChance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1213C7C))(this);
	}
	template <typename R = bool> R get_hasCoefChance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1213D04))(this);
	}
	template <typename R = void> R AddCoefChance(Il2CppString* newName, float newValue) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, float))(Il2CppBase() + 0x1213D10))(this, newName, newValue);
	}
	template <typename R = void> R ReplaceCoefChance(Il2CppString* newName, float newValue) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, float))(Il2CppBase() + 0x1213E34))(this, newName, newValue);
	}
	template <typename R = void> R RemoveCoefChance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1213F58))(this);
	}
	template <typename R = CollisionMagicComponent*> R get_collisionMagic() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1213F64))(this);
	}
	template <typename R = bool> R get_hasCollisionMagic() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1213FEC))(this);
	}
	template <typename R = void> R AddCollisionMagic(Il2CppArray<Il2CppString*>* newNames, float newPeriod, Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<Item*>* newList, TargetsSelector* newSelector) {
		return ((R (*)(MagicDataEntity*, Il2CppArray<Il2CppString*>*, float, Il2CppString*, Il2CppString*, Il2CppArray<Item*>*, TargetsSelector*))(Il2CppBase() + 0x1213FF8))(this, newNames, newPeriod, newActiveCondition, newName, newList, newSelector);
	}
	template <typename R = void> R ReplaceCollisionMagic(Il2CppArray<Il2CppString*>* newNames, float newPeriod, Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<Item*>* newList, TargetsSelector* newSelector) {
		return ((R (*)(MagicDataEntity*, Il2CppArray<Il2CppString*>*, float, Il2CppString*, Il2CppString*, Il2CppArray<Item*>*, TargetsSelector*))(Il2CppBase() + 0x121417C))(this, newNames, newPeriod, newActiveCondition, newName, newList, newSelector);
	}
	template <typename R = void> R RemoveCollisionMagic() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1214300))(this);
	}
	template <typename R = CooldownComponent*> R get_cooldown() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120B8E4))(this);
	}
	template <typename R = bool> R get_hasCooldown() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120B8D8))(this);
	}
	template <typename R = void> R AddCooldown(float newValue, float newInitial) {
		return ((R (*)(MagicDataEntity*, float, float))(Il2CppBase() + 0x121430C))(this, newValue, newInitial);
	}
	template <typename R = void> R ReplaceCooldown(float newValue, float newInitial) {
		return ((R (*)(MagicDataEntity*, float, float))(Il2CppBase() + 0x120B96C))(this, newValue, newInitial);
	}
	template <typename R = void> R RemoveCooldown() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120CDB0))(this);
	}
	template <typename R = CountComponent*> R get_count() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1214414))(this);
	}
	template <typename R = bool> R get_hasCount() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121449C))(this);
	}
	template <typename R = void> R AddCount(int32_t newValue) {
		return ((R (*)(MagicDataEntity*, int32_t))(Il2CppBase() + 0x12144A8))(this, newValue);
	}
	template <typename R = void> R ReplaceCount(int32_t newValue) {
		return ((R (*)(MagicDataEntity*, int32_t))(Il2CppBase() + 0x12145AC))(this, newValue);
	}
	template <typename R = void> R RemoveCount() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12146B0))(this);
	}
	template <typename R = CreepDamageBonusComponent*> R get_creepDamageBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120B594))(this);
	}
	template <typename R = bool> R get_hasCreepDamageBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120B588))(this);
	}
	template <typename R = void> R AddCreepDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12146BC))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceCreepDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x120B61C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveCreepDamageBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12147D0))(this);
	}
	template <typename R = CreepResistanceComponent*> R get_creepResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12147DC))(this);
	}
	template <typename R = bool> R get_hasCreepResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1214864))(this);
	}
	template <typename R = void> R AddCreepResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1214870))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceCreepResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1214984))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveCreepResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1214A98))(this);
	}
	template <typename R = bool> R get_isCursed() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1214AA4))(this);
	}
	template <typename R = void> R set_isCursed(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1214AB0))(this, value);
	}
	template <typename R = DamageBlockComponent*> R get_damageBlock() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1214BC8))(this);
	}
	template <typename R = bool> R get_hasDamageBlock() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1214C50))(this);
	}
	template <typename R = void> R AddDamageBlock(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1214C5C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageBlock(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1214D70))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageBlock() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1214E84))(this);
	}
	template <typename R = DamageBlockIncPercentComponent*> R get_damageBlockIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1214E90))(this);
	}
	template <typename R = bool> R get_hasDamageBlockIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120AEE8))(this);
	}
	template <typename R = void> R AddDamageBlockIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1214F18))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageBlockIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121502C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageBlockIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1215140))(this);
	}
	template <typename R = DamageBonusForMissingHealthComponent*> R get_damageBonusForMissingHealth() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121514C))(this);
	}
	template <typename R = bool> R get_hasDamageBonusForMissingHealth() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12151D4))(this);
	}
	template <typename R = void> R AddDamageBonusForMissingHealth(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12151E0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageBonusForMissingHealth(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12152F4))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageBonusForMissingHealth() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1215408))(this);
	}
	template <typename R = DamageComponent*> R get_damage() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC538))(this);
	}
	template <typename R = bool> R get_hasDamage() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC52C))(this);
	}
	template <typename R = void> R AddDamage(float newValue) {
		return ((R (*)(MagicDataEntity*, float))(Il2CppBase() + 0x1215414))(this, newValue);
	}
	template <typename R = void> R ReplaceDamage(float newValue) {
		return ((R (*)(MagicDataEntity*, float))(Il2CppBase() + 0x1215518))(this, newValue);
	}
	template <typename R = void> R RemoveDamage() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121561C))(this);
	}
	template <typename R = DamageDecComponent*> R get_damageDec() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1215628))(this);
	}
	template <typename R = bool> R get_hasDamageDec() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12156B0))(this);
	}
	template <typename R = void> R AddDamageDec(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12156BC))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageDec(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12157D0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageDec() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12158E4))(this);
	}
	template <typename R = DamageDecPercentComponent*> R get_damageDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12158F0))(this);
	}
	template <typename R = bool> R get_hasDamageDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1215978))(this);
	}
	template <typename R = void> R AddDamageDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1215984))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1215A98))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1215BAC))(this);
	}
	template <typename R = bool> R get_isDamageImmune() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1215BB8))(this);
	}
	template <typename R = void> R set_isDamageImmune(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1215BC4))(this, value);
	}
	template <typename R = DamageIncComponent*> R get_damageInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1215CDC))(this);
	}
	template <typename R = bool> R get_hasDamageInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1215D64))(this);
	}
	template <typename R = void> R AddDamageInc(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1215D70))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageInc(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1215E84))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1215F98))(this);
	}
	template <typename R = DamageIncPercentComponent*> R get_damageIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120AEF4))(this);
	}
	template <typename R = bool> R get_hasDamageIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1215FA4))(this);
	}
	template <typename R = void> R AddDamageIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1215FB0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x120AF7C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12160C4))(this);
	}
	template <typename R = DamageReflectComponent*> R get_damageReflect() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12160D0))(this);
	}
	template <typename R = bool> R get_hasDamageReflect() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1216158))(this);
	}
	template <typename R = void> R AddDamageReflect(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1216164))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageReflect(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x120CC9C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageReflect() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1216278))(this);
	}
	template <typename R = DamageResistanceComponent*> R get_damageResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1216284))(this);
	}
	template <typename R = bool> R get_hasDamageResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121630C))(this);
	}
	template <typename R = void> R AddDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1216318))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121642C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1216540))(this);
	}
	template <typename R = DamageShieldComponent*> R get_damageShield() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FBF7C))(this);
	}
	template <typename R = bool> R get_hasDamageShield() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FBF70))(this);
	}
	template <typename R = void> R AddDamageShield(DamageShieldDepends* newDepends, float newValue) {
		return ((R (*)(MagicDataEntity*, DamageShieldDepends*, float))(Il2CppBase() + 0x121654C))(this, newDepends, newValue);
	}
	template <typename R = void> R ReplaceDamageShield(DamageShieldDepends* newDepends, float newValue) {
		return ((R (*)(MagicDataEntity*, DamageShieldDepends*, float))(Il2CppBase() + 0x1216660))(this, newDepends, newValue);
	}
	template <typename R = void> R RemoveDamageShield() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1216774))(this);
	}
	template <typename R = DamageStatComponent*> R get_damageStat() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1216780))(this);
	}
	template <typename R = bool> R get_hasDamageStat() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1216808))(this);
	}
	template <typename R = void> R AddDamageStat(DamageStatType* newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((R (*)(MagicDataEntity*, DamageStatType*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1216814))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename R = void> R ReplaceDamageStat(DamageStatType* newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((R (*)(MagicDataEntity*, DamageStatType*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x12169D8))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename R = void> R RemoveDamageStat() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1216B9C))(this);
	}
	template <typename R = DamageTypeComponent*> R get_damageType() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1216BA8))(this);
	}
	template <typename R = bool> R get_hasDamageType() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1216C30))(this);
	}
	template <typename R = void> R AddDamageType(DamageType* newValue) {
		return ((R (*)(MagicDataEntity*, DamageType*))(Il2CppBase() + 0x1216C3C))(this, newValue);
	}
	template <typename R = void> R ReplaceDamageType(DamageType* newValue) {
		return ((R (*)(MagicDataEntity*, DamageType*))(Il2CppBase() + 0x1216D40))(this, newValue);
	}
	template <typename R = void> R RemoveDamageType() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1216E44))(this);
	}
	template <typename R = DamageVulnerabilityComponent*> R get_damageVulnerability() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1216E50))(this);
	}
	template <typename R = bool> R get_hasDamageVulnerability() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1216ED8))(this);
	}
	template <typename R = void> R AddDamageVulnerability(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1216EE4))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageVulnerability(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1216FF8))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageVulnerability() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121710C))(this);
	}
	template <typename R = DebuffComponent*> R get_debuff() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1217118))(this);
	}
	template <typename R = bool> R get_hasDebuff() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1200684))(this);
	}
	template <typename R = void> R AddDebuff(bool newNoAggro) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x12171A0))(this, newNoAggro);
	}
	template <typename R = void> R ReplaceDebuff(bool newNoAggro) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x12172A8))(this, newNoAggro);
	}
	template <typename R = void> R RemoveDebuff() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12173B0))(this);
	}
	template <typename R = bool> R get_isDebuffImmune() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12173BC))(this);
	}
	template <typename R = void> R set_isDebuffImmune(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x12173C8))(this, value);
	}
	template <typename R = DelayComponent*> R get_delay() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12174E0))(this);
	}
	template <typename R = bool> R get_hasDelay() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1217568))(this);
	}
	template <typename R = void> R AddDelay(float newValue) {
		return ((R (*)(MagicDataEntity*, float))(Il2CppBase() + 0x1217574))(this, newValue);
	}
	template <typename R = void> R ReplaceDelay(float newValue) {
		return ((R (*)(MagicDataEntity*, float))(Il2CppBase() + 0x1217678))(this, newValue);
	}
	template <typename R = void> R RemoveDelay() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121777C))(this);
	}
	template <typename R = DescriptionItemComponent*> R get_descriptionItem() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1217788))(this);
	}
	template <typename R = bool> R get_hasDescriptionItem() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1217810))(this);
	}
	template <typename R = void> R AddDescriptionItem(Il2CppString* newName, bool newShowCooldown, bool newHidden) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, bool, bool))(Il2CppBase() + 0x121781C))(this, newName, newShowCooldown, newHidden);
	}
	template <typename R = void> R ReplaceDescriptionItem(Il2CppString* newName, bool newShowCooldown, bool newHidden) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, bool, bool))(Il2CppBase() + 0x1217950))(this, newName, newShowCooldown, newHidden);
	}
	template <typename R = void> R RemoveDescriptionItem() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1217A84))(this);
	}
	template <typename R = bool> R get_isDisabled() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1217A90))(this);
	}
	template <typename R = void> R set_isDisabled(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1217A9C))(this, value);
	}
	template <typename R = bool> R get_isDisarmingFeet() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1217BB4))(this);
	}
	template <typename R = void> R set_isDisarmingFeet(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1217BC0))(this, value);
	}
	template <typename R = bool> R get_isDisarmingWeapon() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1217CD8))(this);
	}
	template <typename R = void> R set_isDisarmingWeapon(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1217CE4))(this, value);
	}
	template <typename R = DispelComponent*> R get_dispel() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1217DFC))(this);
	}
	template <typename R = bool> R get_hasDispel() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1217E84))(this);
	}
	template <typename R = void> R AddDispel(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppString* newTag, Il2CppArray<Il2CppString*>* newAnyTags, bool newBuffs, bool newByActor, bool newControls, int32_t newMaxCount, Il2CppString* newSuccessEffect) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, bool, bool, int32_t, Il2CppString*))(Il2CppBase() + 0x1217E90))(this, newName, newNames, newTag, newAnyTags, newBuffs, newByActor, newControls, newMaxCount, newSuccessEffect);
	}
	template <typename R = void> R ReplaceDispel(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppString* newTag, Il2CppArray<Il2CppString*>* newAnyTags, bool newBuffs, bool newByActor, bool newControls, int32_t newMaxCount, Il2CppString* newSuccessEffect) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, bool, bool, int32_t, Il2CppString*))(Il2CppBase() + 0x1218044))(this, newName, newNames, newTag, newAnyTags, newBuffs, newByActor, newControls, newMaxCount, newSuccessEffect);
	}
	template <typename R = void> R RemoveDispel() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12181F8))(this);
	}
	template <typename R = DotComponent*> R get_dot() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC4A4))(this);
	}
	template <typename R = bool> R get_hasDot() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC498))(this);
	}
	template <typename R = void> R AddDot(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1218204))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDot(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1218318))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDot() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121842C))(this);
	}
	template <typename R = DotResistanceComponent*> R get_dotResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1218438))(this);
	}
	template <typename R = bool> R get_hasDotResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12184C0))(this);
	}
	template <typename R = void> R AddDotResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12184CC))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDotResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12185E0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDotResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12186F4))(this);
	}
	template <typename R = bool> R get_isDualWeapon() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1218700))(this);
	}
	template <typename R = void> R set_isDualWeapon(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121870C))(this, value);
	}
	template <typename R = DurationComponent*> R get_duration() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FBEE8))(this);
	}
	template <typename R = bool> R get_hasDuration() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FBE54))(this);
	}
	template <typename R = void> R AddDuration(float newValue) {
		return ((R (*)(MagicDataEntity*, float))(Il2CppBase() + 0x1218824))(this, newValue);
	}
	template <typename R = void> R ReplaceDuration(float newValue) {
		return ((R (*)(MagicDataEntity*, float))(Il2CppBase() + 0x1218928))(this, newValue);
	}
	template <typename R = void> R RemoveDuration() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1218A2C))(this);
	}
	template <typename R = bool> R get_isDurationPrediction() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1218A38))(this);
	}
	template <typename R = void> R set_isDurationPrediction(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1218A44))(this, value);
	}
	template <typename R = EquipTagsComponent*> R get_equipTags() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1218B5C))(this);
	}
	template <typename R = bool> R get_hasEquipTags() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1218BE4))(this);
	}
	template <typename R = void> R AddEquipTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(MagicDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1218BF0))(this, newValues);
	}
	template <typename R = void> R ReplaceEquipTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(MagicDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1218D04))(this, newValues);
	}
	template <typename R = void> R RemoveEquipTags() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1218E18))(this);
	}
	template <typename R = EventEffectComponent*> R get_eventEffect() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1218E24))(this);
	}
	template <typename R = bool> R get_hasEventEffect() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1218EAC))(this);
	}
	template <typename R = void> R AddEventEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1218EB8))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceEventEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1219054))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveEventEffect() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12191F0))(this);
	}
	template <typename R = ExpGainIncPercentComponent*> R get_expGainIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12191FC))(this);
	}
	template <typename R = bool> R get_hasExpGainIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1219284))(this);
	}
	template <typename R = void> R AddExpGainIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1219290))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceExpGainIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12193A4))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveExpGainIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12194B8))(this);
	}
	template <typename R = bool> R get_isFallen() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12194C4))(this);
	}
	template <typename R = void> R set_isFallen(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x12194D0))(this, value);
	}
	template <typename R = bool> R get_isFollowTarget() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12195E8))(this);
	}
	template <typename R = void> R set_isFollowTarget(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x12195F4))(this, value);
	}
	template <typename R = bool> R get_isFrozen() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121970C))(this);
	}
	template <typename R = void> R set_isFrozen(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1219718))(this, value);
	}
	template <typename R = GadgetCooldownReduceComponent*> R get_gadgetCooldownReduce() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1219830))(this);
	}
	template <typename R = bool> R get_hasGadgetCooldownReduce() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12198B8))(this);
	}
	template <typename R = void> R AddGadgetCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12198C4))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceGadgetCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12199D8))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveGadgetCooldownReduce() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1219AEC))(this);
	}
	template <typename R = GenderComponent*> R get_gender() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1219AF8))(this);
	}
	template <typename R = bool> R get_hasGender() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1219B80))(this);
	}
	template <typename R = void> R AddGender(Gender* newType) {
		return ((R (*)(MagicDataEntity*, Gender*))(Il2CppBase() + 0x1219B8C))(this, newType);
	}
	template <typename R = void> R ReplaceGender(Gender* newType) {
		return ((R (*)(MagicDataEntity*, Gender*))(Il2CppBase() + 0x1219C90))(this, newType);
	}
	template <typename R = void> R RemoveGender() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1219D94))(this);
	}
	template <typename R = bool> R get_isGhost() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC404))(this);
	}
	template <typename R = void> R set_isGhost(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1219DA0))(this, value);
	}
	template <typename R = GiveQuestComponent*> R get_giveQuest() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1219EB8))(this);
	}
	template <typename R = bool> R get_hasGiveQuest() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1219F40))(this);
	}
	template <typename R = void> R AddGiveQuest(bool newDontStart, Il2CppString* newName, Il2CppString* newTag) {
		return ((R (*)(MagicDataEntity*, bool, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1219F4C))(this, newDontStart, newName, newTag);
	}
	template <typename R = void> R ReplaceGiveQuest(bool newDontStart, Il2CppString* newName, Il2CppString* newTag) {
		return ((R (*)(MagicDataEntity*, bool, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x121A088))(this, newDontStart, newName, newTag);
	}
	template <typename R = void> R RemoveGiveQuest() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121A1C4))(this);
	}
	template <typename R = GradeComponent*> R get_grade() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121A1D0))(this);
	}
	template <typename R = bool> R get_hasGrade() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121A258))(this);
	}
	template <typename R = void> R AddGrade(int32_t newValue) {
		return ((R (*)(MagicDataEntity*, int32_t))(Il2CppBase() + 0x121A264))(this, newValue);
	}
	template <typename R = void> R ReplaceGrade(int32_t newValue) {
		return ((R (*)(MagicDataEntity*, int32_t))(Il2CppBase() + 0x121A368))(this, newValue);
	}
	template <typename R = void> R RemoveGrade() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121A46C))(this);
	}
	template <typename R = GuildBossDamageBonusComponent*> R get_guildBossDamageBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121A478))(this);
	}
	template <typename R = bool> R get_hasGuildBossDamageBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121A500))(this);
	}
	template <typename R = void> R AddGuildBossDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121A50C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceGuildBossDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121A620))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveGuildBossDamageBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121A734))(this);
	}
	template <typename R = HealComponent*> R get_heal() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121A740))(this);
	}
	template <typename R = bool> R get_hasHeal() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121A7C8))(this);
	}
	template <typename R = void> R AddHeal(float newValue) {
		return ((R (*)(MagicDataEntity*, float))(Il2CppBase() + 0x121A7D4))(this, newValue);
	}
	template <typename R = void> R ReplaceHeal(float newValue) {
		return ((R (*)(MagicDataEntity*, float))(Il2CppBase() + 0x121A8D8))(this, newValue);
	}
	template <typename R = void> R RemoveHeal() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121A9DC))(this);
	}
	template <typename R = bool> R get_isHealing() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121A9E8))(this);
	}
	template <typename R = void> R set_isHealing(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121A9F4))(this, value);
	}
	template <typename R = HealingSkillCooldownReduceComponent*> R get_healingSkillCooldownReduce() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121AB0C))(this);
	}
	template <typename R = bool> R get_hasHealingSkillCooldownReduce() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121AB94))(this);
	}
	template <typename R = void> R AddHealingSkillCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121ABA0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHealingSkillCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121ACB4))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHealingSkillCooldownReduce() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121ADC8))(this);
	}
	template <typename R = HeavyArmorDecComponent*> R get_heavyArmorDec() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121ADD4))(this);
	}
	template <typename R = bool> R get_hasHeavyArmorDec() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121AE5C))(this);
	}
	template <typename R = void> R AddHeavyArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121AE68))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHeavyArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121AF7C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHeavyArmorDec() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121B090))(this);
	}
	template <typename R = HeavyArmorDecPercentComponent*> R get_heavyArmorDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121B09C))(this);
	}
	template <typename R = bool> R get_hasHeavyArmorDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121B124))(this);
	}
	template <typename R = void> R AddHeavyArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121B130))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHeavyArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121B244))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHeavyArmorDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121B358))(this);
	}
	template <typename R = HeavyArmorIncComponent*> R get_heavyArmorInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121B364))(this);
	}
	template <typename R = bool> R get_hasHeavyArmorInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121B3EC))(this);
	}
	template <typename R = void> R AddHeavyArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121B3F8))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHeavyArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121B50C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHeavyArmorInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121B620))(this);
	}
	template <typename R = HeavyArmorIncPercentComponent*> R get_heavyArmorIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121B62C))(this);
	}
	template <typename R = bool> R get_hasHeavyArmorIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121B6B4))(this);
	}
	template <typename R = void> R AddHeavyArmorIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121B6C0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHeavyArmorIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121B7D4))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHeavyArmorIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121B8E8))(this);
	}
	template <typename R = bool> R get_isHidden() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121B8F4))(this);
	}
	template <typename R = void> R set_isHidden(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121B900))(this, value);
	}
	template <typename R = HotComponent*> R get_hot() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC364))(this);
	}
	template <typename R = bool> R get_hasHot() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC358))(this);
	}
	template <typename R = void> R AddHot(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121BA18))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHot(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121BB2C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHot() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121BC40))(this);
	}
	template <typename R = HungerSpeedDecPercentComponent*> R get_hungerSpeedDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121BC4C))(this);
	}
	template <typename R = bool> R get_hasHungerSpeedDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121BCD4))(this);
	}
	template <typename R = void> R AddHungerSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121BCE0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHungerSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121BDF4))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHungerSpeedDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121BF08))(this);
	}
	template <typename R = HungerSpeedIncPercentComponent*> R get_hungerSpeedIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121BF14))(this);
	}
	template <typename R = bool> R get_hasHungerSpeedIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121BF9C))(this);
	}
	template <typename R = void> R AddHungerSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121BFA8))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHungerSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121C0BC))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHungerSpeedIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121C1D0))(this);
	}
	template <typename R = IcelandResistanceComponent*> R get_icelandResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121C1DC))(this);
	}
	template <typename R = bool> R get_hasIcelandResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121C264))(this);
	}
	template <typename R = void> R AddIcelandResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121C270))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceIcelandResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121C384))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveIcelandResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121C498))(this);
	}
	template <typename R = IconComponent*> R get_icon() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121C4A4))(this);
	}
	template <typename R = bool> R get_hasIcon() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121C52C))(this);
	}
	template <typename R = void> R AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x121C538))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x121C690))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R RemoveIcon() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121C7E8))(this);
	}
	template <typename R = IgnoreArmorPercentComponent*> R get_ignoreArmorPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121C7F4))(this);
	}
	template <typename R = bool> R get_hasIgnoreArmorPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121C87C))(this);
	}
	template <typename R = void> R AddIgnoreArmorPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121C888))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceIgnoreArmorPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x120CB70))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveIgnoreArmorPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121C99C))(this);
	}
	template <typename R = ImmobilizedDamageBonusComponent*> R get_immobilizedDamageBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121C9A8))(this);
	}
	template <typename R = bool> R get_hasImmobilizedDamageBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121CA30))(this);
	}
	template <typename R = void> R AddImmobilizedDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121CA3C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceImmobilizedDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121CB50))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveImmobilizedDamageBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121CC64))(this);
	}
	template <typename R = bool> R get_isImmortal() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC3F8))(this);
	}
	template <typename R = void> R set_isImmortal(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121CC70))(this, value);
	}
	template <typename R = ImmunityComponent*> R get_immunity() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121CD88))(this);
	}
	template <typename R = bool> R get_hasImmunity() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121CE10))(this);
	}
	template <typename R = void> R AddImmunity(Il2CppArray<Il2CppString*>* newTags, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(MagicDataEntity*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x121CE1C))(this, newTags, newNames);
	}
	template <typename R = void> R ReplaceImmunity(Il2CppArray<Il2CppString*>* newTags, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(MagicDataEntity*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x121CF44))(this, newTags, newNames);
	}
	template <typename R = void> R RemoveImmunity() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121D06C))(this);
	}
	template <typename R = ImpotentComponent*> R get_impotent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121D078))(this);
	}
	template <typename R = bool> R get_hasImpotent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121D100))(this);
	}
	template <typename R = void> R AddImpotent(bool newIgnoreImmune) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121D10C))(this, newIgnoreImmune);
	}
	template <typename R = void> R ReplaceImpotent(bool newIgnoreImmune) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121D214))(this, newIgnoreImmune);
	}
	template <typename R = void> R RemoveImpotent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121D31C))(this);
	}
	template <typename R = bool> R get_isImpotentImmune() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121D328))(this);
	}
	template <typename R = void> R set_isImpotentImmune(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121D334))(this, value);
	}
	template <typename R = bool> R get_isInPvP() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121D44C))(this);
	}
	template <typename R = void> R set_isInPvP(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121D458))(this, value);
	}
	template <typename R = IncomingHealBonusComponent*> R get_incomingHealBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121D570))(this);
	}
	template <typename R = bool> R get_hasIncomingHealBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121D5F8))(this);
	}
	template <typename R = void> R AddIncomingHealBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121D604))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceIncomingHealBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121D718))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveIncomingHealBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121D82C))(this);
	}
	template <typename R = IncomingHealReductionComponent*> R get_incomingHealReduction() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121D838))(this);
	}
	template <typename R = bool> R get_hasIncomingHealReduction() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121D8C0))(this);
	}
	template <typename R = void> R AddIncomingHealReduction(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121D8CC))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceIncomingHealReduction(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121D9E0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveIncomingHealReduction() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121DAF4))(this);
	}
	template <typename R = bool> R get_isInstability() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121DB00))(this);
	}
	template <typename R = void> R set_isInstability(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121DB0C))(this, value);
	}
	template <typename R = InteractCollisionComponent*> R get_interactCollision() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121DC24))(this);
	}
	template <typename R = bool> R get_hasInteractCollision() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121DCAC))(this);
	}
	template <typename R = void> R AddInteractCollision(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121DCB8))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceInteractCollision(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121DDCC))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveInteractCollision() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121DEE0))(this);
	}
	template <typename R = InteractionAccessComponent*> R get_interactionAccess() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121DEEC))(this);
	}
	template <typename R = bool> R get_hasInteractionAccess() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121DF74))(this);
	}
	template <typename R = void> R AddInteractionAccess(Il2CppString* newActorCondition, Il2CppString* newTargetCondition) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x121DF80))(this, newActorCondition, newTargetCondition);
	}
	template <typename R = void> R ReplaceInteractionAccess(Il2CppString* newActorCondition, Il2CppString* newTargetCondition) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x121E0A8))(this, newActorCondition, newTargetCondition);
	}
	template <typename R = void> R RemoveInteractionAccess() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121E1D0))(this);
	}
	template <typename R = InterruptTargetComponent*> R get_interruptTarget() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121E1DC))(this);
	}
	template <typename R = bool> R get_hasInterruptTarget() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121E264))(this);
	}
	template <typename R = void> R AddInterruptTarget(bool newAction, bool newSneak, bool newPursuitTarget) {
		return ((R (*)(MagicDataEntity*, bool, bool, bool))(Il2CppBase() + 0x121E270))(this, newAction, newSneak, newPursuitTarget);
	}
	template <typename R = void> R ReplaceInterruptTarget(bool newAction, bool newSneak, bool newPursuitTarget) {
		return ((R (*)(MagicDataEntity*, bool, bool, bool))(Il2CppBase() + 0x121E398))(this, newAction, newSneak, newPursuitTarget);
	}
	template <typename R = void> R RemoveInterruptTarget() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121E4C0))(this);
	}
	template <typename R = bool> R get_isInvisible() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121E4CC))(this);
	}
	template <typename R = void> R set_isInvisible(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121E4D8))(this, value);
	}
	template <typename R = ItemComponent*> R get_item() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121E5F0))(this);
	}
	template <typename R = bool> R get_hasItem() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121E678))(this);
	}
	template <typename R = void> R AddItem(Il2CppString* newName) {
		return ((R (*)(MagicDataEntity*, Il2CppString*))(Il2CppBase() + 0x121E684))(this, newName);
	}
	template <typename R = void> R ReplaceItem(Il2CppString* newName) {
		return ((R (*)(MagicDataEntity*, Il2CppString*))(Il2CppBase() + 0x121E798))(this, newName);
	}
	template <typename R = void> R RemoveItem() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121E8AC))(this);
	}
	template <typename R = bool> R get_isKnockdown() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121E8B8))(this);
	}
	template <typename R = void> R set_isKnockdown(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121E8C4))(this, value);
	}
	template <typename R = LifeStealComponent*> R get_lifeSteal() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120B3EC))(this);
	}
	template <typename R = bool> R get_hasLifeSteal() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120B3E0))(this);
	}
	template <typename R = void> R AddLifeSteal(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121E9DC))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceLifeSteal(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x120B474))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveLifeSteal() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121EAF0))(this);
	}
	template <typename R = LightArmorDecComponent*> R get_lightArmorDec() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121EAFC))(this);
	}
	template <typename R = bool> R get_hasLightArmorDec() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121EB84))(this);
	}
	template <typename R = void> R AddLightArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121EB90))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceLightArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121ECA4))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveLightArmorDec() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121EDB8))(this);
	}
	template <typename R = LightArmorDecPercentComponent*> R get_lightArmorDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121EDC4))(this);
	}
	template <typename R = bool> R get_hasLightArmorDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121EE4C))(this);
	}
	template <typename R = void> R AddLightArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121EE58))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceLightArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121EF6C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveLightArmorDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121F080))(this);
	}
	template <typename R = LightArmorIncComponent*> R get_lightArmorInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121F08C))(this);
	}
	template <typename R = bool> R get_hasLightArmorInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121F114))(this);
	}
	template <typename R = void> R AddLightArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121F120))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceLightArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121F234))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveLightArmorInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121F348))(this);
	}
	template <typename R = LightArmorIncPercentComponent*> R get_lightArmorIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121F354))(this);
	}
	template <typename R = bool> R get_hasLightArmorIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121F3DC))(this);
	}
	template <typename R = void> R AddLightArmorIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121F3E8))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceLightArmorIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x121F4FC))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveLightArmorIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121F610))(this);
	}
	template <typename R = LocationPlayerMagicComponent*> R get_locationPlayerMagic() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121F61C))(this);
	}
	template <typename R = bool> R get_hasLocationPlayerMagic() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121F6A4))(this);
	}
	template <typename R = void> R AddLocationPlayerMagic(Il2CppArray<Il2CppString*>* newNames, bool newAsChildren) {
		return ((R (*)(MagicDataEntity*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x121F6B0))(this, newNames, newAsChildren);
	}
	template <typename R = void> R ReplaceLocationPlayerMagic(Il2CppArray<Il2CppString*>* newNames, bool newAsChildren) {
		return ((R (*)(MagicDataEntity*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x121F7D0))(this, newNames, newAsChildren);
	}
	template <typename R = void> R RemoveLocationPlayerMagic() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121F8F0))(this);
	}
	template <typename R = bool> R get_isLostControl() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121F8FC))(this);
	}
	template <typename R = void> R set_isLostControl(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121F908))(this, value);
	}
	template <typename R = bool> R get_isLostControlImmune() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121FA20))(this);
	}
	template <typename R = void> R set_isLostControlImmune(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x121FA2C))(this, value);
	}
	template <typename R = MagicIconComponent*> R get_magicIcon() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121FB44))(this);
	}
	template <typename R = bool> R get_hasMagicIcon() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121FBCC))(this);
	}
	template <typename R = void> R AddMagicIcon(Il2CppString* newAssetPath, MagicIconShowType* newShow, bool newShowCount, MagicIconViewerType* newViewer, bool newShowWhenNotActive, bool newGroupByActor) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, MagicIconShowType*, bool, MagicIconViewerType*, bool, bool))(Il2CppBase() + 0x121FBD8))(this, newAssetPath, newShow, newShowCount, newViewer, newShowWhenNotActive, newGroupByActor);
	}
	template <typename R = void> R ReplaceMagicIcon(Il2CppString* newAssetPath, MagicIconShowType* newShow, bool newShowCount, MagicIconViewerType* newViewer, bool newShowWhenNotActive, bool newGroupByActor) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, MagicIconShowType*, bool, MagicIconViewerType*, bool, bool))(Il2CppBase() + 0x121FD30))(this, newAssetPath, newShow, newShowCount, newViewer, newShowWhenNotActive, newGroupByActor);
	}
	template <typename R = void> R RemoveMagicIcon() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x121FE88))(this);
	}
	template <typename R = MagicTriggerComponent*> R get_magicTrigger() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120CAE8))(this);
	}
	template <typename R = bool> R get_hasMagicTrigger() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120D38C))(this);
	}
	template <typename R = void> R AddMagicTrigger(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, MagicTriggerType* newTypes) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, MagicTriggerType*))(Il2CppBase() + 0x121FE94))(this, newName, newNames, newTypes);
	}
	template <typename R = void> R ReplaceMagicTrigger(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, MagicTriggerType* newTypes) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, MagicTriggerType*))(Il2CppBase() + 0x121FFCC))(this, newName, newNames, newTypes);
	}
	template <typename R = void> R RemoveMagicTrigger() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1220104))(this);
	}
	template <typename R = MapSpeedIncPercentComponent*> R get_mapSpeedIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1220110))(this);
	}
	template <typename R = bool> R get_hasMapSpeedIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1220198))(this);
	}
	template <typename R = void> R AddMapSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12201A4))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMapSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12202B8))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMapSpeedIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12203CC))(this);
	}
	template <typename R = MasteryPointsBonusComponent*> R get_masteryPointsBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12203D8))(this);
	}
	template <typename R = bool> R get_hasMasteryPointsBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1220460))(this);
	}
	template <typename R = void> R AddMasteryPointsBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122046C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMasteryPointsBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1220580))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMasteryPointsBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1220694))(this);
	}
	template <typename R = MaxDamageReflectComponent*> R get_maxDamageReflect() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12206A0))(this);
	}
	template <typename R = bool> R get_hasMaxDamageReflect() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1220728))(this);
	}
	template <typename R = void> R AddMaxDamageReflect(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1220734))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxDamageReflect(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1220848))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxDamageReflect() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122095C))(this);
	}
	template <typename R = MaxHealthDecPercentComponent*> R get_maxHealthDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1220968))(this);
	}
	template <typename R = bool> R get_hasMaxHealthDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12209F0))(this);
	}
	template <typename R = void> R AddMaxHealthDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12209FC))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxHealthDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1220B10))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxHealthDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1220C24))(this);
	}
	template <typename R = MaxHealthIncComponent*> R get_maxHealthInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120B244))(this);
	}
	template <typename R = bool> R get_hasMaxHealthInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120B238))(this);
	}
	template <typename R = void> R AddMaxHealthInc(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1220C30))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxHealthInc(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x120B2CC))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxHealthInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1220D44))(this);
	}
	template <typename R = MaxHealthIncPercentComponent*> R get_maxHealthIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120B09C))(this);
	}
	template <typename R = bool> R get_hasMaxHealthIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120B090))(this);
	}
	template <typename R = void> R AddMaxHealthIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1220D50))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxHealthIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x120B124))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxHealthIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1220E64))(this);
	}
	template <typename R = MaxIncomingDamageComponent*> R get_maxIncomingDamage() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1220E70))(this);
	}
	template <typename R = bool> R get_hasMaxIncomingDamage() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1220EF8))(this);
	}
	template <typename R = void> R AddMaxIncomingDamage(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1220F04))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxIncomingDamage(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1221018))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxIncomingDamage() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122112C))(this);
	}
	template <typename R = MaxTenacityComponent*> R get_maxTenacity() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1221138))(this);
	}
	template <typename R = bool> R get_hasMaxTenacity() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12211C0))(this);
	}
	template <typename R = void> R AddMaxTenacity(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12211CC))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxTenacity(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12212E0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxTenacity() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12213F4))(this);
	}
	template <typename R = MaxTenacityIncComponent*> R get_maxTenacityInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1221400))(this);
	}
	template <typename R = bool> R get_hasMaxTenacityInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1221488))(this);
	}
	template <typename R = void> R AddMaxTenacityInc(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1221494))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxTenacityInc(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12215A8))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxTenacityInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12216BC))(this);
	}
	template <typename R = MaxTenacityIncPercentComponent*> R get_maxTenacityIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12216C8))(this);
	}
	template <typename R = bool> R get_hasMaxTenacityIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1221750))(this);
	}
	template <typename R = void> R AddMaxTenacityIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122175C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxTenacityIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1221870))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxTenacityIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1221984))(this);
	}
	template <typename R = MediumArmorDecComponent*> R get_mediumArmorDec() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1221990))(this);
	}
	template <typename R = bool> R get_hasMediumArmorDec() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1221A18))(this);
	}
	template <typename R = void> R AddMediumArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1221A24))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMediumArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1221B38))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMediumArmorDec() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1221C4C))(this);
	}
	template <typename R = MediumArmorDecPercentComponent*> R get_mediumArmorDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1221C58))(this);
	}
	template <typename R = bool> R get_hasMediumArmorDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1221CE0))(this);
	}
	template <typename R = void> R AddMediumArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1221CEC))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMediumArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1221E00))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMediumArmorDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1221F14))(this);
	}
	template <typename R = MediumArmorIncComponent*> R get_mediumArmorInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1221F20))(this);
	}
	template <typename R = bool> R get_hasMediumArmorInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1221FA8))(this);
	}
	template <typename R = void> R AddMediumArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1221FB4))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMediumArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12220C8))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMediumArmorInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12221DC))(this);
	}
	template <typename R = MediumArmorIncPercentComponent*> R get_mediumArmorIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12221E8))(this);
	}
	template <typename R = bool> R get_hasMediumArmorIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1222270))(this);
	}
	template <typename R = void> R AddMediumArmorIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122227C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMediumArmorIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1222390))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMediumArmorIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12224A4))(this);
	}
	template <typename R = MeleeResistanceComponent*> R get_meleeResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12224B0))(this);
	}
	template <typename R = bool> R get_hasMeleeResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1222538))(this);
	}
	template <typename R = void> R AddMeleeResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1222544))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMeleeResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1222658))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMeleeResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122276C))(this);
	}
	template <typename R = MetabolismDamageResistanceComponent*> R get_metabolismDamageResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1222778))(this);
	}
	template <typename R = bool> R get_hasMetabolismDamageResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1222800))(this);
	}
	template <typename R = void> R AddMetabolismDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122280C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMetabolismDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1222920))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMetabolismDamageResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1222A34))(this);
	}
	template <typename R = MetabolismDamageVulnerabilityComponent*> R get_metabolismDamageVulnerability() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1222A40))(this);
	}
	template <typename R = bool> R get_hasMetabolismDamageVulnerability() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1222AC8))(this);
	}
	template <typename R = void> R AddMetabolismDamageVulnerability(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1222AD4))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMetabolismDamageVulnerability(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1222BE8))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMetabolismDamageVulnerability() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1222CFC))(this);
	}
	template <typename R = bool> R get_isMinimapHidden() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1222D08))(this);
	}
	template <typename R = void> R set_isMinimapHidden(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1222D14))(this, value);
	}
	template <typename R = ModifiersCatchComponent*> R get_modifiersCatch() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1222E2C))(this);
	}
	template <typename R = bool> R get_hasModifiersCatch() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1222EB4))(this);
	}
	template <typename R = void> R AddModifiersCatch(Il2CppArray<int32_t>* newValues) {
		return ((R (*)(MagicDataEntity*, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1222EC0))(this, newValues);
	}
	template <typename R = void> R ReplaceModifiersCatch(Il2CppArray<int32_t>* newValues) {
		return ((R (*)(MagicDataEntity*, Il2CppArray<int32_t>*))(Il2CppBase() + 0x120D658))(this, newValues);
	}
	template <typename R = void> R RemoveModifiersCatch() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1222FD4))(this);
	}
	template <typename R = MorphingWeaponComponent*> R get_morphingWeapon() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1222FE0))(this);
	}
	template <typename R = bool> R get_hasMorphingWeapon() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1223068))(this);
	}
	template <typename R = void> R AddMorphingWeapon(ItemConditionComponent* newItemCondition, Il2CppString* newName) {
		return ((R (*)(MagicDataEntity*, ItemConditionComponent*, Il2CppString*))(Il2CppBase() + 0x1223074))(this, newItemCondition, newName);
	}
	template <typename R = void> R ReplaceMorphingWeapon(ItemConditionComponent* newItemCondition, Il2CppString* newName) {
		return ((R (*)(MagicDataEntity*, ItemConditionComponent*, Il2CppString*))(Il2CppBase() + 0x122319C))(this, newItemCondition, newName);
	}
	template <typename R = void> R RemoveMorphingWeapon() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12232C4))(this);
	}
	template <typename R = MountSpeedComponent*> R get_mountSpeed() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12232D0))(this);
	}
	template <typename R = bool> R get_hasMountSpeed() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1223358))(this);
	}
	template <typename R = void> R AddMountSpeed(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1223364))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMountSpeed(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1223478))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMountSpeed() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122358C))(this);
	}
	template <typename R = MountSpeedDecPercentComponent*> R get_mountSpeedDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1223598))(this);
	}
	template <typename R = bool> R get_hasMountSpeedDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1223620))(this);
	}
	template <typename R = void> R AddMountSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122362C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMountSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1223740))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMountSpeedDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1223854))(this);
	}
	template <typename R = MountSpeedIncPercentComponent*> R get_mountSpeedIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1223860))(this);
	}
	template <typename R = bool> R get_hasMountSpeedIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12238E8))(this);
	}
	template <typename R = void> R AddMountSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12238F4))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMountSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1223A08))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMountSpeedIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1223B1C))(this);
	}
	template <typename R = bool> R get_isNotAggressive() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1223B28))(this);
	}
	template <typename R = void> R set_isNotAggressive(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1223B34))(this, value);
	}
	template <typename R = NotificationComponent*> R get_notification() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1223C4C))(this);
	}
	template <typename R = bool> R get_hasNotification() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1223CD4))(this);
	}
	template <typename R = void> R AddNotification(bool newFromSourceItem, Il2CppString* newValue, Il2CppString* newValueFormat, Il2CppString* newColor, Il2CppString* newIcon) {
		return ((R (*)(MagicDataEntity*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1223CE0))(this, newFromSourceItem, newValue, newValueFormat, newColor, newIcon);
	}
	template <typename R = void> R ReplaceNotification(bool newFromSourceItem, Il2CppString* newValue, Il2CppString* newValueFormat, Il2CppString* newColor, Il2CppString* newIcon) {
		return ((R (*)(MagicDataEntity*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1223E4C))(this, newFromSourceItem, newValue, newValueFormat, newColor, newIcon);
	}
	template <typename R = void> R RemoveNotification() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1223FB8))(this);
	}
	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1223FC4))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122404C))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(MagicDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1224058))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(MagicDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x122416C))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1224280))(this);
	}
	template <typename R = OnDurationEndComponent*> R get_onDurationEnd() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122428C))(this);
	}
	template <typename R = bool> R get_hasOnDurationEnd() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1224314))(this);
	}
	template <typename R = void> R AddOnDurationEnd(Nullable1int32_t>* newMaxCount, Il2CppString* newSpawnMagic, Il2CppArray<Il2CppString*>* newSpawnMagics, bool newDeath) {
		return ((R (*)(MagicDataEntity*, Nullable1int32_t>*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1224320))(this, newMaxCount, newSpawnMagic, newSpawnMagics, newDeath);
	}
	template <typename R = void> R ReplaceOnDurationEnd(Nullable1int32_t>* newMaxCount, Il2CppString* newSpawnMagic, Il2CppArray<Il2CppString*>* newSpawnMagics, bool newDeath) {
		return ((R (*)(MagicDataEntity*, Nullable1int32_t>*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1224464))(this, newMaxCount, newSpawnMagic, newSpawnMagics, newDeath);
	}
	template <typename R = void> R RemoveOnDurationEnd() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12245A8))(this);
	}
	template <typename R = OnRemoveComponent*> R get_onRemove() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12245B4))(this);
	}
	template <typename R = bool> R get_hasOnRemove() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122463C))(this);
	}
	template <typename R = void> R AddOnRemove(bool newBreakeSourceAction, bool newActivateTarget, bool newUnlockTarget, float newDismountGlobalCooldown, Il2CppString* newEffect, Il2CppString* newSpawnMagic, Il2CppArray<Il2CppString*>* newSpawnMagics) {
		return ((R (*)(MagicDataEntity*, bool, bool, bool, float, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1224648))(this, newBreakeSourceAction, newActivateTarget, newUnlockTarget, newDismountGlobalCooldown, newEffect, newSpawnMagic, newSpawnMagics);
	}
	template <typename R = void> R ReplaceOnRemove(bool newBreakeSourceAction, bool newActivateTarget, bool newUnlockTarget, float newDismountGlobalCooldown, Il2CppString* newEffect, Il2CppString* newSpawnMagic, Il2CppArray<Il2CppString*>* newSpawnMagics) {
		return ((R (*)(MagicDataEntity*, bool, bool, bool, float, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x12247C8))(this, newBreakeSourceAction, newActivateTarget, newUnlockTarget, newDismountGlobalCooldown, newEffect, newSpawnMagic, newSpawnMagics);
	}
	template <typename R = void> R RemoveOnRemove() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1224948))(this);
	}
	template <typename R = OnRemoveCooldownComponent*> R get_onRemoveCooldown() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1224954))(this);
	}
	template <typename R = bool> R get_hasOnRemoveCooldown() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12249DC))(this);
	}
	template <typename R = void> R AddOnRemoveCooldown(Il2CppString* newItemName, float newCooldown, float newGroupCooldown) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, float, float))(Il2CppBase() + 0x12249E8))(this, newItemName, newCooldown, newGroupCooldown);
	}
	template <typename R = void> R ReplaceOnRemoveCooldown(Il2CppString* newItemName, float newCooldown, float newGroupCooldown) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, float, float))(Il2CppBase() + 0x1224B10))(this, newItemName, newCooldown, newGroupCooldown);
	}
	template <typename R = void> R RemoveOnRemoveCooldown() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1224C38))(this);
	}
	template <typename R = OutcomingHealBonusComponent*> R get_outcomingHealBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1224C44))(this);
	}
	template <typename R = bool> R get_hasOutcomingHealBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1224CCC))(this);
	}
	template <typename R = void> R AddOutcomingHealBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1224CD8))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceOutcomingHealBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1224DEC))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveOutcomingHealBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1224F00))(this);
	}
	template <typename R = OverrideCooldownComponent*> R get_overrideCooldown() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1224F0C))(this);
	}
	template <typename R = bool> R get_hasOverrideCooldown() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1224F94))(this);
	}
	template <typename R = void> R AddOverrideCooldown(Il2CppString* newTag, float newValue) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, float))(Il2CppBase() + 0x1224FA0))(this, newTag, newValue);
	}
	template <typename R = void> R ReplaceOverrideCooldown(Il2CppString* newTag, float newValue) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, float))(Il2CppBase() + 0x12250C4))(this, newTag, newValue);
	}
	template <typename R = void> R RemoveOverrideCooldown() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12251E8))(this);
	}
	template <typename R = bool> R get_isPatrolling() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12251F4))(this);
	}
	template <typename R = void> R set_isPatrolling(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1225200))(this, value);
	}
	template <typename R = PermanentComponent*> R get_permanent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1225318))(this);
	}
	template <typename R = bool> R get_hasPermanent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12253A0))(this);
	}
	template <typename R = void> R AddPermanent(bool newSaveOnDeath) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x12253AC))(this, newSaveOnDeath);
	}
	template <typename R = void> R ReplacePermanent(bool newSaveOnDeath) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x12254B4))(this, newSaveOnDeath);
	}
	template <typename R = void> R RemovePermanent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12255BC))(this);
	}
	template <typename R = bool> R get_isPermanentMoving() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12255C8))(this);
	}
	template <typename R = void> R set_isPermanentMoving(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x12255D4))(this, value);
	}
	template <typename R = PersonalComponent*> R get_personal() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12256EC))(this);
	}
	template <typename R = bool> R get_hasPersonal() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1225774))(this);
	}
	template <typename R = void> R AddPersonal(int64_t newPlayerId) {
		return ((R (*)(MagicDataEntity*, int64_t))(Il2CppBase() + 0x1225780))(this, newPlayerId);
	}
	template <typename R = void> R ReplacePersonal(int64_t newPlayerId) {
		return ((R (*)(MagicDataEntity*, int64_t))(Il2CppBase() + 0x1225884))(this, newPlayerId);
	}
	template <typename R = void> R RemovePersonal() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1225988))(this);
	}
	template <typename R = bool> R get_isPersonalForTarget() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1225994))(this);
	}
	template <typename R = void> R set_isPersonalForTarget(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x12259A0))(this, value);
	}
	template <typename R = PetExperienceBonusComponent*> R get_petExperienceBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1225AB8))(this);
	}
	template <typename R = bool> R get_hasPetExperienceBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1225B40))(this);
	}
	template <typename R = void> R AddPetExperienceBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1225B4C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplacePetExperienceBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1225C60))(this, newValue, newGroup);
	}
	template <typename R = void> R RemovePetExperienceBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1225D74))(this);
	}
	template <typename R = PlayerDamageBonusComponent*> R get_playerDamageBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120B73C))(this);
	}
	template <typename R = bool> R get_hasPlayerDamageBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x120B730))(this);
	}
	template <typename R = void> R AddPlayerDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1225D80))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplacePlayerDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x120B7C4))(this, newValue, newGroup);
	}
	template <typename R = void> R RemovePlayerDamageBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1225E94))(this);
	}
	template <typename R = PlayerDamageReductionComponent*> R get_playerDamageReduction() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1225EA0))(this);
	}
	template <typename R = bool> R get_hasPlayerDamageReduction() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1225F28))(this);
	}
	template <typename R = void> R AddPlayerDamageReduction(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1225F34))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplacePlayerDamageReduction(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1226048))(this, newValue, newGroup);
	}
	template <typename R = void> R RemovePlayerDamageReduction() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122615C))(this);
	}
	template <typename R = PlayerResistanceComponent*> R get_playerResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1226168))(this);
	}
	template <typename R = bool> R get_hasPlayerResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12261F0))(this);
	}
	template <typename R = void> R AddPlayerResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12261FC))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplacePlayerResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1226310))(this, newValue, newGroup);
	}
	template <typename R = void> R RemovePlayerResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1226424))(this);
	}
	template <typename R = bool> R get_isPoisoned() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1226430))(this);
	}
	template <typename R = void> R set_isPoisoned(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x122643C))(this, value);
	}
	template <typename R = PowerIncComponent*> R get_powerInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1226554))(this);
	}
	template <typename R = bool> R get_hasPowerInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12265DC))(this);
	}
	template <typename R = void> R AddPowerInc(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12265E8))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplacePowerInc(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x12266FC))(this, newValue, newGroup);
	}
	template <typename R = void> R RemovePowerInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1226810))(this);
	}
	template <typename R = PursuitComponent*> R get_pursuit() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122681C))(this);
	}
	template <typename R = bool> R get_hasPursuit() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12268A4))(this);
	}
	template <typename R = void> R AddPursuit(float newDistance, float newEvadeDistance, float newAngle, float newBackCooldown, bool newPriorityOnPlayers, Il2CppString* newTargetCondition, bool newIgnoreBorder) {
		return ((R (*)(MagicDataEntity*, float, float, float, float, bool, Il2CppString*, bool))(Il2CppBase() + 0x12268B0))(this, newDistance, newEvadeDistance, newAngle, newBackCooldown, newPriorityOnPlayers, newTargetCondition, newIgnoreBorder);
	}
	template <typename R = void> R ReplacePursuit(float newDistance, float newEvadeDistance, float newAngle, float newBackCooldown, bool newPriorityOnPlayers, Il2CppString* newTargetCondition, bool newIgnoreBorder) {
		return ((R (*)(MagicDataEntity*, float, float, float, float, bool, Il2CppString*, bool))(Il2CppBase() + 0x1226A0C))(this, newDistance, newEvadeDistance, newAngle, newBackCooldown, newPriorityOnPlayers, newTargetCondition, newIgnoreBorder);
	}
	template <typename R = void> R RemovePursuit() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1226B68))(this);
	}
	template <typename R = bool> R get_isQuestTarget() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1226B74))(this);
	}
	template <typename R = void> R set_isQuestTarget(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1226B80))(this, value);
	}
	template <typename R = RangedResistanceComponent*> R get_rangedResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1226C98))(this);
	}
	template <typename R = bool> R get_hasRangedResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1226D20))(this);
	}
	template <typename R = void> R AddRangedResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1226D2C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceRangedResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1226E40))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveRangedResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1226F54))(this);
	}
	template <typename R = bool> R get_isRemovable() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FFC58))(this);
	}
	template <typename R = void> R set_isRemovable(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1226F60))(this, value);
	}
	template <typename R = RemoveConditionComponent*> R get_removeCondition() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1227078))(this);
	}
	template <typename R = bool> R get_hasRemoveCondition() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1227100))(this);
	}
	template <typename R = void> R AddRemoveCondition(float newTargetHpCoefLess, float newTargetHpCoefMore, bool newActorDestroyed, bool newActionDestroyed, bool newActionApplied, bool newActorNotEquipSourceItem, Il2CppArray<Il2CppString*>* newActorNoEquipTags, Il2CppArray<Il2CppString*>* newTargetNoEquipTags, Il2CppString* newTargetNoEquipClass, Nullable1bool>* newTargetSneaked, Il2CppString* newTargetHasntMagic, Nullable1bool>* newTargetRiding, Il2CppString* newTargetCondition, Il2CppString* newActorCondition) {
		return ((R (*)(MagicDataEntity*, float, float, bool, bool, bool, bool, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppString*, Nullable1bool>*, Il2CppString*, Nullable1bool>*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x122710C))(this, newTargetHpCoefLess, newTargetHpCoefMore, newActorDestroyed, newActionDestroyed, newActionApplied, newActorNotEquipSourceItem, newActorNoEquipTags, newTargetNoEquipTags, newTargetNoEquipClass, newTargetSneaked, newTargetHasntMagic, newTargetRiding, newTargetCondition, newActorCondition);
	}
	template <typename R = void> R ReplaceRemoveCondition(float newTargetHpCoefLess, float newTargetHpCoefMore, bool newActorDestroyed, bool newActionDestroyed, bool newActionApplied, bool newActorNotEquipSourceItem, Il2CppArray<Il2CppString*>* newActorNoEquipTags, Il2CppArray<Il2CppString*>* newTargetNoEquipTags, Il2CppString* newTargetNoEquipClass, Nullable1bool>* newTargetSneaked, Il2CppString* newTargetHasntMagic, Nullable1bool>* newTargetRiding, Il2CppString* newTargetCondition, Il2CppString* newActorCondition) {
		return ((R (*)(MagicDataEntity*, float, float, bool, bool, bool, bool, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppString*, Nullable1bool>*, Il2CppString*, Nullable1bool>*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1227300))(this, newTargetHpCoefLess, newTargetHpCoefMore, newActorDestroyed, newActionDestroyed, newActionApplied, newActorNotEquipSourceItem, newActorNoEquipTags, newTargetNoEquipTags, newTargetNoEquipClass, newTargetSneaked, newTargetHasntMagic, newTargetRiding, newTargetCondition, newActorCondition);
	}
	template <typename R = void> R RemoveRemoveCondition() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12274F4))(this);
	}
	template <typename R = RemoveOnActionComponent*> R get_removeOnAction() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1227500))(this);
	}
	template <typename R = bool> R get_hasRemoveOnAction() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1227588))(this);
	}
	template <typename R = void> R AddRemoveOnAction(Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, ActionType* newType, ActionType* newNoType, Nullable1bool>* newInstant) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, ActionType*, ActionType*, Nullable1bool>*))(Il2CppBase() + 0x1227594))(this, newName, newTag, newNoTag, newType, newNoType, newInstant);
	}
	template <typename R = void> R ReplaceRemoveOnAction(Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, ActionType* newType, ActionType* newNoType, Nullable1bool>* newInstant) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, ActionType*, ActionType*, Nullable1bool>*))(Il2CppBase() + 0x12276F8))(this, newName, newTag, newNoTag, newType, newNoType, newInstant);
	}
	template <typename R = void> R RemoveRemoveOnAction() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122785C))(this);
	}
	template <typename R = bool> R get_isRemoveOnMove() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1227868))(this);
	}
	template <typename R = void> R set_isRemoveOnMove(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1227874))(this, value);
	}
	template <typename R = RemoveOnUseComponent*> R get_removeOnUse() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122798C))(this);
	}
	template <typename R = bool> R get_hasRemoveOnUse() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1227A14))(this);
	}
	template <typename R = void> R AddRemoveOnUse(Il2CppArray<Il2CppString*>* newTags, Il2CppArray<Il2CppString*>* newNames, bool newRemoveSource) {
		return ((R (*)(MagicDataEntity*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1227A20))(this, newTags, newNames, newRemoveSource);
	}
	template <typename R = void> R ReplaceRemoveOnUse(Il2CppArray<Il2CppString*>* newTags, Il2CppArray<Il2CppString*>* newNames, bool newRemoveSource) {
		return ((R (*)(MagicDataEntity*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1227B5C))(this, newTags, newNames, newRemoveSource);
	}
	template <typename R = void> R RemoveRemoveOnUse() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1227C98))(this);
	}
	template <typename R = RepeatMagicComponent*> R get_repeatMagic() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1227CA4))(this);
	}
	template <typename R = bool> R get_hasRepeatMagic() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1227D2C))(this);
	}
	template <typename R = void> R AddRepeatMagic(Il2CppArray<Il2CppString*>* newNames, float newDelay, float newPeriod, bool newAsChildren, Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<Item*>* newList, TargetsSelector* newSelector) {
		return ((R (*)(MagicDataEntity*, Il2CppArray<Il2CppString*>*, float, float, bool, Il2CppString*, Il2CppString*, Il2CppArray<Item*>*, TargetsSelector*))(Il2CppBase() + 0x1227D38))(this, newNames, newDelay, newPeriod, newAsChildren, newActiveCondition, newName, newList, newSelector);
	}
	template <typename R = void> R ReplaceRepeatMagic(Il2CppArray<Il2CppString*>* newNames, float newDelay, float newPeriod, bool newAsChildren, Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<Item*>* newList, TargetsSelector* newSelector) {
		return ((R (*)(MagicDataEntity*, Il2CppArray<Il2CppString*>*, float, float, bool, Il2CppString*, Il2CppString*, Il2CppArray<Item*>*, TargetsSelector*))(Il2CppBase() + 0x1227ECC))(this, newNames, newDelay, newPeriod, newAsChildren, newActiveCondition, newName, newList, newSelector);
	}
	template <typename R = void> R RemoveRepeatMagic() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1228060))(this);
	}
	template <typename R = RestoreMetabolismComponent*> R get_restoreMetabolism() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122806C))(this);
	}
	template <typename R = bool> R get_hasRestoreMetabolism() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12280F4))(this);
	}
	template <typename R = void> R AddRestoreMetabolism(float newThirst, float newHunger) {
		return ((R (*)(MagicDataEntity*, float, float))(Il2CppBase() + 0x1228100))(this, newThirst, newHunger);
	}
	template <typename R = void> R ReplaceRestoreMetabolism(float newThirst, float newHunger) {
		return ((R (*)(MagicDataEntity*, float, float))(Il2CppBase() + 0x1228208))(this, newThirst, newHunger);
	}
	template <typename R = void> R RemoveRestoreMetabolism() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1228310))(this);
	}
	template <typename R = bool> R get_isRiding() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122831C))(this);
	}
	template <typename R = void> R set_isRiding(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1228328))(this, value);
	}
	template <typename R = bool> R get_isRootImmune() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1228440))(this);
	}
	template <typename R = void> R set_isRootImmune(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x122844C))(this, value);
	}
	template <typename R = RootedComponent*> R get_rooted() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1228564))(this);
	}
	template <typename R = bool> R get_hasRooted() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12285EC))(this);
	}
	template <typename R = void> R AddRooted(bool newStackable, bool newIgnoreImmune) {
		return ((R (*)(MagicDataEntity*, bool, bool))(Il2CppBase() + 0x12285F8))(this, newStackable, newIgnoreImmune);
	}
	template <typename R = void> R ReplaceRooted(bool newStackable, bool newIgnoreImmune) {
		return ((R (*)(MagicDataEntity*, bool, bool))(Il2CppBase() + 0x122870C))(this, newStackable, newIgnoreImmune);
	}
	template <typename R = void> R RemoveRooted() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1228820))(this);
	}
	template <typename R = RuneComponent*> R get_rune() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122882C))(this);
	}
	template <typename R = bool> R get_hasRune() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12288B4))(this);
	}
	template <typename R = void> R AddRune(RuneType* newType) {
		return ((R (*)(MagicDataEntity*, RuneType*))(Il2CppBase() + 0x12288C0))(this, newType);
	}
	template <typename R = void> R ReplaceRune(RuneType* newType) {
		return ((R (*)(MagicDataEntity*, RuneType*))(Il2CppBase() + 0x120C9E4))(this, newType);
	}
	template <typename R = void> R RemoveRune() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12289C4))(this);
	}
	template <typename R = bool> R get_isRunesDisabled() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12289D0))(this);
	}
	template <typename R = void> R set_isRunesDisabled(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x12289DC))(this, value);
	}
	template <typename R = SatiationReductionComponent*> R get_satiationReduction() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1228AF4))(this);
	}
	template <typename R = bool> R get_hasSatiationReduction() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1228B7C))(this);
	}
	template <typename R = void> R AddSatiationReduction(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1228B88))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSatiationReduction(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1228C9C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSatiationReduction() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1228DB0))(this);
	}
	template <typename R = ScaleByDistanceComponent*> R get_scaleByDistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FBE60))(this);
	}
	template <typename R = bool> R get_hasScaleByDistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FBE48))(this);
	}
	template <typename R = void> R AddScaleByDistance(float newMaxDistance, float newMaxDamageCoef, float newMaxDurationCoef) {
		return ((R (*)(MagicDataEntity*, float, float, float))(Il2CppBase() + 0x1228DBC))(this, newMaxDistance, newMaxDamageCoef, newMaxDurationCoef);
	}
	template <typename R = void> R ReplaceScaleByDistance(float newMaxDistance, float newMaxDamageCoef, float newMaxDurationCoef) {
		return ((R (*)(MagicDataEntity*, float, float, float))(Il2CppBase() + 0x1228ED4))(this, newMaxDistance, newMaxDamageCoef, newMaxDurationCoef);
	}
	template <typename R = void> R RemoveScaleByDistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1228FEC))(this);
	}
	template <typename R = SecondMagicIconComponent*> R get_secondMagicIcon() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1228FF8))(this);
	}
	template <typename R = bool> R get_hasSecondMagicIcon() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1229080))(this);
	}
	template <typename R = void> R AddSecondMagicIcon(Il2CppString* newAssetPath, MagicIconShowType* newShow, bool newShowCount, MagicIconViewerType* newViewer, bool newShowWhenNotActive, bool newGroupByActor) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, MagicIconShowType*, bool, MagicIconViewerType*, bool, bool))(Il2CppBase() + 0x122908C))(this, newAssetPath, newShow, newShowCount, newViewer, newShowWhenNotActive, newGroupByActor);
	}
	template <typename R = void> R ReplaceSecondMagicIcon(Il2CppString* newAssetPath, MagicIconShowType* newShow, bool newShowCount, MagicIconViewerType* newViewer, bool newShowWhenNotActive, bool newGroupByActor) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, MagicIconShowType*, bool, MagicIconViewerType*, bool, bool))(Il2CppBase() + 0x12291E4))(this, newAssetPath, newShow, newShowCount, newViewer, newShowWhenNotActive, newGroupByActor);
	}
	template <typename R = void> R RemoveSecondMagicIcon() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122933C))(this);
	}
	template <typename R = SetMagicComponent*> R get_setMagic() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1229348))(this);
	}
	template <typename R = bool> R get_hasSetMagic() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FA938))(this);
	}
	template <typename R = void> R AddSetMagic(Il2CppString* newCaption, Il2CppString* newCountParamText, Il2CppArray<Item*>* newItems) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Item*>*))(Il2CppBase() + 0x12293D0))(this, newCaption, newCountParamText, newItems);
	}
	template <typename R = void> R ReplaceSetMagic(Il2CppString* newCaption, Il2CppString* newCountParamText, Il2CppArray<Item*>* newItems) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Item*>*))(Il2CppBase() + 0x1229514))(this, newCaption, newCountParamText, newItems);
	}
	template <typename R = void> R RemoveSetMagic() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1229658))(this);
	}
	template <typename R = SilenceComponent*> R get_silence() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1229664))(this);
	}
	template <typename R = bool> R get_hasSilence() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x12296EC))(this);
	}
	template <typename R = void> R AddSilence(bool newIgnoreImmune) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x12296F8))(this, newIgnoreImmune);
	}
	template <typename R = void> R ReplaceSilence(bool newIgnoreImmune) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1229800))(this, newIgnoreImmune);
	}
	template <typename R = void> R RemoveSilence() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1229908))(this);
	}
	template <typename R = bool> R get_isSilenceImmune() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1229914))(this);
	}
	template <typename R = void> R set_isSilenceImmune(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1229920))(this, value);
	}
	template <typename R = SkillDamageBonusComponent*> R get_skillDamageBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1229A38))(this);
	}
	template <typename R = bool> R get_hasSkillDamageBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1229AC0))(this);
	}
	template <typename R = void> R AddSkillDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1229ACC))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSkillDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1229BE0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSkillDamageBonus() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1229CF4))(this);
	}
	template <typename R = SneakBackstabComponent*> R get_sneakBackstab() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1229D00))(this);
	}
	template <typename R = bool> R get_hasSneakBackstab() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1229D88))(this);
	}
	template <typename R = void> R AddSneakBackstab(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1229D94))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSneakBackstab(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1229EA8))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSneakBackstab() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1229FBC))(this);
	}
	template <typename R = bool> R get_isSneak() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x1229FC8))(this);
	}
	template <typename R = void> R set_isSneak(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x1229FD4))(this, value);
	}
	template <typename R = bool> R get_isSneakDamageImmune() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122A0EC))(this);
	}
	template <typename R = void> R set_isSneakDamageImmune(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x122A0F8))(this, value);
	}
	template <typename R = SneakDamageResistanceComponent*> R get_sneakDamageResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122A210))(this);
	}
	template <typename R = bool> R get_hasSneakDamageResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122A298))(this);
	}
	template <typename R = void> R AddSneakDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122A2A4))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSneakDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122A3B8))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSneakDamageResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122A4CC))(this);
	}
	template <typename R = bool> R get_isSneakImmune() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122A4D8))(this);
	}
	template <typename R = void> R set_isSneakImmune(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x122A4E4))(this, value);
	}
	template <typename R = bool> R get_isSpeedDecImmune() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122A5FC))(this);
	}
	template <typename R = void> R set_isSpeedDecImmune(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x122A608))(this, value);
	}
	template <typename R = SpeedDecPercentComponent*> R get_speedDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122A720))(this);
	}
	template <typename R = bool> R get_hasSpeedDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122A7A8))(this);
	}
	template <typename R = void> R AddSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122A7B4))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122A8C8))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSpeedDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122A9DC))(this);
	}
	template <typename R = SpeedIncComponent*> R get_speedInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122A9E8))(this);
	}
	template <typename R = bool> R get_hasSpeedInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122AA70))(this);
	}
	template <typename R = void> R AddSpeedInc(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122AA7C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSpeedInc(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122AB90))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSpeedInc() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122ACA4))(this);
	}
	template <typename R = SpeedIncPercentComponent*> R get_speedIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122ACB0))(this);
	}
	template <typename R = bool> R get_hasSpeedIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122AD38))(this);
	}
	template <typename R = void> R AddSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122AD44))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122AE58))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSpeedIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122AF6C))(this);
	}
	template <typename R = SpeedMovingComponent*> R get_speedMoving() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122AF78))(this);
	}
	template <typename R = bool> R get_hasSpeedMoving() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122B000))(this);
	}
	template <typename R = void> R AddSpeedMoving(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122B00C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSpeedMoving(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122B120))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSpeedMoving() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122B234))(this);
	}
	template <typename R = SplashComponent*> R get_splash() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122B240))(this);
	}
	template <typename R = bool> R get_hasSplash() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FD214))(this);
	}
	template <typename R = void> R AddSplash(Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newSequence, Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<Item*>* newList, TargetsSelector* newSelector) {
		return ((R (*)(MagicDataEntity*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppString*, Il2CppArray<Item*>*, TargetsSelector*))(Il2CppBase() + 0x122B2C8))(this, newNames, newSequence, newActiveCondition, newName, newList, newSelector);
	}
	template <typename R = void> R ReplaceSplash(Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newSequence, Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<Item*>* newList, TargetsSelector* newSelector) {
		return ((R (*)(MagicDataEntity*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppString*, Il2CppArray<Item*>*, TargetsSelector*))(Il2CppBase() + 0x122B450))(this, newNames, newSequence, newActiveCondition, newName, newList, newSelector);
	}
	template <typename R = void> R RemoveSplash() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122B5D8))(this);
	}
	template <typename R = SplashResistanceComponent*> R get_splashResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122B5E4))(this);
	}
	template <typename R = bool> R get_hasSplashResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122B66C))(this);
	}
	template <typename R = void> R AddSplashResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122B678))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSplashResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122B78C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSplashResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122B8A0))(this);
	}
	template <typename R = bool> R get_isSprint() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122B8AC))(this);
	}
	template <typename R = void> R set_isSprint(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x122B8B8))(this, value);
	}
	template <typename R = StackMagicComponent*> R get_stackMagic() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FD220))(this);
	}
	template <typename R = bool> R get_hasStackMagic() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FA92C))(this);
	}
	template <typename R = void> R AddStackMagic(Il2CppString* newGroup, int32_t newMaxCount, int32_t newMaxUseCount, bool newDontResetDuration, float newMaxDuration, bool newByActor, Il2CppArray<MagicByStackItem*>* newMagicByStack) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, int32_t, int32_t, bool, float, bool, Il2CppArray<MagicByStackItem*>*))(Il2CppBase() + 0x122B9D0))(this, newGroup, newMaxCount, newMaxUseCount, newDontResetDuration, newMaxDuration, newByActor, newMagicByStack);
	}
	template <typename R = void> R ReplaceStackMagic(Il2CppString* newGroup, int32_t newMaxCount, int32_t newMaxUseCount, bool newDontResetDuration, float newMaxDuration, bool newByActor, Il2CppArray<MagicByStackItem*>* newMagicByStack) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, int32_t, int32_t, bool, float, bool, Il2CppArray<MagicByStackItem*>*))(Il2CppBase() + 0x122BB3C))(this, newGroup, newMaxCount, newMaxUseCount, newDontResetDuration, newMaxDuration, newByActor, newMagicByStack);
	}
	template <typename R = void> R RemoveStackMagic() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122BCA8))(this);
	}
	template <typename R = StartChanceComponent*> R get_startChance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122BCB4))(this);
	}
	template <typename R = bool> R get_hasStartChance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FD208))(this);
	}
	template <typename R = void> R AddStartChance(float newValue, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(MagicDataEntity*, float, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x122BD3C))(this, newValue, newName, newNames);
	}
	template <typename R = void> R ReplaceStartChance(float newValue, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(MagicDataEntity*, float, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x122BE74))(this, newValue, newName, newNames);
	}
	template <typename R = void> R RemoveStartChance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122BFAC))(this);
	}
	template <typename R = StartConditionComponent*> R get_startCondition() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122BFB8))(this);
	}
	template <typename R = bool> R get_hasStartCondition() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FB8DC))(this);
	}
	template <typename R = void> R AddStartCondition(Il2CppString* newSourceCondition, Il2CppString* newTargetCondition) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x122C040))(this, newSourceCondition, newTargetCondition);
	}
	template <typename R = void> R ReplaceStartCondition(Il2CppString* newSourceCondition, Il2CppString* newTargetCondition) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x122C168))(this, newSourceCondition, newTargetCondition);
	}
	template <typename R = void> R RemoveStartCondition() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122C290))(this);
	}
	template <typename R = StartCooldownComponent*> R get_startCooldown() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FB8F4))(this);
	}
	template <typename R = bool> R get_hasStartCooldown() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FB8E8))(this);
	}
	template <typename R = void> R AddStartCooldown(Il2CppString* newGroup, float newValue) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, float))(Il2CppBase() + 0x122C29C))(this, newGroup, newValue);
	}
	template <typename R = void> R ReplaceStartCooldown(Il2CppString* newGroup, float newValue) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, float))(Il2CppBase() + 0x122C3C0))(this, newGroup, newValue);
	}
	template <typename R = void> R RemoveStartCooldown() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122C4E4))(this);
	}
	template <typename R = StatusResistanceComponent*> R get_statusResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122C4F0))(this);
	}
	template <typename R = bool> R get_hasStatusResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122C578))(this);
	}
	template <typename R = void> R AddStatusResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122C584))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceStatusResistance(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122C698))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveStatusResistance() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122C7AC))(this);
	}
	template <typename R = StatusVulnerabilityComponent*> R get_statusVulnerability() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122C7B8))(this);
	}
	template <typename R = bool> R get_hasStatusVulnerability() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122C840))(this);
	}
	template <typename R = void> R AddStatusVulnerability(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122C84C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceStatusVulnerability(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122C960))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveStatusVulnerability() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122CA74))(this);
	}
	template <typename R = bool> R get_isStunImmune() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122CA80))(this);
	}
	template <typename R = void> R set_isStunImmune(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x122CA8C))(this, value);
	}
	template <typename R = StunnedComponent*> R get_stunned() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122CBA4))(this);
	}
	template <typename R = bool> R get_hasStunned() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122CC2C))(this);
	}
	template <typename R = void> R AddStunned(bool newStackable, bool newIgnoreImmune) {
		return ((R (*)(MagicDataEntity*, bool, bool))(Il2CppBase() + 0x122CC38))(this, newStackable, newIgnoreImmune);
	}
	template <typename R = void> R ReplaceStunned(bool newStackable, bool newIgnoreImmune) {
		return ((R (*)(MagicDataEntity*, bool, bool))(Il2CppBase() + 0x122CD4C))(this, newStackable, newIgnoreImmune);
	}
	template <typename R = void> R RemoveStunned() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122CE60))(this);
	}
	template <typename R = TagsComponent*> R get_tags() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FB988))(this);
	}
	template <typename R = bool> R get_hasTags() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FB97C))(this);
	}
	template <typename R = void> R AddTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(MagicDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x122CE6C))(this, newValues);
	}
	template <typename R = void> R ReplaceTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(MagicDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x122CF80))(this, newValues);
	}
	template <typename R = void> R RemoveTags() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122D094))(this);
	}
	template <typename R = TargetPositionComponent*> R get_targetPosition() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122D0A0))(this);
	}
	template <typename R = bool> R get_hasTargetPosition() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FBA10))(this);
	}
	template <typename R = void> R AddTargetPosition(float newX, float newY) {
		return ((R (*)(MagicDataEntity*, float, float))(Il2CppBase() + 0x122D128))(this, newX, newY);
	}
	template <typename R = void> R ReplaceTargetPosition(float newX, float newY) {
		return ((R (*)(MagicDataEntity*, float, float))(Il2CppBase() + 0x122D230))(this, newX, newY);
	}
	template <typename R = void> R RemoveTargetPosition() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122D338))(this);
	}
	template <typename R = TargetTagsComponent*> R get_targetTags() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122D344))(this);
	}
	template <typename R = bool> R get_hasTargetTags() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122D3CC))(this);
	}
	template <typename R = void> R AddTargetTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(MagicDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x122D3D8))(this, newValues);
	}
	template <typename R = void> R ReplaceTargetTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(MagicDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x122D4EC))(this, newValues);
	}
	template <typename R = void> R RemoveTargetTags() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122D600))(this);
	}
	template <typename R = TeamUnhiddenComponent*> R get_teamUnhidden() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122D60C))(this);
	}
	template <typename R = bool> R get_hasTeamUnhidden() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122D694))(this);
	}
	template <typename R = void> R AddTeamUnhidden(HashSet1int64_t>* newTeams) {
		return ((R (*)(MagicDataEntity*, HashSet1int64_t>*))(Il2CppBase() + 0x122D6A0))(this, newTeams);
	}
	template <typename R = void> R ReplaceTeamUnhidden(HashSet1int64_t>* newTeams) {
		return ((R (*)(MagicDataEntity*, HashSet1int64_t>*))(Il2CppBase() + 0x122D7B4))(this, newTeams);
	}
	template <typename R = void> R RemoveTeamUnhidden() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122D8C8))(this);
	}
	template <typename R = ThirstSpeedDecPercentComponent*> R get_thirstSpeedDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122D8D4))(this);
	}
	template <typename R = bool> R get_hasThirstSpeedDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122D95C))(this);
	}
	template <typename R = void> R AddThirstSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122D968))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceThirstSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122DA7C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveThirstSpeedDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122DB90))(this);
	}
	template <typename R = ThirstSpeedIncPercentComponent*> R get_thirstSpeedIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122DB9C))(this);
	}
	template <typename R = bool> R get_hasThirstSpeedIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122DC24))(this);
	}
	template <typename R = void> R AddThirstSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122DC30))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceThirstSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122DD44))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveThirstSpeedIncPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122DE58))(this);
	}
	template <typename R = TimeOutExitDecPercentComponent*> R get_timeOutExitDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122DE64))(this);
	}
	template <typename R = bool> R get_hasTimeOutExitDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122DEEC))(this);
	}
	template <typename R = void> R AddTimeOutExitDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122DEF8))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceTimeOutExitDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122E00C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveTimeOutExitDecPercent() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122E120))(this);
	}
	template <typename R = ToolTipComponent*> R get_toolTip() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122E12C))(this);
	}
	template <typename R = bool> R get_hasToolTip() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122E1B4))(this);
	}
	template <typename R = void> R AddToolTip(ToolTipValue* newValue) {
		return ((R (*)(MagicDataEntity*, ToolTipValue*))(Il2CppBase() + 0x122E1C0))(this, newValue);
	}
	template <typename R = void> R ReplaceToolTip(ToolTipValue* newValue) {
		return ((R (*)(MagicDataEntity*, ToolTipValue*))(Il2CppBase() + 0x122E2D4))(this, newValue);
	}
	template <typename R = void> R RemoveToolTip() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122E3E8))(this);
	}
	template <typename R = TotComponent*> R get_tot() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122E3F4))(this);
	}
	template <typename R = bool> R get_hasTot() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122E47C))(this);
	}
	template <typename R = void> R AddTot(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122E488))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceTot(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122E59C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveTot() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122E6B0))(this);
	}
	template <typename R = TransferMagicComponent*> R get_transferMagic() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122E6BC))(this);
	}
	template <typename R = bool> R get_hasTransferMagic() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122E744))(this);
	}
	template <typename R = void> R AddTransferMagic(Il2CppString* newTargetCondition, MagicCondition* newMagicCondition, bool newResetDuration) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, MagicCondition*, bool))(Il2CppBase() + 0x122E750))(this, newTargetCondition, newMagicCondition, newResetDuration);
	}
	template <typename R = void> R ReplaceTransferMagic(Il2CppString* newTargetCondition, MagicCondition* newMagicCondition, bool newResetDuration) {
		return ((R (*)(MagicDataEntity*, Il2CppString*, MagicCondition*, bool))(Il2CppBase() + 0x122E88C))(this, newTargetCondition, newMagicCondition, newResetDuration);
	}
	template <typename R = void> R RemoveTransferMagic() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122E9C8))(this);
	}
	template <typename R = bool> R get_isTriggerTarget() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122E9D4))(this);
	}
	template <typename R = void> R set_isTriggerTarget(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x120D540))(this, value);
	}
	template <typename R = bool> R get_isTrueVision() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122E9E0))(this);
	}
	template <typename R = void> R set_isTrueVision(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x122E9EC))(this, value);
	}
	template <typename R = bool> R get_isUnhidden() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122EB04))(this);
	}
	template <typename R = void> R set_isUnhidden(bool value) {
		return ((R (*)(MagicDataEntity*, bool))(Il2CppBase() + 0x122EB10))(this, value);
	}
	template <typename R = UseCountComponent*> R get_useCount() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122EC28))(this);
	}
	template <typename R = bool> R get_hasUseCount() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122ECB0))(this);
	}
	template <typename R = void> R AddUseCount(int32_t newValue) {
		return ((R (*)(MagicDataEntity*, int32_t))(Il2CppBase() + 0x122ECBC))(this, newValue);
	}
	template <typename R = void> R ReplaceUseCount(int32_t newValue) {
		return ((R (*)(MagicDataEntity*, int32_t))(Il2CppBase() + 0x122EDC0))(this, newValue);
	}
	template <typename R = void> R RemoveUseCount() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122EEC4))(this);
	}
	template <typename R = VipMagicComponent*> R get_vipMagic() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122EED0))(this);
	}
	template <typename R = bool> R get_hasVipMagic() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122EF58))(this);
	}
	template <typename R = void> R AddVipMagic(VipBonusType* newType) {
		return ((R (*)(MagicDataEntity*, VipBonusType*))(Il2CppBase() + 0x122EF64))(this, newType);
	}
	template <typename R = void> R ReplaceVipMagic(VipBonusType* newType) {
		return ((R (*)(MagicDataEntity*, VipBonusType*))(Il2CppBase() + 0x122F068))(this, newType);
	}
	template <typename R = void> R RemoveVipMagic() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122F16C))(this);
	}
	template <typename R = WeaponDotComponent*> R get_weaponDot() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC5C0))(this);
	}
	template <typename R = bool> R get_hasWeaponDot() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x11FC010))(this);
	}
	template <typename R = void> R AddWeaponDot(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122F178))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceWeaponDot(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(MagicDataEntity*, float, ModifierGroup*))(Il2CppBase() + 0x122F28C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveWeaponDot() {
		return ((R (*)(MagicDataEntity*))(Il2CppBase() + 0x122F3A0))(this);
	}

};

