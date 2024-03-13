#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MouseUpComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MouseUpComponent"));
	}

	template <typename T = uintptr_t> T& Position() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(MouseUpComponent*, Il2CppObject*))(Il2CppBase() + 0x15567D4))(this, targetObject);
	}

};

