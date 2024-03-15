#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HintMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HintMatcher"));
	}

	 static IMatcher1HintEntity*>*& _matcherBlueprint() {
		return *(IMatcher1HintEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1HintEntity*>*& _matcherDescription() {
		return *(IMatcher1HintEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1HintEntity*>*& _matcherIcon() {
		return *(IMatcher1HintEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1HintEntity*>*& _matcherLocations() {
		return *(IMatcher1HintEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1HintEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1HintEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	 static IMatcher1HintEntity*>* get_Blueprint() {
		return ((IMatcher1HintEntity*>* (*)(void *))(Il2CppBase() + 0x1C465C4))(0);
	}
	 static IMatcher1HintEntity*>* get_Description() {
		return ((IMatcher1HintEntity*>* (*)(void *))(Il2CppBase() + 0x1C46744))(0);
	}
	 static IMatcher1HintEntity*>* get_Icon() {
		return ((IMatcher1HintEntity*>* (*)(void *))(Il2CppBase() + 0x1C477F8))(0);
	}
	 static IMatcher1HintEntity*>* get_Locations() {
		return ((IMatcher1HintEntity*>* (*)(void *))(Il2CppBase() + 0x1C460E4))(0);
	}
	 static IMatcher1HintEntity*>* get_OldBlueprint() {
		return ((IMatcher1HintEntity*>* (*)(void *))(Il2CppBase() + 0x1C47994))(0);
	}
	 static IAllOfMatcher1HintEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1HintEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1C47B30))(0, indices);
	}
	 static IAllOfMatcher1HintEntity*>* AllOf_1(Il2CppArray<IMatcher1HintEntity*>*>* matchers) {
		return ((IAllOfMatcher1HintEntity*>* (*)(void *, Il2CppArray<IMatcher1HintEntity*>*>*))(Il2CppBase() + 0x1C468E0))(0, matchers);
	}
	 static IAnyOfMatcher1HintEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1HintEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1C47BA8))(0, indices);
	}
	 static IAnyOfMatcher1HintEntity*>* AnyOf_1(Il2CppArray<IMatcher1HintEntity*>*>* matchers) {
		return ((IAnyOfMatcher1HintEntity*>* (*)(void *, Il2CppArray<IMatcher1HintEntity*>*>*))(Il2CppBase() + 0x1C47C20))(0, matchers);
	}

};

