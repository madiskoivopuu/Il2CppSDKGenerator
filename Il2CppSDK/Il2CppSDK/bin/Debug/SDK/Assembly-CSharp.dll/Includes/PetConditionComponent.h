#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetConditionComponent"));
	}

	template <typename T = Il2CppString*> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& CanAddExp() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(PetConditionComponent*, uintptr_t))(Il2CppBase() + 0x11EB854))(this, target);
	}

};

}
