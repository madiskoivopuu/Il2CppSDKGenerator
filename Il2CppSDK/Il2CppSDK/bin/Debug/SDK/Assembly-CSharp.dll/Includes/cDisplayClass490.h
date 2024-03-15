#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass490
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass49_0"));
	}

	 Action1<Il2CppArray<GooglePlayGamesBasicApi::Achievement*>*>*& callback() {
		return *(Action1<Il2CppArray<GooglePlayGamesBasicApi::Achievement*>*>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R LoadAchievementsb__0(uintptr_t annotatedData) {
		return ((R (*)(cDisplayClass490*, uintptr_t))(Il2CppBase() + 0x113DCB0))(this, annotatedData);
	}
	template <typename R = void> R LoadAchievementsb__1(uintptr_t exception) {
		return ((R (*)(cDisplayClass490*, uintptr_t))(Il2CppBase() + 0x113EC50))(this, exception);
	}

};

