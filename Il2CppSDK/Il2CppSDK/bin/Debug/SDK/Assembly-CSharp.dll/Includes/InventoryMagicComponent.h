#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryMagicComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryMagicComponent"));
	}

	template <typename R = Il2CppString*> R& ContainerCondition() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Names() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(InventoryMagicComponent*, Il2CppObject*))(Il2CppBase() + 0x1232708))(this, target);
	}

};

