#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IWorldStatusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWorldStatusEntity"));
	}


	template <typename T = uintptr_t> T get_worldStatus() {
		return ((T (*)(IWorldStatusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasWorldStatus() {
		return ((T (*)(IWorldStatusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddWorldStatus(uintptr_t newType) {
		return ((T (*)(IWorldStatusEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T ReplaceWorldStatus(uintptr_t newType) {
		return ((T (*)(IWorldStatusEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T RemoveWorldStatus() {
		return ((T (*)(IWorldStatusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
