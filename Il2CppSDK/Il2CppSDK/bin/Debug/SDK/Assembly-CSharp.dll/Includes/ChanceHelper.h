#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChanceHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChanceHelper"));
	}


	template <typename T = bool> static T SetChance(IChanceEntity* entity, float value) {
		return ((T (*)(void *, IChanceEntity*, float))(Il2CppBase() + 0x13E9828))(0, entity, value);
	}

};

