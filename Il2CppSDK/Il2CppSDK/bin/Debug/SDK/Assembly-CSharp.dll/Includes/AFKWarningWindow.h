#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class AFKWarningWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AFKWarningWindow"));
	}

	template <typename R = Il2CppString*> static R& AFK_WARNING() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& _timeText() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(AFKWarningWindow*))(Il2CppBase() + 0x1D95A20))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(AFKWarningWindow*, float))(Il2CppBase() + 0x1D95DCC))(this, deltaTime);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(AFKWarningWindow*))(Il2CppBase() + 0x1D95E60))(this);
	}
	template <typename R = void> R SetupTimer() {
		return ((R (*)(AFKWarningWindow*))(Il2CppBase() + 0x1D95AB4))(this);
	}

};

