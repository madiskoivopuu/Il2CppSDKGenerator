#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NewsMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NewsMatcher"));
	}

	 static IMatcher1<NewsEntity*>*& _matcherAvailablePlatform() {
		return *(IMatcher1<NewsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<NewsEntity*>*& _matcherId() {
		return *(IMatcher1<NewsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<NewsEntity*>*& _matcherInvalidationDate() {
		return *(IMatcher1<NewsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<NewsEntity*>*& _matcherRead() {
		return *(IMatcher1<NewsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<NewsEntity*>*& _matcherShowToNewPlayers() {
		return *(IMatcher1<NewsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<NewsEntity*>*& _matcherText() {
		return *(IMatcher1<NewsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<NewsEntity*>*& _matcherTitle() {
		return *(IMatcher1<NewsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	 static IMatcher1<NewsEntity*>* get_AvailablePlatform() {
		return ((IMatcher1<NewsEntity*>* (*)(void *))(Il2CppBase() + 0x13AF7F8))(0);
	}
	 static IMatcher1<NewsEntity*>* get_Id() {
		return ((IMatcher1<NewsEntity*>* (*)(void *))(Il2CppBase() + 0x13AE1A0))(0);
	}
	 static IMatcher1<NewsEntity*>* get_InvalidationDate() {
		return ((IMatcher1<NewsEntity*>* (*)(void *))(Il2CppBase() + 0x13AF978))(0);
	}
	 static IMatcher1<NewsEntity*>* get_Read() {
		return ((IMatcher1<NewsEntity*>* (*)(void *))(Il2CppBase() + 0x13AFB14))(0);
	}
	 static IMatcher1<NewsEntity*>* get_ShowToNewPlayers() {
		return ((IMatcher1<NewsEntity*>* (*)(void *))(Il2CppBase() + 0x13AFCB0))(0);
	}
	 static IMatcher1<NewsEntity*>* get_Text() {
		return ((IMatcher1<NewsEntity*>* (*)(void *))(Il2CppBase() + 0x13AFE4C))(0);
	}
	 static IMatcher1<NewsEntity*>* get_Title() {
		return ((IMatcher1<NewsEntity*>* (*)(void *))(Il2CppBase() + 0x13AFFE8))(0);
	}
	 static IAllOfMatcher1<NewsEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<NewsEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x13B0184))(0, indices);
	}
	 static IAllOfMatcher1<NewsEntity*>* AllOf_1(Il2CppArray<IMatcher1<NewsEntity*>*>* matchers) {
		return ((IAllOfMatcher1<NewsEntity*>* (*)(void *, Il2CppArray<IMatcher1<NewsEntity*>*>*))(Il2CppBase() + 0x13B01FC))(0, matchers);
	}
	 static IAnyOfMatcher1<NewsEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<NewsEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x13B0274))(0, indices);
	}
	 static IAnyOfMatcher1<NewsEntity*>* AnyOf_1(Il2CppArray<IMatcher1<NewsEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<NewsEntity*>* (*)(void *, Il2CppArray<IMatcher1<NewsEntity*>*>*))(Il2CppBase() + 0x13B02EC))(0, matchers);
	}

};

