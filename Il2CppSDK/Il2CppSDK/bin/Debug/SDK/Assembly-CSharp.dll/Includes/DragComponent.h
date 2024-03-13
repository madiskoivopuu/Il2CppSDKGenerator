#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DragComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DragComponent"));
	}

	template <typename T = uintptr_t> T& Position() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(DragComponent*, Il2CppObject*))(Il2CppBase() + 0x1305348))(this, targetObject);
	}

};

