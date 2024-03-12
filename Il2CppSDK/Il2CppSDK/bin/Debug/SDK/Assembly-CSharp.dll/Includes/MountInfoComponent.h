#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountInfoComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountInfoComponent"));
	}

	template <typename T = int32_t> T& StartGrade() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& SkillsTag() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(MountInfoComponent*, uintptr_t))(Il2CppBase() + 0x1545B84))(this, target);
	}

};

}
