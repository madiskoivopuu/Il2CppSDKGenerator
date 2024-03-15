#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass510
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass51_0"));
	}

	template <typename R = AccountEntity*> R& account() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = bool> R ShowExistedPortalsb__0(PlayerState p) {
		return ((R (*)(cDisplayClass510*, PlayerState))(Il2CppBase() + 0x10BAE64))(this, p);
	}

};

