#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "StringNameComponent.h" 

class SkillShotTargetActionComponent : public StringNameComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillShotTargetActionComponent"));
	}

	template <typename R = Il2CppString*> R& Arrow() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(SkillShotTargetActionComponent*, Il2CppObject*))(Il2CppBase() + 0x1482AB0))(this, targetObject);
	}

};

