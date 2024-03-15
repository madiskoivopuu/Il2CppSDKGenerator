#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadingMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoadingMatcher"));
	}

	 static IMatcher1<LoadingEntity*>*& _matcherBlueprint() {
		return *(IMatcher1<LoadingEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<LoadingEntity*>*& _matcherDescription() {
		return *(IMatcher1<LoadingEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<LoadingEntity*>*& _matcherIcon() {
		return *(IMatcher1<LoadingEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<LoadingEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1<LoadingEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	 static IMatcher1<LoadingEntity*>* get_Blueprint() {
		return ((IMatcher1<LoadingEntity*>* (*)(void *))(Il2CppBase() + 0x1432798))(0);
	}
	 static IMatcher1<LoadingEntity*>* get_Description() {
		return ((IMatcher1<LoadingEntity*>* (*)(void *))(Il2CppBase() + 0x1432918))(0);
	}
	 static IMatcher1<LoadingEntity*>* get_Icon() {
		return ((IMatcher1<LoadingEntity*>* (*)(void *))(Il2CppBase() + 0x1432AB4))(0);
	}
	 static IMatcher1<LoadingEntity*>* get_OldBlueprint() {
		return ((IMatcher1<LoadingEntity*>* (*)(void *))(Il2CppBase() + 0x1432C50))(0);
	}
	 static IAllOfMatcher1<LoadingEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<LoadingEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1432DEC))(0, indices);
	}
	 static IAllOfMatcher1<LoadingEntity*>* AllOf_1(Il2CppArray<IMatcher1<LoadingEntity*>*>* matchers) {
		return ((IAllOfMatcher1<LoadingEntity*>* (*)(void *, Il2CppArray<IMatcher1<LoadingEntity*>*>*))(Il2CppBase() + 0x1432E64))(0, matchers);
	}
	 static IAnyOfMatcher1<LoadingEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<LoadingEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1432EDC))(0, indices);
	}
	 static IAnyOfMatcher1<LoadingEntity*>* AnyOf_1(Il2CppArray<IMatcher1<LoadingEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<LoadingEntity*>* (*)(void *, Il2CppArray<IMatcher1<LoadingEntity*>*>*))(Il2CppBase() + 0x1432F54))(0, matchers);
	}

};

