#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class GuildInfoDialog : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildInfoDialog"));
	}

	template <typename R = GuildInfoView*> R& GuildInfo() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& CloseButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = StandartButton*> R& SendRequestButton() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = StandartButton*> R& CancelButton() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& SendRequestText() {
		return *(R*)((uintptr_t)this + 0x98);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(GuildInfoDialog*))(Il2CppBase() + 0x1B2643C))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(GuildInfoDialog*))(Il2CppBase() + 0x1B26570))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(GuildInfoDialog*, float))(Il2CppBase() + 0x1B273F8))(this, deltaTime);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(GuildInfoDialog*))(Il2CppBase() + 0x1B27574))(this);
	}
	template <typename R = void> R OnSendRequestButtonPressed() {
		return ((R (*)(GuildInfoDialog*))(Il2CppBase() + 0x1B275D0))(this);
	}

};

