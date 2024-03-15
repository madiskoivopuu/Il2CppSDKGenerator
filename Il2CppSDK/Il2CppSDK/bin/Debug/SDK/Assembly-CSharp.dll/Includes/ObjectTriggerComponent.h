#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ObjectTriggerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectTriggerComponent"));
	}

	template <typename R = bool> R& Attack() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& Pocket() {
		return *(R*)((uintptr_t)this + 0x11);
	}
	template <typename R = bool> R& Interact() {
		return *(R*)((uintptr_t)this + 0x12);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ObjectTriggerComponent*, Il2CppObject*))(Il2CppBase() + 0x11D4C8C))(this, targetObject);
	}

};

