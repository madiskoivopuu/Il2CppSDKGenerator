#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass50
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass5_0"));
	}

	 Action1<GooglePlayGamesBasicApi::UIStatus>*& cb() {
		return *(Action1<GooglePlayGamesBasicApi::UIStatus>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R ShowAllLeaderboardsUIb__0(int32_t uiCode) {
		return ((R (*)(cDisplayClass50*, int32_t))(Il2CppBase() + 0x11417B8))(this, uiCode);
	}
	template <typename R = void> R ShowAllLeaderboardsUIb__1(uintptr_t exception) {
		return ((R (*)(cDisplayClass50*, uintptr_t))(Il2CppBase() + 0x1141894))(this, exception);
	}

};

