#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TestGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TestGroup"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = TestGroup*> static T& None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = TestGroup*> static T& A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = TestGroup*> static T& B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

