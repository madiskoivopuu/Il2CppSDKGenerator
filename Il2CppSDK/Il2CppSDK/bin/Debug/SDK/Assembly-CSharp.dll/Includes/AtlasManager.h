#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AtlasManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AtlasManager"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& _atlases() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _otherIcons() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& _atlasNameInBundle() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 static Il2CppDictionary<Il2CppString*, uintptr_t>*& _cache() {
		return *(Il2CppDictionary<Il2CppString*, uintptr_t>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& _clone() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& _cacheSize() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> static R& _bundleAtlasNames() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(AtlasManager*))(Il2CppBase() + 0x1A59BAC))(this);
	}
	template <typename R = uintptr_t> static R GetSprite(Il2CppString* name) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x1A59EA8))(0, name);
	}
	template <typename R = bool> static R HasSprite(Il2CppString* name) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x1A5A018))(0, name);
	}
	template <typename R = void> static R AddSpritesToCache(Il2CppArray<uintptr_t>* sprites, bool force) {
		return ((R (*)(void *, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1A59D10))(0, sprites, force);
	}
	template <typename R = void> static R AddSpritesFromBundle() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A5A0A4))(0);
	}

};

