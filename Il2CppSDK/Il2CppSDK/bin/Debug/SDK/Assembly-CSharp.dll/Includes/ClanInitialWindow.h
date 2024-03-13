#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ClanInitialWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanInitialWindow"));
	}

	template <typename T = uintptr_t> T& CreateClanButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& JoinClanButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ClanInitialWindow*))(Il2CppBase() + 0x1587D24))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(ClanInitialWindow*))(Il2CppBase() + 0x1587E60))(this);
	}
	template <typename T = void> T OnCreateClanButtonPressed() {
		return ((T (*)(ClanInitialWindow*))(Il2CppBase() + 0x1587E64))(this);
	}
	template <typename T = void> T OnJoinClanButtonPressed() {
		return ((T (*)(ClanInitialWindow*))(Il2CppBase() + 0x1587F14))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(ClanInitialWindow*))(Il2CppBase() + 0x1587F9C))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(ClanInitialWindow*, float))(Il2CppBase() + 0x1588178))(this, deltaTime);
	}

};

