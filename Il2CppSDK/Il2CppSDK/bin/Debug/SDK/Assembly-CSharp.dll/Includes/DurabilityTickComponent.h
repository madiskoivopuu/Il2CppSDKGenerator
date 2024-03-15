#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DurabilityTickComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DurabilityTickComponent"));
	}

	template <typename R = int64_t> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Residue() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(DurabilityTickComponent*, Il2CppObject*))(Il2CppBase() + 0x1A977A0))(this, target);
	}

};

