#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreCategoriesMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreCategoriesMatcher"));
	}

	 static IMatcher1StoreCategoriesEntity*>*& _matcherCategoryEvents() {
		return *(IMatcher1StoreCategoriesEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1StoreCategoriesEntity*>*& _matcherCategoryId() {
		return *(IMatcher1StoreCategoriesEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1StoreCategoriesEntity*>*& _matcherCategoryType() {
		return *(IMatcher1StoreCategoriesEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1StoreCategoriesEntity*>*& _matcherPlayerId() {
		return *(IMatcher1StoreCategoriesEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1StoreCategoriesEntity*>*& _matcherTags() {
		return *(IMatcher1StoreCategoriesEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	 static IMatcher1StoreCategoriesEntity*>* get_CategoryEvents() {
		return ((IMatcher1StoreCategoriesEntity*>* (*)(void *))(Il2CppBase() + 0x141CC14))(0);
	}
	 static IMatcher1StoreCategoriesEntity*>* get_CategoryId() {
		return ((IMatcher1StoreCategoriesEntity*>* (*)(void *))(Il2CppBase() + 0x141B48C))(0);
	}
	 static IMatcher1StoreCategoriesEntity*>* get_CategoryType() {
		return ((IMatcher1StoreCategoriesEntity*>* (*)(void *))(Il2CppBase() + 0x141B628))(0);
	}
	 static IMatcher1StoreCategoriesEntity*>* get_PlayerId() {
		return ((IMatcher1StoreCategoriesEntity*>* (*)(void *))(Il2CppBase() + 0x141B7C4))(0);
	}
	 static IMatcher1StoreCategoriesEntity*>* get_Tags() {
		return ((IMatcher1StoreCategoriesEntity*>* (*)(void *))(Il2CppBase() + 0x141CD94))(0);
	}
	 static IAllOfMatcher1StoreCategoriesEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1StoreCategoriesEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x141CF30))(0, indices);
	}
	 static IAllOfMatcher1StoreCategoriesEntity*>* AllOf_1(Il2CppArray<IMatcher1StoreCategoriesEntity*>*>* matchers) {
		return ((IAllOfMatcher1StoreCategoriesEntity*>* (*)(void *, Il2CppArray<IMatcher1StoreCategoriesEntity*>*>*))(Il2CppBase() + 0x141CFA8))(0, matchers);
	}
	 static IAnyOfMatcher1StoreCategoriesEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1StoreCategoriesEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x141D020))(0, indices);
	}
	 static IAnyOfMatcher1StoreCategoriesEntity*>* AnyOf_1(Il2CppArray<IMatcher1StoreCategoriesEntity*>*>* matchers) {
		return ((IAnyOfMatcher1StoreCategoriesEntity*>* (*)(void *, Il2CppArray<IMatcher1StoreCategoriesEntity*>*>*))(Il2CppBase() + 0x141D098))(0, matchers);
	}

};
