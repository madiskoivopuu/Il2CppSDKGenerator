#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ApplyDamage.h" 

class ApplyDamageComponent : public ApplyDamage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyDamageComponent"));
	}



};

