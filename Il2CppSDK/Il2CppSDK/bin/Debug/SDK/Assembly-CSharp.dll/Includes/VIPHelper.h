#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VIPHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPHelper"));
	}


	template <typename R = int32_t> static R GetPlayerVIPLevel(ICommonContexts* world, int64_t playerId) {
		return ((R (*)(void *, ICommonContexts*, int64_t))(Il2CppBase() + 0x15C01C4))(0, world, playerId);
	}
	template <typename R = int32_t> static R GetVIPLevel(ICommonContexts* world, int32_t vipPoints) {
		return ((R (*)(void *, ICommonContexts*, int32_t))(Il2CppBase() + 0x15C02AC))(0, world, vipPoints);
	}
	template <typename R = bool> static R IsVIPAvailable(ICommonContexts* world, int64_t playerId) {
		return ((R (*)(void *, ICommonContexts*, int64_t))(Il2CppBase() + 0x15C0428))(0, world, playerId);
	}
	template <typename R = bool> static R IsVIPDailyChestEnabled(VIPContext* ctx, int64_t playerId) {
		return ((R (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C050C))(0, ctx, playerId);
	}
	template <typename R = int32_t> static R GetVIPDailyChestSlotsCount(VIPContext* ctx, int64_t playerId) {
		return ((R (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C0538))(0, ctx, playerId);
	}
	template <typename R = bool> static R IsVIPDailyChestSilverEnabled(VIPContext* ctx, int64_t playerId) {
		return ((R (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C05D8))(0, ctx, playerId);
	}
	template <typename R = float> static R GetVIPDailyChestSilverBonus(VIPContext* ctx, int64_t playerId) {
		return ((R (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C0604))(0, ctx, playerId);
	}
	template <typename R = float> static R GetVIPDailyChestInfluenceBonus(VIPContext* ctx, int64_t playerId) {
		return ((R (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C0648))(0, ctx, playerId);
	}
	template <typename R = float> static R GetVIPPointsBonus(VIPContext* ctx, int64_t playerId) {
		return ((R (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C068C))(0, ctx, playerId);
	}
	template <typename R = float> static R GetMasteryPointsBonus(VIPContext* ctx, int64_t playerId) {
		return ((R (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C06D0))(0, ctx, playerId);
	}
	 static ValueTuple2<float, Il2CppString*>* GetAllSanctumsDamageBonus(VIPContext* ctx, int64_t playerId) {
		return ((ValueTuple2<float, Il2CppString*>* (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C070C))(0, ctx, playerId);
	}
	template <typename R = float> static R GetStoreGachaAdditionalRareBonus(VIPContext* ctx, int64_t playerId) {
		return ((R (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C07E0))(0, ctx, playerId);
	}
	template <typename R = float> static R GetStoreGachaAdditionalVeryRareBonus(VIPContext* ctx, int64_t playerId) {
		return ((R (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C081C))(0, ctx, playerId);
	}
	template <typename R = float> static R GetStoreGachaAdditionalUltraRareBonus(VIPContext* ctx, int64_t playerId) {
		return ((R (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C0858))(0, ctx, playerId);
	}
	template <typename R = float> static R GetDailyChestAdditionalUncommonBonus(VIPContext* ctx, int64_t playerId) {
		return ((R (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C0894))(0, ctx, playerId);
	}
	template <typename R = float> static R GetDailyChestAdditionalRareBonus(VIPContext* ctx, int64_t playerId) {
		return ((R (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C08D0))(0, ctx, playerId);
	}
	template <typename R = float> static R GetDailyChestAdditionalEpicBonus(VIPContext* ctx, int64_t playerId) {
		return ((R (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C090C))(0, ctx, playerId);
	}
	 static ValueTuple2<float, Il2CppString*>* GetHealthBonusPercent(VIPContext* ctx, int64_t playerId) {
		return ((ValueTuple2<float, Il2CppString*>* (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C0948))(0, ctx, playerId);
	}
	 static ValueTuple2<float, Il2CppString*>* GetHealthBonusConstant(VIPContext* ctx, int64_t playerId) {
		return ((ValueTuple2<float, Il2CppString*>* (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C0A1C))(0, ctx, playerId);
	}
	template <typename R = float> static R GetAutoFarmBonus(VIPContext* ctx, int64_t playerId) {
		return ((R (*)(void *, VIPContext*, int64_t))(Il2CppBase() + 0x15C0AF0))(0, ctx, playerId);
	}
	template <typename R = float> static R GetMountGradeUpChanceBonus(VIPContext* ctx, int64_t playerId, int32_t toGrade) {
		return ((R (*)(void *, VIPContext*, int64_t, int32_t))(Il2CppBase() + 0x15C0B38))(0, ctx, playerId, toGrade);
	}

};

