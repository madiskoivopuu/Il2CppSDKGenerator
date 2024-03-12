#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TavernBoardConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TavernBoardConditionComponent"));
	}

	template <typename T = bool> T& CanClaim() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(TavernBoardConditionComponent*, uintptr_t))(Il2CppBase() + 0x16AA0B8))(this, target);
	}

};

}
