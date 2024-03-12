#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyChargeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyChargeComponent"));
	}

	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& InteractRadius() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& MaxDuration() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ApplyChargeComponent*, uintptr_t))(Il2CppBase() + 0x1893440))(this, targetObject);
	}

};

}
