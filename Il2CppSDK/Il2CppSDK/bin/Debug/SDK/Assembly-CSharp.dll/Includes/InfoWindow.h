#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class InfoWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InfoWindow"));
	}

	template <typename T = uintptr_t> T& _regionText() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _timeText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _openBetaTestText() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& _lastRegion() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& _secondToUpdate() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(InfoWindow*))(Il2CppBase() + 0x1E3F6C0))(this);
	}
	template <typename T = void> T CheckActiveBuffs() {
		return ((T (*)(InfoWindow*))(Il2CppBase() + 0x1E3FC64))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(InfoWindow*, float))(Il2CppBase() + 0x1E3FCC0))(this, deltaTime);
	}

};

}
