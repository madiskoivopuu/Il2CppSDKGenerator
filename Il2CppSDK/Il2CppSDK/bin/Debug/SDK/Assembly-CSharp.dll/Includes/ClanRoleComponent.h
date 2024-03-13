#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanRoleComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanRoleComponent"));
	}

	template <typename T = bool> T& IsLeader() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ClanRoleComponent*, Il2CppObject*))(Il2CppBase() + 0x159783C))(this, target);
	}

};

