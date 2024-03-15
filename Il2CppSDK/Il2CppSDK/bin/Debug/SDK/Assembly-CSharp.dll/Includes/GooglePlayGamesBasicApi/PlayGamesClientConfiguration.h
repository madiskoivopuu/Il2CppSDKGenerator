#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApi {

class PlayGamesClientConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApi", "PlayGamesClientConfiguration"));
	}

	template <typename R = GooglePlayGamesBasicApi::PlayGamesClientConfiguration> static R& DefaultConfiguration() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& mEnableSavedGames() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& mScopes() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = bool> R& mRequestAuthCode() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& mForceRefresh() {
		return *(R*)((uintptr_t)this + 0x11);
	}
	template <typename R = bool> R& mHidePopups() {
		return *(R*)((uintptr_t)this + 0x12);
	}
	template <typename R = bool> R& mRequestEmail() {
		return *(R*)((uintptr_t)this + 0x13);
	}
	template <typename R = bool> R& mRequestIdToken() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = Il2CppString*> R& mAccountName() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = bool> R get_EnableSavedGames() {
		return ((R (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x16F9850))(this);
	}
	template <typename R = bool> R get_IsHidingPopups() {
		return ((R (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x16F9858))(this);
	}
	template <typename R = bool> R get_IsRequestingAuthCode() {
		return ((R (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x16F9860))(this);
	}
	template <typename R = bool> R get_IsForcingRefresh() {
		return ((R (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x16F9868))(this);
	}
	template <typename R = bool> R get_IsRequestingEmail() {
		return ((R (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x16F9870))(this);
	}
	template <typename R = bool> R get_IsRequestingIdToken() {
		return ((R (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x16F9878))(this);
	}
	template <typename R = Il2CppString*> R get_AccountName() {
		return ((R (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x16F9880))(this);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R get_Scopes() {
		return ((R (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x16F9888))(this);
	}
	template <typename R = bool> static R op_Equality(GooglePlayGamesBasicApi::PlayGamesClientConfiguration c1, GooglePlayGamesBasicApi::PlayGamesClientConfiguration c2) {
		return ((R (*)(void *, GooglePlayGamesBasicApi::PlayGamesClientConfiguration, GooglePlayGamesBasicApi::PlayGamesClientConfiguration))(Il2CppBase() + 0x16F9890))(0, c1, c2);
	}
	template <typename R = bool> static R op_Inequality(GooglePlayGamesBasicApi::PlayGamesClientConfiguration c1, GooglePlayGamesBasicApi::PlayGamesClientConfiguration c2) {
		return ((R (*)(void *, GooglePlayGamesBasicApi::PlayGamesClientConfiguration, GooglePlayGamesBasicApi::PlayGamesClientConfiguration))(Il2CppBase() + 0x16F99B4))(0, c1, c2);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PlayGamesClientConfiguration*))(Il2CppBase() + 0x16F9A58))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* obj) {
		return ((R (*)(PlayGamesClientConfiguration*, Il2CppObject*))(Il2CppBase() + 0x16F9B90))(this, obj);
	}

};

}
