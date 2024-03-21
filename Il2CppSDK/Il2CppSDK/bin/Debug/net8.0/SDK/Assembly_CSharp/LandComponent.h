#pragma once

#include "EnumComponent1.h"


class LandComponent : public EnumComponent1<LandType> {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LandComponent"));
	}

};};
