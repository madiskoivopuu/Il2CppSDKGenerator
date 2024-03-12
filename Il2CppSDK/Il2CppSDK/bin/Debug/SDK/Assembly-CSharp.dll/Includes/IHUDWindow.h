#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHUDWindow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHUDWindow"));
	}


	template <typename T = uintptr_t> T get_Manager() {
		return ((T (*)(IHUDWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_TooltipView() {
		return ((T (*)(IHUDWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_CurrentQuestTracker() {
		return ((T (*)(IHUDWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_ConnectionPanel() {
		return ((T (*)(IHUDWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsCustomizationModeOn() {
		return ((T (*)(IHUDWindow*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T add_OnDraw(void* value) {
		return ((T (*)(IHUDWindow*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnDraw(void* value) {
		return ((T (*)(IHUDWindow*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnInput(void* value) {
		return ((T (*)(IHUDWindow*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnInput(void* value) {
		return ((T (*)(IHUDWindow*, void*))(Il2CppBase() + 0x0))(this, value);
	}

};

}
