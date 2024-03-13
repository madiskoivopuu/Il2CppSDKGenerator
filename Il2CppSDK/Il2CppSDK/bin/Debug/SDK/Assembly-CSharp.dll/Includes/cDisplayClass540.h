#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass540
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass54_0"));
	}

	template <typename T = Action1Il2CppArray<uintptr_t>*>*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T LoadAchievementDescriptionsb__0(Il2CppArray<uintptr_t>* ach) {
		return ((T (*)(cDisplayClass540*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10B143C))(this, ach);
	}

};

