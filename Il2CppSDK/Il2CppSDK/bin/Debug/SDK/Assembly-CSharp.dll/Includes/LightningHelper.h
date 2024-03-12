#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LightningHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LightningHelper"));
	}

	template <typename T = uintptr_t> T& _skyColor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _equatorColor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _groudColor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _fogColor() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& _fogStart() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& _fogEnd() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(LightningHelper*))(Il2CppBase() + 0x142C95C))(this);
	}

};

}
