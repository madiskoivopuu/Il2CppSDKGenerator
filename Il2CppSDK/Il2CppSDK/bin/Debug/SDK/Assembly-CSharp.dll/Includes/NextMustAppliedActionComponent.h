#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NextMustAppliedActionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NextMustAppliedActionComponent"));
	}

	template <typename R = int32_t> R& TargetActor() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& ItemName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& InventoryItemId() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& Angle() {
		return *(R*)((uintptr_t)this + 0x24);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(NextMustAppliedActionComponent*, Il2CppObject*))(Il2CppBase() + 0x13B1B9C))(this, target);
	}

};

