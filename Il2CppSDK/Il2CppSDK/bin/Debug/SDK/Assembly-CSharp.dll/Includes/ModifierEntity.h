#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModifierEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModifierEntity"));
	}

	template <typename T = int32_t> T& ComponentsCount() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = BurnedComponent*> static T& burnedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = CursedComponent*> static T& cursedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = DamageImmuneComponent*> static T& damageImmuneComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = DebuffImmuneComponent*> static T& debuffImmuneComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = DisarmingFeetComponent*> static T& disarmingFeetComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = DisarmingWeaponComponent*> static T& disarmingWeaponComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = DualWeaponComponent*> static T& dualWeaponComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = FallenComponent*> static T& fallenComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = FrozenComponent*> static T& frozenComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = GhostComponent*> static T& ghostComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = HealingComponent*> static T& healingComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = HiddenComponent*> static T& hiddenComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = ImmortalComponent*> static T& immortalComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = ImpotentImmuneComponent*> static T& impotentImmuneComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = InPvPComponent*> static T& inPvPComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = InstabilityComponent*> static T& instabilityComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = InvisibleComponent*> static T& invisibleComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = KnockdownComponent*> static T& knockdownComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = LostControlComponent*> static T& lostControlComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = LostControlImmuneComponent*> static T& lostControlImmuneComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = MinimapHiddenComponent*> static T& minimapHiddenComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = NakedComponent*> static T& nakedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = PatrollingComponent*> static T& patrollingComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = PermanentMovingComponent*> static T& permanentMovingComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = PoisonedComponent*> static T& poisonedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = RidingComponent*> static T& ridingComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = RootImmuneComponent*> static T& rootImmuneComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = RunesDisabledComponent*> static T& runesDisabledComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = SilenceImmuneComponent*> static T& silenceImmuneComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = SneakComponent*> static T& sneakComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = SneakDamageImmuneComponent*> static T& sneakDamageImmuneComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = SneakImmuneComponent*> static T& sneakImmuneComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = SpeedDecImmuneComponent*> static T& speedDecImmuneComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = SprintComponent*> static T& sprintComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = StunImmuneComponent*> static T& stunImmuneComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = TrueVisionComponent*> static T& trueVisionComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = UnhiddenComponent*> static T& unhiddenComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = UpdateMagicIconComponent*> static T& updateMagicIconComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}

	template <typename T = int32_t> T get_ComponentsCount() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7BB30))(this);
	}
	template <typename T = void> T set_ComponentsCount(int32_t value) {
		return ((T (*)(ModifierEntity*, int32_t))(Il2CppBase() + 0x1D7BB38))(this, value);
	}
	template <typename T = ArmingFeetComponent*> T get_armingFeet() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7BB40))(this);
	}
	template <typename T = bool> T get_hasArmingFeet() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7BBC8))(this);
	}
	template <typename T = void> T AddArmingFeet(Il2CppString* newName) {
		return ((T (*)(ModifierEntity*, Il2CppString*))(Il2CppBase() + 0x1D7BBD4))(this, newName);
	}
	template <typename T = void> T ReplaceArmingFeet(Il2CppString* newName) {
		return ((T (*)(ModifierEntity*, Il2CppString*))(Il2CppBase() + 0x1D7BCE8))(this, newName);
	}
	template <typename T = void> T RemoveArmingFeet() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7BDFC))(this);
	}
	template <typename T = ArmingWeaponComponent*> T get_armingWeapon() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7BE08))(this);
	}
	template <typename T = bool> T get_hasArmingWeapon() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7BE90))(this);
	}
	template <typename T = void> T AddArmingWeapon(Il2CppString* newName) {
		return ((T (*)(ModifierEntity*, Il2CppString*))(Il2CppBase() + 0x1D7BE9C))(this, newName);
	}
	template <typename T = void> T ReplaceArmingWeapon(Il2CppString* newName) {
		return ((T (*)(ModifierEntity*, Il2CppString*))(Il2CppBase() + 0x1D7BFB0))(this, newName);
	}
	template <typename T = void> T RemoveArmingWeapon() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7C0C4))(this);
	}
	template <typename T = ArmorDecComponent*> T get_armorDec() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7C0D0))(this);
	}
	template <typename T = bool> T get_hasArmorDec() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7C158))(this);
	}
	template <typename T = void> T AddArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7C164))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7C278))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveArmorDec() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7C38C))(this);
	}
	template <typename T = ArmorDecPercentComponent*> T get_armorDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7C398))(this);
	}
	template <typename T = bool> T get_hasArmorDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7C420))(this);
	}
	template <typename T = void> T AddArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7C42C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7C540))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveArmorDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7C654))(this);
	}
	template <typename T = ArmorIncComponent*> T get_armorInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7C660))(this);
	}
	template <typename T = bool> T get_hasArmorInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7C6E8))(this);
	}
	template <typename T = void> T AddArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7C6F4))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7C808))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveArmorInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7C91C))(this);
	}
	template <typename T = ArmorIncPercentComponent*> T get_armorIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7C928))(this);
	}
	template <typename T = bool> T get_hasArmorIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7C9B0))(this);
	}
	template <typename T = void> T AddArmorIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7C9BC))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceArmorIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7CAD0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveArmorIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7CBE4))(this);
	}
	template <typename T = AttackPriorityComponent*> T get_attackPriority() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7CBF0))(this);
	}
	template <typename T = bool> T get_hasAttackPriority() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7CC78))(this);
	}
	template <typename T = void> T AddAttackPriority(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7CC84))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceAttackPriority(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7CD98))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveAttackPriority() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7CEAC))(this);
	}
	template <typename T = AttackRadiusIncPercentComponent*> T get_attackRadiusIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7CEB8))(this);
	}
	template <typename T = bool> T get_hasAttackRadiusIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7CF40))(this);
	}
	template <typename T = void> T AddAttackRadiusIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7CF4C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceAttackRadiusIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7D060))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveAttackRadiusIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7D174))(this);
	}
	template <typename T = AttackSpeedDecPercentComponent*> T get_attackSpeedDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7D180))(this);
	}
	template <typename T = bool> T get_hasAttackSpeedDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7D208))(this);
	}
	template <typename T = void> T AddAttackSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7D214))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceAttackSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7D328))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveAttackSpeedDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7D43C))(this);
	}
	template <typename T = AttackSpeedIncPercentComponent*> T get_attackSpeedIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7D448))(this);
	}
	template <typename T = bool> T get_hasAttackSpeedIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7D4D0))(this);
	}
	template <typename T = void> T AddAttackSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7D4DC))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceAttackSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7D5F0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveAttackSpeedIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7D704))(this);
	}
	template <typename T = BackstabDamageBonusComponent*> T get_backstabDamageBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7D710))(this);
	}
	template <typename T = bool> T get_hasBackstabDamageBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7D798))(this);
	}
	template <typename T = void> T AddBackstabDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7D7A4))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceBackstabDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7D8B8))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveBackstabDamageBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7D9CC))(this);
	}
	template <typename T = BackstabResistanceComponent*> T get_backstabResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7D9D8))(this);
	}
	template <typename T = bool> T get_hasBackstabResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7DA60))(this);
	}
	template <typename T = void> T AddBackstabResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7DA6C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceBackstabResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7DB80))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveBackstabResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7DC94))(this);
	}
	template <typename T = BowResistanceComponent*> T get_bowResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7DCA0))(this);
	}
	template <typename T = bool> T get_hasBowResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7DD28))(this);
	}
	template <typename T = void> T AddBowResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7DD34))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceBowResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7DE48))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveBowResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7DF5C))(this);
	}
	template <typename T = bool> T get_isBurned() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7DF68))(this);
	}
	template <typename T = void> T set_isBurned(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D7DF74))(this, value);
	}
	template <typename T = ChangeChancesComponent*> T get_changeChances() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7E08C))(this);
	}
	template <typename T = bool> T get_hasChangeChances() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7E114))(this);
	}
	template <typename T = void> T AddChangeChances(Il2CppDictionary<Il2CppString*, Item*>* newData) {
		return ((T (*)(ModifierEntity*, Il2CppDictionary<Il2CppString*, Item*>*))(Il2CppBase() + 0x1D7E120))(this, newData);
	}
	template <typename T = void> T ReplaceChangeChances(Il2CppDictionary<Il2CppString*, Item*>* newData) {
		return ((T (*)(ModifierEntity*, Il2CppDictionary<Il2CppString*, Item*>*))(Il2CppBase() + 0x1D7E234))(this, newData);
	}
	template <typename T = void> T RemoveChangeChances() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7E348))(this);
	}
	template <typename T = ClassCooldownReduceComponent*> T get_classCooldownReduce() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7E354))(this);
	}
	template <typename T = bool> T get_hasClassCooldownReduce() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7E3DC))(this);
	}
	template <typename T = void> T AddClassCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7E3E8))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceClassCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7E4FC))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveClassCooldownReduce() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7E610))(this);
	}
	template <typename T = CreepDamageBonusComponent*> T get_creepDamageBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7E61C))(this);
	}
	template <typename T = bool> T get_hasCreepDamageBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7E6A4))(this);
	}
	template <typename T = void> T AddCreepDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7E6B0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceCreepDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7E7C4))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveCreepDamageBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7E8D8))(this);
	}
	template <typename T = CreepResistanceComponent*> T get_creepResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7E8E4))(this);
	}
	template <typename T = bool> T get_hasCreepResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7E96C))(this);
	}
	template <typename T = void> T AddCreepResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7E978))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceCreepResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7EA8C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveCreepResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7EBA0))(this);
	}
	template <typename T = bool> T get_isCursed() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7EBAC))(this);
	}
	template <typename T = void> T set_isCursed(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D7EBB8))(this, value);
	}
	template <typename T = DamageBlockComponent*> T get_damageBlock() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7ECD0))(this);
	}
	template <typename T = bool> T get_hasDamageBlock() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7ED58))(this);
	}
	template <typename T = void> T AddDamageBlock(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7ED64))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageBlock(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7EE78))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageBlock() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7EF8C))(this);
	}
	template <typename T = DamageBlockIncPercentComponent*> T get_damageBlockIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7EF98))(this);
	}
	template <typename T = bool> T get_hasDamageBlockIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7F020))(this);
	}
	template <typename T = void> T AddDamageBlockIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7F02C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageBlockIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7F140))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageBlockIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7F254))(this);
	}
	template <typename T = DamageBonusForMissingHealthComponent*> T get_damageBonusForMissingHealth() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7F260))(this);
	}
	template <typename T = bool> T get_hasDamageBonusForMissingHealth() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7F2E8))(this);
	}
	template <typename T = void> T AddDamageBonusForMissingHealth(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7F2F4))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageBonusForMissingHealth(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7F408))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageBonusForMissingHealth() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7F51C))(this);
	}
	template <typename T = DamageDecComponent*> T get_damageDec() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7F528))(this);
	}
	template <typename T = bool> T get_hasDamageDec() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7F5B0))(this);
	}
	template <typename T = void> T AddDamageDec(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7F5BC))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageDec(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7F6D0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageDec() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7F7E4))(this);
	}
	template <typename T = DamageDecPercentComponent*> T get_damageDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7F7F0))(this);
	}
	template <typename T = bool> T get_hasDamageDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7F878))(this);
	}
	template <typename T = void> T AddDamageDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7F884))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7F998))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7FAAC))(this);
	}
	template <typename T = bool> T get_isDamageImmune() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7FAB8))(this);
	}
	template <typename T = void> T set_isDamageImmune(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D7FAC4))(this, value);
	}
	template <typename T = DamageIncComponent*> T get_damageInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7FBDC))(this);
	}
	template <typename T = bool> T get_hasDamageInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7FC64))(this);
	}
	template <typename T = void> T AddDamageInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7FC70))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7FD84))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7FE98))(this);
	}
	template <typename T = DamageIncPercentComponent*> T get_damageIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7FEA4))(this);
	}
	template <typename T = bool> T get_hasDamageIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D7FF2C))(this);
	}
	template <typename T = void> T AddDamageIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D7FF38))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8004C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D80160))(this);
	}
	template <typename T = DamageReflectComponent*> T get_damageReflect() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8016C))(this);
	}
	template <typename T = bool> T get_hasDamageReflect() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D801F4))(this);
	}
	template <typename T = void> T AddDamageReflect(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D80200))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageReflect(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D80314))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageReflect() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D80428))(this);
	}
	template <typename T = DamageResistanceComponent*> T get_damageResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D80434))(this);
	}
	template <typename T = bool> T get_hasDamageResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D804BC))(this);
	}
	template <typename T = void> T AddDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D804C8))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D805DC))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D806F0))(this);
	}
	template <typename T = DamageShieldComponent*> T get_damageShield() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D806FC))(this);
	}
	template <typename T = bool> T get_hasDamageShield() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D80784))(this);
	}
	template <typename T = void> T AddDamageShield(DamageShieldDepends* newDepends, float newValue) {
		return ((T (*)(ModifierEntity*, DamageShieldDepends*, float))(Il2CppBase() + 0x1D80790))(this, newDepends, newValue);
	}
	template <typename T = void> T ReplaceDamageShield(DamageShieldDepends* newDepends, float newValue) {
		return ((T (*)(ModifierEntity*, DamageShieldDepends*, float))(Il2CppBase() + 0x1D808A4))(this, newDepends, newValue);
	}
	template <typename T = void> T RemoveDamageShield() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D809B8))(this);
	}
	template <typename T = DamageVulnerabilityComponent*> T get_damageVulnerability() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D809C4))(this);
	}
	template <typename T = bool> T get_hasDamageVulnerability() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D80A4C))(this);
	}
	template <typename T = void> T AddDamageVulnerability(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D80A58))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageVulnerability(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D80B6C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageVulnerability() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D80C80))(this);
	}
	template <typename T = bool> T get_isDebuffImmune() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D80C8C))(this);
	}
	template <typename T = void> T set_isDebuffImmune(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D80C98))(this, value);
	}
	template <typename T = bool> T get_isDisarmingFeet() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D80DB0))(this);
	}
	template <typename T = void> T set_isDisarmingFeet(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D80DBC))(this, value);
	}
	template <typename T = bool> T get_isDisarmingWeapon() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D80ED4))(this);
	}
	template <typename T = void> T set_isDisarmingWeapon(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D80EE0))(this, value);
	}
	template <typename T = DotComponent*> T get_dot() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D80FF8))(this);
	}
	template <typename T = bool> T get_hasDot() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D81080))(this);
	}
	template <typename T = void> T AddDot(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8108C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDot(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D811A0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDot() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D812B4))(this);
	}
	template <typename T = DotResistanceComponent*> T get_dotResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D812C0))(this);
	}
	template <typename T = bool> T get_hasDotResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D81348))(this);
	}
	template <typename T = void> T AddDotResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D81354))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDotResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D81468))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDotResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8157C))(this);
	}
	template <typename T = bool> T get_isDualWeapon() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D81588))(this);
	}
	template <typename T = void> T set_isDualWeapon(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D81594))(this, value);
	}
	template <typename T = EquipTagsSetComponent*> T get_equipTagsSet() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D816AC))(this);
	}
	template <typename T = bool> T get_hasEquipTagsSet() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D81734))(this);
	}
	template <typename T = void> T AddEquipTagsSet(HashSet1Il2CppString*>* newValues) {
		return ((T (*)(ModifierEntity*, HashSet1Il2CppString*>*))(Il2CppBase() + 0x1D81740))(this, newValues);
	}
	template <typename T = void> T ReplaceEquipTagsSet(HashSet1Il2CppString*>* newValues) {
		return ((T (*)(ModifierEntity*, HashSet1Il2CppString*>*))(Il2CppBase() + 0x1D81854))(this, newValues);
	}
	template <typename T = void> T RemoveEquipTagsSet() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D81968))(this);
	}
	template <typename T = ExpGainIncPercentComponent*> T get_expGainIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D81974))(this);
	}
	template <typename T = bool> T get_hasExpGainIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D819FC))(this);
	}
	template <typename T = void> T AddExpGainIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D81A08))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceExpGainIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D81B1C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveExpGainIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D81C30))(this);
	}
	template <typename T = ExplodeTargetsComponent*> T get_explodeTargets() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D81C3C))(this);
	}
	template <typename T = bool> T get_hasExplodeTargets() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D81CC4))(this);
	}
	template <typename T = void> T AddExplodeTargets(HashSet1int32_t>* newValues) {
		return ((T (*)(ModifierEntity*, HashSet1int32_t>*))(Il2CppBase() + 0x1D81CD0))(this, newValues);
	}
	template <typename T = void> T ReplaceExplodeTargets(HashSet1int32_t>* newValues) {
		return ((T (*)(ModifierEntity*, HashSet1int32_t>*))(Il2CppBase() + 0x1D81DE4))(this, newValues);
	}
	template <typename T = void> T RemoveExplodeTargets() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D81EF8))(this);
	}
	template <typename T = bool> T get_isFallen() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D81F04))(this);
	}
	template <typename T = void> T set_isFallen(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D81F10))(this, value);
	}
	template <typename T = bool> T get_isFrozen() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D82028))(this);
	}
	template <typename T = void> T set_isFrozen(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D82034))(this, value);
	}
	template <typename T = GadgetCooldownReduceComponent*> T get_gadgetCooldownReduce() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8214C))(this);
	}
	template <typename T = bool> T get_hasGadgetCooldownReduce() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D821D4))(this);
	}
	template <typename T = void> T AddGadgetCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D821E0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceGadgetCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D822F4))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveGadgetCooldownReduce() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D82408))(this);
	}
	template <typename T = GenderComponent*> T get_gender() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D82414))(this);
	}
	template <typename T = bool> T get_hasGender() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8249C))(this);
	}
	template <typename T = void> T AddGender(Gender* newType) {
		return ((T (*)(ModifierEntity*, Gender*))(Il2CppBase() + 0x1D824A8))(this, newType);
	}
	template <typename T = void> T ReplaceGender(Gender* newType) {
		return ((T (*)(ModifierEntity*, Gender*))(Il2CppBase() + 0x1D825AC))(this, newType);
	}
	template <typename T = void> T RemoveGender() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D826B0))(this);
	}
	template <typename T = bool> T get_isGhost() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D826BC))(this);
	}
	template <typename T = void> T set_isGhost(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D826C8))(this, value);
	}
	template <typename T = GuildBossDamageBonusComponent*> T get_guildBossDamageBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D827E0))(this);
	}
	template <typename T = bool> T get_hasGuildBossDamageBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D82868))(this);
	}
	template <typename T = void> T AddGuildBossDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D82874))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceGuildBossDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D82988))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveGuildBossDamageBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D82A9C))(this);
	}
	template <typename T = bool> T get_isHealing() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D82AA8))(this);
	}
	template <typename T = void> T set_isHealing(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D82AB4))(this, value);
	}
	template <typename T = HealingSkillCooldownReduceComponent*> T get_healingSkillCooldownReduce() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D82BCC))(this);
	}
	template <typename T = bool> T get_hasHealingSkillCooldownReduce() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D82C54))(this);
	}
	template <typename T = void> T AddHealingSkillCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D82C60))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHealingSkillCooldownReduce(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D82D74))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHealingSkillCooldownReduce() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D82E88))(this);
	}
	template <typename T = HeavyArmorDecComponent*> T get_heavyArmorDec() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D82E94))(this);
	}
	template <typename T = bool> T get_hasHeavyArmorDec() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D82F1C))(this);
	}
	template <typename T = void> T AddHeavyArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D82F28))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHeavyArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8303C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHeavyArmorDec() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D83150))(this);
	}
	template <typename T = HeavyArmorDecPercentComponent*> T get_heavyArmorDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8315C))(this);
	}
	template <typename T = bool> T get_hasHeavyArmorDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D831E4))(this);
	}
	template <typename T = void> T AddHeavyArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D831F0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHeavyArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D83304))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHeavyArmorDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D83418))(this);
	}
	template <typename T = HeavyArmorIncComponent*> T get_heavyArmorInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D83424))(this);
	}
	template <typename T = bool> T get_hasHeavyArmorInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D834AC))(this);
	}
	template <typename T = void> T AddHeavyArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D834B8))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHeavyArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D835CC))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHeavyArmorInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D836E0))(this);
	}
	template <typename T = HeavyArmorIncPercentComponent*> T get_heavyArmorIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D836EC))(this);
	}
	template <typename T = bool> T get_hasHeavyArmorIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D83774))(this);
	}
	template <typename T = void> T AddHeavyArmorIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D83780))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHeavyArmorIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D83894))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHeavyArmorIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D839A8))(this);
	}
	template <typename T = bool> T get_isHidden() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D839B4))(this);
	}
	template <typename T = void> T set_isHidden(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D839C0))(this, value);
	}
	template <typename T = HotComponent*> T get_hot() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D83AD8))(this);
	}
	template <typename T = bool> T get_hasHot() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D83B60))(this);
	}
	template <typename T = void> T AddHot(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D83B6C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHot(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D83C80))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHot() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D83D94))(this);
	}
	template <typename T = HotPredictionComponent*> T get_hotPrediction() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D83DA0))(this);
	}
	template <typename T = bool> T get_hasHotPrediction() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D83E28))(this);
	}
	template <typename T = void> T AddHotPrediction(float newValue) {
		return ((T (*)(ModifierEntity*, float))(Il2CppBase() + 0x1D83E34))(this, newValue);
	}
	template <typename T = void> T ReplaceHotPrediction(float newValue) {
		return ((T (*)(ModifierEntity*, float))(Il2CppBase() + 0x1D83F38))(this, newValue);
	}
	template <typename T = void> T RemoveHotPrediction() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8403C))(this);
	}
	template <typename T = HungerSpeedDecPercentComponent*> T get_hungerSpeedDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D84048))(this);
	}
	template <typename T = bool> T get_hasHungerSpeedDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D840D0))(this);
	}
	template <typename T = void> T AddHungerSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D840DC))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHungerSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D841F0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHungerSpeedDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D84304))(this);
	}
	template <typename T = HungerSpeedIncPercentComponent*> T get_hungerSpeedIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D84310))(this);
	}
	template <typename T = bool> T get_hasHungerSpeedIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D84398))(this);
	}
	template <typename T = void> T AddHungerSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D843A4))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHungerSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D844B8))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHungerSpeedIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D845CC))(this);
	}
	template <typename T = IcelandResistanceComponent*> T get_icelandResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D845D8))(this);
	}
	template <typename T = bool> T get_hasIcelandResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D84660))(this);
	}
	template <typename T = void> T AddIcelandResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8466C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceIcelandResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D84780))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveIcelandResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D84894))(this);
	}
	template <typename T = IdComponent*> T get_id() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D848A0))(this);
	}
	template <typename T = bool> T get_hasId() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D84928))(this);
	}
	template <typename T = void> T AddId(int32_t newValue) {
		return ((T (*)(ModifierEntity*, int32_t))(Il2CppBase() + 0x1D84934))(this, newValue);
	}
	template <typename T = void> T ReplaceId(int32_t newValue) {
		return ((T (*)(ModifierEntity*, int32_t))(Il2CppBase() + 0x1D84A38))(this, newValue);
	}
	template <typename T = void> T RemoveId() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D84B3C))(this);
	}
	template <typename T = IgnoreArmorPercentComponent*> T get_ignoreArmorPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D84B48))(this);
	}
	template <typename T = bool> T get_hasIgnoreArmorPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D84BD0))(this);
	}
	template <typename T = void> T AddIgnoreArmorPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D84BDC))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceIgnoreArmorPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D84CF0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveIgnoreArmorPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D84E04))(this);
	}
	template <typename T = ImmobilizedDamageBonusComponent*> T get_immobilizedDamageBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D84E10))(this);
	}
	template <typename T = bool> T get_hasImmobilizedDamageBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D84E98))(this);
	}
	template <typename T = void> T AddImmobilizedDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D84EA4))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceImmobilizedDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D84FB8))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveImmobilizedDamageBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D850CC))(this);
	}
	template <typename T = bool> T get_isImmortal() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D850D8))(this);
	}
	template <typename T = void> T set_isImmortal(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D850E4))(this, value);
	}
	template <typename T = ImmunityCacheComponent*> T get_immunityCache() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D851FC))(this);
	}
	template <typename T = bool> T get_hasImmunityCache() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D85284))(this);
	}
	template <typename T = void> T AddImmunityCache(HashSet1Il2CppString*>* newTags, HashSet1Il2CppString*>* newNames) {
		return ((T (*)(ModifierEntity*, HashSet1Il2CppString*>*, HashSet1Il2CppString*>*))(Il2CppBase() + 0x1D85290))(this, newTags, newNames);
	}
	template <typename T = void> T ReplaceImmunityCache(HashSet1Il2CppString*>* newTags, HashSet1Il2CppString*>* newNames) {
		return ((T (*)(ModifierEntity*, HashSet1Il2CppString*>*, HashSet1Il2CppString*>*))(Il2CppBase() + 0x1D853B8))(this, newTags, newNames);
	}
	template <typename T = void> T RemoveImmunityCache() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D854E0))(this);
	}
	template <typename T = ImpotentComponent*> T get_impotent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D854EC))(this);
	}
	template <typename T = bool> T get_hasImpotent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D85574))(this);
	}
	template <typename T = void> T AddImpotent(bool newIgnoreImmune) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D85580))(this, newIgnoreImmune);
	}
	template <typename T = void> T ReplaceImpotent(bool newIgnoreImmune) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D85688))(this, newIgnoreImmune);
	}
	template <typename T = void> T RemoveImpotent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D85790))(this);
	}
	template <typename T = bool> T get_isImpotentImmune() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8579C))(this);
	}
	template <typename T = void> T set_isImpotentImmune(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D857A8))(this, value);
	}
	template <typename T = bool> T get_isInPvP() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D858C0))(this);
	}
	template <typename T = void> T set_isInPvP(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D858CC))(this, value);
	}
	template <typename T = IncomingHealBonusComponent*> T get_incomingHealBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D859E4))(this);
	}
	template <typename T = bool> T get_hasIncomingHealBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D85A6C))(this);
	}
	template <typename T = void> T AddIncomingHealBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D85A78))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceIncomingHealBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D85B8C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveIncomingHealBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D85CA0))(this);
	}
	template <typename T = IncomingHealReductionComponent*> T get_incomingHealReduction() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D85CAC))(this);
	}
	template <typename T = bool> T get_hasIncomingHealReduction() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D85D34))(this);
	}
	template <typename T = void> T AddIncomingHealReduction(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D85D40))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceIncomingHealReduction(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D85E54))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveIncomingHealReduction() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D85F68))(this);
	}
	template <typename T = bool> T get_isInstability() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D85F74))(this);
	}
	template <typename T = void> T set_isInstability(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D85F80))(this, value);
	}
	template <typename T = InteractCollisionComponent*> T get_interactCollision() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D86098))(this);
	}
	template <typename T = bool> T get_hasInteractCollision() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D86120))(this);
	}
	template <typename T = void> T AddInteractCollision(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8612C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceInteractCollision(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D86240))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveInteractCollision() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D86354))(this);
	}
	template <typename T = bool> T get_isInvisible() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D86360))(this);
	}
	template <typename T = void> T set_isInvisible(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8636C))(this, value);
	}
	template <typename T = bool> T get_isKnockdown() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D86484))(this);
	}
	template <typename T = void> T set_isKnockdown(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D86490))(this, value);
	}
	template <typename T = LifeStealComponent*> T get_lifeSteal() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D865A8))(this);
	}
	template <typename T = bool> T get_hasLifeSteal() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D86630))(this);
	}
	template <typename T = void> T AddLifeSteal(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8663C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceLifeSteal(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D86750))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveLifeSteal() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D86864))(this);
	}
	template <typename T = LightArmorDecComponent*> T get_lightArmorDec() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D86870))(this);
	}
	template <typename T = bool> T get_hasLightArmorDec() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D868F8))(this);
	}
	template <typename T = void> T AddLightArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D86904))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceLightArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D86A18))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveLightArmorDec() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D86B2C))(this);
	}
	template <typename T = LightArmorDecPercentComponent*> T get_lightArmorDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D86B38))(this);
	}
	template <typename T = bool> T get_hasLightArmorDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D86BC0))(this);
	}
	template <typename T = void> T AddLightArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D86BCC))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceLightArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D86CE0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveLightArmorDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D86DF4))(this);
	}
	template <typename T = LightArmorIncComponent*> T get_lightArmorInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D86E00))(this);
	}
	template <typename T = bool> T get_hasLightArmorInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D86E88))(this);
	}
	template <typename T = void> T AddLightArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D86E94))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceLightArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D86FA8))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveLightArmorInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D870BC))(this);
	}
	template <typename T = LightArmorIncPercentComponent*> T get_lightArmorIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D870C8))(this);
	}
	template <typename T = bool> T get_hasLightArmorIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D87150))(this);
	}
	template <typename T = void> T AddLightArmorIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8715C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceLightArmorIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D87270))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveLightArmorIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D87384))(this);
	}
	template <typename T = bool> T get_isLostControl() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D87390))(this);
	}
	template <typename T = void> T set_isLostControl(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8739C))(this, value);
	}
	template <typename T = bool> T get_isLostControlImmune() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D874B4))(this);
	}
	template <typename T = void> T set_isLostControlImmune(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D874C0))(this, value);
	}
	template <typename T = MagicTriggerTypeComponent*> T get_magicTriggerType() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D875D8))(this);
	}
	template <typename T = bool> T get_hasMagicTriggerType() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D87660))(this);
	}
	template <typename T = void> T AddMagicTriggerType(MagicTriggerType* newValue) {
		return ((T (*)(ModifierEntity*, MagicTriggerType*))(Il2CppBase() + 0x1D8766C))(this, newValue);
	}
	template <typename T = void> T ReplaceMagicTriggerType(MagicTriggerType* newValue) {
		return ((T (*)(ModifierEntity*, MagicTriggerType*))(Il2CppBase() + 0x1D87770))(this, newValue);
	}
	template <typename T = void> T RemoveMagicTriggerType() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D87874))(this);
	}
	template <typename T = MapSpeedIncPercentComponent*> T get_mapSpeedIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D87880))(this);
	}
	template <typename T = bool> T get_hasMapSpeedIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D87908))(this);
	}
	template <typename T = void> T AddMapSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D87914))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMapSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D87A28))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMapSpeedIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D87B3C))(this);
	}
	template <typename T = MasteryPointsBonusComponent*> T get_masteryPointsBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D87B48))(this);
	}
	template <typename T = bool> T get_hasMasteryPointsBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D87BD0))(this);
	}
	template <typename T = void> T AddMasteryPointsBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D87BDC))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMasteryPointsBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D87CF0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMasteryPointsBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D87E04))(this);
	}
	template <typename T = MaxDamageReflectComponent*> T get_maxDamageReflect() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D87E10))(this);
	}
	template <typename T = bool> T get_hasMaxDamageReflect() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D87E98))(this);
	}
	template <typename T = void> T AddMaxDamageReflect(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D87EA4))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxDamageReflect(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D87FB8))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxDamageReflect() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D880CC))(this);
	}
	template <typename T = MaxHealthDecPercentComponent*> T get_maxHealthDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D880D8))(this);
	}
	template <typename T = bool> T get_hasMaxHealthDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D88160))(this);
	}
	template <typename T = void> T AddMaxHealthDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8816C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxHealthDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D88280))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxHealthDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D88394))(this);
	}
	template <typename T = MaxHealthIncComponent*> T get_maxHealthInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D883A0))(this);
	}
	template <typename T = bool> T get_hasMaxHealthInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D88428))(this);
	}
	template <typename T = void> T AddMaxHealthInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D88434))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxHealthInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D88548))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxHealthInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8865C))(this);
	}
	template <typename T = MaxHealthIncPercentComponent*> T get_maxHealthIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D88668))(this);
	}
	template <typename T = bool> T get_hasMaxHealthIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D886F0))(this);
	}
	template <typename T = void> T AddMaxHealthIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D886FC))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxHealthIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D88810))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxHealthIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D88924))(this);
	}
	template <typename T = MaxIncomingDamageComponent*> T get_maxIncomingDamage() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D88930))(this);
	}
	template <typename T = bool> T get_hasMaxIncomingDamage() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D889B8))(this);
	}
	template <typename T = void> T AddMaxIncomingDamage(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D889C4))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxIncomingDamage(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D88AD8))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxIncomingDamage() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D88BEC))(this);
	}
	template <typename T = MaxTenacityComponent*> T get_maxTenacity() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D88BF8))(this);
	}
	template <typename T = bool> T get_hasMaxTenacity() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D88C80))(this);
	}
	template <typename T = void> T AddMaxTenacity(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D88C8C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxTenacity(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D88DA0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxTenacity() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D88EB4))(this);
	}
	template <typename T = MaxTenacityIncComponent*> T get_maxTenacityInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D88EC0))(this);
	}
	template <typename T = bool> T get_hasMaxTenacityInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D88F48))(this);
	}
	template <typename T = void> T AddMaxTenacityInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D88F54))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxTenacityInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D89068))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxTenacityInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8917C))(this);
	}
	template <typename T = MaxTenacityIncPercentComponent*> T get_maxTenacityIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D89188))(this);
	}
	template <typename T = bool> T get_hasMaxTenacityIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D89210))(this);
	}
	template <typename T = void> T AddMaxTenacityIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8921C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxTenacityIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D89330))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxTenacityIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D89444))(this);
	}
	template <typename T = MediumArmorDecComponent*> T get_mediumArmorDec() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D89450))(this);
	}
	template <typename T = bool> T get_hasMediumArmorDec() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D894D8))(this);
	}
	template <typename T = void> T AddMediumArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D894E4))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMediumArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D895F8))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMediumArmorDec() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8970C))(this);
	}
	template <typename T = MediumArmorDecPercentComponent*> T get_mediumArmorDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D89718))(this);
	}
	template <typename T = bool> T get_hasMediumArmorDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D897A0))(this);
	}
	template <typename T = void> T AddMediumArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D897AC))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMediumArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D898C0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMediumArmorDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D899D4))(this);
	}
	template <typename T = MediumArmorIncComponent*> T get_mediumArmorInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D899E0))(this);
	}
	template <typename T = bool> T get_hasMediumArmorInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D89A68))(this);
	}
	template <typename T = void> T AddMediumArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D89A74))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMediumArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D89B88))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMediumArmorInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D89C9C))(this);
	}
	template <typename T = MediumArmorIncPercentComponent*> T get_mediumArmorIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D89CA8))(this);
	}
	template <typename T = bool> T get_hasMediumArmorIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D89D30))(this);
	}
	template <typename T = void> T AddMediumArmorIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D89D3C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMediumArmorIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D89E50))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMediumArmorIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D89F64))(this);
	}
	template <typename T = MeleeResistanceComponent*> T get_meleeResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D89F70))(this);
	}
	template <typename T = bool> T get_hasMeleeResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D89FF8))(this);
	}
	template <typename T = void> T AddMeleeResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8A004))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMeleeResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8A118))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMeleeResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8A22C))(this);
	}
	template <typename T = MetabolismComponent*> T get_metabolism() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8A238))(this);
	}
	template <typename T = bool> T get_hasMetabolism() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8A2C0))(this);
	}
	template <typename T = void> T AddMetabolism(float newHunger, float newThirst) {
		return ((T (*)(ModifierEntity*, float, float))(Il2CppBase() + 0x1D8A2CC))(this, newHunger, newThirst);
	}
	template <typename T = void> T ReplaceMetabolism(float newHunger, float newThirst) {
		return ((T (*)(ModifierEntity*, float, float))(Il2CppBase() + 0x1D8A3D4))(this, newHunger, newThirst);
	}
	template <typename T = void> T RemoveMetabolism() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8A4DC))(this);
	}
	template <typename T = MetabolismDamageResistanceComponent*> T get_metabolismDamageResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8A4E8))(this);
	}
	template <typename T = bool> T get_hasMetabolismDamageResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8A570))(this);
	}
	template <typename T = void> T AddMetabolismDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8A57C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMetabolismDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8A690))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMetabolismDamageResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8A7A4))(this);
	}
	template <typename T = MetabolismDamageVulnerabilityComponent*> T get_metabolismDamageVulnerability() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8A7B0))(this);
	}
	template <typename T = bool> T get_hasMetabolismDamageVulnerability() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8A838))(this);
	}
	template <typename T = void> T AddMetabolismDamageVulnerability(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8A844))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMetabolismDamageVulnerability(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8A958))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMetabolismDamageVulnerability() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8AA6C))(this);
	}
	template <typename T = bool> T get_isMinimapHidden() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8AA78))(this);
	}
	template <typename T = void> T set_isMinimapHidden(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8AA84))(this, value);
	}
	template <typename T = MorphingWeaponComponent*> T get_morphingWeapon() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8AB9C))(this);
	}
	template <typename T = bool> T get_hasMorphingWeapon() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8AC24))(this);
	}
	template <typename T = void> T AddMorphingWeapon(ItemConditionComponent* newItemCondition, Il2CppString* newName) {
		return ((T (*)(ModifierEntity*, ItemConditionComponent*, Il2CppString*))(Il2CppBase() + 0x1D8AC30))(this, newItemCondition, newName);
	}
	template <typename T = void> T ReplaceMorphingWeapon(ItemConditionComponent* newItemCondition, Il2CppString* newName) {
		return ((T (*)(ModifierEntity*, ItemConditionComponent*, Il2CppString*))(Il2CppBase() + 0x1D8AD58))(this, newItemCondition, newName);
	}
	template <typename T = void> T RemoveMorphingWeapon() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8AE80))(this);
	}
	template <typename T = MountSpeedComponent*> T get_mountSpeed() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8AE8C))(this);
	}
	template <typename T = bool> T get_hasMountSpeed() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8AF14))(this);
	}
	template <typename T = void> T AddMountSpeed(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8AF20))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMountSpeed(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8B034))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMountSpeed() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8B148))(this);
	}
	template <typename T = MountSpeedDecPercentComponent*> T get_mountSpeedDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8B154))(this);
	}
	template <typename T = bool> T get_hasMountSpeedDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8B1DC))(this);
	}
	template <typename T = void> T AddMountSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8B1E8))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMountSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8B2FC))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMountSpeedDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8B410))(this);
	}
	template <typename T = MountSpeedIncPercentComponent*> T get_mountSpeedIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8B41C))(this);
	}
	template <typename T = bool> T get_hasMountSpeedIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8B4A4))(this);
	}
	template <typename T = void> T AddMountSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8B4B0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMountSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8B5C4))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMountSpeedIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8B6D8))(this);
	}
	template <typename T = bool> T get_isNaked() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8B6E4))(this);
	}
	template <typename T = void> T set_isNaked(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8B6F0))(this, value);
	}
	template <typename T = OutcomingHealBonusComponent*> T get_outcomingHealBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8B808))(this);
	}
	template <typename T = bool> T get_hasOutcomingHealBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8B890))(this);
	}
	template <typename T = void> T AddOutcomingHealBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8B89C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceOutcomingHealBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8B9B0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveOutcomingHealBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8BAC4))(this);
	}
	template <typename T = OverrideCooldownsComponent*> T get_overrideCooldowns() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8BAD0))(this);
	}
	template <typename T = bool> T get_hasOverrideCooldowns() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8BB58))(this);
	}
	template <typename T = void> T AddOverrideCooldowns(Il2CppDictionary<Il2CppString*, float>* newData) {
		return ((T (*)(ModifierEntity*, Il2CppDictionary<Il2CppString*, float>*))(Il2CppBase() + 0x1D8BB64))(this, newData);
	}
	template <typename T = void> T ReplaceOverrideCooldowns(Il2CppDictionary<Il2CppString*, float>* newData) {
		return ((T (*)(ModifierEntity*, Il2CppDictionary<Il2CppString*, float>*))(Il2CppBase() + 0x1D8BC78))(this, newData);
	}
	template <typename T = void> T RemoveOverrideCooldowns() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8BD8C))(this);
	}
	template <typename T = bool> T get_isPatrolling() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8BD98))(this);
	}
	template <typename T = void> T set_isPatrolling(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8BDA4))(this, value);
	}
	template <typename T = bool> T get_isPermanentMoving() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8BEBC))(this);
	}
	template <typename T = void> T set_isPermanentMoving(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8BEC8))(this, value);
	}
	template <typename T = PetExperienceBonusComponent*> T get_petExperienceBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8BFE0))(this);
	}
	template <typename T = bool> T get_hasPetExperienceBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8C068))(this);
	}
	template <typename T = void> T AddPetExperienceBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8C074))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplacePetExperienceBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8C188))(this, newValue, newGroup);
	}
	template <typename T = void> T RemovePetExperienceBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8C29C))(this);
	}
	template <typename T = PlayerDamageBonusComponent*> T get_playerDamageBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8C2A8))(this);
	}
	template <typename T = bool> T get_hasPlayerDamageBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8C330))(this);
	}
	template <typename T = void> T AddPlayerDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8C33C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplacePlayerDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8C450))(this, newValue, newGroup);
	}
	template <typename T = void> T RemovePlayerDamageBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8C564))(this);
	}
	template <typename T = PlayerDamageReductionComponent*> T get_playerDamageReduction() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8C570))(this);
	}
	template <typename T = bool> T get_hasPlayerDamageReduction() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8C5F8))(this);
	}
	template <typename T = void> T AddPlayerDamageReduction(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8C604))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplacePlayerDamageReduction(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8C718))(this, newValue, newGroup);
	}
	template <typename T = void> T RemovePlayerDamageReduction() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8C82C))(this);
	}
	template <typename T = PlayerResistanceComponent*> T get_playerResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8C838))(this);
	}
	template <typename T = bool> T get_hasPlayerResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8C8C0))(this);
	}
	template <typename T = void> T AddPlayerResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8C8CC))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplacePlayerResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8C9E0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemovePlayerResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8CAF4))(this);
	}
	template <typename T = bool> T get_isPoisoned() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8CB00))(this);
	}
	template <typename T = void> T set_isPoisoned(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8CB0C))(this, value);
	}
	template <typename T = PowerIncComponent*> T get_powerInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8CC24))(this);
	}
	template <typename T = bool> T get_hasPowerInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8CCAC))(this);
	}
	template <typename T = void> T AddPowerInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8CCB8))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplacePowerInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8CDCC))(this, newValue, newGroup);
	}
	template <typename T = void> T RemovePowerInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8CEE0))(this);
	}
	template <typename T = RangedResistanceComponent*> T get_rangedResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8CEEC))(this);
	}
	template <typename T = bool> T get_hasRangedResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8CF74))(this);
	}
	template <typename T = void> T AddRangedResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8CF80))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceRangedResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8D094))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveRangedResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8D1A8))(this);
	}
	template <typename T = bool> T get_isRiding() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8D1B4))(this);
	}
	template <typename T = void> T set_isRiding(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8D1C0))(this, value);
	}
	template <typename T = bool> T get_isRootImmune() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8D2D8))(this);
	}
	template <typename T = void> T set_isRootImmune(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8D2E4))(this, value);
	}
	template <typename T = RootedComponent*> T get_rooted() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8D3FC))(this);
	}
	template <typename T = bool> T get_hasRooted() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8D484))(this);
	}
	template <typename T = void> T AddRooted(bool newStackable, bool newIgnoreImmune) {
		return ((T (*)(ModifierEntity*, bool, bool))(Il2CppBase() + 0x1D8D490))(this, newStackable, newIgnoreImmune);
	}
	template <typename T = void> T ReplaceRooted(bool newStackable, bool newIgnoreImmune) {
		return ((T (*)(ModifierEntity*, bool, bool))(Il2CppBase() + 0x1D8D5A4))(this, newStackable, newIgnoreImmune);
	}
	template <typename T = void> T RemoveRooted() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8D6B8))(this);
	}
	template <typename T = bool> T get_isRunesDisabled() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8D6C4))(this);
	}
	template <typename T = void> T set_isRunesDisabled(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8D6D0))(this, value);
	}
	template <typename T = SatiationReductionComponent*> T get_satiationReduction() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8D7E8))(this);
	}
	template <typename T = bool> T get_hasSatiationReduction() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8D870))(this);
	}
	template <typename T = void> T AddSatiationReduction(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8D87C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSatiationReduction(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8D990))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSatiationReduction() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8DAA4))(this);
	}
	template <typename T = SilenceComponent*> T get_silence() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8DAB0))(this);
	}
	template <typename T = bool> T get_hasSilence() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8DB38))(this);
	}
	template <typename T = void> T AddSilence(bool newIgnoreImmune) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8DB44))(this, newIgnoreImmune);
	}
	template <typename T = void> T ReplaceSilence(bool newIgnoreImmune) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8DC4C))(this, newIgnoreImmune);
	}
	template <typename T = void> T RemoveSilence() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8DD54))(this);
	}
	template <typename T = bool> T get_isSilenceImmune() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8DD60))(this);
	}
	template <typename T = void> T set_isSilenceImmune(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8DD6C))(this, value);
	}
	template <typename T = SkillDamageBonusComponent*> T get_skillDamageBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8DE84))(this);
	}
	template <typename T = bool> T get_hasSkillDamageBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8DF0C))(this);
	}
	template <typename T = void> T AddSkillDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8DF18))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSkillDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8E02C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSkillDamageBonus() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8E140))(this);
	}
	template <typename T = SneakBackstabComponent*> T get_sneakBackstab() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8E14C))(this);
	}
	template <typename T = bool> T get_hasSneakBackstab() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8E1D4))(this);
	}
	template <typename T = void> T AddSneakBackstab(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8E1E0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSneakBackstab(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8E2F4))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSneakBackstab() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8E408))(this);
	}
	template <typename T = bool> T get_isSneak() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8E414))(this);
	}
	template <typename T = void> T set_isSneak(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8E420))(this, value);
	}
	template <typename T = bool> T get_isSneakDamageImmune() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8E538))(this);
	}
	template <typename T = void> T set_isSneakDamageImmune(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8E544))(this, value);
	}
	template <typename T = SneakDamageResistanceComponent*> T get_sneakDamageResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8E65C))(this);
	}
	template <typename T = bool> T get_hasSneakDamageResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8E6E4))(this);
	}
	template <typename T = void> T AddSneakDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8E6F0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSneakDamageResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8E804))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSneakDamageResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8E918))(this);
	}
	template <typename T = bool> T get_isSneakImmune() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8E924))(this);
	}
	template <typename T = void> T set_isSneakImmune(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8E930))(this, value);
	}
	template <typename T = bool> T get_isSpeedDecImmune() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8EA48))(this);
	}
	template <typename T = void> T set_isSpeedDecImmune(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8EA54))(this, value);
	}
	template <typename T = SpeedDecPercentComponent*> T get_speedDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8EB6C))(this);
	}
	template <typename T = bool> T get_hasSpeedDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8EBF4))(this);
	}
	template <typename T = void> T AddSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8EC00))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8ED14))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSpeedDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8EE28))(this);
	}
	template <typename T = SpeedIncComponent*> T get_speedInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8EE34))(this);
	}
	template <typename T = bool> T get_hasSpeedInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8EEBC))(this);
	}
	template <typename T = void> T AddSpeedInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8EEC8))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSpeedInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8EFDC))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSpeedInc() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8F0F0))(this);
	}
	template <typename T = SpeedIncPercentComponent*> T get_speedIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8F0FC))(this);
	}
	template <typename T = bool> T get_hasSpeedIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8F184))(this);
	}
	template <typename T = void> T AddSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8F190))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8F2A4))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSpeedIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8F3B8))(this);
	}
	template <typename T = SpeedMovingComponent*> T get_speedMoving() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8F3C4))(this);
	}
	template <typename T = bool> T get_hasSpeedMoving() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8F44C))(this);
	}
	template <typename T = void> T AddSpeedMoving(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8F458))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSpeedMoving(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8F56C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSpeedMoving() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8F680))(this);
	}
	template <typename T = SplashResistanceComponent*> T get_splashResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8F68C))(this);
	}
	template <typename T = bool> T get_hasSplashResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8F714))(this);
	}
	template <typename T = void> T AddSplashResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8F720))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSplashResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8F834))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSplashResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8F948))(this);
	}
	template <typename T = bool> T get_isSprint() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8F954))(this);
	}
	template <typename T = void> T set_isSprint(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8F960))(this, value);
	}
	template <typename T = StatusResistanceComponent*> T get_statusResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8FA78))(this);
	}
	template <typename T = bool> T get_hasStatusResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8FB00))(this);
	}
	template <typename T = void> T AddStatusResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8FB0C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceStatusResistance(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8FC20))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveStatusResistance() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8FD34))(this);
	}
	template <typename T = StatusVulnerabilityComponent*> T get_statusVulnerability() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8FD40))(this);
	}
	template <typename T = bool> T get_hasStatusVulnerability() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8FDC8))(this);
	}
	template <typename T = void> T AddStatusVulnerability(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8FDD4))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceStatusVulnerability(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D8FEE8))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveStatusVulnerability() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D8FFFC))(this);
	}
	template <typename T = bool> T get_isStunImmune() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D90008))(this);
	}
	template <typename T = void> T set_isStunImmune(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D90014))(this, value);
	}
	template <typename T = StunnedComponent*> T get_stunned() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D9012C))(this);
	}
	template <typename T = bool> T get_hasStunned() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D901B4))(this);
	}
	template <typename T = void> T AddStunned(bool newStackable, bool newIgnoreImmune) {
		return ((T (*)(ModifierEntity*, bool, bool))(Il2CppBase() + 0x1D901C0))(this, newStackable, newIgnoreImmune);
	}
	template <typename T = void> T ReplaceStunned(bool newStackable, bool newIgnoreImmune) {
		return ((T (*)(ModifierEntity*, bool, bool))(Il2CppBase() + 0x1D902D4))(this, newStackable, newIgnoreImmune);
	}
	template <typename T = void> T RemoveStunned() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D903E8))(this);
	}
	template <typename T = TeamUnhiddenComponent*> T get_teamUnhidden() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D903F4))(this);
	}
	template <typename T = bool> T get_hasTeamUnhidden() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D9047C))(this);
	}
	template <typename T = void> T AddTeamUnhidden(HashSet1int64_t>* newTeams) {
		return ((T (*)(ModifierEntity*, HashSet1int64_t>*))(Il2CppBase() + 0x1D90488))(this, newTeams);
	}
	template <typename T = void> T ReplaceTeamUnhidden(HashSet1int64_t>* newTeams) {
		return ((T (*)(ModifierEntity*, HashSet1int64_t>*))(Il2CppBase() + 0x1D9059C))(this, newTeams);
	}
	template <typename T = void> T RemoveTeamUnhidden() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D906B0))(this);
	}
	template <typename T = ThirstSpeedDecPercentComponent*> T get_thirstSpeedDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D906BC))(this);
	}
	template <typename T = bool> T get_hasThirstSpeedDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D90744))(this);
	}
	template <typename T = void> T AddThirstSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D90750))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceThirstSpeedDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D90864))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveThirstSpeedDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D90978))(this);
	}
	template <typename T = ThirstSpeedIncPercentComponent*> T get_thirstSpeedIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D90984))(this);
	}
	template <typename T = bool> T get_hasThirstSpeedIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D90A0C))(this);
	}
	template <typename T = void> T AddThirstSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D90A18))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceThirstSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D90B2C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveThirstSpeedIncPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D90C40))(this);
	}
	template <typename T = TimeOutExitDecPercentComponent*> T get_timeOutExitDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D90C4C))(this);
	}
	template <typename T = bool> T get_hasTimeOutExitDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D90CD4))(this);
	}
	template <typename T = void> T AddTimeOutExitDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D90CE0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceTimeOutExitDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D90DF4))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveTimeOutExitDecPercent() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D90F08))(this);
	}
	template <typename T = TotComponent*> T get_tot() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D90F14))(this);
	}
	template <typename T = bool> T get_hasTot() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D90F9C))(this);
	}
	template <typename T = void> T AddTot(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D90FA8))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceTot(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D910BC))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveTot() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D911D0))(this);
	}
	template <typename T = bool> T get_isTrueVision() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D911DC))(this);
	}
	template <typename T = void> T set_isTrueVision(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D911E8))(this, value);
	}
	template <typename T = bool> T get_isUnhidden() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D91300))(this);
	}
	template <typename T = void> T set_isUnhidden(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D9130C))(this, value);
	}
	template <typename T = bool> T get_isUpdateMagicIcon() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D91424))(this);
	}
	template <typename T = void> T set_isUpdateMagicIcon(bool value) {
		return ((T (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D91430))(this, value);
	}
	template <typename T = UpdateTimeComponent*> T get_updateTime() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D91548))(this);
	}
	template <typename T = bool> T get_hasUpdateTime() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D915D0))(this);
	}
	template <typename T = void> T AddUpdateTime(int64_t newValue) {
		return ((T (*)(ModifierEntity*, int64_t))(Il2CppBase() + 0x1D915DC))(this, newValue);
	}
	template <typename T = void> T ReplaceUpdateTime(int64_t newValue) {
		return ((T (*)(ModifierEntity*, int64_t))(Il2CppBase() + 0x1D916E0))(this, newValue);
	}
	template <typename T = void> T RemoveUpdateTime() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D917E4))(this);
	}
	template <typename T = WeaponDotComponent*> T get_weaponDot() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D917F0))(this);
	}
	template <typename T = bool> T get_hasWeaponDot() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D91878))(this);
	}
	template <typename T = void> T AddWeaponDot(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D91884))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceWeaponDot(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ModifierEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1D91998))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveWeaponDot() {
		return ((T (*)(ModifierEntity*))(Il2CppBase() + 0x1D91AAC))(this);
	}

};

