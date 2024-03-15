#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BubbleComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BubbleComponent"));
	}

	template <typename R = Il2CppString*> R& Text() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(BubbleComponent*, Il2CppObject*))(Il2CppBase() + 0x15A0B20))(this, targetObject);
	}

};

