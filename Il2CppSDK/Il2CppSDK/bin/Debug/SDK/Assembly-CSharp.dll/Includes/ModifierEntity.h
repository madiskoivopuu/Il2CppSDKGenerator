#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModifierEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModifierEntity"));
	}

	template <typename R = int32_t> R& ComponentsCount() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = BurnedComponent*> static R& burnedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = CursedComponent*> static R& cursedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = DamageImmuneComponent*> static R& damageImmuneComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = DebuffImmuneComponent*> static R& debuffImmuneComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = DisarmingFeetComponent*> static R& disarmingFeetComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = DisarmingWeaponComponent*> static R& disarmingWeaponComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename R = DualWeaponComponent*> static R& dualWeaponComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename R = FallenComponent*> static R& fallenComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename R = FrozenComponent*> static R& frozenComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename R = GhostComponent*> static R& ghostComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename R = HealingComponent*> static R& healingComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename R = HiddenComponent*> static R& hiddenComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename R = ImmortalComponent*> static R& immortalComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename R = ImpotentImmuneComponent*> static R& impotentImmuneComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename R = InPvPComponent*> static R& inPvPComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename R = InstabilityComponent*> static R& instabilityComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename R = InvisibleComponent*> static R& invisibleComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename R = KnockdownComponent*> static R& knockdownComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename R = LostControlComponent*> static R& lostControlComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename R = LostControlImmuneComponent*> static R& lostControlImmuneComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename R = MinimapHiddenComponent*> static R& minimapHiddenComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename R = NakedComponent*> static R& nakedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename R = PatrollingComponent*> static R& patrollingComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename R = PermanentMovingComponent*> static R& permanentMovingComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename R = PoisonedComponent*> static R& poisonedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename R = RidingComponent*> static R& ridingComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename R = RootImmuneComponent*> static R& rootImmuneComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename R = RunesDisabledComponent*> static R& runesDisabledComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename R = SilenceImmuneComponent*> static R& silenceImmuneComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename R = SneakComponent*> static R& sneakComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename R = SneakDamageImmuneComponent*> static R& sneakDamageImmuneComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename R = SneakImmuneComponent*> static R& sneakImmuneComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename R = SpeedDecImmuneComponent*> static R& speedDecImmuneComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename R = SprintComponent*> static R& sprintComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename R = StunImmuneComponent*> static R& stunImmuneComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename R = TrueVisionComponent*> static R& trueVisionComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename R = UnhiddenComponent*> static R& unhiddenComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename R = UpdateMagicIconComponent*> static R& updateMagicIconComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}

	template <typename R = int32_t> R get_ComponentsCount() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7BB30))(this);
	}
	template <typename R = void> R set_ComponentsCount(int32_t value) {
		return ((R (*)(ModifierEntity*, int32_t))(Il2CppBase() + 0x1D7BB38))(this, value);
	}
	template <typename R = ArmingFeetComponent*> R get_armingFeet() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7BB40))(this);
	}
	template <typename R = bool> R get_hasArmingFeet() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7BBC8))(this);
	}
	template <typename R = void> R AddArmingFeet(Il2CppString* newName) {
		return ((R (*)(ModifierEntity*, Il2CppString*))(Il2CppBase() + 0x1D7BBD4))(this, newName);
	}
	template <typename R = void> R ReplaceArmingFeet(Il2CppString* newName) {
		return ((R (*)(ModifierEntity*, Il2CppString*))(Il2CppBase() + 0x1D7BCE8))(this, newName);
	}
	template <typename R = void> R RemoveArmingFeet() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7BDFC))(this);
	}
	template <typename R = ArmingWeaponComponent*> R get_armingWeapon() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7BE08))(this);
	}
	template <typename R = bool> R get_hasArmingWeapon() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7BE90))(this);
	}
	template <typename R = void> R AddArmingWeapon(Il2CppString* newName) {
		return ((R (*)(ModifierEntity*, Il2CppString*))(Il2CppBase() + 0x1D7BE9C))(this, newName);
	}
	template <typename R = void> R ReplaceArmingWeapon(Il2CppString* newName) {
		return ((R (*)(ModifierEntity*, Il2CppString*))(Il2CppBase() + 0x1D7BFB0))(this, newName);
	}
	template <typename R = void> R RemoveArmingWeapon() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7C0C4))(this);
	}
	template <typename R = ArmorDecComponent*> R get_armorDec() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7C0D0))(this);
	}
	template <typename R = bool> R get_hasArmorDec() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7C158))(this);
	}
	template <typename R = void> R AddArmorDec(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7C164))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceArmorDec(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7C278))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveArmorDec() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7C38C))(this);
	}
	template <typename R = ArmorDecPercentComponent*> R get_armorDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7C398))(this);
	}
	template <typename R = bool> R get_hasArmorDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7C420))(this);
	}
	template <typename R = void> R AddArmorDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7C42C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceArmorDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7C540))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveArmorDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7C654))(this);
	}
	template <typename R = ArmorIncComponent*> R get_armorInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7C660))(this);
	}
	template <typename R = bool> R get_hasArmorInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7C6E8))(this);
	}
	template <typename R = void> R AddArmorInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7C6F4))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceArmorInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7C808))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveArmorInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7C91C))(this);
	}
	template <typename R = ArmorIncPercentComponent*> R get_armorIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7C928))(this);
	}
	template <typename R = bool> R get_hasArmorIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7C9B0))(this);
	}
	template <typename R = void> R AddArmorIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7C9BC))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceArmorIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7CAD0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveArmorIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7CBE4))(this);
	}
	template <typename R = AttackPriorityComponent*> R get_attackPriority() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7CBF0))(this);
	}
	template <typename R = bool> R get_hasAttackPriority() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7CC78))(this);
	}
	template <typename R = void> R AddAttackPriority(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7CC84))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceAttackPriority(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7CD98))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveAttackPriority() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7CEAC))(this);
	}
	template <typename R = AttackRadiusIncPercentComponent*> R get_attackRadiusIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7CEB8))(this);
	}
	template <typename R = bool> R get_hasAttackRadiusIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7CF40))(this);
	}
	template <typename R = void> R AddAttackRadiusIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7CF4C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceAttackRadiusIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7D060))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveAttackRadiusIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7D174))(this);
	}
	template <typename R = AttackSpeedDecPercentComponent*> R get_attackSpeedDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7D180))(this);
	}
	template <typename R = bool> R get_hasAttackSpeedDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7D208))(this);
	}
	template <typename R = void> R AddAttackSpeedDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7D214))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceAttackSpeedDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7D328))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveAttackSpeedDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7D43C))(this);
	}
	template <typename R = AttackSpeedIncPercentComponent*> R get_attackSpeedIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7D448))(this);
	}
	template <typename R = bool> R get_hasAttackSpeedIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7D4D0))(this);
	}
	template <typename R = void> R AddAttackSpeedIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7D4DC))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceAttackSpeedIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7D5F0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveAttackSpeedIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7D704))(this);
	}
	template <typename R = BackstabDamageBonusComponent*> R get_backstabDamageBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7D710))(this);
	}
	template <typename R = bool> R get_hasBackstabDamageBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7D798))(this);
	}
	template <typename R = void> R AddBackstabDamageBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7D7A4))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceBackstabDamageBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7D8B8))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveBackstabDamageBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7D9CC))(this);
	}
	template <typename R = BackstabResistanceComponent*> R get_backstabResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7D9D8))(this);
	}
	template <typename R = bool> R get_hasBackstabResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7DA60))(this);
	}
	template <typename R = void> R AddBackstabResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7DA6C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceBackstabResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7DB80))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveBackstabResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7DC94))(this);
	}
	template <typename R = BowResistanceComponent*> R get_bowResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7DCA0))(this);
	}
	template <typename R = bool> R get_hasBowResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7DD28))(this);
	}
	template <typename R = void> R AddBowResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7DD34))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceBowResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7DE48))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveBowResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7DF5C))(this);
	}
	template <typename R = bool> R get_isBurned() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7DF68))(this);
	}
	template <typename R = void> R set_isBurned(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D7DF74))(this, value);
	}
	template <typename R = ChangeChancesComponent*> R get_changeChances() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7E08C))(this);
	}
	template <typename R = bool> R get_hasChangeChances() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7E114))(this);
	}
	template <typename R = void> R AddChangeChances(Il2CppDictionary<Il2CppString*, Item>* newData) {
		return ((R (*)(ModifierEntity*, Il2CppDictionary<Il2CppString*, Item>*))(Il2CppBase() + 0x1D7E120))(this, newData);
	}
	template <typename R = void> R ReplaceChangeChances(Il2CppDictionary<Il2CppString*, Item>* newData) {
		return ((R (*)(ModifierEntity*, Il2CppDictionary<Il2CppString*, Item>*))(Il2CppBase() + 0x1D7E234))(this, newData);
	}
	template <typename R = void> R RemoveChangeChances() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7E348))(this);
	}
	template <typename R = ClassCooldownReduceComponent*> R get_classCooldownReduce() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7E354))(this);
	}
	template <typename R = bool> R get_hasClassCooldownReduce() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7E3DC))(this);
	}
	template <typename R = void> R AddClassCooldownReduce(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7E3E8))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceClassCooldownReduce(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7E4FC))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveClassCooldownReduce() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7E610))(this);
	}
	template <typename R = CreepDamageBonusComponent*> R get_creepDamageBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7E61C))(this);
	}
	template <typename R = bool> R get_hasCreepDamageBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7E6A4))(this);
	}
	template <typename R = void> R AddCreepDamageBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7E6B0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceCreepDamageBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7E7C4))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveCreepDamageBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7E8D8))(this);
	}
	template <typename R = CreepResistanceComponent*> R get_creepResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7E8E4))(this);
	}
	template <typename R = bool> R get_hasCreepResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7E96C))(this);
	}
	template <typename R = void> R AddCreepResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7E978))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceCreepResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7EA8C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveCreepResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7EBA0))(this);
	}
	template <typename R = bool> R get_isCursed() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7EBAC))(this);
	}
	template <typename R = void> R set_isCursed(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D7EBB8))(this, value);
	}
	template <typename R = DamageBlockComponent*> R get_damageBlock() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7ECD0))(this);
	}
	template <typename R = bool> R get_hasDamageBlock() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7ED58))(this);
	}
	template <typename R = void> R AddDamageBlock(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7ED64))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageBlock(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7EE78))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageBlock() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7EF8C))(this);
	}
	template <typename R = DamageBlockIncPercentComponent*> R get_damageBlockIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7EF98))(this);
	}
	template <typename R = bool> R get_hasDamageBlockIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7F020))(this);
	}
	template <typename R = void> R AddDamageBlockIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7F02C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageBlockIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7F140))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageBlockIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7F254))(this);
	}
	template <typename R = DamageBonusForMissingHealthComponent*> R get_damageBonusForMissingHealth() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7F260))(this);
	}
	template <typename R = bool> R get_hasDamageBonusForMissingHealth() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7F2E8))(this);
	}
	template <typename R = void> R AddDamageBonusForMissingHealth(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7F2F4))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageBonusForMissingHealth(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7F408))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageBonusForMissingHealth() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7F51C))(this);
	}
	template <typename R = DamageDecComponent*> R get_damageDec() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7F528))(this);
	}
	template <typename R = bool> R get_hasDamageDec() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7F5B0))(this);
	}
	template <typename R = void> R AddDamageDec(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7F5BC))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageDec(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7F6D0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageDec() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7F7E4))(this);
	}
	template <typename R = DamageDecPercentComponent*> R get_damageDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7F7F0))(this);
	}
	template <typename R = bool> R get_hasDamageDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7F878))(this);
	}
	template <typename R = void> R AddDamageDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7F884))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7F998))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7FAAC))(this);
	}
	template <typename R = bool> R get_isDamageImmune() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7FAB8))(this);
	}
	template <typename R = void> R set_isDamageImmune(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D7FAC4))(this, value);
	}
	template <typename R = DamageIncComponent*> R get_damageInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7FBDC))(this);
	}
	template <typename R = bool> R get_hasDamageInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7FC64))(this);
	}
	template <typename R = void> R AddDamageInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7FC70))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7FD84))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7FE98))(this);
	}
	template <typename R = DamageIncPercentComponent*> R get_damageIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7FEA4))(this);
	}
	template <typename R = bool> R get_hasDamageIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D7FF2C))(this);
	}
	template <typename R = void> R AddDamageIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D7FF38))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8004C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D80160))(this);
	}
	template <typename R = DamageReflectComponent*> R get_damageReflect() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8016C))(this);
	}
	template <typename R = bool> R get_hasDamageReflect() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D801F4))(this);
	}
	template <typename R = void> R AddDamageReflect(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D80200))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageReflect(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D80314))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageReflect() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D80428))(this);
	}
	template <typename R = DamageResistanceComponent*> R get_damageResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D80434))(this);
	}
	template <typename R = bool> R get_hasDamageResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D804BC))(this);
	}
	template <typename R = void> R AddDamageResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D804C8))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D805DC))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D806F0))(this);
	}
	template <typename R = DamageShieldComponent*> R get_damageShield() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D806FC))(this);
	}
	template <typename R = bool> R get_hasDamageShield() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D80784))(this);
	}
	template <typename R = void> R AddDamageShield(DamageShieldDepends newDepends, float newValue) {
		return ((R (*)(ModifierEntity*, DamageShieldDepends, float))(Il2CppBase() + 0x1D80790))(this, newDepends, newValue);
	}
	template <typename R = void> R ReplaceDamageShield(DamageShieldDepends newDepends, float newValue) {
		return ((R (*)(ModifierEntity*, DamageShieldDepends, float))(Il2CppBase() + 0x1D808A4))(this, newDepends, newValue);
	}
	template <typename R = void> R RemoveDamageShield() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D809B8))(this);
	}
	template <typename R = DamageVulnerabilityComponent*> R get_damageVulnerability() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D809C4))(this);
	}
	template <typename R = bool> R get_hasDamageVulnerability() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D80A4C))(this);
	}
	template <typename R = void> R AddDamageVulnerability(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D80A58))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageVulnerability(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D80B6C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageVulnerability() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D80C80))(this);
	}
	template <typename R = bool> R get_isDebuffImmune() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D80C8C))(this);
	}
	template <typename R = void> R set_isDebuffImmune(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D80C98))(this, value);
	}
	template <typename R = bool> R get_isDisarmingFeet() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D80DB0))(this);
	}
	template <typename R = void> R set_isDisarmingFeet(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D80DBC))(this, value);
	}
	template <typename R = bool> R get_isDisarmingWeapon() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D80ED4))(this);
	}
	template <typename R = void> R set_isDisarmingWeapon(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D80EE0))(this, value);
	}
	template <typename R = DotComponent*> R get_dot() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D80FF8))(this);
	}
	template <typename R = bool> R get_hasDot() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D81080))(this);
	}
	template <typename R = void> R AddDot(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8108C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDot(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D811A0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDot() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D812B4))(this);
	}
	template <typename R = DotResistanceComponent*> R get_dotResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D812C0))(this);
	}
	template <typename R = bool> R get_hasDotResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D81348))(this);
	}
	template <typename R = void> R AddDotResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D81354))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDotResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D81468))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDotResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8157C))(this);
	}
	template <typename R = bool> R get_isDualWeapon() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D81588))(this);
	}
	template <typename R = void> R set_isDualWeapon(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D81594))(this, value);
	}
	template <typename R = EquipTagsSetComponent*> R get_equipTagsSet() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D816AC))(this);
	}
	template <typename R = bool> R get_hasEquipTagsSet() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D81734))(this);
	}
	template <typename R = void> R AddEquipTagsSet(HashSet1<Il2CppString*>* newValues) {
		return ((R (*)(ModifierEntity*, HashSet1<Il2CppString*>*))(Il2CppBase() + 0x1D81740))(this, newValues);
	}
	template <typename R = void> R ReplaceEquipTagsSet(HashSet1<Il2CppString*>* newValues) {
		return ((R (*)(ModifierEntity*, HashSet1<Il2CppString*>*))(Il2CppBase() + 0x1D81854))(this, newValues);
	}
	template <typename R = void> R RemoveEquipTagsSet() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D81968))(this);
	}
	template <typename R = ExpGainIncPercentComponent*> R get_expGainIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D81974))(this);
	}
	template <typename R = bool> R get_hasExpGainIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D819FC))(this);
	}
	template <typename R = void> R AddExpGainIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D81A08))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceExpGainIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D81B1C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveExpGainIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D81C30))(this);
	}
	template <typename R = ExplodeTargetsComponent*> R get_explodeTargets() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D81C3C))(this);
	}
	template <typename R = bool> R get_hasExplodeTargets() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D81CC4))(this);
	}
	template <typename R = void> R AddExplodeTargets(HashSet1<int32_t>* newValues) {
		return ((R (*)(ModifierEntity*, HashSet1<int32_t>*))(Il2CppBase() + 0x1D81CD0))(this, newValues);
	}
	template <typename R = void> R ReplaceExplodeTargets(HashSet1<int32_t>* newValues) {
		return ((R (*)(ModifierEntity*, HashSet1<int32_t>*))(Il2CppBase() + 0x1D81DE4))(this, newValues);
	}
	template <typename R = void> R RemoveExplodeTargets() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D81EF8))(this);
	}
	template <typename R = bool> R get_isFallen() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D81F04))(this);
	}
	template <typename R = void> R set_isFallen(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D81F10))(this, value);
	}
	template <typename R = bool> R get_isFrozen() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D82028))(this);
	}
	template <typename R = void> R set_isFrozen(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D82034))(this, value);
	}
	template <typename R = GadgetCooldownReduceComponent*> R get_gadgetCooldownReduce() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8214C))(this);
	}
	template <typename R = bool> R get_hasGadgetCooldownReduce() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D821D4))(this);
	}
	template <typename R = void> R AddGadgetCooldownReduce(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D821E0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceGadgetCooldownReduce(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D822F4))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveGadgetCooldownReduce() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D82408))(this);
	}
	template <typename R = GenderComponent*> R get_gender() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D82414))(this);
	}
	template <typename R = bool> R get_hasGender() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8249C))(this);
	}
	template <typename R = void> R AddGender(Gender newType) {
		return ((R (*)(ModifierEntity*, Gender))(Il2CppBase() + 0x1D824A8))(this, newType);
	}
	template <typename R = void> R ReplaceGender(Gender newType) {
		return ((R (*)(ModifierEntity*, Gender))(Il2CppBase() + 0x1D825AC))(this, newType);
	}
	template <typename R = void> R RemoveGender() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D826B0))(this);
	}
	template <typename R = bool> R get_isGhost() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D826BC))(this);
	}
	template <typename R = void> R set_isGhost(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D826C8))(this, value);
	}
	template <typename R = GuildBossDamageBonusComponent*> R get_guildBossDamageBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D827E0))(this);
	}
	template <typename R = bool> R get_hasGuildBossDamageBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D82868))(this);
	}
	template <typename R = void> R AddGuildBossDamageBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D82874))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceGuildBossDamageBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D82988))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveGuildBossDamageBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D82A9C))(this);
	}
	template <typename R = bool> R get_isHealing() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D82AA8))(this);
	}
	template <typename R = void> R set_isHealing(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D82AB4))(this, value);
	}
	template <typename R = HealingSkillCooldownReduceComponent*> R get_healingSkillCooldownReduce() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D82BCC))(this);
	}
	template <typename R = bool> R get_hasHealingSkillCooldownReduce() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D82C54))(this);
	}
	template <typename R = void> R AddHealingSkillCooldownReduce(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D82C60))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHealingSkillCooldownReduce(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D82D74))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHealingSkillCooldownReduce() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D82E88))(this);
	}
	template <typename R = HeavyArmorDecComponent*> R get_heavyArmorDec() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D82E94))(this);
	}
	template <typename R = bool> R get_hasHeavyArmorDec() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D82F1C))(this);
	}
	template <typename R = void> R AddHeavyArmorDec(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D82F28))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHeavyArmorDec(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8303C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHeavyArmorDec() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D83150))(this);
	}
	template <typename R = HeavyArmorDecPercentComponent*> R get_heavyArmorDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8315C))(this);
	}
	template <typename R = bool> R get_hasHeavyArmorDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D831E4))(this);
	}
	template <typename R = void> R AddHeavyArmorDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D831F0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHeavyArmorDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D83304))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHeavyArmorDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D83418))(this);
	}
	template <typename R = HeavyArmorIncComponent*> R get_heavyArmorInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D83424))(this);
	}
	template <typename R = bool> R get_hasHeavyArmorInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D834AC))(this);
	}
	template <typename R = void> R AddHeavyArmorInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D834B8))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHeavyArmorInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D835CC))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHeavyArmorInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D836E0))(this);
	}
	template <typename R = HeavyArmorIncPercentComponent*> R get_heavyArmorIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D836EC))(this);
	}
	template <typename R = bool> R get_hasHeavyArmorIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D83774))(this);
	}
	template <typename R = void> R AddHeavyArmorIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D83780))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHeavyArmorIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D83894))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHeavyArmorIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D839A8))(this);
	}
	template <typename R = bool> R get_isHidden() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D839B4))(this);
	}
	template <typename R = void> R set_isHidden(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D839C0))(this, value);
	}
	template <typename R = HotComponent*> R get_hot() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D83AD8))(this);
	}
	template <typename R = bool> R get_hasHot() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D83B60))(this);
	}
	template <typename R = void> R AddHot(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D83B6C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHot(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D83C80))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHot() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D83D94))(this);
	}
	template <typename R = HotPredictionComponent*> R get_hotPrediction() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D83DA0))(this);
	}
	template <typename R = bool> R get_hasHotPrediction() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D83E28))(this);
	}
	template <typename R = void> R AddHotPrediction(float newValue) {
		return ((R (*)(ModifierEntity*, float))(Il2CppBase() + 0x1D83E34))(this, newValue);
	}
	template <typename R = void> R ReplaceHotPrediction(float newValue) {
		return ((R (*)(ModifierEntity*, float))(Il2CppBase() + 0x1D83F38))(this, newValue);
	}
	template <typename R = void> R RemoveHotPrediction() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8403C))(this);
	}
	template <typename R = HungerSpeedDecPercentComponent*> R get_hungerSpeedDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D84048))(this);
	}
	template <typename R = bool> R get_hasHungerSpeedDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D840D0))(this);
	}
	template <typename R = void> R AddHungerSpeedDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D840DC))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHungerSpeedDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D841F0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHungerSpeedDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D84304))(this);
	}
	template <typename R = HungerSpeedIncPercentComponent*> R get_hungerSpeedIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D84310))(this);
	}
	template <typename R = bool> R get_hasHungerSpeedIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D84398))(this);
	}
	template <typename R = void> R AddHungerSpeedIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D843A4))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHungerSpeedIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D844B8))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHungerSpeedIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D845CC))(this);
	}
	template <typename R = IcelandResistanceComponent*> R get_icelandResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D845D8))(this);
	}
	template <typename R = bool> R get_hasIcelandResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D84660))(this);
	}
	template <typename R = void> R AddIcelandResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8466C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceIcelandResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D84780))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveIcelandResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D84894))(this);
	}
	template <typename R = IdComponent*> R get_id() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D848A0))(this);
	}
	template <typename R = bool> R get_hasId() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D84928))(this);
	}
	template <typename R = void> R AddId(int32_t newValue) {
		return ((R (*)(ModifierEntity*, int32_t))(Il2CppBase() + 0x1D84934))(this, newValue);
	}
	template <typename R = void> R ReplaceId(int32_t newValue) {
		return ((R (*)(ModifierEntity*, int32_t))(Il2CppBase() + 0x1D84A38))(this, newValue);
	}
	template <typename R = void> R RemoveId() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D84B3C))(this);
	}
	template <typename R = IgnoreArmorPercentComponent*> R get_ignoreArmorPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D84B48))(this);
	}
	template <typename R = bool> R get_hasIgnoreArmorPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D84BD0))(this);
	}
	template <typename R = void> R AddIgnoreArmorPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D84BDC))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceIgnoreArmorPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D84CF0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveIgnoreArmorPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D84E04))(this);
	}
	template <typename R = ImmobilizedDamageBonusComponent*> R get_immobilizedDamageBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D84E10))(this);
	}
	template <typename R = bool> R get_hasImmobilizedDamageBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D84E98))(this);
	}
	template <typename R = void> R AddImmobilizedDamageBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D84EA4))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceImmobilizedDamageBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D84FB8))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveImmobilizedDamageBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D850CC))(this);
	}
	template <typename R = bool> R get_isImmortal() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D850D8))(this);
	}
	template <typename R = void> R set_isImmortal(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D850E4))(this, value);
	}
	template <typename R = ImmunityCacheComponent*> R get_immunityCache() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D851FC))(this);
	}
	template <typename R = bool> R get_hasImmunityCache() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D85284))(this);
	}
	template <typename R = void> R AddImmunityCache(HashSet1<Il2CppString*>* newTags, HashSet1<Il2CppString*>* newNames) {
		return ((R (*)(ModifierEntity*, HashSet1<Il2CppString*>*, HashSet1<Il2CppString*>*))(Il2CppBase() + 0x1D85290))(this, newTags, newNames);
	}
	template <typename R = void> R ReplaceImmunityCache(HashSet1<Il2CppString*>* newTags, HashSet1<Il2CppString*>* newNames) {
		return ((R (*)(ModifierEntity*, HashSet1<Il2CppString*>*, HashSet1<Il2CppString*>*))(Il2CppBase() + 0x1D853B8))(this, newTags, newNames);
	}
	template <typename R = void> R RemoveImmunityCache() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D854E0))(this);
	}
	template <typename R = ImpotentComponent*> R get_impotent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D854EC))(this);
	}
	template <typename R = bool> R get_hasImpotent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D85574))(this);
	}
	template <typename R = void> R AddImpotent(bool newIgnoreImmune) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D85580))(this, newIgnoreImmune);
	}
	template <typename R = void> R ReplaceImpotent(bool newIgnoreImmune) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D85688))(this, newIgnoreImmune);
	}
	template <typename R = void> R RemoveImpotent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D85790))(this);
	}
	template <typename R = bool> R get_isImpotentImmune() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8579C))(this);
	}
	template <typename R = void> R set_isImpotentImmune(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D857A8))(this, value);
	}
	template <typename R = bool> R get_isInPvP() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D858C0))(this);
	}
	template <typename R = void> R set_isInPvP(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D858CC))(this, value);
	}
	template <typename R = IncomingHealBonusComponent*> R get_incomingHealBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D859E4))(this);
	}
	template <typename R = bool> R get_hasIncomingHealBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D85A6C))(this);
	}
	template <typename R = void> R AddIncomingHealBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D85A78))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceIncomingHealBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D85B8C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveIncomingHealBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D85CA0))(this);
	}
	template <typename R = IncomingHealReductionComponent*> R get_incomingHealReduction() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D85CAC))(this);
	}
	template <typename R = bool> R get_hasIncomingHealReduction() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D85D34))(this);
	}
	template <typename R = void> R AddIncomingHealReduction(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D85D40))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceIncomingHealReduction(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D85E54))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveIncomingHealReduction() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D85F68))(this);
	}
	template <typename R = bool> R get_isInstability() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D85F74))(this);
	}
	template <typename R = void> R set_isInstability(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D85F80))(this, value);
	}
	template <typename R = InteractCollisionComponent*> R get_interactCollision() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D86098))(this);
	}
	template <typename R = bool> R get_hasInteractCollision() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D86120))(this);
	}
	template <typename R = void> R AddInteractCollision(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8612C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceInteractCollision(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D86240))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveInteractCollision() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D86354))(this);
	}
	template <typename R = bool> R get_isInvisible() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D86360))(this);
	}
	template <typename R = void> R set_isInvisible(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8636C))(this, value);
	}
	template <typename R = bool> R get_isKnockdown() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D86484))(this);
	}
	template <typename R = void> R set_isKnockdown(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D86490))(this, value);
	}
	template <typename R = LifeStealComponent*> R get_lifeSteal() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D865A8))(this);
	}
	template <typename R = bool> R get_hasLifeSteal() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D86630))(this);
	}
	template <typename R = void> R AddLifeSteal(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8663C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceLifeSteal(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D86750))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveLifeSteal() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D86864))(this);
	}
	template <typename R = LightArmorDecComponent*> R get_lightArmorDec() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D86870))(this);
	}
	template <typename R = bool> R get_hasLightArmorDec() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D868F8))(this);
	}
	template <typename R = void> R AddLightArmorDec(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D86904))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceLightArmorDec(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D86A18))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveLightArmorDec() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D86B2C))(this);
	}
	template <typename R = LightArmorDecPercentComponent*> R get_lightArmorDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D86B38))(this);
	}
	template <typename R = bool> R get_hasLightArmorDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D86BC0))(this);
	}
	template <typename R = void> R AddLightArmorDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D86BCC))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceLightArmorDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D86CE0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveLightArmorDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D86DF4))(this);
	}
	template <typename R = LightArmorIncComponent*> R get_lightArmorInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D86E00))(this);
	}
	template <typename R = bool> R get_hasLightArmorInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D86E88))(this);
	}
	template <typename R = void> R AddLightArmorInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D86E94))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceLightArmorInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D86FA8))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveLightArmorInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D870BC))(this);
	}
	template <typename R = LightArmorIncPercentComponent*> R get_lightArmorIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D870C8))(this);
	}
	template <typename R = bool> R get_hasLightArmorIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D87150))(this);
	}
	template <typename R = void> R AddLightArmorIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8715C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceLightArmorIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D87270))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveLightArmorIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D87384))(this);
	}
	template <typename R = bool> R get_isLostControl() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D87390))(this);
	}
	template <typename R = void> R set_isLostControl(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8739C))(this, value);
	}
	template <typename R = bool> R get_isLostControlImmune() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D874B4))(this);
	}
	template <typename R = void> R set_isLostControlImmune(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D874C0))(this, value);
	}
	template <typename R = MagicTriggerTypeComponent*> R get_magicTriggerType() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D875D8))(this);
	}
	template <typename R = bool> R get_hasMagicTriggerType() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D87660))(this);
	}
	template <typename R = void> R AddMagicTriggerType(MagicTriggerType newValue) {
		return ((R (*)(ModifierEntity*, MagicTriggerType))(Il2CppBase() + 0x1D8766C))(this, newValue);
	}
	template <typename R = void> R ReplaceMagicTriggerType(MagicTriggerType newValue) {
		return ((R (*)(ModifierEntity*, MagicTriggerType))(Il2CppBase() + 0x1D87770))(this, newValue);
	}
	template <typename R = void> R RemoveMagicTriggerType() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D87874))(this);
	}
	template <typename R = MapSpeedIncPercentComponent*> R get_mapSpeedIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D87880))(this);
	}
	template <typename R = bool> R get_hasMapSpeedIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D87908))(this);
	}
	template <typename R = void> R AddMapSpeedIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D87914))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMapSpeedIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D87A28))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMapSpeedIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D87B3C))(this);
	}
	template <typename R = MasteryPointsBonusComponent*> R get_masteryPointsBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D87B48))(this);
	}
	template <typename R = bool> R get_hasMasteryPointsBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D87BD0))(this);
	}
	template <typename R = void> R AddMasteryPointsBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D87BDC))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMasteryPointsBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D87CF0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMasteryPointsBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D87E04))(this);
	}
	template <typename R = MaxDamageReflectComponent*> R get_maxDamageReflect() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D87E10))(this);
	}
	template <typename R = bool> R get_hasMaxDamageReflect() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D87E98))(this);
	}
	template <typename R = void> R AddMaxDamageReflect(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D87EA4))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxDamageReflect(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D87FB8))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxDamageReflect() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D880CC))(this);
	}
	template <typename R = MaxHealthDecPercentComponent*> R get_maxHealthDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D880D8))(this);
	}
	template <typename R = bool> R get_hasMaxHealthDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D88160))(this);
	}
	template <typename R = void> R AddMaxHealthDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8816C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxHealthDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D88280))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxHealthDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D88394))(this);
	}
	template <typename R = MaxHealthIncComponent*> R get_maxHealthInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D883A0))(this);
	}
	template <typename R = bool> R get_hasMaxHealthInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D88428))(this);
	}
	template <typename R = void> R AddMaxHealthInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D88434))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxHealthInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D88548))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxHealthInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8865C))(this);
	}
	template <typename R = MaxHealthIncPercentComponent*> R get_maxHealthIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D88668))(this);
	}
	template <typename R = bool> R get_hasMaxHealthIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D886F0))(this);
	}
	template <typename R = void> R AddMaxHealthIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D886FC))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxHealthIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D88810))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxHealthIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D88924))(this);
	}
	template <typename R = MaxIncomingDamageComponent*> R get_maxIncomingDamage() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D88930))(this);
	}
	template <typename R = bool> R get_hasMaxIncomingDamage() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D889B8))(this);
	}
	template <typename R = void> R AddMaxIncomingDamage(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D889C4))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxIncomingDamage(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D88AD8))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxIncomingDamage() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D88BEC))(this);
	}
	template <typename R = MaxTenacityComponent*> R get_maxTenacity() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D88BF8))(this);
	}
	template <typename R = bool> R get_hasMaxTenacity() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D88C80))(this);
	}
	template <typename R = void> R AddMaxTenacity(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D88C8C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxTenacity(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D88DA0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxTenacity() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D88EB4))(this);
	}
	template <typename R = MaxTenacityIncComponent*> R get_maxTenacityInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D88EC0))(this);
	}
	template <typename R = bool> R get_hasMaxTenacityInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D88F48))(this);
	}
	template <typename R = void> R AddMaxTenacityInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D88F54))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxTenacityInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D89068))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxTenacityInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8917C))(this);
	}
	template <typename R = MaxTenacityIncPercentComponent*> R get_maxTenacityIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D89188))(this);
	}
	template <typename R = bool> R get_hasMaxTenacityIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D89210))(this);
	}
	template <typename R = void> R AddMaxTenacityIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8921C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxTenacityIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D89330))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxTenacityIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D89444))(this);
	}
	template <typename R = MediumArmorDecComponent*> R get_mediumArmorDec() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D89450))(this);
	}
	template <typename R = bool> R get_hasMediumArmorDec() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D894D8))(this);
	}
	template <typename R = void> R AddMediumArmorDec(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D894E4))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMediumArmorDec(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D895F8))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMediumArmorDec() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8970C))(this);
	}
	template <typename R = MediumArmorDecPercentComponent*> R get_mediumArmorDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D89718))(this);
	}
	template <typename R = bool> R get_hasMediumArmorDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D897A0))(this);
	}
	template <typename R = void> R AddMediumArmorDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D897AC))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMediumArmorDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D898C0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMediumArmorDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D899D4))(this);
	}
	template <typename R = MediumArmorIncComponent*> R get_mediumArmorInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D899E0))(this);
	}
	template <typename R = bool> R get_hasMediumArmorInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D89A68))(this);
	}
	template <typename R = void> R AddMediumArmorInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D89A74))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMediumArmorInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D89B88))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMediumArmorInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D89C9C))(this);
	}
	template <typename R = MediumArmorIncPercentComponent*> R get_mediumArmorIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D89CA8))(this);
	}
	template <typename R = bool> R get_hasMediumArmorIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D89D30))(this);
	}
	template <typename R = void> R AddMediumArmorIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D89D3C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMediumArmorIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D89E50))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMediumArmorIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D89F64))(this);
	}
	template <typename R = MeleeResistanceComponent*> R get_meleeResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D89F70))(this);
	}
	template <typename R = bool> R get_hasMeleeResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D89FF8))(this);
	}
	template <typename R = void> R AddMeleeResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8A004))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMeleeResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8A118))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMeleeResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8A22C))(this);
	}
	template <typename R = MetabolismComponent*> R get_metabolism() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8A238))(this);
	}
	template <typename R = bool> R get_hasMetabolism() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8A2C0))(this);
	}
	template <typename R = void> R AddMetabolism(float newHunger, float newThirst) {
		return ((R (*)(ModifierEntity*, float, float))(Il2CppBase() + 0x1D8A2CC))(this, newHunger, newThirst);
	}
	template <typename R = void> R ReplaceMetabolism(float newHunger, float newThirst) {
		return ((R (*)(ModifierEntity*, float, float))(Il2CppBase() + 0x1D8A3D4))(this, newHunger, newThirst);
	}
	template <typename R = void> R RemoveMetabolism() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8A4DC))(this);
	}
	template <typename R = MetabolismDamageResistanceComponent*> R get_metabolismDamageResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8A4E8))(this);
	}
	template <typename R = bool> R get_hasMetabolismDamageResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8A570))(this);
	}
	template <typename R = void> R AddMetabolismDamageResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8A57C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMetabolismDamageResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8A690))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMetabolismDamageResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8A7A4))(this);
	}
	template <typename R = MetabolismDamageVulnerabilityComponent*> R get_metabolismDamageVulnerability() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8A7B0))(this);
	}
	template <typename R = bool> R get_hasMetabolismDamageVulnerability() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8A838))(this);
	}
	template <typename R = void> R AddMetabolismDamageVulnerability(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8A844))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMetabolismDamageVulnerability(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8A958))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMetabolismDamageVulnerability() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8AA6C))(this);
	}
	template <typename R = bool> R get_isMinimapHidden() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8AA78))(this);
	}
	template <typename R = void> R set_isMinimapHidden(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8AA84))(this, value);
	}
	template <typename R = MorphingWeaponComponent*> R get_morphingWeapon() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8AB9C))(this);
	}
	template <typename R = bool> R get_hasMorphingWeapon() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8AC24))(this);
	}
	template <typename R = void> R AddMorphingWeapon(ItemConditionComponent* newItemCondition, Il2CppString* newName) {
		return ((R (*)(ModifierEntity*, ItemConditionComponent*, Il2CppString*))(Il2CppBase() + 0x1D8AC30))(this, newItemCondition, newName);
	}
	template <typename R = void> R ReplaceMorphingWeapon(ItemConditionComponent* newItemCondition, Il2CppString* newName) {
		return ((R (*)(ModifierEntity*, ItemConditionComponent*, Il2CppString*))(Il2CppBase() + 0x1D8AD58))(this, newItemCondition, newName);
	}
	template <typename R = void> R RemoveMorphingWeapon() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8AE80))(this);
	}
	template <typename R = MountSpeedComponent*> R get_mountSpeed() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8AE8C))(this);
	}
	template <typename R = bool> R get_hasMountSpeed() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8AF14))(this);
	}
	template <typename R = void> R AddMountSpeed(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8AF20))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMountSpeed(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8B034))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMountSpeed() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8B148))(this);
	}
	template <typename R = MountSpeedDecPercentComponent*> R get_mountSpeedDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8B154))(this);
	}
	template <typename R = bool> R get_hasMountSpeedDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8B1DC))(this);
	}
	template <typename R = void> R AddMountSpeedDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8B1E8))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMountSpeedDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8B2FC))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMountSpeedDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8B410))(this);
	}
	template <typename R = MountSpeedIncPercentComponent*> R get_mountSpeedIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8B41C))(this);
	}
	template <typename R = bool> R get_hasMountSpeedIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8B4A4))(this);
	}
	template <typename R = void> R AddMountSpeedIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8B4B0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMountSpeedIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8B5C4))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMountSpeedIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8B6D8))(this);
	}
	template <typename R = bool> R get_isNaked() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8B6E4))(this);
	}
	template <typename R = void> R set_isNaked(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8B6F0))(this, value);
	}
	template <typename R = OutcomingHealBonusComponent*> R get_outcomingHealBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8B808))(this);
	}
	template <typename R = bool> R get_hasOutcomingHealBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8B890))(this);
	}
	template <typename R = void> R AddOutcomingHealBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8B89C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceOutcomingHealBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8B9B0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveOutcomingHealBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8BAC4))(this);
	}
	template <typename R = OverrideCooldownsComponent*> R get_overrideCooldowns() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8BAD0))(this);
	}
	template <typename R = bool> R get_hasOverrideCooldowns() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8BB58))(this);
	}
	template <typename R = void> R AddOverrideCooldowns(Il2CppDictionary<Il2CppString*, float>* newData) {
		return ((R (*)(ModifierEntity*, Il2CppDictionary<Il2CppString*, float>*))(Il2CppBase() + 0x1D8BB64))(this, newData);
	}
	template <typename R = void> R ReplaceOverrideCooldowns(Il2CppDictionary<Il2CppString*, float>* newData) {
		return ((R (*)(ModifierEntity*, Il2CppDictionary<Il2CppString*, float>*))(Il2CppBase() + 0x1D8BC78))(this, newData);
	}
	template <typename R = void> R RemoveOverrideCooldowns() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8BD8C))(this);
	}
	template <typename R = bool> R get_isPatrolling() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8BD98))(this);
	}
	template <typename R = void> R set_isPatrolling(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8BDA4))(this, value);
	}
	template <typename R = bool> R get_isPermanentMoving() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8BEBC))(this);
	}
	template <typename R = void> R set_isPermanentMoving(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8BEC8))(this, value);
	}
	template <typename R = PetExperienceBonusComponent*> R get_petExperienceBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8BFE0))(this);
	}
	template <typename R = bool> R get_hasPetExperienceBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8C068))(this);
	}
	template <typename R = void> R AddPetExperienceBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8C074))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplacePetExperienceBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8C188))(this, newValue, newGroup);
	}
	template <typename R = void> R RemovePetExperienceBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8C29C))(this);
	}
	template <typename R = PlayerDamageBonusComponent*> R get_playerDamageBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8C2A8))(this);
	}
	template <typename R = bool> R get_hasPlayerDamageBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8C330))(this);
	}
	template <typename R = void> R AddPlayerDamageBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8C33C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplacePlayerDamageBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8C450))(this, newValue, newGroup);
	}
	template <typename R = void> R RemovePlayerDamageBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8C564))(this);
	}
	template <typename R = PlayerDamageReductionComponent*> R get_playerDamageReduction() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8C570))(this);
	}
	template <typename R = bool> R get_hasPlayerDamageReduction() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8C5F8))(this);
	}
	template <typename R = void> R AddPlayerDamageReduction(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8C604))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplacePlayerDamageReduction(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8C718))(this, newValue, newGroup);
	}
	template <typename R = void> R RemovePlayerDamageReduction() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8C82C))(this);
	}
	template <typename R = PlayerResistanceComponent*> R get_playerResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8C838))(this);
	}
	template <typename R = bool> R get_hasPlayerResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8C8C0))(this);
	}
	template <typename R = void> R AddPlayerResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8C8CC))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplacePlayerResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8C9E0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemovePlayerResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8CAF4))(this);
	}
	template <typename R = bool> R get_isPoisoned() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8CB00))(this);
	}
	template <typename R = void> R set_isPoisoned(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8CB0C))(this, value);
	}
	template <typename R = PowerIncComponent*> R get_powerInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8CC24))(this);
	}
	template <typename R = bool> R get_hasPowerInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8CCAC))(this);
	}
	template <typename R = void> R AddPowerInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8CCB8))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplacePowerInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8CDCC))(this, newValue, newGroup);
	}
	template <typename R = void> R RemovePowerInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8CEE0))(this);
	}
	template <typename R = RangedResistanceComponent*> R get_rangedResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8CEEC))(this);
	}
	template <typename R = bool> R get_hasRangedResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8CF74))(this);
	}
	template <typename R = void> R AddRangedResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8CF80))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceRangedResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8D094))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveRangedResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8D1A8))(this);
	}
	template <typename R = bool> R get_isRiding() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8D1B4))(this);
	}
	template <typename R = void> R set_isRiding(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8D1C0))(this, value);
	}
	template <typename R = bool> R get_isRootImmune() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8D2D8))(this);
	}
	template <typename R = void> R set_isRootImmune(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8D2E4))(this, value);
	}
	template <typename R = RootedComponent*> R get_rooted() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8D3FC))(this);
	}
	template <typename R = bool> R get_hasRooted() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8D484))(this);
	}
	template <typename R = void> R AddRooted(bool newStackable, bool newIgnoreImmune) {
		return ((R (*)(ModifierEntity*, bool, bool))(Il2CppBase() + 0x1D8D490))(this, newStackable, newIgnoreImmune);
	}
	template <typename R = void> R ReplaceRooted(bool newStackable, bool newIgnoreImmune) {
		return ((R (*)(ModifierEntity*, bool, bool))(Il2CppBase() + 0x1D8D5A4))(this, newStackable, newIgnoreImmune);
	}
	template <typename R = void> R RemoveRooted() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8D6B8))(this);
	}
	template <typename R = bool> R get_isRunesDisabled() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8D6C4))(this);
	}
	template <typename R = void> R set_isRunesDisabled(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8D6D0))(this, value);
	}
	template <typename R = SatiationReductionComponent*> R get_satiationReduction() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8D7E8))(this);
	}
	template <typename R = bool> R get_hasSatiationReduction() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8D870))(this);
	}
	template <typename R = void> R AddSatiationReduction(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8D87C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSatiationReduction(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8D990))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSatiationReduction() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8DAA4))(this);
	}
	template <typename R = SilenceComponent*> R get_silence() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8DAB0))(this);
	}
	template <typename R = bool> R get_hasSilence() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8DB38))(this);
	}
	template <typename R = void> R AddSilence(bool newIgnoreImmune) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8DB44))(this, newIgnoreImmune);
	}
	template <typename R = void> R ReplaceSilence(bool newIgnoreImmune) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8DC4C))(this, newIgnoreImmune);
	}
	template <typename R = void> R RemoveSilence() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8DD54))(this);
	}
	template <typename R = bool> R get_isSilenceImmune() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8DD60))(this);
	}
	template <typename R = void> R set_isSilenceImmune(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8DD6C))(this, value);
	}
	template <typename R = SkillDamageBonusComponent*> R get_skillDamageBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8DE84))(this);
	}
	template <typename R = bool> R get_hasSkillDamageBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8DF0C))(this);
	}
	template <typename R = void> R AddSkillDamageBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8DF18))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSkillDamageBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8E02C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSkillDamageBonus() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8E140))(this);
	}
	template <typename R = SneakBackstabComponent*> R get_sneakBackstab() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8E14C))(this);
	}
	template <typename R = bool> R get_hasSneakBackstab() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8E1D4))(this);
	}
	template <typename R = void> R AddSneakBackstab(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8E1E0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSneakBackstab(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8E2F4))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSneakBackstab() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8E408))(this);
	}
	template <typename R = bool> R get_isSneak() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8E414))(this);
	}
	template <typename R = void> R set_isSneak(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8E420))(this, value);
	}
	template <typename R = bool> R get_isSneakDamageImmune() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8E538))(this);
	}
	template <typename R = void> R set_isSneakDamageImmune(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8E544))(this, value);
	}
	template <typename R = SneakDamageResistanceComponent*> R get_sneakDamageResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8E65C))(this);
	}
	template <typename R = bool> R get_hasSneakDamageResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8E6E4))(this);
	}
	template <typename R = void> R AddSneakDamageResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8E6F0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSneakDamageResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8E804))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSneakDamageResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8E918))(this);
	}
	template <typename R = bool> R get_isSneakImmune() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8E924))(this);
	}
	template <typename R = void> R set_isSneakImmune(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8E930))(this, value);
	}
	template <typename R = bool> R get_isSpeedDecImmune() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8EA48))(this);
	}
	template <typename R = void> R set_isSpeedDecImmune(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8EA54))(this, value);
	}
	template <typename R = SpeedDecPercentComponent*> R get_speedDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8EB6C))(this);
	}
	template <typename R = bool> R get_hasSpeedDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8EBF4))(this);
	}
	template <typename R = void> R AddSpeedDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8EC00))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSpeedDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8ED14))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSpeedDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8EE28))(this);
	}
	template <typename R = SpeedIncComponent*> R get_speedInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8EE34))(this);
	}
	template <typename R = bool> R get_hasSpeedInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8EEBC))(this);
	}
	template <typename R = void> R AddSpeedInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8EEC8))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSpeedInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8EFDC))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSpeedInc() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8F0F0))(this);
	}
	template <typename R = SpeedIncPercentComponent*> R get_speedIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8F0FC))(this);
	}
	template <typename R = bool> R get_hasSpeedIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8F184))(this);
	}
	template <typename R = void> R AddSpeedIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8F190))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSpeedIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8F2A4))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSpeedIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8F3B8))(this);
	}
	template <typename R = SpeedMovingComponent*> R get_speedMoving() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8F3C4))(this);
	}
	template <typename R = bool> R get_hasSpeedMoving() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8F44C))(this);
	}
	template <typename R = void> R AddSpeedMoving(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8F458))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSpeedMoving(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8F56C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSpeedMoving() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8F680))(this);
	}
	template <typename R = SplashResistanceComponent*> R get_splashResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8F68C))(this);
	}
	template <typename R = bool> R get_hasSplashResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8F714))(this);
	}
	template <typename R = void> R AddSplashResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8F720))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceSplashResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8F834))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveSplashResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8F948))(this);
	}
	template <typename R = bool> R get_isSprint() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8F954))(this);
	}
	template <typename R = void> R set_isSprint(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D8F960))(this, value);
	}
	template <typename R = StatusResistanceComponent*> R get_statusResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8FA78))(this);
	}
	template <typename R = bool> R get_hasStatusResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8FB00))(this);
	}
	template <typename R = void> R AddStatusResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8FB0C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceStatusResistance(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8FC20))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveStatusResistance() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8FD34))(this);
	}
	template <typename R = StatusVulnerabilityComponent*> R get_statusVulnerability() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8FD40))(this);
	}
	template <typename R = bool> R get_hasStatusVulnerability() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8FDC8))(this);
	}
	template <typename R = void> R AddStatusVulnerability(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8FDD4))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceStatusVulnerability(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D8FEE8))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveStatusVulnerability() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D8FFFC))(this);
	}
	template <typename R = bool> R get_isStunImmune() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D90008))(this);
	}
	template <typename R = void> R set_isStunImmune(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D90014))(this, value);
	}
	template <typename R = StunnedComponent*> R get_stunned() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D9012C))(this);
	}
	template <typename R = bool> R get_hasStunned() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D901B4))(this);
	}
	template <typename R = void> R AddStunned(bool newStackable, bool newIgnoreImmune) {
		return ((R (*)(ModifierEntity*, bool, bool))(Il2CppBase() + 0x1D901C0))(this, newStackable, newIgnoreImmune);
	}
	template <typename R = void> R ReplaceStunned(bool newStackable, bool newIgnoreImmune) {
		return ((R (*)(ModifierEntity*, bool, bool))(Il2CppBase() + 0x1D902D4))(this, newStackable, newIgnoreImmune);
	}
	template <typename R = void> R RemoveStunned() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D903E8))(this);
	}
	template <typename R = TeamUnhiddenComponent*> R get_teamUnhidden() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D903F4))(this);
	}
	template <typename R = bool> R get_hasTeamUnhidden() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D9047C))(this);
	}
	template <typename R = void> R AddTeamUnhidden(HashSet1<int64_t>* newTeams) {
		return ((R (*)(ModifierEntity*, HashSet1<int64_t>*))(Il2CppBase() + 0x1D90488))(this, newTeams);
	}
	template <typename R = void> R ReplaceTeamUnhidden(HashSet1<int64_t>* newTeams) {
		return ((R (*)(ModifierEntity*, HashSet1<int64_t>*))(Il2CppBase() + 0x1D9059C))(this, newTeams);
	}
	template <typename R = void> R RemoveTeamUnhidden() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D906B0))(this);
	}
	template <typename R = ThirstSpeedDecPercentComponent*> R get_thirstSpeedDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D906BC))(this);
	}
	template <typename R = bool> R get_hasThirstSpeedDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D90744))(this);
	}
	template <typename R = void> R AddThirstSpeedDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D90750))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceThirstSpeedDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D90864))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveThirstSpeedDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D90978))(this);
	}
	template <typename R = ThirstSpeedIncPercentComponent*> R get_thirstSpeedIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D90984))(this);
	}
	template <typename R = bool> R get_hasThirstSpeedIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D90A0C))(this);
	}
	template <typename R = void> R AddThirstSpeedIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D90A18))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceThirstSpeedIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D90B2C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveThirstSpeedIncPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D90C40))(this);
	}
	template <typename R = TimeOutExitDecPercentComponent*> R get_timeOutExitDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D90C4C))(this);
	}
	template <typename R = bool> R get_hasTimeOutExitDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D90CD4))(this);
	}
	template <typename R = void> R AddTimeOutExitDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D90CE0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceTimeOutExitDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D90DF4))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveTimeOutExitDecPercent() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D90F08))(this);
	}
	template <typename R = TotComponent*> R get_tot() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D90F14))(this);
	}
	template <typename R = bool> R get_hasTot() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D90F9C))(this);
	}
	template <typename R = void> R AddTot(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D90FA8))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceTot(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D910BC))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveTot() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D911D0))(this);
	}
	template <typename R = bool> R get_isTrueVision() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D911DC))(this);
	}
	template <typename R = void> R set_isTrueVision(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D911E8))(this, value);
	}
	template <typename R = bool> R get_isUnhidden() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D91300))(this);
	}
	template <typename R = void> R set_isUnhidden(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D9130C))(this, value);
	}
	template <typename R = bool> R get_isUpdateMagicIcon() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D91424))(this);
	}
	template <typename R = void> R set_isUpdateMagicIcon(bool value) {
		return ((R (*)(ModifierEntity*, bool))(Il2CppBase() + 0x1D91430))(this, value);
	}
	template <typename R = UpdateTimeComponent*> R get_updateTime() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D91548))(this);
	}
	template <typename R = bool> R get_hasUpdateTime() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D915D0))(this);
	}
	template <typename R = void> R AddUpdateTime(int64_t newValue) {
		return ((R (*)(ModifierEntity*, int64_t))(Il2CppBase() + 0x1D915DC))(this, newValue);
	}
	template <typename R = void> R ReplaceUpdateTime(int64_t newValue) {
		return ((R (*)(ModifierEntity*, int64_t))(Il2CppBase() + 0x1D916E0))(this, newValue);
	}
	template <typename R = void> R RemoveUpdateTime() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D917E4))(this);
	}
	template <typename R = WeaponDotComponent*> R get_weaponDot() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D917F0))(this);
	}
	template <typename R = bool> R get_hasWeaponDot() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D91878))(this);
	}
	template <typename R = void> R AddWeaponDot(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D91884))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceWeaponDot(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ModifierEntity*, float, ModifierGroup))(Il2CppBase() + 0x1D91998))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveWeaponDot() {
		return ((R (*)(ModifierEntity*))(Il2CppBase() + 0x1D91AAC))(this);
	}

};

