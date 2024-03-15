#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AccountHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountHelper"));
	}

	template <typename R = Il2CppArray<int32_t>*> static R& bonusHealth() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = Il2CppArray<int32_t>*> static R GenerateBonusMaxHealth() {
		return ((R (*)(void *))(Il2CppBase() + 0xFCE998))(0);
	}
	template <typename R = int32_t> static R GetBonusMaxHealth(int32_t level) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0xFCEAA0))(0, level);
	}
	template <typename R = void> static R UpdateChatRoom(AccountEntity* account, int64_t roomId, Il2CppString* channel) {
		return ((R (*)(void *, AccountEntity*, int64_t, Il2CppString*))(Il2CppBase() + 0xFCEBA4))(0, account, roomId, channel);
	}
	template <typename R = void> static R UpdateOrDeleteChatRoom(AccountEntity* account, int64_t roomId, Il2CppString* channel) {
		return ((R (*)(void *, AccountEntity*, int64_t, Il2CppString*))(Il2CppBase() + 0xFCEDE0))(0, account, roomId, channel);
	}
	template <typename R = void> static R UpdateChatRoomLastOpened(AccountEntity* account, Il2CppString* channel, int64_t lastOpenedTime, bool saveSelected) {
		return ((R (*)(void *, AccountEntity*, Il2CppString*, int64_t, bool))(Il2CppBase() + 0xFCF128))(0, account, channel, lastOpenedTime, saveSelected);
	}
	template <typename R = int32_t> static R GetCurrentBPStep(AccountEntity* account, ICommonContexts* world, CurrencyType currency, int32_t delta) {
		return ((R (*)(void *, AccountEntity*, ICommonContexts*, CurrencyType, int32_t))(Il2CppBase() + 0xFCF304))(0, account, world, currency, delta);
	}
	template <typename R = bool> static R HasBPReward(AccountEntity* account, ICommonContexts* world, CurrencyType currency) {
		return ((R (*)(void *, AccountEntity*, ICommonContexts*, CurrencyType))(Il2CppBase() + 0xFCF86C))(0, account, world, currency);
	}
	template <typename R = int32_t> static R GetMasteryPoints(AccountEntity* account) {
		return ((R (*)(void *, AccountEntity*))(Il2CppBase() + 0xFCF984))(0, account);
	}
	template <typename R = int32_t> static R GetExpertisePoints(AccountEntity* account) {
		return ((R (*)(void *, AccountEntity*))(Il2CppBase() + 0xFCF9D0))(0, account);
	}
	template <typename R = void> static R SetMasteryPoints(AccountEntity* account, int32_t value) {
		return ((R (*)(void *, AccountEntity*, int32_t))(Il2CppBase() + 0xFCFA1C))(0, account, value);
	}
	template <typename R = void> static R SetExpertisePoints(AccountEntity* account, int32_t value) {
		return ((R (*)(void *, AccountEntity*, int32_t))(Il2CppBase() + 0xFCFA34))(0, account, value);
	}
	template <typename R = int32_t> static R GetPlayerClassProgressPoints(AccountEntity* account, PlayerClassProgress progressType) {
		return ((R (*)(void *, AccountEntity*, PlayerClassProgress))(Il2CppBase() + 0xFCFA4C))(0, account, progressType);
	}
	template <typename R = void> static R SetPlayerClassProgressPoints(AccountEntity* account, PlayerClassProgress progressType, int32_t value) {
		return ((R (*)(void *, AccountEntity*, PlayerClassProgress, int32_t))(Il2CppBase() + 0xFCFB14))(0, account, progressType, value);
	}
	template <typename R = void> static R UpdateRGSaves(AccountEntity* account, ICommonContexts* world) {
		return ((R (*)(void *, AccountEntity*, ICommonContexts*))(Il2CppBase() + 0xFCFBF8))(0, account, world);
	}
	template <typename R = bool> static R IsRGLimited(AccountEntity* account, ICommonContexts* world, RandomGroupEntity* rg) {
		return ((R (*)(void *, AccountEntity*, ICommonContexts*, RandomGroupEntity*))(Il2CppBase() + 0xFD01D0))(0, account, world, rg);
	}
	template <typename R = bool> static R IsRGLimited_1(AccountEntity* account, ICommonContexts* world, Il2CppString* rgName) {
		return ((R (*)(void *, AccountEntity*, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0xFD0400))(0, account, world, rgName);
	}
	template <typename R = bool> static R CheckLimitAndSaveUseRG(AccountEntity* account, ICommonContexts* world, RandomGroupEntity* rg) {
		return ((R (*)(void *, AccountEntity*, ICommonContexts*, RandomGroupEntity*))(Il2CppBase() + 0xFD06A4))(0, account, world, rg);
	}

};

