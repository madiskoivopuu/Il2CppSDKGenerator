#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryPowerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryPowerComponent"));
	}

	template <typename R = InventoryPower> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(InventoryPowerComponent*, Il2CppObject*))(Il2CppBase() + 0x1232A2C))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(InventoryPowerComponent*, uintptr_t))(Il2CppBase() + 0x1232AD0))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(InventoryPowerComponent*, uintptr_t))(Il2CppBase() + 0x1232B4C))(this, writer);
	}

};

