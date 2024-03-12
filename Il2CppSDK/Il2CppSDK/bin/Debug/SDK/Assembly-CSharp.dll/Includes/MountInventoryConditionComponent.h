#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountInventoryConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountInventoryConditionComponent"));
	}

	template <typename T = int32_t> T& EmptySlots() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& HasMount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& HastMount() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(MountInventoryConditionComponent*, uintptr_t))(Il2CppBase() + 0x154635C))(this, target);
	}

};

}
