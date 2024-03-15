#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ClanJoinRequestWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanJoinRequestWindow"));
	}

	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& SendRequestButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& RequestDescription() {
		return *(R*)((uintptr_t)this + 0x88);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(ClanJoinRequestWindow*))(Il2CppBase() + 0x158DADC))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(ClanJoinRequestWindow*))(Il2CppBase() + 0x158DCCC))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(ClanJoinRequestWindow*, float))(Il2CppBase() + 0x158DD28))(this, deltaTime);
	}
	template <typename R = void> R OnSendJoinRequestButtonClicked() {
		return ((R (*)(ClanJoinRequestWindow*))(Il2CppBase() + 0x158DD98))(this);
	}
	template <typename R = void> R OnRequestDescriptionEndEdit(Il2CppString* text) {
		return ((R (*)(ClanJoinRequestWindow*, Il2CppString*))(Il2CppBase() + 0x158DDFC))(this, text);
	}
	template <typename R = void> R OnShowb__4_0(Il2CppString* text) {
		return ((R (*)(ClanJoinRequestWindow*, Il2CppString*))(Il2CppBase() + 0x158DE4C))(this, text);
	}

};

