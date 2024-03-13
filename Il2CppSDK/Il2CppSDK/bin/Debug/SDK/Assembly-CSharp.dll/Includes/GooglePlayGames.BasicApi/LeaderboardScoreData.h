#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApi {

class LeaderboardScoreData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApi", "LeaderboardScoreData"));
	}

	template <typename T = Il2CppString*> T& mId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = ResponseStatus*> T& mStatus() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& mApproxCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& mTitle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mPlayerScore() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = ScorePageToken*> T& mPrevPage() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = ScorePageToken*> T& mNextPage() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<PlayGamesScore*>*> T& mScores() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = bool> T get_Valid() {
		return ((T (*)(LeaderboardScoreData*))(Il2CppBase() + 0x1429CC4))(this);
	}
	template <typename T = ResponseStatus*> T get_Status() {
		return ((T (*)(LeaderboardScoreData*))(Il2CppBase() + 0x1429CD8))(this);
	}
	template <typename T = void> T set_Status(ResponseStatus* value) {
		return ((T (*)(LeaderboardScoreData*, ResponseStatus*))(Il2CppBase() + 0x1429CE0))(this, value);
	}
	template <typename T = uint64_t> T get_ApproximateCount() {
		return ((T (*)(LeaderboardScoreData*))(Il2CppBase() + 0x1429CE8))(this);
	}
	template <typename T = void> T set_ApproximateCount(uint64_t value) {
		return ((T (*)(LeaderboardScoreData*, uint64_t))(Il2CppBase() + 0x1429CF0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Title() {
		return ((T (*)(LeaderboardScoreData*))(Il2CppBase() + 0x1429CF8))(this);
	}
	template <typename T = void> T set_Title(Il2CppString* value) {
		return ((T (*)(LeaderboardScoreData*, Il2CppString*))(Il2CppBase() + 0x1429D00))(this, value);
	}
	template <typename T = Il2CppString*> T get_Id() {
		return ((T (*)(LeaderboardScoreData*))(Il2CppBase() + 0x1429D08))(this);
	}
	template <typename T = void> T set_Id(Il2CppString* value) {
		return ((T (*)(LeaderboardScoreData*, Il2CppString*))(Il2CppBase() + 0x1429D10))(this, value);
	}
	template <typename T = uintptr_t> T get_PlayerScore() {
		return ((T (*)(LeaderboardScoreData*))(Il2CppBase() + 0x1429D18))(this);
	}
	template <typename T = void> T set_PlayerScore(uintptr_t value) {
		return ((T (*)(LeaderboardScoreData*, uintptr_t))(Il2CppBase() + 0x1429D20))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Scores() {
		return ((T (*)(LeaderboardScoreData*))(Il2CppBase() + 0x1429D28))(this);
	}
	template <typename T = int32_t> T AddScore(PlayGamesScore* score) {
		return ((T (*)(LeaderboardScoreData*, PlayGamesScore*))(Il2CppBase() + 0x1429D7C))(this, score);
	}
	template <typename T = ScorePageToken*> T get_PrevPageToken() {
		return ((T (*)(LeaderboardScoreData*))(Il2CppBase() + 0x1429DFC))(this);
	}
	template <typename T = void> T set_PrevPageToken(ScorePageToken* value) {
		return ((T (*)(LeaderboardScoreData*, ScorePageToken*))(Il2CppBase() + 0x1429E04))(this, value);
	}
	template <typename T = ScorePageToken*> T get_NextPageToken() {
		return ((T (*)(LeaderboardScoreData*))(Il2CppBase() + 0x1429E0C))(this);
	}
	template <typename T = void> T set_NextPageToken(ScorePageToken* value) {
		return ((T (*)(LeaderboardScoreData*, ScorePageToken*))(Il2CppBase() + 0x1429E14))(this, value);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(LeaderboardScoreData*))(Il2CppBase() + 0x1429E1C))(this);
	}

};

}
