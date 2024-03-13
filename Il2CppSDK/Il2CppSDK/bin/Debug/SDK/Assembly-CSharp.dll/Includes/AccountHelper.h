#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AccountHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountHelper"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& bonusHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T GenerateBonusMaxHealth() {
		return ((T (*)(void *))(Il2CppBase() + 0xFCE998))(0);
	}
	template <typename T = int32_t> static T GetBonusMaxHealth(int32_t level) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0xFCEAA0))(0, level);
	}
	template <typename T = void> static T UpdateChatRoom(AccountEntity* account, int64_t roomId, Il2CppString* channel) {
		return ((T (*)(void *, AccountEntity*, int64_t, Il2CppString*))(Il2CppBase() + 0xFCEBA4))(0, account, roomId, channel);
	}
	template <typename T = void> static T UpdateOrDeleteChatRoom(AccountEntity* account, int64_t roomId, Il2CppString* channel) {
		return ((T (*)(void *, AccountEntity*, int64_t, Il2CppString*))(Il2CppBase() + 0xFCEDE0))(0, account, roomId, channel);
	}
	template <typename T = void> static T UpdateChatRoomLastOpened(AccountEntity* account, Il2CppString* channel, int64_t lastOpenedTime, bool saveSelected) {
		return ((T (*)(void *, AccountEntity*, Il2CppString*, int64_t, bool))(Il2CppBase() + 0xFCF128))(0, account, channel, lastOpenedTime, saveSelected);
	}
	template <typename T = int32_t> static T GetCurrentBPStep(AccountEntity* account, ICommonContexts* world, CurrencyType* currency, int32_t delta) {
		return ((T (*)(void *, AccountEntity*, ICommonContexts*, CurrencyType*, int32_t))(Il2CppBase() + 0xFCF304))(0, account, world, currency, delta);
	}
	template <typename T = bool> static T HasBPReward(AccountEntity* account, ICommonContexts* world, CurrencyType* currency) {
		return ((T (*)(void *, AccountEntity*, ICommonContexts*, CurrencyType*))(Il2CppBase() + 0xFCF86C))(0, account, world, currency);
	}
	template <typename T = int32_t> static T GetMasteryPoints(AccountEntity* account) {
		return ((T (*)(void *, AccountEntity*))(Il2CppBase() + 0xFCF984))(0, account);
	}
	template <typename T = int32_t> static T GetExpertisePoints(AccountEntity* account) {
		return ((T (*)(void *, AccountEntity*))(Il2CppBase() + 0xFCF9D0))(0, account);
	}
	template <typename T = void> static T SetMasteryPoints(AccountEntity* account, int32_t value) {
		return ((T (*)(void *, AccountEntity*, int32_t))(Il2CppBase() + 0xFCFA1C))(0, account, value);
	}
	template <typename T = void> static T SetExpertisePoints(AccountEntity* account, int32_t value) {
		return ((T (*)(void *, AccountEntity*, int32_t))(Il2CppBase() + 0xFCFA34))(0, account, value);
	}
	template <typename T = int32_t> static T GetPlayerClassProgressPoints(AccountEntity* account, PlayerClassProgress* progressType) {
		return ((T (*)(void *, AccountEntity*, PlayerClassProgress*))(Il2CppBase() + 0xFCFA4C))(0, account, progressType);
	}
	template <typename T = void> static T SetPlayerClassProgressPoints(AccountEntity* account, PlayerClassProgress* progressType, int32_t value) {
		return ((T (*)(void *, AccountEntity*, PlayerClassProgress*, int32_t))(Il2CppBase() + 0xFCFB14))(0, account, progressType, value);
	}
	template <typename T = void> static T UpdateRGSaves(AccountEntity* account, ICommonContexts* world) {
		return ((T (*)(void *, AccountEntity*, ICommonContexts*))(Il2CppBase() + 0xFCFBF8))(0, account, world);
	}
	template <typename T = bool> static T IsRGLimited(AccountEntity* account, ICommonContexts* world, RandomGroupEntity* rg) {
		return ((T (*)(void *, AccountEntity*, ICommonContexts*, RandomGroupEntity*))(Il2CppBase() + 0xFD01D0))(0, account, world, rg);
	}
	template <typename T = bool> static T IsRGLimited_1(AccountEntity* account, ICommonContexts* world, Il2CppString* rgName) {
		return ((T (*)(void *, AccountEntity*, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0xFD0400))(0, account, world, rgName);
	}
	template <typename T = bool> static T CheckLimitAndSaveUseRG(AccountEntity* account, ICommonContexts* world, RandomGroupEntity* rg) {
		return ((T (*)(void *, AccountEntity*, ICommonContexts*, RandomGroupEntity*))(Il2CppBase() + 0xFD06A4))(0, account, world, rg);
	}

};

