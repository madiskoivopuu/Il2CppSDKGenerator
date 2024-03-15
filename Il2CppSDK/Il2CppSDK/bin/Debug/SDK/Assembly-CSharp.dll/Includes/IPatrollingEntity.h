#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPatrollingEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPatrollingEntity"));
	}


	template <typename R = bool> R get_isPatrolling() {
		return ((R (*)(IPatrollingEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isPatrolling(bool value) {
		return ((R (*)(IPatrollingEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

