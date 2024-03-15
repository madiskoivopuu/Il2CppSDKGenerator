#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass371
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass37_1"));
	}

	template <typename R = uintptr_t> R& exception() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = cDisplayClass370*> R& CS$8__locals1() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R AskForLoadFriendsResolutionb__2(bool resolutionRequired) {
		return ((R (*)(cDisplayClass371*, bool))(Il2CppBase() + 0x113C1DC))(this, resolutionRequired);
	}

};

