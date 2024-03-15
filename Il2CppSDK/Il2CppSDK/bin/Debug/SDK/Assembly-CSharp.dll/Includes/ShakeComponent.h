#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShakeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShakeComponent"));
	}

	template <typename R = Il2CppString*> R& TriggerName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& BoolName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& MaxRadius() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& CameraUniqueLookup() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ShakeComponent*, Il2CppObject*))(Il2CppBase() + 0x162FA1C))(this, targetObject);
	}

};

