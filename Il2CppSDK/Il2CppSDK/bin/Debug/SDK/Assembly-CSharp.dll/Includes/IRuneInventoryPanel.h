#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRuneInventoryPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRuneInventoryPanel"));
	}


	template <typename T = uintptr_t> T get_ParentWindow() {
		return ((T (*)(IRuneInventoryPanel*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_RuneInventoryContainer() {
		return ((T (*)(IRuneInventoryPanel*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_PlayerClassType() {
		return ((T (*)(IRuneInventoryPanel*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_EffectPooler() {
		return ((T (*)(IRuneInventoryPanel*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsLocked() {
		return ((T (*)(IRuneInventoryPanel*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T add_OnBeginScrolling(void* value) {
		return ((T (*)(IRuneInventoryPanel*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnBeginScrolling(void* value) {
		return ((T (*)(IRuneInventoryPanel*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnScrolling(void* value) {
		return ((T (*)(IRuneInventoryPanel*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnScrolling(void* value) {
		return ((T (*)(IRuneInventoryPanel*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnEndScrolling(void* value) {
		return ((T (*)(IRuneInventoryPanel*, void*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnEndScrolling(void* value) {
		return ((T (*)(IRuneInventoryPanel*, void*))(Il2CppBase() + 0x0))(this, value);
	}

};

}
