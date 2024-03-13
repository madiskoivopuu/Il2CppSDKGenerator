#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeListComponent1.h" 

class ItemCooldownsComponent : public TypeListComponent1<ItemCooldown*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemCooldownsComponent"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ItemCooldownsComponent*, uintptr_t))(Il2CppBase() + 0x10EE278))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ItemCooldownsComponent*, uintptr_t))(Il2CppBase() + 0x10EE280))(this, writer);
	}

};

