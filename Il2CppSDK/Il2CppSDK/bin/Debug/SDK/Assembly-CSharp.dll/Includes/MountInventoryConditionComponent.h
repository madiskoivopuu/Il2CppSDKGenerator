#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountInventoryConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountInventoryConditionComponent"));
	}

	template <typename R = int32_t> R& EmptySlots() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& HasMount() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& HastMount() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(MountInventoryConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x154635C))(this, target);
	}

};

