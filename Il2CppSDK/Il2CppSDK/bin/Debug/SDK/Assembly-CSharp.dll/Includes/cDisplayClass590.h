#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass590
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass59_0"));
	}

	template <typename T = Action1LeaderboardScoreData*>*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = AndroidClient*> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& leaderboardId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = LeaderboardCollection*> T& collection() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = LeaderboardTimeSpan*> T& timeSpan() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T LoadScoresb__0(uintptr_t annotatedData) {
		return ((T (*)(cDisplayClass590*, uintptr_t))(Il2CppBase() + 0x113F154))(this, annotatedData);
	}
	template <typename T = void> T LoadScoresb__1(uintptr_t exception) {
		return ((T (*)(cDisplayClass590*, uintptr_t))(Il2CppBase() + 0x113F574))(this, exception);
	}

};

