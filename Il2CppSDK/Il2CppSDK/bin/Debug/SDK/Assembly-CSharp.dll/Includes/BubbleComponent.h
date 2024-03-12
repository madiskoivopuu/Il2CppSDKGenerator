#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BubbleComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BubbleComponent"));
	}

	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(BubbleComponent*, uintptr_t))(Il2CppBase() + 0x15A0B20))(this, targetObject);
	}

};

}
