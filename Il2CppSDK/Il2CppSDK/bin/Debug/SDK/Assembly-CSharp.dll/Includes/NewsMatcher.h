#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NewsMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NewsMatcher"));
	}

	template <typename T = IMatcher1NewsEntity*>*> static T& _matcherAvailablePlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1NewsEntity*>*> static T& _matcherId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1NewsEntity*>*> static T& _matcherInvalidationDate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1NewsEntity*>*> static T& _matcherRead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1NewsEntity*>*> static T& _matcherShowToNewPlayers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = IMatcher1NewsEntity*>*> static T& _matcherText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = IMatcher1NewsEntity*>*> static T& _matcherTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = IMatcher1NewsEntity*>*> static T get_AvailablePlatform() {
		return ((T (*)(void *))(Il2CppBase() + 0x13AF7F8))(0);
	}
	template <typename T = IMatcher1NewsEntity*>*> static T get_Id() {
		return ((T (*)(void *))(Il2CppBase() + 0x13AE1A0))(0);
	}
	template <typename T = IMatcher1NewsEntity*>*> static T get_InvalidationDate() {
		return ((T (*)(void *))(Il2CppBase() + 0x13AF978))(0);
	}
	template <typename T = IMatcher1NewsEntity*>*> static T get_Read() {
		return ((T (*)(void *))(Il2CppBase() + 0x13AFB14))(0);
	}
	template <typename T = IMatcher1NewsEntity*>*> static T get_ShowToNewPlayers() {
		return ((T (*)(void *))(Il2CppBase() + 0x13AFCB0))(0);
	}
	template <typename T = IMatcher1NewsEntity*>*> static T get_Text() {
		return ((T (*)(void *))(Il2CppBase() + 0x13AFE4C))(0);
	}
	template <typename T = IMatcher1NewsEntity*>*> static T get_Title() {
		return ((T (*)(void *))(Il2CppBase() + 0x13AFFE8))(0);
	}
	template <typename T = IAllOfMatcher1NewsEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x13B0184))(0, indices);
	}
	template <typename T = IAllOfMatcher1NewsEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x13B01FC))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1NewsEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x13B0274))(0, indices);
	}
	template <typename T = IAnyOfMatcher1NewsEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x13B02EC))(0, matchers);
	}

};

