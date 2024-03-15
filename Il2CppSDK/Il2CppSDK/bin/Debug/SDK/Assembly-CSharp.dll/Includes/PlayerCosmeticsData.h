#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerCosmeticsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerCosmeticsData"));
	}

	 Il2CppDictionary<int32_t, Il2CppArray<ItemEntity*>*>*& _bySlotIndex() {
		return *(Il2CppDictionary<int32_t, Il2CppArray<ItemEntity*>*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<ItemEntity*>*> R& Emojis() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& DefaultEquipEmojis() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = ItemDataContext*> R& _dataContex() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = Il2CppArray<ItemEntity*>*> R get_Emojis() {
		return ((R (*)(PlayerCosmeticsData*))(Il2CppBase() + 0x15630F8))(this);
	}
	template <typename R = void> R set_Emojis(Il2CppArray<ItemEntity*>* value) {
		return ((R (*)(PlayerCosmeticsData*, Il2CppArray<ItemEntity*>*))(Il2CppBase() + 0x1563100))(this, value);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R get_DefaultEquipEmojis() {
		return ((R (*)(PlayerCosmeticsData*))(Il2CppBase() + 0x1563108))(this);
	}
	template <typename R = void> R set_DefaultEquipEmojis(Il2CppArray<Il2CppString*>* value) {
		return ((R (*)(PlayerCosmeticsData*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1563110))(this, value);
	}
	template <typename R = Il2CppArray<ItemEntity*>*> R GetBySlotIndex(int32_t slotIndex) {
		return ((R (*)(PlayerCosmeticsData*, int32_t))(Il2CppBase() + 0x1563118))(this, slotIndex);
	}
	template <typename R = Il2CppArray<ItemEntity*>*> R GetByEquipmentType(EquipmentType* equipmentType) {
		return ((R (*)(PlayerCosmeticsData*, EquipmentType*))(Il2CppBase() + 0x1563174))(this, equipmentType);
	}
	 IEnumerable1ItemEntity*>* GetAvailableEmojis(AccountEntity* account) {
		return ((IEnumerable1ItemEntity*>* (*)(PlayerCosmeticsData*, AccountEntity*))(Il2CppBase() + 0x1563238))(this, account);
	}
	 IEnumerable1ItemEntity*>* GetAvailable(AccountEntity* account, EquipmentType* equipmentType) {
		return ((IEnumerable1ItemEntity*>* (*)(PlayerCosmeticsData*, AccountEntity*, EquipmentType*))(Il2CppBase() + 0x15632CC))(this, account, equipmentType);
	}

};

