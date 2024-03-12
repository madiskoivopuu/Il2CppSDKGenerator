#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpeedConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpeedConditionComponent"));
	}

	template <typename T = bool> T& Has() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& BaseNotZero() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = void*> T& Min() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& Max() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(SpeedConditionComponent*, uintptr_t))(Il2CppBase() + 0x14883FC))(this, target);
	}

};

}
