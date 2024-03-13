#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemFilter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemFilter"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& EquipmentTypes() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Rarities() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ContainsTags() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RejectTags() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

