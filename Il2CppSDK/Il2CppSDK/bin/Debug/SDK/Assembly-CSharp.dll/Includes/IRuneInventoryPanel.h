#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRuneInventoryPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRuneInventoryPanel"));
	}


	template <typename T = IUIWindow*> T get_ParentWindow() {
		return ((T (*)(IRuneInventoryPanel*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = RuneInventoryContainer*> T get_RuneInventoryContainer() {
		return ((T (*)(IRuneInventoryPanel*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = PlayerClassType*> T get_PlayerClassType() {
		return ((T (*)(IRuneInventoryPanel*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = RuneEffectPooler*> T get_EffectPooler() {
		return ((T (*)(IRuneInventoryPanel*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_IsLocked() {
		return ((T (*)(IRuneInventoryPanel*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T add_OnBeginScrolling(Action2RuneItem*, uintptr_t>* value) {
		return ((T (*)(IRuneInventoryPanel*, Action2RuneItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnBeginScrolling(Action2RuneItem*, uintptr_t>* value) {
		return ((T (*)(IRuneInventoryPanel*, Action2RuneItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnScrolling(Action2RuneItem*, uintptr_t>* value) {
		return ((T (*)(IRuneInventoryPanel*, Action2RuneItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnScrolling(Action2RuneItem*, uintptr_t>* value) {
		return ((T (*)(IRuneInventoryPanel*, Action2RuneItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnEndScrolling(Action2RuneItem*, uintptr_t>* value) {
		return ((T (*)(IRuneInventoryPanel*, Action2RuneItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnEndScrolling(Action2RuneItem*, uintptr_t>* value) {
		return ((T (*)(IRuneInventoryPanel*, Action2RuneItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}

};

