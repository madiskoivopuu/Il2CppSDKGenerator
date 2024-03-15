#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EnumValueComponent1.h" 
#include "BattleStatisticType.h" 

class BattleStatisticTypeComponent : public EnumValueComponent1<BattleStatisticType>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattleStatisticTypeComponent"));
	}



};

