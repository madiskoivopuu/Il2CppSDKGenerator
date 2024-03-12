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
	template <typename T = void> static T UpdateChatRoom(uintptr_t account, int64_t roomId, Il2CppString* channel) {
		return ((T (*)(void *, uintptr_t, int64_t, Il2CppString*))(Il2CppBase() + 0xFCEBA4))(0, account, roomId, channel);
	}
	template <typename T = void> static T UpdateOrDeleteChatRoom(uintptr_t account, int64_t roomId, Il2CppString* channel) {
		return ((T (*)(void *, uintptr_t, int64_t, Il2CppString*))(Il2CppBase() + 0xFCEDE0))(0, account, roomId, channel);
	}
	template <typename T = void> static T UpdateChatRoomLastOpened(uintptr_t account, Il2CppString* channel, int64_t lastOpenedTime, bool saveSelected) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int64_t, bool))(Il2CppBase() + 0xFCF128))(0, account, channel, lastOpenedTime, saveSelected);
	}
	template <typename T = int32_t> static T GetCurrentBPStep(uintptr_t account, uintptr_t world, uintptr_t currency, int32_t delta) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0xFCF304))(0, account, world, currency, delta);
	}
	template <typename T = bool> static T HasBPReward(uintptr_t account, uintptr_t world, uintptr_t currency) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xFCF86C))(0, account, world, currency);
	}
	template <typename T = int32_t> static T GetMasteryPoints(uintptr_t account) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xFCF984))(0, account);
	}
	template <typename T = int32_t> static T GetExpertisePoints(uintptr_t account) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xFCF9D0))(0, account);
	}
	template <typename T = void> static T SetMasteryPoints(uintptr_t account, int32_t value) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xFCFA1C))(0, account, value);
	}
	template <typename T = void> static T SetExpertisePoints(uintptr_t account, int32_t value) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0xFCFA34))(0, account, value);
	}
	template <typename T = int32_t> static T GetPlayerClassProgressPoints(uintptr_t account, uintptr_t progressType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xFCFA4C))(0, account, progressType);
	}
	template <typename T = void> static T SetPlayerClassProgressPoints(uintptr_t account, uintptr_t progressType, int32_t value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0xFCFB14))(0, account, progressType, value);
	}
	template <typename T = void> static T UpdateRGSaves(uintptr_t account, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xFCFBF8))(0, account, world);
	}
	template <typename T = bool> static T IsRGLimited(uintptr_t account, uintptr_t world, uintptr_t rg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xFD01D0))(0, account, world, rg);
	}
	template <typename T = bool> static T IsRGLimited_1(uintptr_t account, uintptr_t world, Il2CppString* rgName) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0xFD0400))(0, account, world, rgName);
	}
	template <typename T = bool> static T CheckLimitAndSaveUseRG(uintptr_t account, uintptr_t world, uintptr_t rg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xFD06A4))(0, account, world, rg);
	}

};

}
