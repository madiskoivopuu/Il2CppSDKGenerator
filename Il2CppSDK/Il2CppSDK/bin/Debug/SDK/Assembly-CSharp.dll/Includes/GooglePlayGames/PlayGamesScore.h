#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGames {

class PlayGamesScore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "PlayGamesScore"));
	}

	template <typename T = Il2CppString*> T& mLbId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& mValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& mRank() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& mPlayerId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& mMetadata() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& mDate() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T ReportScore(Action1bool>* callback) {
		return ((T (*)(PlayGamesScore*, Action1bool>*))(Il2CppBase() + 0x1701E28))(this, callback);
	}
	template <typename T = Il2CppString*> T get_leaderboardID() {
		return ((T (*)(PlayGamesScore*))(Il2CppBase() + 0x1701EA8))(this);
	}
	template <typename T = void> T set_leaderboardID(Il2CppString* value) {
		return ((T (*)(PlayGamesScore*, Il2CppString*))(Il2CppBase() + 0x1701EB0))(this, value);
	}
	template <typename T = int64_t> T get_value() {
		return ((T (*)(PlayGamesScore*))(Il2CppBase() + 0x1701EB8))(this);
	}
	template <typename T = void> T set_value(int64_t value) {
		return ((T (*)(PlayGamesScore*, int64_t))(Il2CppBase() + 0x1701EC0))(this, value);
	}
	template <typename T = uintptr_t> T get_date() {
		return ((T (*)(PlayGamesScore*))(Il2CppBase() + 0x1701EC8))(this);
	}
	template <typename T = Il2CppString*> T get_formattedValue() {
		return ((T (*)(PlayGamesScore*))(Il2CppBase() + 0x1701ED0))(this);
	}
	template <typename T = Il2CppString*> T get_userID() {
		return ((T (*)(PlayGamesScore*))(Il2CppBase() + 0x1701EDC))(this);
	}
	template <typename T = int32_t> T get_rank() {
		return ((T (*)(PlayGamesScore*))(Il2CppBase() + 0x1701EE4))(this);
	}
	template <typename T = Il2CppString*> T get_metaData() {
		return ((T (*)(PlayGamesScore*))(Il2CppBase() + 0x1701EEC))(this);
	}

};

}
