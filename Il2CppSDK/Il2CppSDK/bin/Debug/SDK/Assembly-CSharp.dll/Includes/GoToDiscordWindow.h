#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class GoToDiscordWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GoToDiscordWindow"));
	}

	template <typename R = uintptr_t> R& _closeButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _goButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(GoToDiscordWindow*))(Il2CppBase() + 0x12DFF54))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(GoToDiscordWindow*))(Il2CppBase() + 0x12E0040))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(GoToDiscordWindow*))(Il2CppBase() + 0x12E02C8))(this);
	}
	template <typename R = void> R OnGoClick() {
		return ((R (*)(GoToDiscordWindow*))(Il2CppBase() + 0x12E02CC))(this);
	}

};

