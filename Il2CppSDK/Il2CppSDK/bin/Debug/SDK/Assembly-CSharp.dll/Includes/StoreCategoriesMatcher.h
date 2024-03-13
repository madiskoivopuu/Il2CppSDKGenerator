#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreCategoriesMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreCategoriesMatcher"));
	}

	template <typename T = IMatcher1StoreCategoriesEntity*>*> static T& _matcherCategoryEvents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1StoreCategoriesEntity*>*> static T& _matcherCategoryId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1StoreCategoriesEntity*>*> static T& _matcherCategoryType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1StoreCategoriesEntity*>*> static T& _matcherPlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1StoreCategoriesEntity*>*> static T& _matcherTags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = IMatcher1StoreCategoriesEntity*>*> static T get_CategoryEvents() {
		return ((T (*)(void *))(Il2CppBase() + 0x141CC14))(0);
	}
	template <typename T = IMatcher1StoreCategoriesEntity*>*> static T get_CategoryId() {
		return ((T (*)(void *))(Il2CppBase() + 0x141B48C))(0);
	}
	template <typename T = IMatcher1StoreCategoriesEntity*>*> static T get_CategoryType() {
		return ((T (*)(void *))(Il2CppBase() + 0x141B628))(0);
	}
	template <typename T = IMatcher1StoreCategoriesEntity*>*> static T get_PlayerId() {
		return ((T (*)(void *))(Il2CppBase() + 0x141B7C4))(0);
	}
	template <typename T = IMatcher1StoreCategoriesEntity*>*> static T get_Tags() {
		return ((T (*)(void *))(Il2CppBase() + 0x141CD94))(0);
	}
	template <typename T = IAllOfMatcher1StoreCategoriesEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x141CF30))(0, indices);
	}
	template <typename T = IAllOfMatcher1StoreCategoriesEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x141CFA8))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1StoreCategoriesEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x141D020))(0, indices);
	}
	template <typename T = IAnyOfMatcher1StoreCategoriesEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x141D098))(0, matchers);
	}

};

