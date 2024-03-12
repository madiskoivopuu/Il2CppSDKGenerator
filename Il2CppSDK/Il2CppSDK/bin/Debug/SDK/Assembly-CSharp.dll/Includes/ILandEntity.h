#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILandEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILandEntity"));
	}


	template <typename T = uintptr_t> T get_land() {
		return ((T (*)(ILandEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasLand() {
		return ((T (*)(ILandEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddLand(uintptr_t newType) {
		return ((T (*)(ILandEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T ReplaceLand(uintptr_t newType) {
		return ((T (*)(ILandEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T RemoveLand() {
		return ((T (*)(ILandEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
