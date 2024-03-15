#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGames {

class PlayGamesUserProfile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "PlayGamesUserProfile"));
	}

	template <typename R = Il2CppString*> R& mDisplayName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& mPlayerId() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& mAvatarUrl() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& mIsFriend() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& mImageLoading() {
		return *(R*)((uintptr_t)this + 0x29);
	}
	template <typename R = uintptr_t> R& mImage() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R ResetIdentity(Il2CppString* displayName, Il2CppString* playerId, Il2CppString* avatarUrl) {
		return ((R (*)(PlayGamesUserProfile*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16FCB1C))(this, displayName, playerId, avatarUrl);
	}
	template <typename R = Il2CppString*> R get_userName() {
		return ((R (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x1702060))(this);
	}
	template <typename R = Il2CppString*> R get_id() {
		return ((R (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x1702068))(this);
	}
	template <typename R = Il2CppString*> R get_gameId() {
		return ((R (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x1702070))(this);
	}
	template <typename R = bool> R get_isFriend() {
		return ((R (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x1702078))(this);
	}
	template <typename R = uintptr_t> R get_state() {
		return ((R (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x1702080))(this);
	}
	template <typename R = uintptr_t> R get_image() {
		return ((R (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x1702088))(this);
	}
	template <typename R = Il2CppString*> R get_AvatarURL() {
		return ((R (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x1702248))(this);
	}
	template <typename R = uintptr_t> R LoadImage() {
		return ((R (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x17021D0))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* obj) {
		return ((R (*)(PlayGamesUserProfile*, Il2CppObject*))(Il2CppBase() + 0x1702250))(this, obj);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x1702384))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x1702438))(this);
	}
	template <typename R = void> R setAvatarUrl(Il2CppString* avatarUrl) {
		return ((R (*)(PlayGamesUserProfile*, Il2CppString*))(Il2CppBase() + 0x1701EF4))(this, avatarUrl);
	}

};

}
