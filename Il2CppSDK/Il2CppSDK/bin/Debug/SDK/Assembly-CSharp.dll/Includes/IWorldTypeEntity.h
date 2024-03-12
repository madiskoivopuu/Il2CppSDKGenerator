#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IWorldTypeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWorldTypeEntity"));
	}


	template <typename T = uintptr_t> T get_worldType() {
		return ((T (*)(IWorldTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasWorldType() {
		return ((T (*)(IWorldTypeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddWorldType(uintptr_t newType) {
		return ((T (*)(IWorldTypeEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T ReplaceWorldType(uintptr_t newType) {
		return ((T (*)(IWorldTypeEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T RemoveWorldType() {
		return ((T (*)(IWorldTypeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
