#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class GoToDiscordWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GoToDiscordWindow"));
	}

	template <typename T = uintptr_t> T& _closeButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _goButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GoToDiscordWindow*))(Il2CppBase() + 0x12DFF54))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(GoToDiscordWindow*))(Il2CppBase() + 0x12E0040))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(GoToDiscordWindow*))(Il2CppBase() + 0x12E02C8))(this);
	}
	template <typename T = void> T OnGoClick() {
		return ((T (*)(GoToDiscordWindow*))(Il2CppBase() + 0x12E02CC))(this);
	}

};

