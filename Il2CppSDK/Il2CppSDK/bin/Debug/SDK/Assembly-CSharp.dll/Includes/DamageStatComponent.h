#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DamageStat.h" 

class DamageStatComponent : public DamageStat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageStatComponent"));
	}



};

