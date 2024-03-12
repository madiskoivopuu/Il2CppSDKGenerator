#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApi {

class PlayGamesClientConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApi", "PlayGamesClientConfiguration"));
	}

	template <typename T = uintptr_t> static T& DefaultConfiguration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& mEnableSavedGames() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mScopes() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& mRequestAuthCode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& mForceRefresh() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& mHidePopups() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = bool> T& mRequestEmail() {
		return *(T*)((uintptr_t)this + 0x13);
	}
	template <typename T = bool> T& mRequestIdToken() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& mAccountName() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T get_EnableSavedGames() {
		return ((T (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x16F9850))(this);
	}
	template <typename T = bool> T get_IsHidingPopups() {
		return ((T (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x16F9858))(this);
	}
	template <typename T = bool> T get_IsRequestingAuthCode() {
		return ((T (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x16F9860))(this);
	}
	template <typename T = bool> T get_IsForcingRefresh() {
		return ((T (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x16F9868))(this);
	}
	template <typename T = bool> T get_IsRequestingEmail() {
		return ((T (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x16F9870))(this);
	}
	template <typename T = bool> T get_IsRequestingIdToken() {
		return ((T (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x16F9878))(this);
	}
	template <typename T = Il2CppString*> T get_AccountName() {
		return ((T (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x16F9880))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Scopes() {
		return ((T (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x16F9888))(this);
	}
	template <typename T = bool> static T op_Equality(uintptr_t c1, uintptr_t c2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16F9890))(0, c1, c2);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t c1, uintptr_t c2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x16F99B4))(0, c1, c2);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x16F9A58))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(PlayGamesClientConfiguration*, uintptr_t))(Il2CppBase() + 0x16F9B90))(this, obj);
	}

};

}
