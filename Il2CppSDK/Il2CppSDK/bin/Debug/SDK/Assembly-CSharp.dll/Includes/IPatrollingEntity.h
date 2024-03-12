#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPatrollingEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPatrollingEntity"));
	}


	template <typename T = bool> T get_isPatrolling() {
		return ((T (*)(IPatrollingEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isPatrolling(bool value) {
		return ((T (*)(IPatrollingEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
