#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreepComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(CreepComponent*, Il2CppObject*))(Il2CppBase() + 0x1BCDB94))(this, target);
	}

};

