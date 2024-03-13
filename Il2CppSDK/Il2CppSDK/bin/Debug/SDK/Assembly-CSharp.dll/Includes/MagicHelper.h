#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicHelper"));
	}


	template <typename T = bool> static T IsRemovableDebuffControl(MagicDataEntity* magicData, bool withSpeedDec) {
		return ((T (*)(void *, MagicDataEntity*, bool))(Il2CppBase() + 0x1AD7520))(0, magicData, withSpeedDec);
	}
	template <typename T = float> static T GetDamageShieldValue(MagicEntity* magic) {
		return ((T (*)(void *, MagicEntity*))(Il2CppBase() + 0x1AD7648))(0, magic);
	}
	template <typename T = void> static T SetDamageShieldValue(MagicEntity* magic, float value) {
		return ((T (*)(void *, MagicEntity*, float))(Il2CppBase() + 0x1AD76A8))(0, magic, value);
	}
	template <typename T = bool> static T CheckAlive(MagicEntity* magic, ICommonContexts* world, GameEntity* target) {
		return ((T (*)(void *, MagicEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1AD7710))(0, magic, world, target);
	}
	template <typename T = void> static T UpdateAlive(MagicEntity* magic, ICommonContexts* world, GameEntity* target) {
		return ((T (*)(void *, MagicEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1AD79A0))(0, magic, world, target);
	}
	template <typename T = int32_t> static T GetStackCount(MagicEntity* magic) {
		return ((T (*)(void *, MagicEntity*))(Il2CppBase() + 0x1ACD0C4))(0, magic);
	}
	template <typename T = int32_t> static T GetStackCount_1(MagicDataEntity* magicData) {
		return ((T (*)(void *, MagicDataEntity*))(Il2CppBase() + 0x1AD7A0C))(0, magicData);
	}
	template <typename T = int32_t> static T SetStackCount(MagicEntity* magic, int32_t count) {
		return ((T (*)(void *, MagicEntity*, int32_t))(Il2CppBase() + 0x1AD7AA8))(0, magic, count);
	}
	template <typename T = int32_t> static T GetMaxStackCount(MagicDataEntity* magicData) {
		return ((T (*)(void *, MagicDataEntity*))(Il2CppBase() + 0x1AD7B04))(0, magicData);
	}
	template <typename T = int32_t> static T GetUseCount(MagicDataEntity* magicData) {
		return ((T (*)(void *, MagicDataEntity*))(Il2CppBase() + 0x1AD7BA0))(0, magicData);
	}
	template <typename T = bool> static T HasMagicImmune(GameEntity* target, MagicDataEntity* magicData) {
		return ((T (*)(void *, GameEntity*, MagicDataEntity*))(Il2CppBase() + 0x1AD7BEC))(0, target, magicData);
	}
	template <typename T = bool> static T HasMagicImmune_1(GameEntity* target, Il2CppString* name) {
		return ((T (*)(void *, GameEntity*, Il2CppString*))(Il2CppBase() + 0x1AD7DE8))(0, target, name);
	}
	template <typename T = bool> static T HasMagicImmune_2(ImmunityCacheComponent* immunityCache, MagicDataEntity* magicData) {
		return ((T (*)(void *, ImmunityCacheComponent*, MagicDataEntity*))(Il2CppBase() + 0x1AD7C98))(0, immunityCache, magicData);
	}
	template <typename T = void> static T SavePermanentMagic(GameEntity* target, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1AD7EBC))(0, target, world);
	}
	template <typename T = void> static T SavePermanentMagic_1(AccountEntity* account, ICommonContexts* world, GameEntity* target) {
		return ((T (*)(void *, AccountEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1AD8418))(0, account, world, target);
	}
	template <typename T = void> static T LoadPermanentMagic(IMagicSaveEntity* magicSaveEntity, ICommonContexts* world, GameEntity* target) {
		return ((T (*)(void *, IMagicSaveEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1AD89F4))(0, magicSaveEntity, world, target);
	}
	template <typename T = void> static T RemoveOnActionMagics(GameEntity* target, ICommonContexts* world, ActionEntity* action) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, ActionEntity*))(Il2CppBase() + 0x1AD91F4))(0, target, world, action);
	}
	template <typename T = bool> static T NeedRemoveOnAction(MagicEntity* magic, MagicDataEntity* magicData, ICommonContexts* world, GameEntity* target, ActionEntity* action) {
		return ((T (*)(void *, MagicEntity*, MagicDataEntity*, ICommonContexts*, GameEntity*, ActionEntity*))(Il2CppBase() + 0x1AD975C))(0, magic, magicData, world, target, action);
	}
	template <typename T = bool> static T IsEnoughMagics(GameEntity* entity, ICommonContexts* world, Il2CppArray<uintptr_t>* items) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AD99B0))(0, entity, world, items);
	}
	template <typename T = bool> static T HasAliveMagicWithAnyDataComponents(GameEntity* entity, ICommonContexts* world, bool onlyTemporary, Il2CppArray<uintptr_t>* dataComponentsIndexes) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AD9B14))(0, entity, world, onlyTemporary, dataComponentsIndexes);
	}

};

