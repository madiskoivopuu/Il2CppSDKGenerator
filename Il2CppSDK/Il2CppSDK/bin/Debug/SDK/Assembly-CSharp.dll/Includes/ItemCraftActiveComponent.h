#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemCraftActiveComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemCraftActiveComponent"));
	}

	template <typename R = Il2CppString*> R& TargetCraftFurniture() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& TargetRecipe() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& Value() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ItemCraftActiveComponent*, Il2CppObject*))(Il2CppBase() + 0x10EE31C))(this, target);
	}

};

