#pragma once

#include "TypeTypeComponent1.h"
#include "ModifierGroup.h"


class GenderComponent : public TypeTypeComponent1<Gender> {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GenderComponent"));
	}

};};
