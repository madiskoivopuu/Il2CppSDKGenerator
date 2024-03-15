#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RecipeMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RecipeMatcher"));
	}

	 static IMatcher1RecipeEntity*>*& _matcherActiveCondition() {
		return *(IMatcher1RecipeEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1RecipeEntity*>*& _matcherClick() {
		return *(IMatcher1RecipeEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1RecipeEntity*>*& _matcherCount() {
		return *(IMatcher1RecipeEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1RecipeEntity*>*& _matcherCraft() {
		return *(IMatcher1RecipeEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1RecipeEntity*>*& _matcherDescription() {
		return *(IMatcher1RecipeEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1RecipeEntity*>*& _matcherDuration() {
		return *(IMatcher1RecipeEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1RecipeEntity*>*& _matcherIcon() {
		return *(IMatcher1RecipeEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1RecipeEntity*>*& _matcherItem() {
		return *(IMatcher1RecipeEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1RecipeEntity*>*& _matcherPrefab() {
		return *(IMatcher1RecipeEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1RecipeEntity*>*& _matcherRequired() {
		return *(IMatcher1RecipeEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1RecipeEntity*>*& _matcherRequiredCondition() {
		return *(IMatcher1RecipeEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1RecipeEntity*>*& _matcherResources() {
		return *(IMatcher1RecipeEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1RecipeEntity*>*& _matcherSorting() {
		return *(IMatcher1RecipeEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	 static IMatcher1RecipeEntity*>* get_ActiveCondition() {
		return ((IMatcher1RecipeEntity*>* (*)(void *))(Il2CppBase() + 0x1398F30))(0);
	}
	 static IMatcher1RecipeEntity*>* get_Click() {
		return ((IMatcher1RecipeEntity*>* (*)(void *))(Il2CppBase() + 0x13990B0))(0);
	}
	 static IMatcher1RecipeEntity*>* get_Count() {
		return ((IMatcher1RecipeEntity*>* (*)(void *))(Il2CppBase() + 0x139924C))(0);
	}
	 static IMatcher1RecipeEntity*>* get_Craft() {
		return ((IMatcher1RecipeEntity*>* (*)(void *))(Il2CppBase() + 0x1396728))(0);
	}
	 static IMatcher1RecipeEntity*>* get_Description() {
		return ((IMatcher1RecipeEntity*>* (*)(void *))(Il2CppBase() + 0x13993E8))(0);
	}
	 static IMatcher1RecipeEntity*>* get_Duration() {
		return ((IMatcher1RecipeEntity*>* (*)(void *))(Il2CppBase() + 0x1399584))(0);
	}
	 static IMatcher1RecipeEntity*>* get_Icon() {
		return ((IMatcher1RecipeEntity*>* (*)(void *))(Il2CppBase() + 0x1399720))(0);
	}
	 static IMatcher1RecipeEntity*>* get_Item() {
		return ((IMatcher1RecipeEntity*>* (*)(void *))(Il2CppBase() + 0x13998BC))(0);
	}
	 static IMatcher1RecipeEntity*>* get_Prefab() {
		return ((IMatcher1RecipeEntity*>* (*)(void *))(Il2CppBase() + 0x1399A58))(0);
	}
	 static IMatcher1RecipeEntity*>* get_Required() {
		return ((IMatcher1RecipeEntity*>* (*)(void *))(Il2CppBase() + 0x1399BF4))(0);
	}
	 static IMatcher1RecipeEntity*>* get_RequiredCondition() {
		return ((IMatcher1RecipeEntity*>* (*)(void *))(Il2CppBase() + 0x1399D90))(0);
	}
	 static IMatcher1RecipeEntity*>* get_Resources() {
		return ((IMatcher1RecipeEntity*>* (*)(void *))(Il2CppBase() + 0x1399F2C))(0);
	}
	 static IMatcher1RecipeEntity*>* get_Sorting() {
		return ((IMatcher1RecipeEntity*>* (*)(void *))(Il2CppBase() + 0x139A0C8))(0);
	}
	 static IAllOfMatcher1RecipeEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1RecipeEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x139A264))(0, indices);
	}
	 static IAllOfMatcher1RecipeEntity*>* AllOf_1(Il2CppArray<IMatcher1RecipeEntity*>*>* matchers) {
		return ((IAllOfMatcher1RecipeEntity*>* (*)(void *, Il2CppArray<IMatcher1RecipeEntity*>*>*))(Il2CppBase() + 0x139A2DC))(0, matchers);
	}
	 static IAnyOfMatcher1RecipeEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1RecipeEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x139A354))(0, indices);
	}
	 static IAnyOfMatcher1RecipeEntity*>* AnyOf_1(Il2CppArray<IMatcher1RecipeEntity*>*>* matchers) {
		return ((IAnyOfMatcher1RecipeEntity*>* (*)(void *, Il2CppArray<IMatcher1RecipeEntity*>*>*))(Il2CppBase() + 0x139A3CC))(0, matchers);
	}

};

