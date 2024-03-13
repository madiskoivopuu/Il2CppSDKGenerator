#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AFKMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AFKMatcher"));
	}

	template <typename T = IMatcher1AFKEntity*>*> static T& _matcherCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1AFKEntity*>*> static T& _matcherParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1AFKEntity*>*> static T& _matcherTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1AFKEntity*>*> static T& _matcherTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = IAllOfMatcher1AFKEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1D950AC))(0, indices);
	}
	template <typename T = IAllOfMatcher1AFKEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1D95124))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1AFKEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1D9519C))(0, indices);
	}
	template <typename T = IAnyOfMatcher1AFKEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1D95214))(0, matchers);
	}
	template <typename T = IMatcher1AFKEntity*>*> static T get_Count() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D9528C))(0);
	}
	template <typename T = IMatcher1AFKEntity*>*> static T get_Parent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D9540C))(0);
	}
	template <typename T = IMatcher1AFKEntity*>*> static T get_Target() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D955A8))(0);
	}
	template <typename T = IMatcher1AFKEntity*>*> static T get_Tick() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D95744))(0);
	}

};

