#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VerticalSkillShotComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VerticalSkillShotComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(VerticalSkillShotComponent*, Il2CppObject*))(Il2CppBase() + 0x15C6844))(this, targetObject);
	}

};

