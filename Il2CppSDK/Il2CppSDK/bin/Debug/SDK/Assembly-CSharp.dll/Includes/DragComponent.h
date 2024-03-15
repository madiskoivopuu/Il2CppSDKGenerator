#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DragComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DragComponent"));
	}

	template <typename R = uintptr_t> R& Position() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(DragComponent*, Il2CppObject*))(Il2CppBase() + 0x1305348))(this, targetObject);
	}

};

