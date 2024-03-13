#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AtlasManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AtlasManager"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _atlases() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _otherIcons() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _atlasNameInBundle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& _cache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& _clone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& _cacheSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _bundleAtlasNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AtlasManager*))(Il2CppBase() + 0x1A59BAC))(this);
	}
	template <typename T = uintptr_t> static T GetSprite(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1A59EA8))(0, name);
	}
	template <typename T = bool> static T HasSprite(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1A5A018))(0, name);
	}
	template <typename T = void> static T AddSpritesToCache(Il2CppArray<uintptr_t>* sprites, bool force) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1A59D10))(0, sprites, force);
	}
	template <typename T = void> static T AddSpritesFromBundle() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A5A0A4))(0);
	}

};

