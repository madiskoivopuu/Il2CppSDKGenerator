#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeListJsonConverter1.h" 

class ItemCooldownsJsonConverter : public TypeListJsonConverter1<ItemCooldown*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemCooldownsJsonConverter"));
	}



};

