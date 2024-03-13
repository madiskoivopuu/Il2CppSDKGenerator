#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RecipeMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RecipeMatcher"));
	}

	template <typename T = IMatcher1RecipeEntity*>*> static T& _matcherActiveCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1RecipeEntity*>*> static T& _matcherClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1RecipeEntity*>*> static T& _matcherCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1RecipeEntity*>*> static T& _matcherCraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1RecipeEntity*>*> static T& _matcherDescription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = IMatcher1RecipeEntity*>*> static T& _matcherDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = IMatcher1RecipeEntity*>*> static T& _matcherIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = IMatcher1RecipeEntity*>*> static T& _matcherItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = IMatcher1RecipeEntity*>*> static T& _matcherPrefab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = IMatcher1RecipeEntity*>*> static T& _matcherRequired() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = IMatcher1RecipeEntity*>*> static T& _matcherRequiredCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = IMatcher1RecipeEntity*>*> static T& _matcherResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = IMatcher1RecipeEntity*>*> static T& _matcherSorting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = IMatcher1RecipeEntity*>*> static T get_ActiveCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x1398F30))(0);
	}
	template <typename T = IMatcher1RecipeEntity*>*> static T get_Click() {
		return ((T (*)(void *))(Il2CppBase() + 0x13990B0))(0);
	}
	template <typename T = IMatcher1RecipeEntity*>*> static T get_Count() {
		return ((T (*)(void *))(Il2CppBase() + 0x139924C))(0);
	}
	template <typename T = IMatcher1RecipeEntity*>*> static T get_Craft() {
		return ((T (*)(void *))(Il2CppBase() + 0x1396728))(0);
	}
	template <typename T = IMatcher1RecipeEntity*>*> static T get_Description() {
		return ((T (*)(void *))(Il2CppBase() + 0x13993E8))(0);
	}
	template <typename T = IMatcher1RecipeEntity*>*> static T get_Duration() {
		return ((T (*)(void *))(Il2CppBase() + 0x1399584))(0);
	}
	template <typename T = IMatcher1RecipeEntity*>*> static T get_Icon() {
		return ((T (*)(void *))(Il2CppBase() + 0x1399720))(0);
	}
	template <typename T = IMatcher1RecipeEntity*>*> static T get_Item() {
		return ((T (*)(void *))(Il2CppBase() + 0x13998BC))(0);
	}
	template <typename T = IMatcher1RecipeEntity*>*> static T get_Prefab() {
		return ((T (*)(void *))(Il2CppBase() + 0x1399A58))(0);
	}
	template <typename T = IMatcher1RecipeEntity*>*> static T get_Required() {
		return ((T (*)(void *))(Il2CppBase() + 0x1399BF4))(0);
	}
	template <typename T = IMatcher1RecipeEntity*>*> static T get_RequiredCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x1399D90))(0);
	}
	template <typename T = IMatcher1RecipeEntity*>*> static T get_Resources() {
		return ((T (*)(void *))(Il2CppBase() + 0x1399F2C))(0);
	}
	template <typename T = IMatcher1RecipeEntity*>*> static T get_Sorting() {
		return ((T (*)(void *))(Il2CppBase() + 0x139A0C8))(0);
	}
	template <typename T = IAllOfMatcher1RecipeEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x139A264))(0, indices);
	}
	template <typename T = IAllOfMatcher1RecipeEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x139A2DC))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1RecipeEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x139A354))(0, indices);
	}
	template <typename T = IAnyOfMatcher1RecipeEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x139A3CC))(0, matchers);
	}

};

