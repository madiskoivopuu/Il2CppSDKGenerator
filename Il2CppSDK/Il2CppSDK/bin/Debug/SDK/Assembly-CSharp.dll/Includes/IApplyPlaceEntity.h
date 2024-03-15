#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyPlaceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyPlaceEntity"));
	}


	template <typename R = ApplyPlaceComponent*> R get_applyPlace() {
		return ((R (*)(IApplyPlaceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasApplyPlace() {
		return ((R (*)(IApplyPlaceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddApplyPlace(ApplyPlaceParams* newParams, Il2CppArray<ApplyPlaceItem*>* newItems, int32_t newRandomCount) {
		return ((R (*)(IApplyPlaceEntity*, ApplyPlaceParams*, Il2CppArray<ApplyPlaceItem*>*, int32_t))(Il2CppBase() + 0x0))(this, newParams, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceApplyPlace(ApplyPlaceParams* newParams, Il2CppArray<ApplyPlaceItem*>* newItems, int32_t newRandomCount) {
		return ((R (*)(IApplyPlaceEntity*, ApplyPlaceParams*, Il2CppArray<ApplyPlaceItem*>*, int32_t))(Il2CppBase() + 0x0))(this, newParams, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveApplyPlace() {
		return ((R (*)(IApplyPlaceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

