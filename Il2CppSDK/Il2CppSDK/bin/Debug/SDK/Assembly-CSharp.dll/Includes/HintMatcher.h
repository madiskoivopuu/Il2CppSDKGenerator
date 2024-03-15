#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HintMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HintMatcher"));
	}

	 static IMatcher1<HintEntity*>*& _matcherBlueprint() {
		return *(IMatcher1<HintEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<HintEntity*>*& _matcherDescription() {
		return *(IMatcher1<HintEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<HintEntity*>*& _matcherIcon() {
		return *(IMatcher1<HintEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<HintEntity*>*& _matcherLocations() {
		return *(IMatcher1<HintEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<HintEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1<HintEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	 static IMatcher1<HintEntity*>* get_Blueprint() {
		return ((IMatcher1<HintEntity*>* (*)(void *))(Il2CppBase() + 0x1C465C4))(0);
	}
	 static IMatcher1<HintEntity*>* get_Description() {
		return ((IMatcher1<HintEntity*>* (*)(void *))(Il2CppBase() + 0x1C46744))(0);
	}
	 static IMatcher1<HintEntity*>* get_Icon() {
		return ((IMatcher1<HintEntity*>* (*)(void *))(Il2CppBase() + 0x1C477F8))(0);
	}
	 static IMatcher1<HintEntity*>* get_Locations() {
		return ((IMatcher1<HintEntity*>* (*)(void *))(Il2CppBase() + 0x1C460E4))(0);
	}
	 static IMatcher1<HintEntity*>* get_OldBlueprint() {
		return ((IMatcher1<HintEntity*>* (*)(void *))(Il2CppBase() + 0x1C47994))(0);
	}
	 static IAllOfMatcher1<HintEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<HintEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1C47B30))(0, indices);
	}
	 static IAllOfMatcher1<HintEntity*>* AllOf_1(Il2CppArray<IMatcher1<HintEntity*>*>* matchers) {
		return ((IAllOfMatcher1<HintEntity*>* (*)(void *, Il2CppArray<IMatcher1<HintEntity*>*>*))(Il2CppBase() + 0x1C468E0))(0, matchers);
	}
	 static IAnyOfMatcher1<HintEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<HintEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1C47BA8))(0, indices);
	}
	 static IAnyOfMatcher1<HintEntity*>* AnyOf_1(Il2CppArray<IMatcher1<HintEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<HintEntity*>* (*)(void *, Il2CppArray<IMatcher1<HintEntity*>*>*))(Il2CppBase() + 0x1C47C20))(0, matchers);
	}

};

