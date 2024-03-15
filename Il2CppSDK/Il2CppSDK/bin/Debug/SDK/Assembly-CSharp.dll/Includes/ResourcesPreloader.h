#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ResourcesPreloader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ResourcesPreloader"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& _itemPrefabs() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _textures() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(ResourcesPreloader*))(Il2CppBase() + 0x119D040))(this);
	}
	template <typename R = uintptr_t> R Start() {
		return ((R (*)(ResourcesPreloader*))(Il2CppBase() + 0x119D0D4))(this);
	}
	template <typename R = uintptr_t> R InitItemTextures(uintptr_t prefab) {
		return ((R (*)(ResourcesPreloader*, uintptr_t))(Il2CppBase() + 0x119D14C))(this, prefab);
	}

};

