#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FullScreenBlock
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FullScreenBlock"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _cameras() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _hud() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _renderOff() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _camerasMask() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T SetHud(uintptr_t hud) {
		return ((T (*)(FullScreenBlock*, uintptr_t))(Il2CppBase() + 0x15FF0C4))(this, hud);
	}
	template <typename T = void> T Update() {
		return ((T (*)(FullScreenBlock*))(Il2CppBase() + 0x15FF0CC))(this);
	}

};

}
