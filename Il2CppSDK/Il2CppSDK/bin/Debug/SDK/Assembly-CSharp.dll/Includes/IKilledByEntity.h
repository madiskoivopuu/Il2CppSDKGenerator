#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IKilledByEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IKilledByEntity"));
	}


	template <typename R = KilledByComponent*> R get_killedBy() {
		return ((R (*)(IKilledByEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasKilledBy() {
		return ((R (*)(IKilledByEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddKilledBy(int32_t newId, Il2CppString* newName, Il2CppString* newItemName) {
		return ((R (*)(IKilledByEntity*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newId, newName, newItemName);
	}
	template <typename R = void> R ReplaceKilledBy(int32_t newId, Il2CppString* newName, Il2CppString* newItemName) {
		return ((R (*)(IKilledByEntity*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newId, newName, newItemName);
	}
	template <typename R = void> R RemoveKilledBy() {
		return ((R (*)(IKilledByEntity*))(Il2CppBase() + 0x0))(this);
	}

};

