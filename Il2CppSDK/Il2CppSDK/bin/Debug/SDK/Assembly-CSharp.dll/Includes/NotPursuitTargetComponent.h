#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NotPursuitTargetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotPursuitTargetComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(NotPursuitTargetComponent*, uintptr_t))(Il2CppBase() + 0x13B6648))(this, targetObject);
	}

};

}
