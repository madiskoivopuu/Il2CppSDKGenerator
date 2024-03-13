#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryPowerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryPowerComponent"));
	}

	template <typename T = InventoryPower*> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(InventoryPowerComponent*, Il2CppObject*))(Il2CppBase() + 0x1232A2C))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(InventoryPowerComponent*, uintptr_t))(Il2CppBase() + 0x1232AD0))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(InventoryPowerComponent*, uintptr_t))(Il2CppBase() + 0x1232B4C))(this, writer);
	}

};

