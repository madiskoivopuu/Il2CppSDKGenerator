#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBattlePassDataContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBattlePassDataContext"));
	}


	template <typename T = uintptr_t> T get_battlePass() {
		return ((T (*)(IBattlePassDataContext*))(Il2CppBase() + 0x0))(this);
	}

};

}
