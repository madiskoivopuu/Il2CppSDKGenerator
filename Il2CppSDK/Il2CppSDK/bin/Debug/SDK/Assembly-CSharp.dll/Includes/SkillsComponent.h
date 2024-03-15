#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SkillsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillsComponent"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& Values() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = Il2CppString*> R GetValue(int32_t index) {
		return ((R (*)(SkillsComponent*, int32_t))(Il2CppBase() + 0x148354C))(this, index);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(SkillsComponent*, Il2CppObject*))(Il2CppBase() + 0x1483594))(this, targetObject);
	}

};

