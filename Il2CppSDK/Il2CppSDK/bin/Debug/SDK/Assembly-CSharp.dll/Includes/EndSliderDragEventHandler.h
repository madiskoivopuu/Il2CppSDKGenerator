#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EndSliderDragEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EndSliderDragEventHandler"));
	}


	template <typename R = void> R Invoke(float val) {
		return ((R (*)(EndSliderDragEventHandler*, float))(Il2CppBase() + 0x1370618))(this, val);
	}
	template <typename R = uintptr_t> R BeginInvoke(float val, uintptr_t callback, Il2CppObject* object) {
		return ((R (*)(EndSliderDragEventHandler*, float, uintptr_t, Il2CppObject*))(Il2CppBase() + 0x13708C0))(this, val, callback, object);
	}
	template <typename R = void> R EndInvoke(uintptr_t result) {
		return ((R (*)(EndSliderDragEventHandler*, uintptr_t))(Il2CppBase() + 0x1370948))(this, result);
	}

};

