#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class BackgroundWindow : public UIWindow1<BackgroundWindowContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BackgroundWindow"));
	}

	template <typename R = uintptr_t> R& Version() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& Region() {
		return *(R*)((uintptr_t)this + 0x80);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(BackgroundWindow*))(Il2CppBase() + 0xFBAAE0))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(BackgroundWindow*, float))(Il2CppBase() + 0xFBABC0))(this, deltaTime);
	}

};

