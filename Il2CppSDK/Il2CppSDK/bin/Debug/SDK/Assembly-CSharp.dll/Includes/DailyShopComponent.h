#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DailyShopComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DailyShopComponent"));
	}

	template <typename R = float> R& Tax() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& BaseSize() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> R& SizePerGrade() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Slots() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<SlotGradeLimit*>*> R& GradeLimits() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = int32_t> R GetSlotRequiredGrade(int32_t slotIndex) {
		return ((R (*)(DailyShopComponent*, int32_t))(Il2CppBase() + 0x16474E4))(this, slotIndex);
	}
	template <typename R = int32_t> R GetGradeLimit(int32_t index) {
		return ((R (*)(DailyShopComponent*, int32_t))(Il2CppBase() + 0x1647508))(this, index);
	}
	template <typename R = int32_t> R GetSize(int32_t grade) {
		return ((R (*)(DailyShopComponent*, int32_t))(Il2CppBase() + 0x1647578))(this, grade);
	}
	template <typename R = bool> R IsAvailable(int32_t grade, int32_t slotIndex) {
		return ((R (*)(DailyShopComponent*, int32_t, int32_t))(Il2CppBase() + 0x164759C))(this, grade, slotIndex);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(DailyShopComponent*, Il2CppObject*))(Il2CppBase() + 0x16475C8))(this, targetObject);
	}

};

