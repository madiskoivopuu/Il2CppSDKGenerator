#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRuneInventoryIdEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRuneInventoryIdEntity"));
	}


	template <typename R = RuneInventoryIdComponent*> R get_runeInventoryId() {
		return ((R (*)(IRuneInventoryIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasRuneInventoryId() {
		return ((R (*)(IRuneInventoryIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddRuneInventoryId(int32_t newId) {
		return ((R (*)(IRuneInventoryIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceRuneInventoryId(int32_t newId) {
		return ((R (*)(IRuneInventoryIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveRuneInventoryId() {
		return ((R (*)(IRuneInventoryIdEntity*))(Il2CppBase() + 0x0))(this);
	}

};

