#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanInTeamConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanInTeamConditionComponent"));
	}

	template <typename R = bool> R& Contains() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ClanInTeamConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x1586744))(this, target);
	}

};

