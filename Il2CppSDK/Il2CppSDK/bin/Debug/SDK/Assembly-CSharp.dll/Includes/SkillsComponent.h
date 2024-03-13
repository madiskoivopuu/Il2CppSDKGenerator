#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SkillsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillsComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T GetValue(int32_t index) {
		return ((T (*)(SkillsComponent*, int32_t))(Il2CppBase() + 0x148354C))(this, index);
	}
	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(SkillsComponent*, Il2CppObject*))(Il2CppBase() + 0x1483594))(this, targetObject);
	}

};

