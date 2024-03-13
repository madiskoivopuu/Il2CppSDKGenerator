#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHUDWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHUDWindow"));
	}


	template <typename T = UIWindowsManager*> T get_Manager() {
		return ((T (*)(IHUDWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = TooltipView*> T get_TooltipView() {
		return ((T (*)(IHUDWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = IQuestTrackerController*> T get_CurrentQuestTracker() {
		return ((T (*)(IHUDWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = HUDConnectionPanel*> T get_ConnectionPanel() {
		return ((T (*)(IHUDWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsCustomizationModeOn() {
		return ((T (*)(IHUDWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T add_OnDraw(Action1float>* value) {
		return ((T (*)(IHUDWindow*, Action1float>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnDraw(Action1float>* value) {
		return ((T (*)(IHUDWindow*, Action1float>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInput(Action1float>* value) {
		return ((T (*)(IHUDWindow*, Action1float>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInput(Action1float>* value) {
		return ((T (*)(IHUDWindow*, Action1float>*))(Il2CppBase() + 0x0))(this, value);
	}

};

