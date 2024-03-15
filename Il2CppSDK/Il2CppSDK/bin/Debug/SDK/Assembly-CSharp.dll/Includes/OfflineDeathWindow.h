#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class OfflineDeathWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OfflineDeathWindow"));
	}

	template <typename R = uintptr_t> R& _title() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _message() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _closeButtons() {
		return *(R*)((uintptr_t)this + 0x88);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(OfflineDeathWindow*))(Il2CppBase() + 0x11D964C))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(OfflineDeathWindow*))(Il2CppBase() + 0x11D973C))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(OfflineDeathWindow*, float))(Il2CppBase() + 0x11DA1EC))(this, deltaTime);
	}
	template <typename R = void> R NotifyAndClose() {
		return ((R (*)(OfflineDeathWindow*))(Il2CppBase() + 0x11DA120))(this);
	}

};

