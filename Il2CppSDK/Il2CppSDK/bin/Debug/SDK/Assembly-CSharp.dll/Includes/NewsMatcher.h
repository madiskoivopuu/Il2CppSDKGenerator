#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NewsMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NewsMatcher"));
	}

	 static IMatcher1NewsEntity*>*& _matcherAvailablePlatform() {
		return *(IMatcher1NewsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1NewsEntity*>*& _matcherId() {
		return *(IMatcher1NewsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1NewsEntity*>*& _matcherInvalidationDate() {
		return *(IMatcher1NewsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1NewsEntity*>*& _matcherRead() {
		return *(IMatcher1NewsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1NewsEntity*>*& _matcherShowToNewPlayers() {
		return *(IMatcher1NewsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1NewsEntity*>*& _matcherText() {
		return *(IMatcher1NewsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1NewsEntity*>*& _matcherTitle() {
		return *(IMatcher1NewsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	 static IMatcher1NewsEntity*>* get_AvailablePlatform() {
		return ((IMatcher1NewsEntity*>* (*)(void *))(Il2CppBase() + 0x13AF7F8))(0);
	}
	 static IMatcher1NewsEntity*>* get_Id() {
		return ((IMatcher1NewsEntity*>* (*)(void *))(Il2CppBase() + 0x13AE1A0))(0);
	}
	 static IMatcher1NewsEntity*>* get_InvalidationDate() {
		return ((IMatcher1NewsEntity*>* (*)(void *))(Il2CppBase() + 0x13AF978))(0);
	}
	 static IMatcher1NewsEntity*>* get_Read() {
		return ((IMatcher1NewsEntity*>* (*)(void *))(Il2CppBase() + 0x13AFB14))(0);
	}
	 static IMatcher1NewsEntity*>* get_ShowToNewPlayers() {
		return ((IMatcher1NewsEntity*>* (*)(void *))(Il2CppBase() + 0x13AFCB0))(0);
	}
	 static IMatcher1NewsEntity*>* get_Text() {
		return ((IMatcher1NewsEntity*>* (*)(void *))(Il2CppBase() + 0x13AFE4C))(0);
	}
	 static IMatcher1NewsEntity*>* get_Title() {
		return ((IMatcher1NewsEntity*>* (*)(void *))(Il2CppBase() + 0x13AFFE8))(0);
	}
	 static IAllOfMatcher1NewsEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1NewsEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x13B0184))(0, indices);
	}
	 static IAllOfMatcher1NewsEntity*>* AllOf_1(Il2CppArray<IMatcher1NewsEntity*>*>* matchers) {
		return ((IAllOfMatcher1NewsEntity*>* (*)(void *, Il2CppArray<IMatcher1NewsEntity*>*>*))(Il2CppBase() + 0x13B01FC))(0, matchers);
	}
	 static IAnyOfMatcher1NewsEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1NewsEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x13B0274))(0, indices);
	}
	 static IAnyOfMatcher1NewsEntity*>* AnyOf_1(Il2CppArray<IMatcher1NewsEntity*>*>* matchers) {
		return ((IAnyOfMatcher1NewsEntity*>* (*)(void *, Il2CppArray<IMatcher1NewsEntity*>*>*))(Il2CppBase() + 0x13B02EC))(0, matchers);
	}

};

