#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../PlayGamesUserProfile.h" 
namespace GooglePlayGames {

class PlayGamesLocalUser : public PlayGamesUserProfile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "PlayGamesLocalUser"));
	}

	template <typename R = GooglePlayGames::PlayGamesPlatform*> R& mPlatform() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& emailAddress() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = GooglePlayGamesBasicApi::PlayerStats*> R& mStats() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R Authenticate(Action1bool>* callback) {
		return ((R (*)(PlayGamesLocalUser*, Action1bool>*))(Il2CppBase() + 0x16FBFC8))(this, callback);
	}
	template <typename R = void> R Authenticate_1(Action2bool, Il2CppString*>* callback) {
		return ((R (*)(PlayGamesLocalUser*, Action2bool, Il2CppString*>*))(Il2CppBase() + 0x16FBFEC))(this, callback);
	}
	template <typename R = void> R Authenticate_2(Action1bool>* callback, bool silent) {
		return ((R (*)(PlayGamesLocalUser*, Action1bool>*, bool))(Il2CppBase() + 0x16FC010))(this, callback, silent);
	}
	template <typename R = void> R Authenticate_3(Action2bool, Il2CppString*>* callback, bool silent) {
		return ((R (*)(PlayGamesLocalUser*, Action2bool, Il2CppString*>*, bool))(Il2CppBase() + 0x16FC110))(this, callback, silent);
	}
	template <typename R = void> R LoadFriends(Action1bool>* callback) {
		return ((R (*)(PlayGamesLocalUser*, Action1bool>*))(Il2CppBase() + 0x16FC218))(this, callback);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R get_friends() {
		return ((R (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x16FC390))(this);
	}
	template <typename R = Il2CppString*> R GetIdToken() {
		return ((R (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x16FC4D8))(this);
	}
	template <typename R = bool> R get_authenticated() {
		return ((R (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x16FC5F8))(this);
	}
	template <typename R = bool> R get_underage() {
		return ((R (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x16FC6CC))(this);
	}
	template <typename R = Il2CppString*> R get_userName() {
		return ((R (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x16FC6D4))(this);
	}
	template <typename R = Il2CppString*> R get_id() {
		return ((R (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x16FCBA0))(this);
	}
	template <typename R = bool> R get_isFriend() {
		return ((R (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x16FCC70))(this);
	}
	template <typename R = uintptr_t> R get_state() {
		return ((R (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x16FCC78))(this);
	}
	template <typename R = Il2CppString*> R get_AvatarURL() {
		return ((R (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x16FCC80))(this);
	}
	template <typename R = Il2CppString*> R get_Email() {
		return ((R (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x16FCD50))(this);
	}
	template <typename R = void> R GetStats(Action2GooglePlayGamesBasicApi::CommonStatusCodes*, GooglePlayGamesBasicApi::PlayerStats*>* callback) {
		return ((R (*)(PlayGamesLocalUser*, Action2GooglePlayGamesBasicApi::CommonStatusCodes*, GooglePlayGamesBasicApi::PlayerStats*>*))(Il2CppBase() + 0x16FCED4))(this, callback);
	}

};

}
