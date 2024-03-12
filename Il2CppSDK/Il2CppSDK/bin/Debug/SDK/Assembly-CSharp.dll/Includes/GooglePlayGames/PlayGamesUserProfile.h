#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGames {

class PlayGamesUserProfile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "PlayGamesUserProfile"));
	}

	template <typename T = Il2CppString*> T& mDisplayName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& mPlayerId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& mAvatarUrl() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& mIsFriend() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& mImageLoading() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = uintptr_t> T& mImage() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T ResetIdentity(Il2CppString* displayName, Il2CppString* playerId, Il2CppString* avatarUrl) {
		return ((T (*)(PlayGamesUserProfile*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16FCB1C))(this, displayName, playerId, avatarUrl);
	}
	template <typename T = Il2CppString*> T get_userName() {
		return ((T (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x1702060))(this);
	}
	template <typename T = Il2CppString*> T get_id() {
		return ((T (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x1702068))(this);
	}
	template <typename T = Il2CppString*> T get_gameId() {
		return ((T (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x1702070))(this);
	}
	template <typename T = bool> T get_isFriend() {
		return ((T (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x1702078))(this);
	}
	template <typename T = uintptr_t> T get_state() {
		return ((T (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x1702080))(this);
	}
	template <typename T = uintptr_t> T get_image() {
		return ((T (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x1702088))(this);
	}
	template <typename T = Il2CppString*> T get_AvatarURL() {
		return ((T (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x1702248))(this);
	}
	template <typename T = uintptr_t> T LoadImage() {
		return ((T (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x17021D0))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(PlayGamesUserProfile*, uintptr_t))(Il2CppBase() + 0x1702250))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x1702384))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PlayGamesUserProfile*))(Il2CppBase() + 0x1702438))(this);
	}
	template <typename T = void> T setAvatarUrl(Il2CppString* avatarUrl) {
		return ((T (*)(PlayGamesUserProfile*, Il2CppString*))(Il2CppBase() + 0x1701EF4))(this, avatarUrl);
	}

};

}
