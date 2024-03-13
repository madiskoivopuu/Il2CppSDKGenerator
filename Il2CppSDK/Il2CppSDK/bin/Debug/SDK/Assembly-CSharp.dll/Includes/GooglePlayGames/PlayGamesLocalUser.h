#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../GooglePlayGames/PlayGamesUserProfile.h" 
namespace GooglePlayGames {

class PlayGamesLocalUser : public PlayGamesUserProfile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "PlayGamesLocalUser"));
	}

	template <typename T = PlayGamesPlatform*> T& mPlatform() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& emailAddress() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = PlayerStats*> T& mStats() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Authenticate(Action1bool>* callback) {
		return ((T (*)(PlayGamesLocalUser*, Action1bool>*))(Il2CppBase() + 0x16FBFC8))(this, callback);
	}
	template <typename T = void> T Authenticate_1(Action2bool, Il2CppString*>* callback) {
		return ((T (*)(PlayGamesLocalUser*, Action2bool, Il2CppString*>*))(Il2CppBase() + 0x16FBFEC))(this, callback);
	}
	template <typename T = void> T Authenticate_2(Action1bool>* callback, bool silent) {
		return ((T (*)(PlayGamesLocalUser*, Action1bool>*, bool))(Il2CppBase() + 0x16FC010))(this, callback, silent);
	}
	template <typename T = void> T Authenticate_3(Action2bool, Il2CppString*>* callback, bool silent) {
		return ((T (*)(PlayGamesLocalUser*, Action2bool, Il2CppString*>*, bool))(Il2CppBase() + 0x16FC110))(this, callback, silent);
	}
	template <typename T = void> T LoadFriends(Action1bool>* callback) {
		return ((T (*)(PlayGamesLocalUser*, Action1bool>*))(Il2CppBase() + 0x16FC218))(this, callback);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_friends() {
		return ((T (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x16FC390))(this);
	}
	template <typename T = Il2CppString*> T GetIdToken() {
		return ((T (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x16FC4D8))(this);
	}
	template <typename T = bool> T get_authenticated() {
		return ((T (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x16FC5F8))(this);
	}
	template <typename T = bool> T get_underage() {
		return ((T (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x16FC6CC))(this);
	}
	template <typename T = Il2CppString*> T get_userName() {
		return ((T (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x16FC6D4))(this);
	}
	template <typename T = Il2CppString*> T get_id() {
		return ((T (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x16FCBA0))(this);
	}
	template <typename T = bool> T get_isFriend() {
		return ((T (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x16FCC70))(this);
	}
	template <typename T = uintptr_t> T get_state() {
		return ((T (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x16FCC78))(this);
	}
	template <typename T = Il2CppString*> T get_AvatarURL() {
		return ((T (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x16FCC80))(this);
	}
	template <typename T = Il2CppString*> T get_Email() {
		return ((T (*)(PlayGamesLocalUser*))(Il2CppBase() + 0x16FCD50))(this);
	}
	template <typename T = void> T GetStats(Action2CommonStatusCodes*, PlayerStats*>* callback) {
		return ((T (*)(PlayGamesLocalUser*, Action2CommonStatusCodes*, PlayerStats*>*))(Il2CppBase() + 0x16FCED4))(this, callback);
	}

};

}
