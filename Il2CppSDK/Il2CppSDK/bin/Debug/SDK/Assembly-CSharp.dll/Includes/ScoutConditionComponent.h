#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScoutConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScoutConditionComponent"));
	}

	template <typename R = ScoutStatus> R& Status() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ScoutConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x1357A74))(this, target);
	}

};

