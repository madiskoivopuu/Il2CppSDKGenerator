#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "EnumValueComponent1.h" 
#include "PlayerStatType.h" 

class PlayerStatTypeComponent : public EnumValueComponent1<PlayerStatType*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerStatTypeComponent"));
	}



};

