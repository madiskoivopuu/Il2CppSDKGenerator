#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanInTeamConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanInTeamConditionComponent"));
	}

	template <typename T = bool> T& Contains() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ClanInTeamConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x1586744))(this, target);
	}

};

