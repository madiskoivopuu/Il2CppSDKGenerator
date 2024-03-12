#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IExplodeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IExplodeEntity"));
	}


	template <typename T = uintptr_t> T get_explode() {
		return ((T (*)(IExplodeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasExplode() {
		return ((T (*)(IExplodeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddExplode(Il2CppString* newItem, uintptr_t newType) {
		return ((T (*)(IExplodeEntity*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, newItem, newType);
	}
	template <typename T = void> T ReplaceExplode(Il2CppString* newItem, uintptr_t newType) {
		return ((T (*)(IExplodeEntity*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, newItem, newType);
	}
	template <typename T = void> T RemoveExplode() {
		return ((T (*)(IExplodeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
