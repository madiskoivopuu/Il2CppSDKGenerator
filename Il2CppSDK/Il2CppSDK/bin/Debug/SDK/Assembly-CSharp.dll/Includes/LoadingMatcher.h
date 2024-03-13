#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadingMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoadingMatcher"));
	}

	template <typename T = IMatcher1LoadingEntity*>*> static T& _matcherBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1LoadingEntity*>*> static T& _matcherDescription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1LoadingEntity*>*> static T& _matcherIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1LoadingEntity*>*> static T& _matcherOldBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = IMatcher1LoadingEntity*>*> static T get_Blueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x1432798))(0);
	}
	template <typename T = IMatcher1LoadingEntity*>*> static T get_Description() {
		return ((T (*)(void *))(Il2CppBase() + 0x1432918))(0);
	}
	template <typename T = IMatcher1LoadingEntity*>*> static T get_Icon() {
		return ((T (*)(void *))(Il2CppBase() + 0x1432AB4))(0);
	}
	template <typename T = IMatcher1LoadingEntity*>*> static T get_OldBlueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x1432C50))(0);
	}
	template <typename T = IAllOfMatcher1LoadingEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1432DEC))(0, indices);
	}
	template <typename T = IAllOfMatcher1LoadingEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1432E64))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1LoadingEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1432EDC))(0, indices);
	}
	template <typename T = IAnyOfMatcher1LoadingEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1432F54))(0, matchers);
	}

};

