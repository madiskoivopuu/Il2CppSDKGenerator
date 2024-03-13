#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HintMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HintMatcher"));
	}

	template <typename T = IMatcher1HintEntity*>*> static T& _matcherBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1HintEntity*>*> static T& _matcherDescription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1HintEntity*>*> static T& _matcherIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1HintEntity*>*> static T& _matcherLocations() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1HintEntity*>*> static T& _matcherOldBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = IMatcher1HintEntity*>*> static T get_Blueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C465C4))(0);
	}
	template <typename T = IMatcher1HintEntity*>*> static T get_Description() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C46744))(0);
	}
	template <typename T = IMatcher1HintEntity*>*> static T get_Icon() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C477F8))(0);
	}
	template <typename T = IMatcher1HintEntity*>*> static T get_Locations() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C460E4))(0);
	}
	template <typename T = IMatcher1HintEntity*>*> static T get_OldBlueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x1C47994))(0);
	}
	template <typename T = IAllOfMatcher1HintEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C47B30))(0, indices);
	}
	template <typename T = IAllOfMatcher1HintEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C468E0))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1HintEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C47BA8))(0, indices);
	}
	template <typename T = IAnyOfMatcher1HintEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1C47C20))(0, matchers);
	}

};

