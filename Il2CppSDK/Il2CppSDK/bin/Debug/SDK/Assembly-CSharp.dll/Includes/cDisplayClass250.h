#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass250
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass25_0"));
	}

	 Action1<GooglePlayGamesBasicApi::SignInStatus>*& callback() {
		return *(Action1<GooglePlayGamesBasicApi::SignInStatus>**)((uintptr_t)this + 0x10);
	}
	template <typename R = GooglePlayGamesAndroid::AndroidTokenClient*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& scopes() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R RequestPermissionsb__0(uintptr_t accountWithNewScopes) {
		return ((R (*)(cDisplayClass250*, uintptr_t))(Il2CppBase() + 0x1147190))(this, accountWithNewScopes);
	}
	template <typename R = void> R RequestPermissionsb__1(uintptr_t e) {
		return ((R (*)(cDisplayClass250*, uintptr_t))(Il2CppBase() + 0x114750C))(this, e);
	}

};

