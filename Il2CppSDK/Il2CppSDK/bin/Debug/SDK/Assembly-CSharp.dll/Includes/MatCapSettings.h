#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MatCapSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MatCapSettings"));
	}

	template <typename T = uintptr_t> T& _mc_d() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _mc_r1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _mc_r4() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _mc_r7() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& _mc_power() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(MatCapSettings*))(Il2CppBase() + 0x12CCC9C))(this);
	}

};

