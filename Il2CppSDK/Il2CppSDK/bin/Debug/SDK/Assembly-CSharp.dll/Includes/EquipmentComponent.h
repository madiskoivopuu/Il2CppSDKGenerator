#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipmentComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EquipmentComponent"));
	}

	template <typename R = EquipmentType*> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& NoArming() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> R& Armed() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(EquipmentComponent*, Il2CppObject*))(Il2CppBase() + 0x137C4D4))(this, targetObject);
	}

};

