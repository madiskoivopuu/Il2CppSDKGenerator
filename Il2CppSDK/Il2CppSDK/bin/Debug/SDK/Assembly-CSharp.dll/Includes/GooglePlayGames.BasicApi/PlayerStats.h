#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApi {

class PlayerStats
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApi", "PlayerStats"));
	}

	template <typename T = float> static T& UNSET_VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& mValid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& mNumberOfPurchases() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& mAvgSessionLength() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& mDaysSinceLastPlayed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& mNumberOfSessions() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& mSessPercentile() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& mSpendPercentile() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& mSpendProbability() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& mChurnProbability() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& mHighSpenderProbability() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& mTotalSpendNext28Days() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = bool> T get_Valid() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x156F384))(this);
	}
	template <typename T = int32_t> T get_NumberOfPurchases() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x156F38C))(this);
	}
	template <typename T = float> T get_AvgSessionLength() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x156F394))(this);
	}
	template <typename T = int32_t> T get_DaysSinceLastPlayed() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x156F39C))(this);
	}
	template <typename T = int32_t> T get_NumberOfSessions() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x156F3A4))(this);
	}
	template <typename T = float> T get_SessPercentile() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x156F3AC))(this);
	}
	template <typename T = float> T get_SpendPercentile() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x156F3B4))(this);
	}
	template <typename T = float> T get_SpendProbability() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x156F3BC))(this);
	}
	template <typename T = float> T get_ChurnProbability() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x156F3C4))(this);
	}
	template <typename T = float> T get_HighSpenderProbability() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x156F3CC))(this);
	}
	template <typename T = float> T get_TotalSpendNext28Days() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x156F3D4))(this);
	}
	template <typename T = bool> T HasNumberOfPurchases() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x156F3DC))(this);
	}
	template <typename T = bool> T HasAvgSessionLength() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x156F46C))(this);
	}
	template <typename T = bool> T HasDaysSinceLastPlayed() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x156F4E8))(this);
	}
	template <typename T = bool> T HasNumberOfSessions() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x156F578))(this);
	}
	template <typename T = bool> T HasSessPercentile() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x156F608))(this);
	}
	template <typename T = bool> T HasSpendPercentile() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x156F684))(this);
	}
	template <typename T = bool> T HasChurnProbability() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x156F700))(this);
	}
	template <typename T = bool> T HasHighSpenderProbability() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x156F77C))(this);
	}
	template <typename T = bool> T HasTotalSpendNext28Days() {
		return ((T (*)(PlayerStats*))(Il2CppBase() + 0x156F7F8))(this);
	}

};

}
