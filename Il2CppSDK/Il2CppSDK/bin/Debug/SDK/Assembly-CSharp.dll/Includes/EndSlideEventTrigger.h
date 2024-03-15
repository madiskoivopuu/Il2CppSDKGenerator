#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EndSlideEventTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EndSlideEventTrigger"));
	}

	template <typename R = EndSliderDragEventHandler*> R& EndDrag() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _slider() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R add_EndDrag(EndSliderDragEventHandler* value) {
		return ((R (*)(EndSlideEventTrigger*, EndSliderDragEventHandler*))(Il2CppBase() + 0x13703D0))(this, value);
	}
	template <typename R = void> R remove_EndDrag(EndSliderDragEventHandler* value) {
		return ((R (*)(EndSlideEventTrigger*, EndSliderDragEventHandler*))(Il2CppBase() + 0x1370470))(this, value);
	}
	template <typename R = float> R getSliderValue() {
		return ((R (*)(EndSlideEventTrigger*))(Il2CppBase() + 0x1370510))(this);
	}
	template <typename R = void> R OnPointerUp(uintptr_t data) {
		return ((R (*)(EndSlideEventTrigger*, uintptr_t))(Il2CppBase() + 0x13705E4))(this, data);
	}

};

