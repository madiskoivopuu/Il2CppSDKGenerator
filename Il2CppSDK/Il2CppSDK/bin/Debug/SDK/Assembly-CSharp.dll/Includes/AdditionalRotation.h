#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AdditionalRotation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AdditionalRotation"));
	}

	template <typename R = uintptr_t> R& AddRotationFrom() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& AddRotationTo() {
		return *(R*)((uintptr_t)this + 0x24);
	}

	template <typename R = void> R Start() {
		return ((R (*)(AdditionalRotation*))(Il2CppBase() + 0x18B0E18))(this);
	}

};

