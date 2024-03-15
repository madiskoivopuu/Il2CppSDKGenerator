#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreCategoriesMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreCategoriesMatcher"));
	}

	 static IMatcher1<StoreCategoriesEntity*>*& _matcherCategoryEvents() {
		return *(IMatcher1<StoreCategoriesEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<StoreCategoriesEntity*>*& _matcherCategoryId() {
		return *(IMatcher1<StoreCategoriesEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<StoreCategoriesEntity*>*& _matcherCategoryType() {
		return *(IMatcher1<StoreCategoriesEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<StoreCategoriesEntity*>*& _matcherPlayerId() {
		return *(IMatcher1<StoreCategoriesEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<StoreCategoriesEntity*>*& _matcherTags() {
		return *(IMatcher1<StoreCategoriesEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	 static IMatcher1<StoreCategoriesEntity*>* get_CategoryEvents() {
		return ((IMatcher1<StoreCategoriesEntity*>* (*)(void *))(Il2CppBase() + 0x141CC14))(0);
	}
	 static IMatcher1<StoreCategoriesEntity*>* get_CategoryId() {
		return ((IMatcher1<StoreCategoriesEntity*>* (*)(void *))(Il2CppBase() + 0x141B48C))(0);
	}
	 static IMatcher1<StoreCategoriesEntity*>* get_CategoryType() {
		return ((IMatcher1<StoreCategoriesEntity*>* (*)(void *))(Il2CppBase() + 0x141B628))(0);
	}
	 static IMatcher1<StoreCategoriesEntity*>* get_PlayerId() {
		return ((IMatcher1<StoreCategoriesEntity*>* (*)(void *))(Il2CppBase() + 0x141B7C4))(0);
	}
	 static IMatcher1<StoreCategoriesEntity*>* get_Tags() {
		return ((IMatcher1<StoreCategoriesEntity*>* (*)(void *))(Il2CppBase() + 0x141CD94))(0);
	}
	 static IAllOfMatcher1<StoreCategoriesEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<StoreCategoriesEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x141CF30))(0, indices);
	}
	 static IAllOfMatcher1<StoreCategoriesEntity*>* AllOf_1(Il2CppArray<IMatcher1<StoreCategoriesEntity*>*>* matchers) {
		return ((IAllOfMatcher1<StoreCategoriesEntity*>* (*)(void *, Il2CppArray<IMatcher1<StoreCategoriesEntity*>*>*))(Il2CppBase() + 0x141CFA8))(0, matchers);
	}
	 static IAnyOfMatcher1<StoreCategoriesEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<StoreCategoriesEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x141D020))(0, indices);
	}
	 static IAnyOfMatcher1<StoreCategoriesEntity*>* AnyOf_1(Il2CppArray<IMatcher1<StoreCategoriesEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<StoreCategoriesEntity*>* (*)(void *, Il2CppArray<IMatcher1<StoreCategoriesEntity*>*>*))(Il2CppBase() + 0x141D098))(0, matchers);
	}

};

