#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrackingSettingComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrackingSettingComponent"));
	}

	template <typename R = TrackingSlot> R& Slot() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& ZeroOne() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = bool> R& WithoutMaxProgress() {
		return *(R*)((uintptr_t)this + 0x15);
	}
	template <typename R = float> R& Weight() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Icon() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TrackingSettingComponent*, Il2CppObject*))(Il2CppBase() + 0x150E500))(this, target);
	}

};

