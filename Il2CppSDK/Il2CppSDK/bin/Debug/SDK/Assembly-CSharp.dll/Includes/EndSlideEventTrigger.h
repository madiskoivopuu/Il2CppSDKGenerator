#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EndSlideEventTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EndSlideEventTrigger"));
	}

	template <typename T = uintptr_t> T& EndDrag() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _slider() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T add_EndDrag(uintptr_t value) {
		return ((T (*)(EndSlideEventTrigger*, uintptr_t))(Il2CppBase() + 0x13703D0))(this, value);
	}
	template <typename T = void> T remove_EndDrag(uintptr_t value) {
		return ((T (*)(EndSlideEventTrigger*, uintptr_t))(Il2CppBase() + 0x1370470))(this, value);
	}
	template <typename T = float> T getSliderValue() {
		return ((T (*)(EndSlideEventTrigger*))(Il2CppBase() + 0x1370510))(this);
	}
	template <typename T = void> T OnPointerUp(uintptr_t data) {
		return ((T (*)(EndSlideEventTrigger*, uintptr_t))(Il2CppBase() + 0x13705E4))(this, data);
	}

};

}
