#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass330
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass33_0"));
	}

	 Action2bool, Il2CppString*>*& callback() {
		return *(Action2bool, Il2CppString*>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Authenticateb__0(GooglePlayGamesBasicApi::SignInStatus* status) {
		return ((R (*)(cDisplayClass330*, GooglePlayGamesBasicApi::SignInStatus*))(Il2CppBase() + 0x10B0704))(this, status);
	}

};

