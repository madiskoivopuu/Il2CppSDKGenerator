#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BoxCollisionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BoxCollisionComponent"));
	}

	template <typename R = float> R& Width() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Height() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& Hole() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& Trigger() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(BoxCollisionComponent*, Il2CppObject*))(Il2CppBase() + 0x15A0A5C))(this, targetObject);
	}

};

