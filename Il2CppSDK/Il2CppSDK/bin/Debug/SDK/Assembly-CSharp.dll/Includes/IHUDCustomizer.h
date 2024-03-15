#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHUDCustomizer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHUDCustomizer"));
	}


	template <typename R = void> R add_OnSwitchCustomizationMode(Action1<bool>* value) {
		return ((R (*)(IHUDCustomizer*, Action1<bool>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnSwitchCustomizationMode(Action1<bool>* value) {
		return ((R (*)(IHUDCustomizer*, Action1<bool>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnSwitchShortMode(Action1<bool>* value) {
		return ((R (*)(IHUDCustomizer*, Action1<bool>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnSwitchShortMode(Action1<bool>* value) {
		return ((R (*)(IHUDCustomizer*, Action1<bool>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnEditedSave(uintptr_t value) {
		return ((R (*)(IHUDCustomizer*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnEditedSave(uintptr_t value) {
		return ((R (*)(IHUDCustomizer*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}

};

