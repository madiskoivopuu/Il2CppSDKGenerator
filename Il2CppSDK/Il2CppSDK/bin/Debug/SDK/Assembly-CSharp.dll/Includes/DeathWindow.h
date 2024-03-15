#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class DeathWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeathWindow"));
	}

	template <typename R = TextButtonMonoBehaviour*> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& DeathText() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& By() {
		return *(R*)((uintptr_t)this + 0x88);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(DeathWindow*))(Il2CppBase() + 0xEB4870))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(DeathWindow*, float))(Il2CppBase() + 0xEB523C))(this, deltaTime);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(DeathWindow*))(Il2CppBase() + 0xEB561C))(this);
	}

};

