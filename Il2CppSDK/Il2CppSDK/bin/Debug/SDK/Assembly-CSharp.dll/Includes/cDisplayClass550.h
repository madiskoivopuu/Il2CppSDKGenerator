#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass550
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass55_0"));
	}

	template <typename T = Action1Il2CppArray<uintptr_t>*>*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T LoadAchievementsb__0(Il2CppArray<uintptr_t>* ach) {
		return ((T (*)(cDisplayClass550*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10B15A4))(this, ach);
	}

};

