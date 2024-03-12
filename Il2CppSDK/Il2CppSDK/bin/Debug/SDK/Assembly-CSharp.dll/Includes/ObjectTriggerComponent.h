#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ObjectTriggerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectTriggerComponent"));
	}

	template <typename T = bool> T& Attack() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Pocket() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& Interact() {
		return *(T*)((uintptr_t)this + 0x12);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ObjectTriggerComponent*, uintptr_t))(Il2CppBase() + 0x11D4C8C))(this, targetObject);
	}

};

}
