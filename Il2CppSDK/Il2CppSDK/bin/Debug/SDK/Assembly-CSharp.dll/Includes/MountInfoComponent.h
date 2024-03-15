#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountInfoComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountInfoComponent"));
	}

	template <typename R = int32_t> R& StartGrade() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& SkillsTag() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(MountInfoComponent*, Il2CppObject*))(Il2CppBase() + 0x1545B84))(this, target);
	}

};

