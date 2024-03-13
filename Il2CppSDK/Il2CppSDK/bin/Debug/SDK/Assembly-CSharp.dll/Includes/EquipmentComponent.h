#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipmentComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EquipmentComponent"));
	}

	template <typename T = EquipmentType*> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& NoArming() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Armed() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(EquipmentComponent*, Il2CppObject*))(Il2CppBase() + 0x137C4D4))(this, targetObject);
	}

};

