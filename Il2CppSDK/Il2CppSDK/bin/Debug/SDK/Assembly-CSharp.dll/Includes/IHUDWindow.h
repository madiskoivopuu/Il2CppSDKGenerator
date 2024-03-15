#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHUDWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHUDWindow"));
	}


	template <typename R = UIWindowsManager*> R get_Manager() {
		return ((R (*)(IHUDWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = TooltipView*> R get_TooltipView() {
		return ((R (*)(IHUDWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = IQuestTrackerController*> R get_CurrentQuestTracker() {
		return ((R (*)(IHUDWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = HUDConnectionPanel*> R get_ConnectionPanel() {
		return ((R (*)(IHUDWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_IsCustomizationModeOn() {
		return ((R (*)(IHUDWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R add_OnDraw(Action1<float>* value) {
		return ((R (*)(IHUDWindow*, Action1<float>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnDraw(Action1<float>* value) {
		return ((R (*)(IHUDWindow*, Action1<float>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnInput(Action1<float>* value) {
		return ((R (*)(IHUDWindow*, Action1<float>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnInput(Action1<float>* value) {
		return ((R (*)(IHUDWindow*, Action1<float>*))(Il2CppBase() + 0x0))(this, value);
	}

};

