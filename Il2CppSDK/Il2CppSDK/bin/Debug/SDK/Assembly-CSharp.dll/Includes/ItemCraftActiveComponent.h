#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemCraftActiveComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemCraftActiveComponent"));
	}

	template <typename T = Il2CppString*> T& TargetCraftFurniture() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& TargetRecipe() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& Value() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ItemCraftActiveComponent*, Il2CppObject*))(Il2CppBase() + 0x10EE31C))(this, target);
	}

};

