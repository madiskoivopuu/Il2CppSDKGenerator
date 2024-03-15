#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanRoleComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanRoleComponent"));
	}

	template <typename R = bool> R& IsLeader() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ClanRoleComponent*, Il2CppObject*))(Il2CppBase() + 0x159783C))(this, target);
	}

};

