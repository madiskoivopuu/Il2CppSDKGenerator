#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass490
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass49_0"));
	}

	template <typename T = Action1Il2CppArray<uintptr_t>*>*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T LoadAchievementsb__0(uintptr_t annotatedData) {
		return ((T (*)(cDisplayClass490*, uintptr_t))(Il2CppBase() + 0x113DCB0))(this, annotatedData);
	}
	template <typename T = void> T LoadAchievementsb__1(uintptr_t exception) {
		return ((T (*)(cDisplayClass490*, uintptr_t))(Il2CppBase() + 0x113EC50))(this, exception);
	}

};

