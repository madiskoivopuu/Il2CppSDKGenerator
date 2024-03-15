#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StackCountComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StackCountComponent"));
	}

	template <typename R = int32_t> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(StackCountComponent*, Il2CppObject*))(Il2CppBase() + 0x1489454))(this, targetObject);
	}

};

