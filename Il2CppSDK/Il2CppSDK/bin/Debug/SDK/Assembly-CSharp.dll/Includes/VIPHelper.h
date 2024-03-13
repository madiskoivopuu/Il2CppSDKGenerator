#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VIPHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPHelper"));
	}


	template <typename T = int32_t> static T GetPlayerVIPLevel(ICommonContexts* world, int64_t playerId) {
		return ((T (*)(void *, ICommonContexts*, int64_t))(Il2CppBase() + 0x15C01C4))(0, world, playerId);
	}
	template <typename T = int32_t> static T GetVIPLevel(ICommonContexts* world, int32_t vipPoints) {
		return ((T (*)(void *, ICommonContexts*, int32_t))(Il2CppBase() + 0x15C02AC))(0, world, vipPoints);
	}
	template <typename T = bool> static T IsVIPAvailable(ICommonContexts* world, int64_t playerId) {
		return ((T (*)(void *, ICommonContexts*, int64_t))(Il2CppBase() + 0x15C0428))(0, world, playerId);
	}
	template <typename T = bool> static T IsVIPDailyChestEnabled(VIPContext* ctx, int64_t playerId) {
		return ((T (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C050C))(0, ctx, playerId);
	}
	template <typename T = int32_t> static T GetVIPDailyChestSlotsCount(VIPContext* ctx, int64_t playerId) {
		return ((T (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C0538))(0, ctx, playerId);
	}
	template <typename T = bool> static T IsVIPDailyChestSilverEnabled(VIPContext* ctx, int64_t playerId) {
		return ((T (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C05D8))(0, ctx, playerId);
	}
	template <typename T = float> static T GetVIPDailyChestSilverBonus(VIPContext* ctx, int64_t playerId) {
		return ((T (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C0604))(0, ctx, playerId);
	}
	template <typename T = float> static T GetVIPDailyChestInfluenceBonus(VIPContext* ctx, int64_t playerId) {
		return ((T (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C0648))(0, ctx, playerId);
	}
	template <typename T = float> static T GetVIPPointsBonus(VIPContext* ctx, int64_t playerId) {
		return ((T (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C068C))(0, ctx, playerId);
	}
	template <typename T = float> static T GetMasteryPointsBonus(VIPContext* ctx, int64_t playerId) {
		return ((T (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C06D0))(0, ctx, playerId);
	}
	template <typename T = ValueTuple2float, Il2CppString*>*> static T GetAllSanctumsDamageBonus(VIPContext* ctx, int64_t playerId) {
		return ((T (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C070C))(0, ctx, playerId);
	}
	template <typename T = float> static T GetStoreGachaAdditionalRareBonus(VIPContext* ctx, int64_t playerId) {
		return ((T (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C07E0))(0, ctx, playerId);
	}
	template <typename T = float> static T GetStoreGachaAdditionalVeryRareBonus(VIPContext* ctx, int64_t playerId) {
		return ((T (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C081C))(0, ctx, playerId);
	}
	template <typename T = float> static T GetStoreGachaAdditionalUltraRareBonus(VIPContext* ctx, int64_t playerId) {
		return ((T (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C0858))(0, ctx, playerId);
	}
	template <typename T = float> static T GetDailyChestAdditionalUncommonBonus(VIPContext* ctx, int64_t playerId) {
		return ((T (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C0894))(0, ctx, playerId);
	}
	template <typename T = float> static T GetDailyChestAdditionalRareBonus(VIPContext* ctx, int64_t playerId) {
		return ((T (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C08D0))(0, ctx, playerId);
	}
	template <typename T = float> static T GetDailyChestAdditionalEpicBonus(VIPContext* ctx, int64_t playerId) {
		return ((T (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C090C))(0, ctx, playerId);
	}
	template <typename T = ValueTuple2float, Il2CppString*>*> static T GetHealthBonusPercent(VIPContext* ctx, int64_t playerId) {
		return ((T (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C0948))(0, ctx, playerId);
	}
	template <typename T = ValueTuple2float, Il2CppString*>*> static T GetHealthBonusConstant(VIPContext* ctx, int64_t playerId) {
		return ((T (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C0A1C))(0, ctx, playerId);
	}
	template <typename T = float> static T GetAutoFarmBonus(VIPContext* ctx, int64_t playerId) {
		return ((T (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C0AF0))(0, ctx, playerId);
	}
	template <typename T = float> static T GetMountGradeUpChanceBonus(VIPContext* ctx, int64_t playerId, int32_t toGrade) {
		return ((T (*)(void *, VIPContext*, int64_t, int32_t))(Il2CppBase() + 0x15C0B38))(0, ctx, playerId, toGrade);
	}

};

