#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass640
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass64_0"));
	}

	template <typename R = GooglePlayGamesAndroid::AndroidClient*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Action1GooglePlayGamesBasicApi::SignInStatus*>*& callback() {
		return *(Action1GooglePlayGamesBasicApi::SignInStatus*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R RequestPermissionsb__0(GooglePlayGamesBasicApi::SignInStatus* code) {
		return ((R (*)(cDisplayClass640*, GooglePlayGamesBasicApi::SignInStatus*))(Il2CppBase() + 0x114034C))(this, code);
	}

};

