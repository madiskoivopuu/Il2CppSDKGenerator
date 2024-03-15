#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApi {

class PlayerStats
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApi", "PlayerStats"));
	}

	template <typename R = float> static R& UNSET_VALUE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& mValid() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& mNumberOfPurchases() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& mAvgSessionLength() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& mDaysSinceLastPlayed() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = int32_t> R& mNumberOfSessions() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& mSessPercentile() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = float> R& mSpendPercentile() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& mSpendProbability() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = float> R& mChurnProbability() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& mHighSpenderProbability() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = float> R& mTotalSpendNext28Days() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = bool> R get_Valid() {
		return ((R (*)(PlayerStats*))(Il2CppBase() + 0x156F384))(this);
	}
	template <typename R = int32_t> R get_NumberOfPurchases() {
		return ((R (*)(PlayerStats*))(Il2CppBase() + 0x156F38C))(this);
	}
	template <typename R = float> R get_AvgSessionLength() {
		return ((R (*)(PlayerStats*))(Il2CppBase() + 0x156F394))(this);
	}
	template <typename R = int32_t> R get_DaysSinceLastPlayed() {
		return ((R (*)(PlayerStats*))(Il2CppBase() + 0x156F39C))(this);
	}
	template <typename R = int32_t> R get_NumberOfSessions() {
		return ((R (*)(PlayerStats*))(Il2CppBase() + 0x156F3A4))(this);
	}
	template <typename R = float> R get_SessPercentile() {
		return ((R (*)(PlayerStats*))(Il2CppBase() + 0x156F3AC))(this);
	}
	template <typename R = float> R get_SpendPercentile() {
		return ((R (*)(PlayerStats*))(Il2CppBase() + 0x156F3B4))(this);
	}
	template <typename R = float> R get_SpendProbability() {
		return ((R (*)(PlayerStats*))(Il2CppBase() + 0x156F3BC))(this);
	}
	template <typename R = float> R get_ChurnProbability() {
		return ((R (*)(PlayerStats*))(Il2CppBase() + 0x156F3C4))(this);
	}
	template <typename R = float> R get_HighSpenderProbability() {
		return ((R (*)(PlayerStats*))(Il2CppBase() + 0x156F3CC))(this);
	}
	template <typename R = float> R get_TotalSpendNext28Days() {
		return ((R (*)(PlayerStats*))(Il2CppBase() + 0x156F3D4))(this);
	}
	template <typename R = bool> R HasNumberOfPurchases() {
		return ((R (*)(PlayerStats*))(Il2CppBase() + 0x156F3DC))(this);
	}
	template <typename R = bool> R HasAvgSessionLength() {
		return ((R (*)(PlayerStats*))(Il2CppBase() + 0x156F46C))(this);
	}
	template <typename R = bool> R HasDaysSinceLastPlayed() {
		return ((R (*)(PlayerStats*))(Il2CppBase() + 0x156F4E8))(this);
	}
	template <typename R = bool> R HasNumberOfSessions() {
		return ((R (*)(PlayerStats*))(Il2CppBase() + 0x156F578))(this);
	}
	template <typename R = bool> R HasSessPercentile() {
		return ((R (*)(PlayerStats*))(Il2CppBase() + 0x156F608))(this);
	}
	template <typename R = bool> R HasSpendPercentile() {
		return ((R (*)(PlayerStats*))(Il2CppBase() + 0x156F684))(this);
	}
	template <typename R = bool> R HasChurnProbability() {
		return ((R (*)(PlayerStats*))(Il2CppBase() + 0x156F700))(this);
	}
	template <typename R = bool> R HasHighSpenderProbability() {
		return ((R (*)(PlayerStats*))(Il2CppBase() + 0x156F77C))(this);
	}
	template <typename R = bool> R HasTotalSpendNext28Days() {
		return ((R (*)(PlayerStats*))(Il2CppBase() + 0x156F7F8))(this);
	}

};

}
