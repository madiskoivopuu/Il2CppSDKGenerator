#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRuneInventoryCounter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRuneInventoryCounter"));
	}


	template <typename T = void> T InitClassRuneInventories(GameEntity* avatar, AccountEntity* account, PlayerClassType* classTypeToReinit) {
		return ((T (*)(IRuneInventoryCounter*, GameEntity*, AccountEntity*, PlayerClassType*))(Il2CppBase() + 0x0))(this, avatar, account, classTypeToReinit);
	}
	template <typename T = Il2CppDictionary<PlayerClassType*, HashSet1InventorySlotEntity*>*>*> T get_ClassRuneInventories() {
		return ((T (*)(IRuneInventoryCounter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetClassRunesInventoryCount(PlayerClassType* playerClassType) {
		return ((T (*)(IRuneInventoryCounter*, PlayerClassType*))(Il2CppBase() + 0x0))(this, playerClassType);
	}
	template <typename T = Il2CppDictionary<PlayerClassType*, int32_t>*> T get_ClassRunesInventoryCount() {
		return ((T (*)(IRuneInventoryCounter*))(Il2CppBase() + 0x0))(this);
	}

};

