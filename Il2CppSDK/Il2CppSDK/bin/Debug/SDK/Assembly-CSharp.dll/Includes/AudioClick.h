#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioClick
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioClick"));
	}

	template <typename R = Il2CppString*> R& _soundName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _selectable() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(AudioClick*))(Il2CppBase() + 0x1A5BBA8))(this);
	}
	template <typename R = void> R OnPointerClick(uintptr_t eventData) {
		return ((R (*)(AudioClick*, uintptr_t))(Il2CppBase() + 0x1A5BC04))(this, eventData);
	}

};

