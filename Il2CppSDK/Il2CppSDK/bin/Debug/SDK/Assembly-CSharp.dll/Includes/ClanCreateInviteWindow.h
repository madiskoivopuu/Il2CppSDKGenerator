#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class ClanCreateInviteWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanCreateInviteWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& SendInviteButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& InviteDescription() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(ClanCreateInviteWindow*))(Il2CppBase() + 0x158020C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ClanCreateInviteWindow*))(Il2CppBase() + 0x15803FC))(this);
	}
	template <typename T = void> T OnSendJoinRequestButtonClicked() {
		return ((T (*)(ClanCreateInviteWindow*))(Il2CppBase() + 0x1580458))(this);
	}
	template <typename T = void> T OnRequestDescriptionEndEdit(Il2CppString* text) {
		return ((T (*)(ClanCreateInviteWindow*, Il2CppString*))(Il2CppBase() + 0x15805C4))(this, text);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(ClanCreateInviteWindow*, float))(Il2CppBase() + 0x15805C8))(this, deltaTime);
	}
	template <typename T = void> T OnShowb__4_0(Il2CppString* text) {
		return ((T (*)(ClanCreateInviteWindow*, Il2CppString*))(Il2CppBase() + 0x1580790))(this, text);
	}

};

}
