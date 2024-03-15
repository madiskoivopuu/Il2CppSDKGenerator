#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrophyRoadExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrophyRoadExtensions"));
	}


	template <typename R = float> static R GetTax(TrophyRoadEntity* trophyRoad) {
		return ((R (*)(void *, TrophyRoadEntity*))(Il2CppBase() + 0x1020428))(0, trophyRoad);
	}
	template <typename R = int32_t> static R GetTaxMin(TrophyRoadEntity* trophyRoad) {
		return ((R (*)(void *, TrophyRoadEntity*))(Il2CppBase() + 0x1020470))(0, trophyRoad);
	}
	template <typename R = int32_t> static R GetTaxMax(TrophyRoadEntity* trophyRoad) {
		return ((R (*)(void *, TrophyRoadEntity*))(Il2CppBase() + 0x10204D8))(0, trophyRoad);
	}
	template <typename R = int32_t> static R GetTaxMin_1(float tax) {
		return ((R (*)(void *, float))(Il2CppBase() + 0x10204AC))(0, tax);
	}
	template <typename R = int32_t> static R GetTaxMax_1(float tax) {
		return ((R (*)(void *, float))(Il2CppBase() + 0x1020510))(0, tax);
	}
	template <typename R = int32_t> static R GetBuilderMaxCount(TrophyRoadEntity* trophyRoad, Il2CppString* groupName) {
		return ((R (*)(void *, TrophyRoadEntity*, Il2CppString*))(Il2CppBase() + 0x1020538))(0, trophyRoad, groupName);
	}
	template <typename R = float> static R GetTaxRate(TrophyRoadEntity* trophyRoad) {
		return ((R (*)(void *, TrophyRoadEntity*))(Il2CppBase() + 0x10205C4))(0, trophyRoad);
	}
	template <typename R = int32_t> static R GetGradeForStep(TrophyRoadEntity* trophyRoad, GameDataEntity* entityData) {
		return ((R (*)(void *, TrophyRoadEntity*, GameDataEntity*))(Il2CppBase() + 0x10205E8))(0, trophyRoad, entityData);
	}
	template <typename R = int32_t> static R GetGradeForStep_1(TrophyRoadEntity* trophyRoad, GameContext* gameContext) {
		return ((R (*)(void *, TrophyRoadEntity*, GameContext*))(Il2CppBase() + 0x102075C))(0, trophyRoad, gameContext);
	}
	template <typename R = int32_t> static R GetGradeCount(TrophyRoadEntity* trophyRoad, Il2CppString* tag) {
		return ((R (*)(void *, TrophyRoadEntity*, Il2CppString*))(Il2CppBase() + 0x10207D0))(0, trophyRoad, tag);
	}
	template <typename R = float> static R GetShamanChance(ITrophyRoadContexts* world, AccountEntity* account) {
		return ((R (*)(void *, ITrophyRoadContexts*, AccountEntity*))(Il2CppBase() + 0x102085C))(0, world, account);
	}
	template <typename R = float> static R GetDistrictMasteryPointsBonus(IDistrictLevelEntity* entity, ICommonContexts* world) {
		return ((R (*)(void *, IDistrictLevelEntity*, ICommonContexts*))(Il2CppBase() + 0x1020968))(0, entity, world);
	}
	template <typename R = float> static R GetDistrictMasteryPointsBonus_1(GameEntity* player, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1020B40))(0, player, world);
	}
	template <typename R = int32_t> static R GetCurrencyCount(TrophyRoadEntity* entity, CurrencyType* currencyType) {
		return ((R (*)(void *, TrophyRoadEntity*, CurrencyType*))(Il2CppBase() + 0x1020C40))(0, entity, currencyType);
	}
	template <typename R = bool> static R HasResourcesOrCurrencies(TrophyRoadEntity* entity) {
		return ((R (*)(void *, TrophyRoadEntity*))(Il2CppBase() + 0x1020D2C))(0, entity);
	}
	template <typename R = Il2CppString*> static R GetTaxRangeString(TrophyRoadEntity* trophyRoad) {
		return ((R (*)(void *, TrophyRoadEntity*))(Il2CppBase() + 0x1020DA4))(0, trophyRoad);
	}
	template <typename R = TrophyRoadEntity*> static R GetNextCraftsmanTier(TrophyRoadDataContext* context, int32_t currentLevel) {
		return ((R (*)(void *, TrophyRoadDataContext*, int32_t))(Il2CppBase() + 0x1020EAC))(0, context, currentLevel);
	}
	template <typename R = TrophyRoadEntity*> static R GetLastBuilded(TrophyRoadDataContext* context, Il2CppString* uniqueLookup, int32_t currentLevel) {
		return ((R (*)(void *, TrophyRoadDataContext*, Il2CppString*, int32_t))(Il2CppBase() + 0x1021104))(0, context, uniqueLookup, currentLevel);
	}
	 static Il2CppList<Il2CppString*>* GetBonusLocalizedStrings(TrophyRoadEntity* entity, ICommonClientWorld* world) {
		return ((Il2CppList<Il2CppString*>* (*)(void *, TrophyRoadEntity*, ICommonClientWorld*))(Il2CppBase() + 0x102134C))(0, entity, world);
	}
	template <typename R = Il2CppString*> static R GetStepNameWithLevel(TrophyRoadEntity* step, GameContext* gameContext) {
		return ((R (*)(void *, TrophyRoadEntity*, GameContext*))(Il2CppBase() + 0x10229BC))(0, step, gameContext);
	}

};

