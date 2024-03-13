#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class GuildInfoDialog : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildInfoDialog"));
	}

	template <typename T = GuildInfoView*> T& GuildInfo() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& CloseButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = StandartButton*> T& SendRequestButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = StandartButton*> T& CancelButton() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SendRequestText() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GuildInfoDialog*))(Il2CppBase() + 0x1B2643C))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(GuildInfoDialog*))(Il2CppBase() + 0x1B26570))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(GuildInfoDialog*, float))(Il2CppBase() + 0x1B273F8))(this, deltaTime);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(GuildInfoDialog*))(Il2CppBase() + 0x1B27574))(this);
	}
	template <typename T = void> T OnSendRequestButtonPressed() {
		return ((T (*)(GuildInfoDialog*))(Il2CppBase() + 0x1B275D0))(this);
	}

};

