#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRuneInventoryIdEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRuneInventoryIdEntity"));
	}


	template <typename T = RuneInventoryIdComponent*> T get_runeInventoryId() {
		return ((T (*)(IRuneInventoryIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasRuneInventoryId() {
		return ((T (*)(IRuneInventoryIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddRuneInventoryId(int32_t newId) {
		return ((T (*)(IRuneInventoryIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceRuneInventoryId(int32_t newId) {
		return ((T (*)(IRuneInventoryIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveRuneInventoryId() {
		return ((T (*)(IRuneInventoryIdEntity*))(Il2CppBase() + 0x0))(this);
	}

};

