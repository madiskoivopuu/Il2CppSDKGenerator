#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemFilter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemFilter"));
	}

	template <typename R = Il2CppArray<EquipmentType*>*> R& EquipmentTypes() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<Rarity*>*> R& Rarities() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& ContainsTags() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& RejectTags() {
		return *(R*)((uintptr_t)this + 0x18);
	}


};

