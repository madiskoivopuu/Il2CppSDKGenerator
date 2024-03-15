#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MatCapSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MatCapSettings"));
	}

	template <typename R = uintptr_t> R& _mc_d() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _mc_r1() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _mc_r4() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _mc_r7() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& _mc_power() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(MatCapSettings*))(Il2CppBase() + 0x12CCC9C))(this);
	}

};

