#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicHelper"));
	}


	template <typename R = bool> static R IsRemovableDebuffControl(MagicDataEntity* magicData, bool withSpeedDec) {
		return ((R (*)(void *, MagicDataEntity*, bool))(Il2CppBase() + 0x1AD7520))(0, magicData, withSpeedDec);
	}
	template <typename R = float> static R GetDamageShieldValue(MagicEntity* magic) {
		return ((R (*)(void *, MagicEntity*))(Il2CppBase() + 0x1AD7648))(0, magic);
	}
	template <typename R = void> static R SetDamageShieldValue(MagicEntity* magic, float value) {
		return ((R (*)(void *, MagicEntity*, float))(Il2CppBase() + 0x1AD76A8))(0, magic, value);
	}
	template <typename R = bool> static R CheckAlive(MagicEntity* magic, ICommonContexts* world, GameEntity* target) {
		return ((R (*)(void *, MagicEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1AD7710))(0, magic, world, target);
	}
	template <typename R = void> static R UpdateAlive(MagicEntity* magic, ICommonContexts* world, GameEntity* target) {
		return ((R (*)(void *, MagicEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1AD79A0))(0, magic, world, target);
	}
	template <typename R = int32_t> static R GetStackCount(MagicEntity* magic) {
		return ((R (*)(void *, MagicEntity*))(Il2CppBase() + 0x1ACD0C4))(0, magic);
	}
	template <typename R = int32_t> static R GetStackCount_1(MagicDataEntity* magicData) {
		return ((R (*)(void *, MagicDataEntity*))(Il2CppBase() + 0x1AD7A0C))(0, magicData);
	}
	template <typename R = int32_t> static R SetStackCount(MagicEntity* magic, int32_t count) {
		return ((R (*)(void *, MagicEntity*, int32_t))(Il2CppBase() + 0x1AD7AA8))(0, magic, count);
	}
	template <typename R = int32_t> static R GetMaxStackCount(MagicDataEntity* magicData) {
		return ((R (*)(void *, MagicDataEntity*))(Il2CppBase() + 0x1AD7B04))(0, magicData);
	}
	template <typename R = int32_t> static R GetUseCount(MagicDataEntity* magicData) {
		return ((R (*)(void *, MagicDataEntity*))(Il2CppBase() + 0x1AD7BA0))(0, magicData);
	}
	template <typename R = bool> static R HasMagicImmune(GameEntity* target, MagicDataEntity* magicData) {
		return ((R (*)(void *, GameEntity*, MagicDataEntity*))(Il2CppBase() + 0x1AD7BEC))(0, target, magicData);
	}
	template <typename R = bool> static R HasMagicImmune_1(GameEntity* target, Il2CppString* name) {
		return ((R (*)(void *, GameEntity*, Il2CppString*))(Il2CppBase() + 0x1AD7DE8))(0, target, name);
	}
	template <typename R = bool> static R HasMagicImmune_2(ImmunityCacheComponent* immunityCache, MagicDataEntity* magicData) {
		return ((R (*)(void *, ImmunityCacheComponent*, MagicDataEntity*))(Il2CppBase() + 0x1AD7C98))(0, immunityCache, magicData);
	}
	template <typename R = void> static R SavePermanentMagic(GameEntity* target, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1AD7EBC))(0, target, world);
	}
	template <typename R = void> static R SavePermanentMagic_1(AccountEntity* account, ICommonContexts* world, GameEntity* target) {
		return ((R (*)(void *, AccountEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1AD8418))(0, account, world, target);
	}
	template <typename R = void> static R LoadPermanentMagic(IMagicSaveEntity* magicSaveEntity, ICommonContexts* world, GameEntity* target) {
		return ((R (*)(void *, IMagicSaveEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1AD89F4))(0, magicSaveEntity, world, target);
	}
	template <typename R = void> static R RemoveOnActionMagics(GameEntity* target, ICommonContexts* world, ActionEntity* action) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, ActionEntity*))(Il2CppBase() + 0x1AD91F4))(0, target, world, action);
	}
	template <typename R = bool> static R NeedRemoveOnAction(MagicEntity* magic, MagicDataEntity* magicData, ICommonContexts* world, GameEntity* target, ActionEntity* action) {
		return ((R (*)(void *, MagicEntity*, MagicDataEntity*, ICommonContexts*, GameEntity*, ActionEntity*))(Il2CppBase() + 0x1AD975C))(0, magic, magicData, world, target, action);
	}
	template <typename R = bool> static R IsEnoughMagics(GameEntity* entity, ICommonContexts* world, Il2CppArray<Item>* items) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, Il2CppArray<Item>*))(Il2CppBase() + 0x1AD99B0))(0, entity, world, items);
	}
	template <typename R = bool> static R HasAliveMagicWithAnyDataComponents(GameEntity* entity, ICommonContexts* world, bool onlyTemporary, Il2CppArray<int32_t>* dataComponentsIndexes) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, bool, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1AD9B14))(0, entity, world, onlyTemporary, dataComponentsIndexes);
	}

};

