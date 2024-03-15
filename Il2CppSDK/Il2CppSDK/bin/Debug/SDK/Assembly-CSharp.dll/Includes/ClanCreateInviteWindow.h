#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ClanCreateInviteWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanCreateInviteWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& SendInviteButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& InviteDescription() {
		return *(R*)((uintptr_t)this + 0x88);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(ClanCreateInviteWindow*))(Il2CppBase() + 0x158020C))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(ClanCreateInviteWindow*))(Il2CppBase() + 0x15803FC))(this);
	}
	template <typename R = void> R OnSendJoinRequestButtonClicked() {
		return ((R (*)(ClanCreateInviteWindow*))(Il2CppBase() + 0x1580458))(this);
	}
	template <typename R = void> R OnRequestDescriptionEndEdit(Il2CppString* text) {
		return ((R (*)(ClanCreateInviteWindow*, Il2CppString*))(Il2CppBase() + 0x15805C4))(this, text);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(ClanCreateInviteWindow*, float))(Il2CppBase() + 0x15805C8))(this, deltaTime);
	}
	template <typename R = void> R OnShowb__4_0(Il2CppString* text) {
		return ((R (*)(ClanCreateInviteWindow*, Il2CppString*))(Il2CppBase() + 0x1580790))(this, text);
	}

};

