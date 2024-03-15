#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VIPExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPExtensions"));
	}


	template <typename R = int32_t> static R GetVipPoints(AccountEntity* account) {
		return ((R (*)(void *, AccountEntity*))(Il2CppBase() + 0x15C0178))(0, account);
	}

};

