#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveToTargetPosition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveToTargetPosition"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(MoveToTargetPosition*, Il2CppObject*))(Il2CppBase() + 0x1557748))(this, target);
	}

};

