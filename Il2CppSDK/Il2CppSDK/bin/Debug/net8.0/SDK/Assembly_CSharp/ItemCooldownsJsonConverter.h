#pragma once

#include "TypeListJsonConverter1.h"


class ItemCooldownsJsonConverter : public TypeListJsonConverter1<ItemCooldown> {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemCooldownsJsonConverter"));
	}

};};
