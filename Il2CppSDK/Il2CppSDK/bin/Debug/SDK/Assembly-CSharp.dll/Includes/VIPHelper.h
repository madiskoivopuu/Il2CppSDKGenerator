#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VIPHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPHelper"));
	}


	template <typename T = int32_t> static T GetPlayerVIPLevel(uintptr_t world, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x15C01C4))(0, world, playerId);
	}
	template <typename T = int32_t> static T GetVIPLevel(uintptr_t world, int32_t vipPoints) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x15C02AC))(0, world, vipPoints);
	}
	template <typename T = bool> static T IsVIPAvailable(uintptr_t world, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x15C0428))(0, world, playerId);
	}
	template <typename T = bool> static T IsVIPDailyChestEnabled(uintptr_t ctx, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x15C050C))(0, ctx, playerId);
	}
	template <typename T = int32_t> static T GetVIPDailyChestSlotsCount(uintptr_t ctx, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x15C0538))(0, ctx, playerId);
	}
	template <typename T = bool> static T IsVIPDailyChestSilverEnabled(uintptr_t ctx, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x15C05D8))(0, ctx, playerId);
	}
	template <typename T = float> static T GetVIPDailyChestSilverBonus(uintptr_t ctx, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x15C0604))(0, ctx, playerId);
	}
	template <typename T = float> static T GetVIPDailyChestInfluenceBonus(uintptr_t ctx, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x15C0648))(0, ctx, playerId);
	}
	template <typename T = float> static T GetVIPPointsBonus(uintptr_t ctx, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x15C068C))(0, ctx, playerId);
	}
	template <typename T = float> static T GetMasteryPointsBonus(uintptr_t ctx, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x15C06D0))(0, ctx, playerId);
	}
	template <typename T = void*> static T GetAllSanctumsDamageBonus(uintptr_t ctx, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x15C070C))(0, ctx, playerId);
	}
	template <typename T = float> static T GetStoreGachaAdditionalRareBonus(uintptr_t ctx, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x15C07E0))(0, ctx, playerId);
	}
	template <typename T = float> static T GetStoreGachaAdditionalVeryRareBonus(uintptr_t ctx, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x15C081C))(0, ctx, playerId);
	}
	template <typename T = float> static T GetStoreGachaAdditionalUltraRareBonus(uintptr_t ctx, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x15C0858))(0, ctx, playerId);
	}
	template <typename T = float> static T GetDailyChestAdditionalUncommonBonus(uintptr_t ctx, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x15C0894))(0, ctx, playerId);
	}
	template <typename T = float> static T GetDailyChestAdditionalRareBonus(uintptr_t ctx, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x15C08D0))(0, ctx, playerId);
	}
	template <typename T = float> static T GetDailyChestAdditionalEpicBonus(uintptr_t ctx, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x15C090C))(0, ctx, playerId);
	}
	template <typename T = void*> static T GetHealthBonusPercent(uintptr_t ctx, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x15C0948))(0, ctx, playerId);
	}
	template <typename T = void*> static T GetHealthBonusConstant(uintptr_t ctx, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x15C0A1C))(0, ctx, playerId);
	}
	template <typename T = float> static T GetAutoFarmBonus(uintptr_t ctx, int64_t playerId) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x15C0AF0))(0, ctx, playerId);
	}
	template <typename T = float> static T GetMountGradeUpChanceBonus(uintptr_t ctx, int64_t playerId, int32_t toGrade) {
		return ((T (*)(void *, uintptr_t, int64_t, int32_t))(Il2CppBase() + 0x15C0B38))(0, ctx, playerId, toGrade);
	}

};

}
