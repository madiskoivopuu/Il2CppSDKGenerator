#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModifierCalculator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModifierCalculator"));
	}

	template <typename R = Il2CppArray<float>*> static R& _values() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> static R& _changed() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = Il2CppArray<ModifierInfo*>*> static R& ModifiersData() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = Il2CppArray<int32_t>*> static R& _componentIndexToInfoIndex() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename R = void> static R Reset() {
		return ((R (*)(void *))(Il2CppBase() + 0x1D6A818))(0);
	}
	template <typename R = float> static R GetSum(HashSet1MagicEntity*>* magics, int32_t componentDataIndex) {
		return ((R (*)(void *, HashSet1MagicEntity*>*, int32_t))(Il2CppBase() + 0x1D6A924))(0, magics, componentDataIndex);
	}
	template <typename R = float> static R GetCoef(HashSet1MagicEntity*>* magics, int32_t componentDataIndex) {
		return ((R (*)(void *, HashSet1MagicEntity*>*, int32_t))(Il2CppBase() + 0x1D6AB74))(0, magics, componentDataIndex);
	}
	template <typename R = float> static R GetBool(HashSet1MagicEntity*>* magics, int32_t componentDataIndex) {
		return ((R (*)(void *, HashSet1MagicEntity*>*, int32_t))(Il2CppBase() + 0x1D6ADC4))(0, magics, componentDataIndex);
	}
	template <typename R = float> static R GetMax(HashSet1MagicEntity*>* magics, int32_t componentDataIndex) {
		return ((R (*)(void *, HashSet1MagicEntity*>*, int32_t))(Il2CppBase() + 0x1D6B00C))(0, magics, componentDataIndex);
	}
	template <typename R = float> static R GetMax_1(Il2CppList<MagicDataEntity*>* magicsData, int32_t componentDataIndex) {
		return ((R (*)(void *, Il2CppList<MagicDataEntity*>*, int32_t))(Il2CppBase() + 0x1D6B264))(0, magicsData, componentDataIndex);
	}
	 static Nullable1float>* GetMin(HashSet1MagicEntity*>* magics, int32_t componentDataIndex) {
		return ((Nullable1float>* (*)(void *, HashSet1MagicEntity*>*, int32_t))(Il2CppBase() + 0x1D6B49C))(0, magics, componentDataIndex);
	}
	template <typename R = float> static R GetValueSum(HashSet1MagicEntity*>* magics, int32_t componentDataIndex) {
		return ((R (*)(void *, HashSet1MagicEntity*>*, int32_t))(Il2CppBase() + 0x1D6B788))(0, magics, componentDataIndex);
	}
	template <typename R = float> static R GetValueSum_1(Il2CppList<MagicDataEntity*>* magicsData, int32_t componentDataIndex) {
		return ((R (*)(void *, Il2CppList<MagicDataEntity*>*, int32_t))(Il2CppBase() + 0x1D6BCA4))(0, magicsData, componentDataIndex);
	}
	template <typename R = float> static R GetPercentBonusWithChance(ICommonContexts* world, GameEntity* target, HashSet1MagicEntity*>* magics, int32_t componentDataIndex, IModifier* additional, bool withoutChance) {
		return ((R (*)(void *, ICommonContexts*, GameEntity*, HashSet1MagicEntity*>*, int32_t, IModifier*, bool))(Il2CppBase() + 0x1D6C1A0))(0, world, target, magics, componentDataIndex, additional, withoutChance);
	}
	template <typename R = float> static R GetPercentBonus(HashSet1MagicEntity*>* magics, int32_t componentDataIndex) {
		return ((R (*)(void *, HashSet1MagicEntity*>*, int32_t))(Il2CppBase() + 0x1D6CAC8))(0, magics, componentDataIndex);
	}
	template <typename R = float> static R GetPercentBonus_1(Il2CppList<MagicDataEntity*>* magicsData, int32_t componentDataIndex) {
		return ((R (*)(void *, Il2CppList<MagicDataEntity*>*, int32_t))(Il2CppBase() + 0x1D6D0E0))(0, magicsData, componentDataIndex);
	}
	template <typename R = float> static R GetPercentReduction(HashSet1MagicEntity*>* magics, int32_t componentDataIndex) {
		return ((R (*)(void *, HashSet1MagicEntity*>*, int32_t))(Il2CppBase() + 0x1D6D6D8))(0, magics, componentDataIndex);
	}
	template <typename R = float> static R GetPercentReductionWithChance(ICommonContexts* world, HashSet1MagicEntity*>* magics, int32_t componentDataIndex, IModifier* additional) {
		return ((R (*)(void *, ICommonContexts*, HashSet1MagicEntity*>*, int32_t, IModifier*))(Il2CppBase() + 0x1D6DD00))(0, world, magics, componentDataIndex, additional);
	}
	template <typename R = MagicEntity*> static R GetLatestWithComponent(HashSet1MagicEntity*>* magics, int32_t componentDataIndex) {
		return ((R (*)(void *, HashSet1MagicEntity*>*, int32_t))(Il2CppBase() + 0x1D6E510))(0, magics, componentDataIndex);
	}
	 static ValueTuple2MagicEntity*, float>* CalcDot(Il2CppList<MagicEntity*>* magics, int32_t componentIndex) {
		return ((ValueTuple2MagicEntity*, float>* (*)(void *, Il2CppList<MagicEntity*>*, int32_t))(Il2CppBase() + 0x1D6E6E8))(0, magics, componentIndex);
	}
	 static ValueTuple2MagicEntity*, float>* CalcHot(Il2CppList<MagicEntity*>* magics, int32_t componentIndex) {
		return ((ValueTuple2MagicEntity*, float>* (*)(void *, Il2CppList<MagicEntity*>*, int32_t))(Il2CppBase() + 0x1D6ECA8))(0, magics, componentIndex);
	}
	 static ValueTuple2float, BaseApplyEffectComponent*>* ApplyDamageBlock(ICommonContexts* world, HashSet1MagicEntity*>* magics, bool stunnedOrImpotent) {
		return ((ValueTuple2float, BaseApplyEffectComponent*>* (*)(void *, ICommonContexts*, HashSet1MagicEntity*>*, bool))(Il2CppBase() + 0x1D6F214))(0, world, magics, stunnedOrImpotent);
	}
	template <typename R = void> static R SetPursuit(ICommonContexts* world, GameEntity* target, MagicEntity* magic) {
		return ((R (*)(void *, ICommonContexts*, GameEntity*, MagicEntity*))(Il2CppBase() + 0x1D6F9B4))(0, world, target, magic);
	}
	template <typename R = void> static R UpdateCooldowns(ICommonContexts* world, GameEntity* target, Il2CppDictionary<Il2CppString*, float>* overrideCooldowns) {
		return ((R (*)(void *, ICommonContexts*, GameEntity*, Il2CppDictionary<Il2CppString*, float>*))(Il2CppBase() + 0x1D6F9B8))(0, world, target, overrideCooldowns);
	}
	template <typename R = int32_t> static R GetModifierInfoIndex(int32_t componentIndex) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x1D6F9BC))(0, componentIndex);
	}

};

