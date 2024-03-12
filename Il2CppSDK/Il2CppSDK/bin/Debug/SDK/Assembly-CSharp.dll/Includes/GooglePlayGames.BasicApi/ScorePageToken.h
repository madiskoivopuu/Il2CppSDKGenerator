#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GooglePlayGamesBasicApi {

class ScorePageToken
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGamesBasicApi", "ScorePageToken"));
	}

	template <typename T = Il2CppString*> T& mId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& mInternalObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mCollection() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mTimespan() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mDirection() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T get_Collection() {
		return ((T (*)(ScorePageToken*))(Il2CppBase() + 0x13578D0))(this);
	}
	template <typename T = uintptr_t> T get_TimeSpan() {
		return ((T (*)(ScorePageToken*))(Il2CppBase() + 0x13578D8))(this);
	}
	template <typename T = uintptr_t> T get_Direction() {
		return ((T (*)(ScorePageToken*))(Il2CppBase() + 0x13578E0))(this);
	}
	template <typename T = Il2CppString*> T get_LeaderboardId() {
		return ((T (*)(ScorePageToken*))(Il2CppBase() + 0x13578E8))(this);
	}
	template <typename T = uintptr_t> T get_InternalObject() {
		return ((T (*)(ScorePageToken*))(Il2CppBase() + 0x13578F0))(this);
	}

};

}
