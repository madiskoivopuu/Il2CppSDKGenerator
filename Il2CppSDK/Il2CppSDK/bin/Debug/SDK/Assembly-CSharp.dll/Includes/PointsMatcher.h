#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PointsMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PointsMatcher"));
	}

	template <typename T = void*> static T& _matcherBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherOldBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void*> static T get_Blueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x1575B78))(0);
	}
	template <typename T = void*> static T get_OldBlueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x1575CF8))(0);
	}
	template <typename T = void*> static T get_Position() {
		return ((T (*)(void *))(Il2CppBase() + 0x1575E94))(0);
	}
	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1576030))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15760A8))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1576120))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1576198))(0, matchers);
	}

};

}
