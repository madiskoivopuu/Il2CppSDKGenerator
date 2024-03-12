#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioClick
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioClick"));
	}

	template <typename T = Il2CppString*> T& _soundName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _selectable() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AudioClick*))(Il2CppBase() + 0x1A5BBA8))(this);
	}
	template <typename T = void> T OnPointerClick(uintptr_t eventData) {
		return ((T (*)(AudioClick*, uintptr_t))(Il2CppBase() + 0x1A5BC04))(this, eventData);
	}

};

}
