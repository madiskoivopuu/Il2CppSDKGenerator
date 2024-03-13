#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreepComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(CreepComponent*, Il2CppObject*))(Il2CppBase() + 0x1BCDB94))(this, target);
	}

};

