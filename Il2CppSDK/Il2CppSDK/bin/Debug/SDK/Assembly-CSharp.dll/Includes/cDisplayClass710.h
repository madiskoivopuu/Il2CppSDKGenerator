#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass710
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass71_0"));
	}

	template <typename T = PlayGamesPlatform*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& board() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Action1bool>*> T& callback() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T LoadScoresb__0(LeaderboardScoreData* scoreData) {
		return ((T (*)(cDisplayClass710*, LeaderboardScoreData*))(Il2CppBase() + 0x10B178C))(this, scoreData);
	}

};

