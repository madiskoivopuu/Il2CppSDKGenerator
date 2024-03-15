#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass540
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass54_0"));
	}

	 Action1<Il2CppArray<uintptr_t>*>*& callback() {
		return *(Action1<Il2CppArray<uintptr_t>*>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R LoadAchievementDescriptionsb__0(Il2CppArray<GooglePlayGamesBasicApi::Achievement*>* ach) {
		return ((R (*)(cDisplayClass540*, Il2CppArray<GooglePlayGamesBasicApi::Achievement*>*))(Il2CppBase() + 0x10B143C))(this, ach);
	}

};

