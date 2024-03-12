#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class MapEventWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapEventWindow"));
	}

	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _showButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _locationImage() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _eventCaption() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _eventDescription() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& silentClose() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(MapEventWindow*))(Il2CppBase() + 0x126E2E4))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(MapEventWindow*))(Il2CppBase() + 0x126E93C))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(MapEventWindow*, float))(Il2CppBase() + 0x126E9D8))(this, deltaTime);
	}
	template <typename T = void> T ShowLocation() {
		return ((T (*)(MapEventWindow*))(Il2CppBase() + 0x126EC64))(this);
	}

};

}
