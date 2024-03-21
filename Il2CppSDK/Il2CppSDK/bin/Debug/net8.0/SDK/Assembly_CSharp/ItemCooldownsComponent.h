#pragma once

#include "TypeListComponent1.h"


class ItemCooldownsComponent : public TypeListComponent1<ItemCooldown> {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemCooldownsComponent"));
	}

};};
