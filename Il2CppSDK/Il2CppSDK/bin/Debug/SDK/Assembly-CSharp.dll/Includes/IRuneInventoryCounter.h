#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRuneInventoryCounter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRuneInventoryCounter"));
	}


	template <typename R = void> R InitClassRuneInventories(GameEntity* avatar, AccountEntity* account, PlayerClassType classTypeToReinit) {
		return ((R (*)(IRuneInventoryCounter*, GameEntity*, AccountEntity*, PlayerClassType))(Il2CppBase() + 0x0))(this, avatar, account, classTypeToReinit);
	}
	 Il2CppDictionary<PlayerClassType, HashSet1<InventorySlotEntity*>*>* get_ClassRuneInventories() {
		return ((Il2CppDictionary<PlayerClassType, HashSet1<InventorySlotEntity*>*>* (*)(IRuneInventoryCounter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = int32_t> R GetClassRunesInventoryCount(PlayerClassType playerClassType) {
		return ((R (*)(IRuneInventoryCounter*, PlayerClassType))(Il2CppBase() + 0x0))(this, playerClassType);
	}
	 Il2CppDictionary<PlayerClassType, int32_t>* get_ClassRunesInventoryCount() {
		return ((Il2CppDictionary<PlayerClassType, int32_t>* (*)(IRuneInventoryCounter*))(Il2CppBase() + 0x0))(this);
	}

};

