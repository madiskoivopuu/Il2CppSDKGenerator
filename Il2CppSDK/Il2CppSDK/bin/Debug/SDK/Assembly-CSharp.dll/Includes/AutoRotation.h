#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoRotation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoRotation"));
	}

	template <typename R = float> R& _speed() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _transform() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(AutoRotation*))(Il2CppBase() + 0x1A65848))(this);
	}
	template <typename R = void> R Update() {
		return ((R (*)(AutoRotation*))(Il2CppBase() + 0x1A65878))(this);
	}

};

