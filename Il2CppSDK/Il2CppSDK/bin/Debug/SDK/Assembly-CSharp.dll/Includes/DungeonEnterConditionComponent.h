#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DungeonEnterConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonEnterConditionComponent"));
	}

	template <typename T = bool> T& CanEnter() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(DungeonEnterConditionComponent*, uintptr_t))(Il2CppBase() + 0x130755C))(this, target);
	}

};

}
