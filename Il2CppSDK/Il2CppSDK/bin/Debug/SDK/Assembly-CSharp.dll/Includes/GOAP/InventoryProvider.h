#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GOAP {

class InventoryProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GOAP", "InventoryProvider"));
	}

	template <typename R = ICommonLogger*> R& logger() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R GetInventoryItemsCount(ArenaClientWorld* world, GameEntity* entity, Il2CppString* itemId) {
		return ((R (*)(InventoryProvider*, ArenaClientWorld*, GameEntity*, Il2CppString*))(Il2CppBase() + 0x12336E4))(this, world, entity, itemId);
	}

};

}
