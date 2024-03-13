#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScoutConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScoutConditionComponent"));
	}

	template <typename T = ScoutStatus*> T& Status() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ScoutConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x1357A74))(this, target);
	}

};

