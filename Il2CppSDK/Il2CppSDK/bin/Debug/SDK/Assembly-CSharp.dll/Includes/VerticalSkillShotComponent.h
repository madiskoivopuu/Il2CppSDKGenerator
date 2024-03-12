#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VerticalSkillShotComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VerticalSkillShotComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(VerticalSkillShotComponent*, uintptr_t))(Il2CppBase() + 0x15C6844))(this, targetObject);
	}

};

}
