#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "StringNameComponent.h" 

class SkillShotActionComponent : public StringNameComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillShotActionComponent"));
	}

	template <typename R = Il2CppString*> R& Arrow() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(SkillShotActionComponent*, Il2CppObject*))(Il2CppBase() + 0x14829EC))(this, targetObject);
	}

};

