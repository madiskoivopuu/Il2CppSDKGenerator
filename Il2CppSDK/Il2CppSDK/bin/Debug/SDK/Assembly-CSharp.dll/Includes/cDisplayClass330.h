#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass330
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass33_0"));
	}

	template <typename T = Action2bool, Il2CppString*>*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Authenticateb__0(SignInStatus* status) {
		return ((T (*)(cDisplayClass330*, SignInStatus*))(Il2CppBase() + 0x10B0704))(this, status);
	}

};

