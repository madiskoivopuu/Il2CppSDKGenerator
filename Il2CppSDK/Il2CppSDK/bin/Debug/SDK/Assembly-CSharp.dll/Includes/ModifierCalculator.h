#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModifierCalculator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModifierCalculator"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& _values() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& _changed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ModifiersData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _componentIndexToInfoIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> static T Reset() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D6A818))(0);
	}
	template <typename T = float> static T GetSum(HashSet1MagicEntity*>* magics, int32_t componentDataIndex) {
		return ((T (*)(void *, HashSet1MagicEntity*>*, int32_t))(Il2CppBase() + 0x1D6A924))(0, magics, componentDataIndex);
	}
	template <typename T = float> static T GetCoef(HashSet1MagicEntity*>* magics, int32_t componentDataIndex) {
		return ((T (*)(void *, HashSet1MagicEntity*>*, int32_t))(Il2CppBase() + 0x1D6AB74))(0, magics, componentDataIndex);
	}
	template <typename T = float> static T GetBool(HashSet1MagicEntity*>* magics, int32_t componentDataIndex) {
		return ((T (*)(void *, HashSet1MagicEntity*>*, int32_t))(Il2CppBase() + 0x1D6ADC4))(0, magics, componentDataIndex);
	}
	template <typename T = float> static T GetMax(HashSet1MagicEntity*>* magics, int32_t componentDataIndex) {
		return ((T (*)(void *, HashSet1MagicEntity*>*, int32_t))(Il2CppBase() + 0x1D6B00C))(0, magics, componentDataIndex);
	}
	template <typename T = float> static T GetMax_1(Il2CppList<MagicDataEntity*>* magicsData, int32_t componentDataIndex) {
		return ((T (*)(void *, Il2CppList<MagicDataEntity*>*, int32_t))(Il2CppBase() + 0x1D6B264))(0, magicsData, componentDataIndex);
	}
	template <typename T = Nullable1float>*> static T GetMin(HashSet1MagicEntity*>* magics, int32_t componentDataIndex) {
		return ((T (*)(void *, HashSet1MagicEntity*>*, int32_t))(Il2CppBase() + 0x1D6B49C))(0, magics, componentDataIndex);
	}
	template <typename T = float> static T GetValueSum(HashSet1MagicEntity*>* magics, int32_t componentDataIndex) {
		return ((T (*)(void *, HashSet1MagicEntity*>*, int32_t))(Il2CppBase() + 0x1D6B788))(0, magics, componentDataIndex);
	}
	template <typename T = float> static T GetValueSum_1(Il2CppList<MagicDataEntity*>* magicsData, int32_t componentDataIndex) {
		return ((T (*)(void *, Il2CppList<MagicDataEntity*>*, int32_t))(Il2CppBase() + 0x1D6BCA4))(0, magicsData, componentDataIndex);
	}
	template <typename T = float> static T GetPercentBonusWithChance(ICommonContexts* world, GameEntity* target, HashSet1MagicEntity*>* magics, int32_t componentDataIndex, IModifier* additional, bool withoutChance) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*, HashSet1MagicEntity*>*, int32_t, IModifier*, bool))(Il2CppBase() + 0x1D6C1A0))(0, world, target, magics, componentDataIndex, additional, withoutChance);
	}
	template <typename T = float> static T GetPercentBonus(HashSet1MagicEntity*>* magics, int32_t componentDataIndex) {
		return ((T (*)(void *, HashSet1MagicEntity*>*, int32_t))(Il2CppBase() + 0x1D6CAC8))(0, magics, componentDataIndex);
	}
	template <typename T = float> static T GetPercentBonus_1(Il2CppList<MagicDataEntity*>* magicsData, int32_t componentDataIndex) {
		return ((T (*)(void *, Il2CppList<MagicDataEntity*>*, int32_t))(Il2CppBase() + 0x1D6D0E0))(0, magicsData, componentDataIndex);
	}
	template <typename T = float> static T GetPercentReduction(HashSet1MagicEntity*>* magics, int32_t componentDataIndex) {
		return ((T (*)(void *, HashSet1MagicEntity*>*, int32_t))(Il2CppBase() + 0x1D6D6D8))(0, magics, componentDataIndex);
	}
	template <typename T = float> static T GetPercentReductionWithChance(ICommonContexts* world, HashSet1MagicEntity*>* magics, int32_t componentDataIndex, IModifier* additional) {
		return ((T (*)(void *, ICommonContexts*, HashSet1MagicEntity*>*, int32_t, IModifier*))(Il2CppBase() + 0x1D6DD00))(0, world, magics, componentDataIndex, additional);
	}
	template <typename T = MagicEntity*> static T GetLatestWithComponent(HashSet1MagicEntity*>* magics, int32_t componentDataIndex) {
		return ((T (*)(void *, HashSet1MagicEntity*>*, int32_t))(Il2CppBase() + 0x1D6E510))(0, magics, componentDataIndex);
	}
	template <typename T = ValueTuple2MagicEntity*, float>*> static T CalcDot(Il2CppList<MagicEntity*>* magics, int32_t componentIndex) {
		return ((T (*)(void *, Il2CppList<MagicEntity*>*, int32_t))(Il2CppBase() + 0x1D6E6E8))(0, magics, componentIndex);
	}
	template <typename T = ValueTuple2MagicEntity*, float>*> static T CalcHot(Il2CppList<MagicEntity*>* magics, int32_t componentIndex) {
		return ((T (*)(void *, Il2CppList<MagicEntity*>*, int32_t))(Il2CppBase() + 0x1D6ECA8))(0, magics, componentIndex);
	}
	template <typename T = ValueTuple2float, BaseApplyEffectComponent*>*> static T ApplyDamageBlock(ICommonContexts* world, HashSet1MagicEntity*>* magics, bool stunnedOrImpotent) {
		return ((T (*)(void *, ICommonContexts*, HashSet1MagicEntity*>*, bool))(Il2CppBase() + 0x1D6F214))(0, world, magics, stunnedOrImpotent);
	}
	template <typename T = void> static T SetPursuit(ICommonContexts* world, GameEntity* target, MagicEntity* magic) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*, MagicEntity*))(Il2CppBase() + 0x1D6F9B4))(0, world, target, magic);
	}
	template <typename T = void> static T UpdateCooldowns(ICommonContexts* world, GameEntity* target, Il2CppDictionary<Il2CppString*, float>* overrideCooldowns) {
		return ((T (*)(void *, ICommonContexts*, GameEntity*, Il2CppDictionary<Il2CppString*, float>*))(Il2CppBase() + 0x1D6F9B8))(0, world, target, overrideCooldowns);
	}
	template <typename T = int32_t> static T GetModifierInfoIndex(int32_t componentIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1D6F9BC))(0, componentIndex);
	}

};

