#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AliveConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AliveConditionComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(AliveConditionComponent*, uintptr_t))(Il2CppBase() + 0x129C278))(this, target);
	}

};

}
