#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SharedConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SharedConditionComponent"));
	}

	template <typename T = Il2CppString*> T& CheckGroupSlot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Value() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& GetFromParent() {
		return *(T*)((uintptr_t)this + 0x19);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(SharedConditionComponent*, uintptr_t))(Il2CppBase() + 0x162FEE8))(this, target);
	}

};

}
