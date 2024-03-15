#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LightningHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LightningHelper"));
	}

	template <typename R = uintptr_t> R& _skyColor() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _equatorColor() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _groudColor() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _fogColor() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = float> R& _fogStart() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = float> R& _fogEnd() {
		return *(R*)((uintptr_t)this + 0x5C);
	}

	template <typename R = void> R Start() {
		return ((R (*)(LightningHelper*))(Il2CppBase() + 0x142C95C))(this);
	}

};

