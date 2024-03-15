#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetInventoryConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetInventoryConditionComponent"));
	}

	template <typename R = bool> R& Has() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& PetType() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& MinGrade() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(PetInventoryConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x11EDB18))(this, target);
	}

};

