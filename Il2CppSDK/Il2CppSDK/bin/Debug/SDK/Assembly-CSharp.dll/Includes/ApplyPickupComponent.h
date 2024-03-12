#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyPickupComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyPickupComponent"));
	}

	template <typename T = Il2CppString*> T& RandomGroup() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& Destroy() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ApplyPickupComponent*, uintptr_t))(Il2CppBase() + 0x1894F94))(this, target);
	}

};

}
