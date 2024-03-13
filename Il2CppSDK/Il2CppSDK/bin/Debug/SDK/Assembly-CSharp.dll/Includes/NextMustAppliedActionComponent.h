#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NextMustAppliedActionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NextMustAppliedActionComponent"));
	}

	template <typename T = int32_t> T& TargetActor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ItemName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& InventoryItemId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Angle() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(NextMustAppliedActionComponent*, Il2CppObject*))(Il2CppBase() + 0x13B1B9C))(this, target);
	}

};

