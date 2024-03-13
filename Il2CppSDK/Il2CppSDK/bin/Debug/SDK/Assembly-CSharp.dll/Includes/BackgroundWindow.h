#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class BackgroundWindow : public UIWindow1<BackgroundWindowContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BackgroundWindow"));
	}

	template <typename T = uintptr_t> T& Version() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& Region() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(BackgroundWindow*))(Il2CppBase() + 0xFBAAE0))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(BackgroundWindow*, float))(Il2CppBase() + 0xFBABC0))(this, deltaTime);
	}

};

