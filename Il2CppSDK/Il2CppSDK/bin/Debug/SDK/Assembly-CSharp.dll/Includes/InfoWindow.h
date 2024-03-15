#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class InfoWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InfoWindow"));
	}

	template <typename R = uintptr_t> R& _regionText() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _timeText() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _openBetaTestText() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = Il2CppString*> R& _lastRegion() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = float> R& _secondToUpdate() {
		return *(R*)((uintptr_t)this + 0x98);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(InfoWindow*))(Il2CppBase() + 0x1E3F6C0))(this);
	}
	template <typename R = void> R CheckActiveBuffs() {
		return ((R (*)(InfoWindow*))(Il2CppBase() + 0x1E3FC64))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(InfoWindow*, float))(Il2CppBase() + 0x1E3FCC0))(this, deltaTime);
	}

};

