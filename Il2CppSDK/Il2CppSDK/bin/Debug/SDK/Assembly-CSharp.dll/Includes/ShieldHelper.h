#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShieldHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShieldHelper"));
	}

	template <typename R = Il2CppString*> static R& RaidDisableForPassive() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = bool> static R IsShieldActive(IWorld* world, int64_t clanId, bool oneCellWorld) {
		return ((R (*)(void *, IWorld*, int64_t, bool))(Il2CppBase() + 0x162FFA4))(0, world, clanId, oneCellWorld);
	}
	template <typename R = bool> static R CanApplyBattery(ICommonContexts* world, int64_t playerId, GameEntity* target, InventorySlotEntity* inventoryEntity, TempBuffDataContext* buffContext) {
		return ((R (*)(void *, ICommonContexts*, int64_t, GameEntity*, InventorySlotEntity*, TempBuffDataContext*))(Il2CppBase() + 0x1630224))(0, world, playerId, target, inventoryEntity, buffContext);
	}
	template <typename R = bool> static R CanApplyBattery_1(GameEntity* target, InventorySlotEntity* inventoryEntity, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, InventorySlotEntity*, ICommonContexts*))(Il2CppBase() + 0x16304B0))(0, target, inventoryEntity, world);
	}
	template <typename R = bool> static R IsBatteryActive(IWorld* world, int64_t clanId) {
		return ((R (*)(void *, IWorld*, int64_t))(Il2CppBase() + 0x1630030))(0, world, clanId);
	}

};

