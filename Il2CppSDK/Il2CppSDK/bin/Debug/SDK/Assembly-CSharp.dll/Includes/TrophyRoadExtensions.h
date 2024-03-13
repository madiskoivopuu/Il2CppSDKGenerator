#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrophyRoadExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrophyRoadExtensions"));
	}


	template <typename T = float> static T GetTax(TrophyRoadEntity* trophyRoad) {
		return ((T (*)(void *, TrophyRoadEntity*))(Il2CppBase() + 0x1020428))(0, trophyRoad);
	}
	template <typename T = int32_t> static T GetTaxMin(TrophyRoadEntity* trophyRoad) {
		return ((T (*)(void *, TrophyRoadEntity*))(Il2CppBase() + 0x1020470))(0, trophyRoad);
	}
	template <typename T = int32_t> static T GetTaxMax(TrophyRoadEntity* trophyRoad) {
		return ((T (*)(void *, TrophyRoadEntity*))(Il2CppBase() + 0x10204D8))(0, trophyRoad);
	}
	template <typename T = int32_t> static T GetTaxMin_1(float tax) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x10204AC))(0, tax);
	}
	template <typename T = int32_t> static T GetTaxMax_1(float tax) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x1020510))(0, tax);
	}
	template <typename T = int32_t> static T GetBuilderMaxCount(TrophyRoadEntity* trophyRoad, Il2CppString* groupName) {
		return ((T (*)(void *, TrophyRoadEntity*, Il2CppString*))(Il2CppBase() + 0x1020538))(0, trophyRoad, groupName);
	}
	template <typename T = float> static T GetTaxRate(TrophyRoadEntity* trophyRoad) {
		return ((T (*)(void *, TrophyRoadEntity*))(Il2CppBase() + 0x10205C4))(0, trophyRoad);
	}
	template <typename T = int32_t> static T GetGradeForStep(TrophyRoadEntity* trophyRoad, GameDataEntity* entityData) {
		return ((T (*)(void *, TrophyRoadEntity*, GameDataEntity*))(Il2CppBase() + 0x10205E8))(0, trophyRoad, entityData);
	}
	template <typename T = int32_t> static T GetGradeForStep_1(TrophyRoadEntity* trophyRoad, GameContext* gameContext) {
		return ((T (*)(void *, TrophyRoadEntity*, GameContext*))(Il2CppBase() + 0x102075C))(0, trophyRoad, gameContext);
	}
	template <typename T = int32_t> static T GetGradeCount(TrophyRoadEntity* trophyRoad, Il2CppString* tag) {
		return ((T (*)(void *, TrophyRoadEntity*, Il2CppString*))(Il2CppBase() + 0x10207D0))(0, trophyRoad, tag);
	}
	template <typename T = float> static T GetShamanChance(ITrophyRoadContexts* world, AccountEntity* account) {
		return ((T (*)(void *, ITrophyRoadContexts*, AccountEntity*))(Il2CppBase() + 0x102085C))(0, world, account);
	}
	template <typename T = float> static T GetDistrictMasteryPointsBonus(IDistrictLevelEntity* entity, ICommonContexts* world) {
		return ((T (*)(void *, IDistrictLevelEntity*, ICommonContexts*))(Il2CppBase() + 0x1020968))(0, entity, world);
	}
	template <typename T = float> static T GetDistrictMasteryPointsBonus_1(GameEntity* player, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1020B40))(0, player, world);
	}
	template <typename T = int32_t> static T GetCurrencyCount(TrophyRoadEntity* entity, CurrencyType* currencyType) {
		return ((T (*)(void *, TrophyRoadEntity*, CurrencyType*))(Il2CppBase() + 0x1020C40))(0, entity, currencyType);
	}
	template <typename T = bool> static T HasResourcesOrCurrencies(TrophyRoadEntity* entity) {
		return ((T (*)(void *, TrophyRoadEntity*))(Il2CppBase() + 0x1020D2C))(0, entity);
	}
	template <typename T = Il2CppString*> static T GetTaxRangeString(TrophyRoadEntity* trophyRoad) {
		return ((T (*)(void *, TrophyRoadEntity*))(Il2CppBase() + 0x1020DA4))(0, trophyRoad);
	}
	template <typename T = TrophyRoadEntity*> static T GetNextCraftsmanTier(TrophyRoadDataContext* context, int32_t currentLevel) {
		return ((T (*)(void *, TrophyRoadDataContext*, int32_t))(Il2CppBase() + 0x1020EAC))(0, context, currentLevel);
	}
	template <typename T = TrophyRoadEntity*> static T GetLastBuilded(TrophyRoadDataContext* context, Il2CppString* uniqueLookup, int32_t currentLevel) {
		return ((T (*)(void *, TrophyRoadDataContext*, Il2CppString*, int32_t))(Il2CppBase() + 0x1021104))(0, context, uniqueLookup, currentLevel);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T GetBonusLocalizedStrings(TrophyRoadEntity* entity, ICommonClientWorld* world) {
		return ((T (*)(void *, TrophyRoadEntity*, ICommonClientWorld*))(Il2CppBase() + 0x102134C))(0, entity, world);
	}
	template <typename T = Il2CppString*> static T GetStepNameWithLevel(TrophyRoadEntity* step, GameContext* gameContext) {
		return ((T (*)(void *, TrophyRoadEntity*, GameContext*))(Il2CppBase() + 0x10229BC))(0, step, gameContext);
	}

};

