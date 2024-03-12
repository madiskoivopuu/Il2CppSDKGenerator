#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrophyRoadExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrophyRoadExtensions"));
	}


	template <typename T = float> static T GetTax(uintptr_t trophyRoad) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1020428))(0, trophyRoad);
	}
	template <typename T = int32_t> static T GetTaxMin(uintptr_t trophyRoad) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1020470))(0, trophyRoad);
	}
	template <typename T = int32_t> static T GetTaxMax(uintptr_t trophyRoad) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x10204D8))(0, trophyRoad);
	}
	template <typename T = int32_t> static T GetTaxMin_1(float tax) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x10204AC))(0, tax);
	}
	template <typename T = int32_t> static T GetTaxMax_1(float tax) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x1020510))(0, tax);
	}
	template <typename T = int32_t> static T GetBuilderMaxCount(uintptr_t trophyRoad, Il2CppString* groupName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1020538))(0, trophyRoad, groupName);
	}
	template <typename T = float> static T GetTaxRate(uintptr_t trophyRoad) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x10205C4))(0, trophyRoad);
	}
	template <typename T = int32_t> static T GetGradeForStep(uintptr_t trophyRoad, uintptr_t entityData) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x10205E8))(0, trophyRoad, entityData);
	}
	template <typename T = int32_t> static T GetGradeForStep_1(uintptr_t trophyRoad, uintptr_t gameContext) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x102075C))(0, trophyRoad, gameContext);
	}
	template <typename T = int32_t> static T GetGradeCount(uintptr_t trophyRoad, Il2CppString* tag) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x10207D0))(0, trophyRoad, tag);
	}
	template <typename T = float> static T GetShamanChance(uintptr_t world, uintptr_t account) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x102085C))(0, world, account);
	}
	template <typename T = float> static T GetDistrictMasteryPointsBonus(uintptr_t entity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1020968))(0, entity, world);
	}
	template <typename T = float> static T GetDistrictMasteryPointsBonus_1(uintptr_t player, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1020B40))(0, player, world);
	}
	template <typename T = int32_t> static T GetCurrencyCount(uintptr_t entity, uintptr_t currencyType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1020C40))(0, entity, currencyType);
	}
	template <typename T = bool> static T HasResourcesOrCurrencies(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1020D2C))(0, entity);
	}
	template <typename T = Il2CppString*> static T GetTaxRangeString(uintptr_t trophyRoad) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1020DA4))(0, trophyRoad);
	}
	template <typename T = uintptr_t> static T GetNextCraftsmanTier(uintptr_t context, int32_t currentLevel) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1020EAC))(0, context, currentLevel);
	}
	template <typename T = uintptr_t> static T GetLastBuilded(uintptr_t context, Il2CppString* uniqueLookup, int32_t currentLevel) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1021104))(0, context, uniqueLookup, currentLevel);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T GetBonusLocalizedStrings(uintptr_t entity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x102134C))(0, entity, world);
	}
	template <typename T = Il2CppString*> static T GetStepNameWithLevel(uintptr_t step, uintptr_t gameContext) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x10229BC))(0, step, gameContext);
	}

};

}
