#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass430
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass43_0"));
	}

	 Action1<Il2CppString*>*& callback() {
		return *(Action1<Il2CppString*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = GooglePlayGames::PlayGamesPlatform*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R GetAnotherServerAuthCodeb__0(GooglePlayGamesBasicApi::SignInStatus status) {
		return ((R (*)(cDisplayClass430*, GooglePlayGamesBasicApi::SignInStatus))(Il2CppBase() + 0x10B0D70))(this, status);
	}

};

