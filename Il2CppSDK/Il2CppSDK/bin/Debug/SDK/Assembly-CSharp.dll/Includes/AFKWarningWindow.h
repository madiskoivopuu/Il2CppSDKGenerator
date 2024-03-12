#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class AFKWarningWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AFKWarningWindow"));
	}

	template <typename T = Il2CppString*> static T& AFK_WARNING() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _timeText() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(AFKWarningWindow*))(Il2CppBase() + 0x1D95A20))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(AFKWarningWindow*, float))(Il2CppBase() + 0x1D95DCC))(this, deltaTime);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(AFKWarningWindow*))(Il2CppBase() + 0x1D95E60))(this);
	}
	template <typename T = void> T SetupTimer() {
		return ((T (*)(AFKWarningWindow*))(Il2CppBase() + 0x1D95AB4))(this);
	}

};

}
