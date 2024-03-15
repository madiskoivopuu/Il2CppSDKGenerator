#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeListComponent1.h" 
#include "ItemCooldown.h" 

class ItemCooldownsComponent : public TypeListComponent1<ItemCooldown>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemCooldownsComponent"));
	}


	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ItemCooldownsComponent*, uintptr_t))(Il2CppBase() + 0x10EE278))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ItemCooldownsComponent*, uintptr_t))(Il2CppBase() + 0x10EE280))(this, writer);
	}

};

