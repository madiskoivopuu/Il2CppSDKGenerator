#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class DeathWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeathWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& DeathText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& By() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(DeathWindow*))(Il2CppBase() + 0xEB4870))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(DeathWindow*, float))(Il2CppBase() + 0xEB523C))(this, deltaTime);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(DeathWindow*))(Il2CppBase() + 0xEB561C))(this);
	}

};

}
