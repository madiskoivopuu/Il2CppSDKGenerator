#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class OfflineDeathWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OfflineDeathWindow"));
	}

	template <typename T = uintptr_t> T& _title() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _message() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _closeButtons() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(OfflineDeathWindow*))(Il2CppBase() + 0x11D964C))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(OfflineDeathWindow*))(Il2CppBase() + 0x11D973C))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(OfflineDeathWindow*, float))(Il2CppBase() + 0x11DA1EC))(this, deltaTime);
	}
	template <typename T = void> T NotifyAndClose() {
		return ((T (*)(OfflineDeathWindow*))(Il2CppBase() + 0x11DA120))(this);
	}

};

