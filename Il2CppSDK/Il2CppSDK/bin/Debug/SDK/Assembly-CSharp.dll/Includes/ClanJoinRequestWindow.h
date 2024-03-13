#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ClanJoinRequestWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanJoinRequestWindow"));
	}

	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& SendRequestButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& RequestDescription() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(ClanJoinRequestWindow*))(Il2CppBase() + 0x158DADC))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ClanJoinRequestWindow*))(Il2CppBase() + 0x158DCCC))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(ClanJoinRequestWindow*, float))(Il2CppBase() + 0x158DD28))(this, deltaTime);
	}
	template <typename T = void> T OnSendJoinRequestButtonClicked() {
		return ((T (*)(ClanJoinRequestWindow*))(Il2CppBase() + 0x158DD98))(this);
	}
	template <typename T = void> T OnRequestDescriptionEndEdit(Il2CppString* text) {
		return ((T (*)(ClanJoinRequestWindow*, Il2CppString*))(Il2CppBase() + 0x158DDFC))(this, text);
	}
	template <typename T = void> T OnShowb__4_0(Il2CppString* text) {
		return ((T (*)(ClanJoinRequestWindow*, Il2CppString*))(Il2CppBase() + 0x158DE4C))(this, text);
	}

};

