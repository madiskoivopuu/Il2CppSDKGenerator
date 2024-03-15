#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HorizontalSkillShotComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HorizontalSkillShotComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(HorizontalSkillShotComponent*, Il2CppObject*))(Il2CppBase() + 0x1E336A4))(this, targetObject);
	}

};

