#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MouseDownComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MouseDownComponent"));
	}

	template <typename T = Il2CppVector2> T& Position() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(MouseDownComponent*, uintptr_t))(Il2CppBase() + 0x1556694))(this, targetObject);
	}

};

}
