#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TavernBoardConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TavernBoardConditionComponent"));
	}

	template <typename R = bool> R& CanClaim() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TavernBoardConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x16AA0B8))(this, target);
	}

};

