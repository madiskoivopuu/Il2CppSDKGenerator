#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass290
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass29_0"));
	}

	template <typename R = GooglePlayGamesAndroid::AndroidTokenClient*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& reAuthenticateIfNeeded() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Action1Il2CppString*>*& callback() {
		return *(Action1Il2CppString*>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R GetAnotherServerAuthCodeb__0() {
		return ((R (*)(cDisplayClass290*))(Il2CppBase() + 0x1147BCC))(this);
	}

};

