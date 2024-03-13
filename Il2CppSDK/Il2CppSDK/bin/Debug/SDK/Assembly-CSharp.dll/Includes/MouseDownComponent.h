#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MouseDownComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MouseDownComponent"));
	}

	template <typename T = uintptr_t> T& Position() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(MouseDownComponent*, Il2CppObject*))(Il2CppBase() + 0x1556694))(this, targetObject);
	}

};

