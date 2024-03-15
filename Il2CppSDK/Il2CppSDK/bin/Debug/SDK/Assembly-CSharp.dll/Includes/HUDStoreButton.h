#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "HUDButtonBaseUncustomizable.h" 

class HUDStoreButton : public HUDButtonBaseUncustomizable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDStoreButton"));
	}

	template <typename R = uintptr_t> R& _buttonAnimator() {
		return *(R*)((uintptr_t)this + 0x90);
	}

	template <typename R = void> R Bind(IHUDWindow* window) {
		return ((R (*)(HUDStoreButton*, IHUDWindow*))(Il2CppBase() + 0x127F884))(this, window);
	}
	template <typename R = void> R SwitchCustomizationMode(bool isCustomizationModeOn) {
		return ((R (*)(HUDStoreButton*, bool))(Il2CppBase() + 0x127F9C0))(this, isCustomizationModeOn);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(HUDStoreButton*, float))(Il2CppBase() + 0x127FBA8))(this, deltaTime);
	}
	template <typename R = void> R UpdateCounter() {
		return ((R (*)(HUDStoreButton*))(Il2CppBase() + 0x127FCC8))(this);
	}
	template <typename R = bool> static R UpdateCounterg__isTournamentMessage|4_0(MailEntity* e) {
		return ((R (*)(void *, MailEntity*))(Il2CppBase() + 0x1280078))(0, e);
	}
	template <typename R = bool> static R UpdateCounterg__isExpiredMessage|4_1(MailEntity* e, uintptr_t ) {
		return ((R (*)(void *, MailEntity*, uintptr_t))(Il2CppBase() + 0x12800D0))(0, e, );
	}
	template <typename R = bool> static R UpdateCounterg__isWindowMessage|4_2(MailEntity* e) {
		return ((R (*)(void *, MailEntity*))(Il2CppBase() + 0x128012C))(0, e);
	}

};

