#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class MapEventWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapEventWindow"));
	}

	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _showButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _locationImage() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _eventCaption() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _eventDescription() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = bool> R& silentClose() {
		return *(R*)((uintptr_t)this + 0xA0);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(MapEventWindow*))(Il2CppBase() + 0x126E2E4))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(MapEventWindow*))(Il2CppBase() + 0x126E93C))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(MapEventWindow*, float))(Il2CppBase() + 0x126E9D8))(this, deltaTime);
	}
	template <typename R = void> R ShowLocation() {
		return ((R (*)(MapEventWindow*))(Il2CppBase() + 0x126EC64))(this);
	}

};

