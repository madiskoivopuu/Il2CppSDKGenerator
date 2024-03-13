#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChestMarkerSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestMarkerSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1GameEntity*>*> T GetTrigger(IContext1GameEntity*>* context) {
		return ((T (*)(ChestMarkerSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x173FD64))(this, context);
	}
	template <typename T = bool> T Filter(GameEntity* entity) {
		return ((T (*)(ChestMarkerSystem*, GameEntity*))(Il2CppBase() + 0x173FEB4))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<GameEntity*>* entities) {
		return ((T (*)(ChestMarkerSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x173FF10))(this, entities);
	}
	template <typename T = void> static T UpdateChestMarker(ArenaUnityWorld* world, GameEntity* entity, AccountEntity* ownerAccount) {
		return ((T (*)(void *, ArenaUnityWorld*, GameEntity*, AccountEntity*))(Il2CppBase() + 0x1740040))(0, world, entity, ownerAccount);
	}
	template <typename T = bool> static T ShowChestMarker(GameEntity* entity, AccountEntity* ownerAccount, ChestMarkerComponent* chestMarker) {
		return ((T (*)(void *, GameEntity*, AccountEntity*, ChestMarkerComponent*))(Il2CppBase() + 0x1740368))(0, entity, ownerAccount, chestMarker);
	}

};

