#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AdditionalRotation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AdditionalRotation"));
	}

	template <typename T = uintptr_t> T& AddRotationFrom() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& AddRotationTo() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T Start() {
		return ((T (*)(AdditionalRotation*))(Il2CppBase() + 0x18B0E18))(this);
	}

};

