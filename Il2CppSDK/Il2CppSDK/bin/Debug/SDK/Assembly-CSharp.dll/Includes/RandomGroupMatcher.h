#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RandomGroupMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomGroupMatcher"));
	}

	 static IMatcher1<RandomGroupEntity*>*& _matcherBlueprint() {
		return *(IMatcher1<RandomGroupEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<RandomGroupEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1<RandomGroupEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<RandomGroupEntity*>*& _matcherRandomGroup() {
		return *(IMatcher1<RandomGroupEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<RandomGroupEntity*>*& _matcherType() {
		return *(IMatcher1<RandomGroupEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<RandomGroupEntity*>*& _matcherUseLimit() {
		return *(IMatcher1<RandomGroupEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	 static IMatcher1<RandomGroupEntity*>* get_Blueprint() {
		return ((IMatcher1<RandomGroupEntity*>* (*)(void *))(Il2CppBase() + 0x1717234))(0);
	}
	 static IMatcher1<RandomGroupEntity*>* get_OldBlueprint() {
		return ((IMatcher1<RandomGroupEntity*>* (*)(void *))(Il2CppBase() + 0x17173B4))(0);
	}
	 static IMatcher1<RandomGroupEntity*>* get_RandomGroup() {
		return ((IMatcher1<RandomGroupEntity*>* (*)(void *))(Il2CppBase() + 0x1717550))(0);
	}
	 static IMatcher1<RandomGroupEntity*>* get_Type() {
		return ((IMatcher1<RandomGroupEntity*>* (*)(void *))(Il2CppBase() + 0x17176EC))(0);
	}
	 static IMatcher1<RandomGroupEntity*>* get_UseLimit() {
		return ((IMatcher1<RandomGroupEntity*>* (*)(void *))(Il2CppBase() + 0x1717888))(0);
	}
	 static IAllOfMatcher1<RandomGroupEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<RandomGroupEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1717A24))(0, indices);
	}
	 static IAllOfMatcher1<RandomGroupEntity*>* AllOf_1(Il2CppArray<IMatcher1<RandomGroupEntity*>*>* matchers) {
		return ((IAllOfMatcher1<RandomGroupEntity*>* (*)(void *, Il2CppArray<IMatcher1<RandomGroupEntity*>*>*))(Il2CppBase() + 0x1717A9C))(0, matchers);
	}
	 static IAnyOfMatcher1<RandomGroupEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<RandomGroupEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1717B14))(0, indices);
	}
	 static IAnyOfMatcher1<RandomGroupEntity*>* AnyOf_1(Il2CppArray<IMatcher1<RandomGroupEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<RandomGroupEntity*>* (*)(void *, Il2CppArray<IMatcher1<RandomGroupEntity*>*>*))(Il2CppBase() + 0x1717B8C))(0, matchers);
	}

};

