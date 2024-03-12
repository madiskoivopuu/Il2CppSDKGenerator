#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MoveToTargetPosition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MoveToTargetPosition"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(MoveToTargetPosition*, uintptr_t))(Il2CppBase() + 0x1557748))(this, target);
	}

};

}
