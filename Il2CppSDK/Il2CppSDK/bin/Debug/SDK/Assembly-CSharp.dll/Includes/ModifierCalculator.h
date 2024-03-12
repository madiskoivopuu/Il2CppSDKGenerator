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
	template <typename T = float> static T GetSum(void* magics, int32_t componentDataIndex) {
		return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x1D6A924))(0, magics, componentDataIndex);
	}
	template <typename T = float> static T GetCoef(void* magics, int32_t componentDataIndex) {
		return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x1D6AB74))(0, magics, componentDataIndex);
	}
	template <typename T = float> static T GetBool(void* magics, int32_t componentDataIndex) {
		return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x1D6ADC4))(0, magics, componentDataIndex);
	}
	template <typename T = float> static T GetMax(void* magics, int32_t componentDataIndex) {
		return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x1D6B00C))(0, magics, componentDataIndex);
	}
	template <typename T = float> static T GetMax_1(Il2CppList<uintptr_t>* magicsData, int32_t componentDataIndex) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, int32_t))(Il2CppBase() + 0x1D6B264))(0, magicsData, componentDataIndex);
	}
	template <typename T = void*> static T GetMin(void* magics, int32_t componentDataIndex) {
		return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x1D6B49C))(0, magics, componentDataIndex);
	}
	template <typename T = float> static T GetValueSum(void* magics, int32_t componentDataIndex) {
		return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x1D6B788))(0, magics, componentDataIndex);
	}
	template <typename T = float> static T GetValueSum_1(Il2CppList<uintptr_t>* magicsData, int32_t componentDataIndex) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, int32_t))(Il2CppBase() + 0x1D6BCA4))(0, magicsData, componentDataIndex);
	}
	template <typename T = float> static T GetPercentBonusWithChance(uintptr_t world, uintptr_t target, void* magics, int32_t componentDataIndex, uintptr_t additional, bool withoutChance) {
		return ((T (*)(void *, uintptr_t, uintptr_t, void*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x1D6C1A0))(0, world, target, magics, componentDataIndex, additional, withoutChance);
	}
	template <typename T = float> static T GetPercentBonus(void* magics, int32_t componentDataIndex) {
		return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x1D6CAC8))(0, magics, componentDataIndex);
	}
	template <typename T = float> static T GetPercentBonus_1(Il2CppList<uintptr_t>* magicsData, int32_t componentDataIndex) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, int32_t))(Il2CppBase() + 0x1D6D0E0))(0, magicsData, componentDataIndex);
	}
	template <typename T = float> static T GetPercentReduction(void* magics, int32_t componentDataIndex) {
		return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x1D6D6D8))(0, magics, componentDataIndex);
	}
	template <typename T = float> static T GetPercentReductionWithChance(uintptr_t world, void* magics, int32_t componentDataIndex, uintptr_t additional) {
		return ((T (*)(void *, uintptr_t, void*, int32_t, uintptr_t))(Il2CppBase() + 0x1D6DD00))(0, world, magics, componentDataIndex, additional);
	}
	template <typename T = uintptr_t> static T GetLatestWithComponent(void* magics, int32_t componentDataIndex) {
		return ((T (*)(void *, void*, int32_t))(Il2CppBase() + 0x1D6E510))(0, magics, componentDataIndex);
	}
	template <typename T = void*> static T CalcDot(Il2CppList<uintptr_t>* magics, int32_t componentIndex) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, int32_t))(Il2CppBase() + 0x1D6E6E8))(0, magics, componentIndex);
	}
	template <typename T = void*> static T CalcHot(Il2CppList<uintptr_t>* magics, int32_t componentIndex) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, int32_t))(Il2CppBase() + 0x1D6ECA8))(0, magics, componentIndex);
	}
	template <typename T = void*> static T ApplyDamageBlock(uintptr_t world, void* magics, bool stunnedOrImpotent) {
		return ((T (*)(void *, uintptr_t, void*, bool))(Il2CppBase() + 0x1D6F214))(0, world, magics, stunnedOrImpotent);
	}
	template <typename T = void> static T SetPursuit(uintptr_t world, uintptr_t target, uintptr_t magic) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1D6F9B4))(0, world, target, magic);
	}
	template <typename T = void> static T UpdateCooldowns(uintptr_t world, uintptr_t target, Il2CppDictionary<Il2CppString*, float>* overrideCooldowns) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppDictionary<Il2CppString*, float>*))(Il2CppBase() + 0x1D6F9B8))(0, world, target, overrideCooldowns);
	}
	template <typename T = int32_t> static T GetModifierInfoIndex(int32_t componentIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1D6F9BC))(0, componentIndex);
	}

};

}
