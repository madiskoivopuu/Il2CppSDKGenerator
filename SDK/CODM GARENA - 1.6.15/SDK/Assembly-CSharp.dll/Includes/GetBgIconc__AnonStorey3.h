#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetBgIconcAnonStorey3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetBgIcon>c__AnonStorey3"));
	}

	template <typename T = int32_t> T& row() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& column() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(GetBgIconcAnonStorey3*, uintptr_t))(Il2CppBase() + 0x23AE374))(this, it);
	}

};

}