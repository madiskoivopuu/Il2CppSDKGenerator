#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponPrefabsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponPrefabsComponent"));
	}

	template <typename R = Il2CppString*> R& SecondPrefab() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& SecondSocket() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& BulletPrefab() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& BulletSocket() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& ToolPrefab() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& ToolSocket() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(WeaponPrefabsComponent*, Il2CppObject*))(Il2CppBase() + 0x112F4E4))(this, targetObject);
	}

};

