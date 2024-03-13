#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StackCountComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StackCountComponent"));
	}

	template <typename T = int32_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(StackCountComponent*, Il2CppObject*))(Il2CppBase() + 0x1489454))(this, targetObject);
	}

};

