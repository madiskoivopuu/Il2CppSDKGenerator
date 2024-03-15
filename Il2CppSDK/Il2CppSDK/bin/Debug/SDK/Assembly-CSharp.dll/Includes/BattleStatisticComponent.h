#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattleStatisticComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattleStatisticComponent"));
	}

	template <typename R = BattleStatistic*> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

