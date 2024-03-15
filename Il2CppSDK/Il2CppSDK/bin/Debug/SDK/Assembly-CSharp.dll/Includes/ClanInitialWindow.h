#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ClanInitialWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanInitialWindow"));
	}

	template <typename R = uintptr_t> R& CreateClanButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& JoinClanButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x88);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(ClanInitialWindow*))(Il2CppBase() + 0x1587D24))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(ClanInitialWindow*))(Il2CppBase() + 0x1587E60))(this);
	}
	template <typename R = void> R OnCreateClanButtonPressed() {
		return ((R (*)(ClanInitialWindow*))(Il2CppBase() + 0x1587E64))(this);
	}
	template <typename R = void> R OnJoinClanButtonPressed() {
		return ((R (*)(ClanInitialWindow*))(Il2CppBase() + 0x1587F14))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(ClanInitialWindow*))(Il2CppBase() + 0x1587F9C))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(ClanInitialWindow*, float))(Il2CppBase() + 0x1588178))(this, deltaTime);
	}

};

