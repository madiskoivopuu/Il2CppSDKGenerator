#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MousePositionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MousePositionComponent"));
	}

	template <typename R = uintptr_t> R& Position() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(MousePositionComponent*, Il2CppObject*))(Il2CppBase() + 0x1556730))(this, targetObject);
	}

};

