#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VIPExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPExtensions"));
	}


	template <typename T = int32_t> static T GetVipPoints(uintptr_t account) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15C0178))(0, account);
	}

};

}
