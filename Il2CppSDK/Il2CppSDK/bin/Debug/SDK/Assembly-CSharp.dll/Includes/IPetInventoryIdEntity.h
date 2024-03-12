#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPetInventoryIdEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPetInventoryIdEntity"));
	}


	template <typename T = uintptr_t> T get_petInventoryId() {
		return ((T (*)(IPetInventoryIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPetInventoryId() {
		return ((T (*)(IPetInventoryIdEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPetInventoryId(int32_t newId) {
		return ((T (*)(IPetInventoryIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplacePetInventoryId(int32_t newId) {
		return ((T (*)(IPetInventoryIdEntity*, int32_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemovePetInventoryId() {
		return ((T (*)(IPetInventoryIdEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
