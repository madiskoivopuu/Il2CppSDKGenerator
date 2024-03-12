#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass390
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass39_0"));
	}

	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T GetFriendsListVisibilityb__0(uintptr_t annotatedData) {
		return ((T (*)(cDisplayClass390*, uintptr_t))(Il2CppBase() + 0x113C580))(this, annotatedData);
	}
	template <typename T = void> T GetFriendsListVisibilityb__1(uintptr_t exception) {
		return ((T (*)(cDisplayClass390*, uintptr_t))(Il2CppBase() + 0x113C870))(this, exception);
	}

};

}
