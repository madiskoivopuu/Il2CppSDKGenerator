#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerCosmeticsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerCosmeticsData"));
	}

	template <typename T = Il2CppDictionary<int32_t, Il2CppArray<uintptr_t>*>*> T& _bySlotIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Emojis() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& DefaultEquipEmojis() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = ItemDataContext*> T& _dataContex() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_Emojis() {
		return ((T (*)(PlayerCosmeticsData*))(Il2CppBase() + 0x15630F8))(this);
	}
	template <typename T = void> T set_Emojis(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerCosmeticsData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1563100))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_DefaultEquipEmojis() {
		return ((T (*)(PlayerCosmeticsData*))(Il2CppBase() + 0x1563108))(this);
	}
	template <typename T = void> T set_DefaultEquipEmojis(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerCosmeticsData*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1563110))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBySlotIndex(int32_t slotIndex) {
		return ((T (*)(PlayerCosmeticsData*, int32_t))(Il2CppBase() + 0x1563118))(this, slotIndex);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetByEquipmentType(EquipmentType* equipmentType) {
		return ((T (*)(PlayerCosmeticsData*, EquipmentType*))(Il2CppBase() + 0x1563174))(this, equipmentType);
	}
	template <typename T = IEnumerable1ItemEntity*>*> T GetAvailableEmojis(AccountEntity* account) {
		return ((T (*)(PlayerCosmeticsData*, AccountEntity*))(Il2CppBase() + 0x1563238))(this, account);
	}
	template <typename T = IEnumerable1ItemEntity*>*> T GetAvailable(AccountEntity* account, EquipmentType* equipmentType) {
		return ((T (*)(PlayerCosmeticsData*, AccountEntity*, EquipmentType*))(Il2CppBase() + 0x15632CC))(this, account, equipmentType);
	}

};

