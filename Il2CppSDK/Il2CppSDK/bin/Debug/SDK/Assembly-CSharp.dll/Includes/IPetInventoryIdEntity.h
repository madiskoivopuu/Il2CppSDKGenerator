#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPetInventoryIdEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPetInventoryIdEntity"));
	}


	template <typename R = PetInventoryIdComponent*> R get_petInventoryId() {
		return ((R (*)(IPetInventoryIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPetInventoryId() {
		return ((R (*)(IPetInventoryIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPetInventoryId(int32_t newId) {
		return ((R (*)(IPetInventoryIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplacePetInventoryId(int32_t newId) {
		return ((R (*)(IPetInventoryIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemovePetInventoryId() {
		return ((R (*)(IPetInventoryIdEntity*))(Il2CppBase() + 0x0))(this);
	}

};

