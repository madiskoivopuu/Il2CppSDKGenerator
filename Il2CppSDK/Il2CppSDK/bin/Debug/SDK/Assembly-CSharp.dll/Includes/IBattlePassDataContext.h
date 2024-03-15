#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBattlePassDataContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBattlePassDataContext"));
	}


	template <typename R = BattlePassDataContext*> R get_battlePass() {
		return ((R (*)(IBattlePassDataContext*))(Il2CppBase() + 0x0))(this);
	}

};

