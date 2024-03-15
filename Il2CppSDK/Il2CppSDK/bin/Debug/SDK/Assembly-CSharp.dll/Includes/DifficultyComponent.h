#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EnumComponent1.h" 

class DifficultyComponent : public EnumComponent1<Difficulty*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DifficultyComponent"));
	}


	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(DifficultyComponent*, Il2CppObject*))(Il2CppBase() + 0x12FA62C))(this, blueprintComponent);
	}

};

