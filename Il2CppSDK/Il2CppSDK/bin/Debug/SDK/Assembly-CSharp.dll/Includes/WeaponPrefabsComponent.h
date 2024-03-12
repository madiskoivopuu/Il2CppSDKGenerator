#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponPrefabsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponPrefabsComponent"));
	}

	template <typename T = Il2CppString*> T& SecondPrefab() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& SecondSocket() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& BulletPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& BulletSocket() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& ToolPrefab() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& ToolSocket() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(WeaponPrefabsComponent*, uintptr_t))(Il2CppBase() + 0x112F4E4))(this, targetObject);
	}

};

}
