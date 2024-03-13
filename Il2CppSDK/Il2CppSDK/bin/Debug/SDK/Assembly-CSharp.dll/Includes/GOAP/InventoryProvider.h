#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GOAP {

class InventoryProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GOAP", "InventoryProvider"));
	}

	template <typename T = ICommonLogger*> T& logger() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T GetInventoryItemsCount(ArenaClientWorld* world, GameEntity* entity, Il2CppString* itemId) {
		return ((T (*)(InventoryProvider*, ArenaClientWorld*, GameEntity*, Il2CppString*))(Il2CppBase() + 0x12336E4))(this, world, entity, itemId);
	}

};

}
