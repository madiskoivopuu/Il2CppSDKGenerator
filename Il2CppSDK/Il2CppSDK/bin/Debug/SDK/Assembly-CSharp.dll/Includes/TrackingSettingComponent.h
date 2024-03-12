#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrackingSettingComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrackingSettingComponent"));
	}

	template <typename T = uintptr_t> T& Slot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& ZeroOne() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& WithoutMaxProgress() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = float> T& Weight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(TrackingSettingComponent*, uintptr_t))(Il2CppBase() + 0x150E500))(this, target);
	}

};

}
