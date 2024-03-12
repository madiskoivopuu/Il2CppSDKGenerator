#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyPlaceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyPlaceEntity"));
	}


	template <typename T = uintptr_t> T get_applyPlace() {
		return ((T (*)(IApplyPlaceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasApplyPlace() {
		return ((T (*)(IApplyPlaceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddApplyPlace(uintptr_t newParams, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(IApplyPlaceEntity*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, newParams, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceApplyPlace(uintptr_t newParams, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(IApplyPlaceEntity*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, newParams, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveApplyPlace() {
		return ((T (*)(IApplyPlaceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
