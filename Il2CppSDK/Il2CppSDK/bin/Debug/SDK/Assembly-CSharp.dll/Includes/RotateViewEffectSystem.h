#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotateViewEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotateViewEffectSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _rotated() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(RotateViewEffectSystem*))(Il2CppBase() + 0x11A4EA8))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(RotateViewEffectSystem*))(Il2CppBase() + 0x11A4F24))(this);
	}

};

}
