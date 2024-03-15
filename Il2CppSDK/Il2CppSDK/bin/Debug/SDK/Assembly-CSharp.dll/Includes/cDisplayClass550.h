#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass550
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass55_0"));
	}

	 Action1Il2CppArray<uintptr_t>*>*& callback() {
		return *(Action1Il2CppArray<uintptr_t>*>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R LoadAchievementsb__0(Il2CppArray<GooglePlayGamesBasicApi::Achievement*>* ach) {
		return ((R (*)(cDisplayClass550*, Il2CppArray<GooglePlayGamesBasicApi::Achievement*>*))(Il2CppBase() + 0x10B15A4))(this, ach);
	}

};

