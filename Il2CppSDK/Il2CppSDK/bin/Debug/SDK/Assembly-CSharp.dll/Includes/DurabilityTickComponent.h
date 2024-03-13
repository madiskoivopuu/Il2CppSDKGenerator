#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DurabilityTickComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DurabilityTickComponent"));
	}

	template <typename T = int64_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Residue() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(DurabilityTickComponent*, Il2CppObject*))(Il2CppBase() + 0x1A977A0))(this, target);
	}

};

