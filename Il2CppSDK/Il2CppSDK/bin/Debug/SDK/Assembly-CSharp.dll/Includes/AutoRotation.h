#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoRotation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoRotation"));
	}

	template <typename T = float> T& _speed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _transform() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AutoRotation*))(Il2CppBase() + 0x1A65848))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AutoRotation*))(Il2CppBase() + 0x1A65878))(this);
	}

};

}
