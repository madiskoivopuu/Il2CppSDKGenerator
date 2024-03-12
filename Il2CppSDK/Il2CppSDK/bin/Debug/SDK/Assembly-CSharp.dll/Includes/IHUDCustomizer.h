#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHUDCustomizer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHUDCustomizer"));
	}


	template <typename T = void> T add_OnSwitchCustomizationMode(void* value) {
		return ((T (*)(IHUDCustomizer*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnSwitchCustomizationMode(void* value) {
		return ((T (*)(IHUDCustomizer*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnSwitchShortMode(void* value) {
		return ((T (*)(IHUDCustomizer*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnSwitchShortMode(void* value) {
		return ((T (*)(IHUDCustomizer*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnEditedSave(uintptr_t value) {
		return ((T (*)(IHUDCustomizer*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnEditedSave(uintptr_t value) {
		return ((T (*)(IHUDCustomizer*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}

};

}
