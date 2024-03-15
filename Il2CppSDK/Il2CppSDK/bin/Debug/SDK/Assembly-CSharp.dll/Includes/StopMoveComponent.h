#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StopMoveComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StopMoveComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(StopMoveComponent*, Il2CppObject*))(Il2CppBase() + 0x1404E7C))(this, target);
	}

};

