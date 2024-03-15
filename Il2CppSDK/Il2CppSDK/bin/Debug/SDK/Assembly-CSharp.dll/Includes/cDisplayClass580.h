#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass580
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass58_0"));
	}

	template <typename R = GooglePlayGamesAndroid::AndroidClient*> R& 4__this() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Action1GooglePlayGamesBasicApi::UIStatus*>*& callback() {
		return *(Action1GooglePlayGamesBasicApi::UIStatus*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R GetUiSignOutCallbackOnGameThreadb__0(GooglePlayGamesBasicApi::UIStatus* status) {
		return ((R (*)(cDisplayClass580*, GooglePlayGamesBasicApi::UIStatus*))(Il2CppBase() + 0x113EFB0))(this, status);
	}

};

