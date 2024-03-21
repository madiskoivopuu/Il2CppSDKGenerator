#pragma once

#include "EnumComponent1.h"


class OccupationComponent : public EnumComponent1<OccupationType> {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OccupationComponent"));
	}

};};
