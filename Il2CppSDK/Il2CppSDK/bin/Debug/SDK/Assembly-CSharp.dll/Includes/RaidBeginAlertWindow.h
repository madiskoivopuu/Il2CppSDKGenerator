#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class RaidBeginAlertWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RaidBeginAlertWindow"));
	}

	template <typename T = uintptr_t> T& Animator() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& Life() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& _timer() {
		return *(T*)((uintptr_t)this + 0x84);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(RaidBeginAlertWindow*))(Il2CppBase() + 0x170D4E8))(this);
	}
	template <typename T = void> T ApplyRaidAlert() {
		return ((T (*)(RaidBeginAlertWindow*))(Il2CppBase() + 0x170D484))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(RaidBeginAlertWindow*, float))(Il2CppBase() + 0x170D4F4))(this, deltaTime);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(RaidBeginAlertWindow*))(Il2CppBase() + 0x170D598))(this);
	}

};

