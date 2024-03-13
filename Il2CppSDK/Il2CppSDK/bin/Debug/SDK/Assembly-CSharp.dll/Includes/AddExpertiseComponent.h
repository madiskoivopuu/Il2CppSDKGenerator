#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AddExpertiseComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AddExpertiseComponent"));
	}

	template <typename T = PlayerClassType*> T& ClassType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Value() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(AddExpertiseComponent*, Il2CppObject*))(Il2CppBase() + 0x18AF500))(this, target);
	}

};

