#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGames {

class PlayGamesScore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "PlayGamesScore"));
	}

	template <typename R = Il2CppString*> R& mLbId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& mValue() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uint64_t> R& mRank() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& mPlayerId() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& mMetadata() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& mDate() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R ReportScore(Action1<bool>* callback) {
		return ((R (*)(PlayGamesScore*, Action1<bool>*))(Il2CppBase() + 0x1701E28))(this, callback);
	}
	template <typename R = Il2CppString*> R get_leaderboardID() {
		return ((R (*)(PlayGamesScore*))(Il2CppBase() + 0x1701EA8))(this);
	}
	template <typename R = void> R set_leaderboardID(Il2CppString* value) {
		return ((R (*)(PlayGamesScore*, Il2CppString*))(Il2CppBase() + 0x1701EB0))(this, value);
	}
	template <typename R = int64_t> R get_value() {
		return ((R (*)(PlayGamesScore*))(Il2CppBase() + 0x1701EB8))(this);
	}
	template <typename R = void> R set_value(int64_t value) {
		return ((R (*)(PlayGamesScore*, int64_t))(Il2CppBase() + 0x1701EC0))(this, value);
	}
	template <typename R = uintptr_t> R get_date() {
		return ((R (*)(PlayGamesScore*))(Il2CppBase() + 0x1701EC8))(this);
	}
	template <typename R = Il2CppString*> R get_formattedValue() {
		return ((R (*)(PlayGamesScore*))(Il2CppBase() + 0x1701ED0))(this);
	}
	template <typename R = Il2CppString*> R get_userID() {
		return ((R (*)(PlayGamesScore*))(Il2CppBase() + 0x1701EDC))(this);
	}
	template <typename R = int32_t> R get_rank() {
		return ((R (*)(PlayGamesScore*))(Il2CppBase() + 0x1701EE4))(this);
	}
	template <typename R = Il2CppString*> R get_metaData() {
		return ((R (*)(PlayGamesScore*))(Il2CppBase() + 0x1701EEC))(this);
	}

};

}
