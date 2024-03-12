#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoAttackComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoAttackComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(AutoAttackComponent*, uintptr_t))(Il2CppBase() + 0x1A62400))(this, targetObject);
	}

};

}
