#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRuneInventoryPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRuneInventoryPanel"));
	}


	template <typename R = IUIWindow*> R get_ParentWindow() {
		return ((R (*)(IRuneInventoryPanel*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = RuneInventoryContainer*> R get_RuneInventoryContainer() {
		return ((R (*)(IRuneInventoryPanel*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = PlayerClassType> R get_PlayerClassType() {
		return ((R (*)(IRuneInventoryPanel*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = RuneEffectPooler*> R get_EffectPooler() {
		return ((R (*)(IRuneInventoryPanel*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_IsLocked() {
		return ((R (*)(IRuneInventoryPanel*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R add_OnBeginScrolling(Action2<RuneItem*, uintptr_t>* value) {
		return ((R (*)(IRuneInventoryPanel*, Action2<RuneItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnBeginScrolling(Action2<RuneItem*, uintptr_t>* value) {
		return ((R (*)(IRuneInventoryPanel*, Action2<RuneItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnScrolling(Action2<RuneItem*, uintptr_t>* value) {
		return ((R (*)(IRuneInventoryPanel*, Action2<RuneItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnScrolling(Action2<RuneItem*, uintptr_t>* value) {
		return ((R (*)(IRuneInventoryPanel*, Action2<RuneItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnEndScrolling(Action2<RuneItem*, uintptr_t>* value) {
		return ((R (*)(IRuneInventoryPanel*, Action2<RuneItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnEndScrolling(Action2<RuneItem*, uintptr_t>* value) {
		return ((R (*)(IRuneInventoryPanel*, Action2<RuneItem*, uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}

};

