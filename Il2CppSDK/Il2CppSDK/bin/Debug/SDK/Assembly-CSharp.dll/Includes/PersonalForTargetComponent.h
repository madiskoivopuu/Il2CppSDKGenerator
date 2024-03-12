#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PersonalForTargetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PersonalForTargetComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(PersonalForTargetComponent*, uintptr_t))(Il2CppBase() + 0x11EAEBC))(this, target);
	}

};

}
