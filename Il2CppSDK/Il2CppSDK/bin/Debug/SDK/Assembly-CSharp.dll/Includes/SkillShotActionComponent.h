#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "StringNameComponent.h" 

class SkillShotActionComponent : public StringNameComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillShotActionComponent"));
	}

	template <typename T = Il2CppString*> T& Arrow() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(SkillShotActionComponent*, Il2CppObject*))(Il2CppBase() + 0x14829EC))(this, targetObject);
	}

};

