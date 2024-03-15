#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AFKMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AFKMatcher"));
	}

	 static IMatcher1AFKEntity*>*& _matcherCount() {
		return *(IMatcher1AFKEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1AFKEntity*>*& _matcherParent() {
		return *(IMatcher1AFKEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1AFKEntity*>*& _matcherTarget() {
		return *(IMatcher1AFKEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1AFKEntity*>*& _matcherTick() {
		return *(IMatcher1AFKEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	 static IAllOfMatcher1AFKEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1AFKEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1D950AC))(0, indices);
	}
	 static IAllOfMatcher1AFKEntity*>* AllOf_1(Il2CppArray<IMatcher1AFKEntity*>*>* matchers) {
		return ((IAllOfMatcher1AFKEntity*>* (*)(void *, Il2CppArray<IMatcher1AFKEntity*>*>*))(Il2CppBase() + 0x1D95124))(0, matchers);
	}
	 static IAnyOfMatcher1AFKEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1AFKEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1D9519C))(0, indices);
	}
	 static IAnyOfMatcher1AFKEntity*>* AnyOf_1(Il2CppArray<IMatcher1AFKEntity*>*>* matchers) {
		return ((IAnyOfMatcher1AFKEntity*>* (*)(void *, Il2CppArray<IMatcher1AFKEntity*>*>*))(Il2CppBase() + 0x1D95214))(0, matchers);
	}
	 static IMatcher1AFKEntity*>* get_Count() {
		return ((IMatcher1AFKEntity*>* (*)(void *))(Il2CppBase() + 0x1D9528C))(0);
	}
	 static IMatcher1AFKEntity*>* get_Parent() {
		return ((IMatcher1AFKEntity*>* (*)(void *))(Il2CppBase() + 0x1D9540C))(0);
	}
	 static IMatcher1AFKEntity*>* get_Target() {
		return ((IMatcher1AFKEntity*>* (*)(void *))(Il2CppBase() + 0x1D955A8))(0);
	}
	 static IMatcher1AFKEntity*>* get_Tick() {
		return ((IMatcher1AFKEntity*>* (*)(void *))(Il2CppBase() + 0x1D95744))(0);
	}

};

