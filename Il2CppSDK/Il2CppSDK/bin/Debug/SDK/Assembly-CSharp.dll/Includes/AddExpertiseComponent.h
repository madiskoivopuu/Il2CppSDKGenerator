#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddExpertiseComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AddExpertiseComponent"));
	}

	template <typename R = PlayerClassType> R& ClassType() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Value() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(AddExpertiseComponent*, Il2CppObject*))(Il2CppBase() + 0x18AF500))(this, target);
	}

};

