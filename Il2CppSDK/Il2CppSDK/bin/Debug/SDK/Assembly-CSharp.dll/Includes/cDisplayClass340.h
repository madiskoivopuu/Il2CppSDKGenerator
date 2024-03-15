#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass340
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass34_0"));
	}

	 Action1<GooglePlayGamesBasicApi::SignInStatus>*& callback() {
		return *(Action1<GooglePlayGamesBasicApi::SignInStatus>**)((uintptr_t)this + 0x10);
	}
	template <typename R = GooglePlayGames::PlayGamesPlatform*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Action1<GooglePlayGamesBasicApi::SignInStatus>*& 9__5() {
		return *(Action1<GooglePlayGamesBasicApi::SignInStatus>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Authenticateb__1(GooglePlayGamesBasicApi::SignInStatus code) {
		return ((R (*)(cDisplayClass340*, GooglePlayGamesBasicApi::SignInStatus))(Il2CppBase() + 0x10B084C))(this, code);
	}
	template <typename R = void> R Authenticateb__2(GooglePlayGamesBasicApi::SignInStatus code) {
		return ((R (*)(cDisplayClass340*, GooglePlayGamesBasicApi::SignInStatus))(Il2CppBase() + 0x10B08DC))(this, code);
	}
	template <typename R = void> R Authenticateb__3(GooglePlayGamesBasicApi::SignInStatus silentSignInResultCode) {
		return ((R (*)(cDisplayClass340*, GooglePlayGamesBasicApi::SignInStatus))(Il2CppBase() + 0x10B096C))(this, silentSignInResultCode);
	}
	template <typename R = void> R Authenticateb__5(GooglePlayGamesBasicApi::SignInStatus interactiveSignInResultCode) {
		return ((R (*)(cDisplayClass340*, GooglePlayGamesBasicApi::SignInStatus))(Il2CppBase() + 0x10B0C20))(this, interactiveSignInResultCode);
	}
	template <typename R = void> R Authenticateb__4() {
		return ((R (*)(cDisplayClass340*))(Il2CppBase() + 0x10B0D10))(this);
	}

};

