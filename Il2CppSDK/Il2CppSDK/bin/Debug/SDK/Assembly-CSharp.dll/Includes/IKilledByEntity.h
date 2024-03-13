#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IKilledByEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IKilledByEntity"));
	}


	template <typename T = KilledByComponent*> T get_killedBy() {
		return ((T (*)(IKilledByEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasKilledBy() {
		return ((T (*)(IKilledByEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddKilledBy(int32_t newId, Il2CppString* newName, Il2CppString* newItemName) {
		return ((T (*)(IKilledByEntity*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newId, newName, newItemName);
	}
	template <typename T = void> T ReplaceKilledBy(int32_t newId, Il2CppString* newName, Il2CppString* newItemName) {
		return ((T (*)(IKilledByEntity*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newId, newName, newItemName);
	}
	template <typename T = void> T RemoveKilledBy() {
		return ((T (*)(IKilledByEntity*))(Il2CppBase() + 0x0))(this);
	}

};

