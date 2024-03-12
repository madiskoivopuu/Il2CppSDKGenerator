#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResourcesPreloader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResourcesPreloader"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _itemPrefabs() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _textures() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ResourcesPreloader*))(Il2CppBase() + 0x119D040))(this);
	}
	template <typename T = uintptr_t> T Start() {
		return ((T (*)(ResourcesPreloader*))(Il2CppBase() + 0x119D0D4))(this);
	}
	template <typename T = uintptr_t> T InitItemTextures(uintptr_t prefab) {
		return ((T (*)(ResourcesPreloader*, uintptr_t))(Il2CppBase() + 0x119D14C))(this, prefab);
	}

};

}
