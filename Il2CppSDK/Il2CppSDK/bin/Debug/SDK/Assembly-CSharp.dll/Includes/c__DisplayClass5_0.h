#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass50
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass5_0"));
	}

	template <typename T = void*> T& cb() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T ShowAllLeaderboardsUIb__0(int32_t uiCode) {
		return ((T (*)(cDisplayClass50*, int32_t))(Il2CppBase() + 0x11417B8))(this, uiCode);
	}
	template <typename T = void> T ShowAllLeaderboardsUIb__1(uintptr_t exception) {
		return ((T (*)(cDisplayClass50*, uintptr_t))(Il2CppBase() + 0x1141894))(this, exception);
	}

};

}
