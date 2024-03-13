#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHUDCustomizer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHUDCustomizer"));
	}


	template <typename T = void> T add_OnSwitchCustomizationMode(Action1bool>* value) {
		return ((T (*)(IHUDCustomizer*, Action1bool>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnSwitchCustomizationMode(Action1bool>* value) {
		return ((T (*)(IHUDCustomizer*, Action1bool>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnSwitchShortMode(Action1bool>* value) {
		return ((T (*)(IHUDCustomizer*, Action1bool>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnSwitchShortMode(Action1bool>* value) {
		return ((T (*)(IHUDCustomizer*, Action1bool>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnEditedSave(uintptr_t value) {
		return ((T (*)(IHUDCustomizer*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnEditedSave(uintptr_t value) {
		return ((T (*)(IHUDCustomizer*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}

};

