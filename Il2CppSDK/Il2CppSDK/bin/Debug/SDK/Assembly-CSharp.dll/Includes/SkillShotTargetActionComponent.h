#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "StringNameComponent" 

class SkillShotTargetActionComponent: StringNameComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillShotTargetActionComponent"));
	}

	template <typename T = Il2CppString*> T& Arrow() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(SkillShotTargetActionComponent*, uintptr_t))(Il2CppBase() + 0x1482AB0))(this, targetObject);
	}

};

}
