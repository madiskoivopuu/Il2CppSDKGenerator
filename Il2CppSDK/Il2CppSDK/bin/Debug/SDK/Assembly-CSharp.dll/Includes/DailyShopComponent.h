#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DailyShopComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DailyShopComponent"));
	}

	template <typename T = float> T& Tax() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& BaseSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& SizePerGrade() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Slots() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& GradeLimits() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T GetSlotRequiredGrade(int32_t slotIndex) {
		return ((T (*)(DailyShopComponent*, int32_t))(Il2CppBase() + 0x16474E4))(this, slotIndex);
	}
	template <typename T = int32_t> T GetGradeLimit(int32_t index) {
		return ((T (*)(DailyShopComponent*, int32_t))(Il2CppBase() + 0x1647508))(this, index);
	}
	template <typename T = int32_t> T GetSize(int32_t grade) {
		return ((T (*)(DailyShopComponent*, int32_t))(Il2CppBase() + 0x1647578))(this, grade);
	}
	template <typename T = bool> T IsAvailable(int32_t grade, int32_t slotIndex) {
		return ((T (*)(DailyShopComponent*, int32_t, int32_t))(Il2CppBase() + 0x164759C))(this, grade, slotIndex);
	}
	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(DailyShopComponent*, uintptr_t))(Il2CppBase() + 0x16475C8))(this, targetObject);
	}

};

}
