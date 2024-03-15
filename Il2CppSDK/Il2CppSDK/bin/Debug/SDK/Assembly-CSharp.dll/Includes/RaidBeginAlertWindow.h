#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class RaidBeginAlertWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RaidBeginAlertWindow"));
	}

	template <typename R = uintptr_t> R& Animator() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = float> R& Life() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = float> R& _timer() {
		return *(R*)((uintptr_t)this + 0x84);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(RaidBeginAlertWindow*))(Il2CppBase() + 0x170D4E8))(this);
	}
	template <typename R = void> R ApplyRaidAlert() {
		return ((R (*)(RaidBeginAlertWindow*))(Il2CppBase() + 0x170D484))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(RaidBeginAlertWindow*, float))(Il2CppBase() + 0x170D4F4))(this, deltaTime);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(RaidBeginAlertWindow*))(Il2CppBase() + 0x170D598))(this);
	}

};

