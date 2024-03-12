#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "LimitCachedComponent" 

class LimitComponent: LimitCachedComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LimitComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(LimitComponent*, uintptr_t))(Il2CppBase() + 0x142C9DC))(this, targetObject);
	}

};

}
