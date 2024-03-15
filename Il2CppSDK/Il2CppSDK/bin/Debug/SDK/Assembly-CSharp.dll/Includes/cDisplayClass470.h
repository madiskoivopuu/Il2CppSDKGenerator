#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass470
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass47_0"));
	}

	 Action2GooglePlayGamesBasicApi::CommonStatusCodes*, GooglePlayGamesBasicApi::PlayerStats*>*& callback() {
		return *(Action2GooglePlayGamesBasicApi::CommonStatusCodes*, GooglePlayGamesBasicApi::PlayerStats*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = GooglePlayGamesAndroid::AndroidClient*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R GetPlayerStatsb__0(uintptr_t annotatedData) {
		return ((R (*)(cDisplayClass470*, uintptr_t))(Il2CppBase() + 0x113C8F8))(this, annotatedData);
	}
	template <typename R = void> R GetPlayerStatsb__1(uintptr_t e) {
		return ((R (*)(cDisplayClass470*, uintptr_t))(Il2CppBase() + 0x113D310))(this, e);
	}

};

