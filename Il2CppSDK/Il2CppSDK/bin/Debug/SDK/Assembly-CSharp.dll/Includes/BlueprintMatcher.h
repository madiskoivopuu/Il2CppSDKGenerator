#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BlueprintMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintMatcher"));
	}

	 static IMatcher1<BlueprintEntity*>*& _matcherActiveCondition() {
		return *(IMatcher1<BlueprintEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<BlueprintEntity*>*& _matcherBlueprint() {
		return *(IMatcher1<BlueprintEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<BlueprintEntity*>*& _matcherClick() {
		return *(IMatcher1<BlueprintEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<BlueprintEntity*>*& _matcherCount() {
		return *(IMatcher1<BlueprintEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<BlueprintEntity*>*& _matcherCraft() {
		return *(IMatcher1<BlueprintEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<BlueprintEntity*>*& _matcherDescription() {
		return *(IMatcher1<BlueprintEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<BlueprintEntity*>*& _matcherDuration() {
		return *(IMatcher1<BlueprintEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<BlueprintEntity*>*& _matcherIcon() {
		return *(IMatcher1<BlueprintEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<BlueprintEntity*>*& _matcherItem() {
		return *(IMatcher1<BlueprintEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<BlueprintEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1<BlueprintEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<BlueprintEntity*>*& _matcherOrder() {
		return *(IMatcher1<BlueprintEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1<BlueprintEntity*>*& _matcherPrefab() {
		return *(IMatcher1<BlueprintEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1<BlueprintEntity*>*& _matcherResources() {
		return *(IMatcher1<BlueprintEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1<BlueprintEntity*>*& _matcherTier() {
		return *(IMatcher1<BlueprintEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	 static IAllOfMatcher1<BlueprintEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<BlueprintEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x16C1E58))(0, indices);
	}
	 static IAllOfMatcher1<BlueprintEntity*>* AllOf_1(Il2CppArray<IMatcher1<BlueprintEntity*>*>* matchers) {
		return ((IAllOfMatcher1<BlueprintEntity*>* (*)(void *, Il2CppArray<IMatcher1<BlueprintEntity*>*>*))(Il2CppBase() + 0x16C1ED0))(0, matchers);
	}
	 static IAnyOfMatcher1<BlueprintEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<BlueprintEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x16C1F48))(0, indices);
	}
	 static IAnyOfMatcher1<BlueprintEntity*>* AnyOf_1(Il2CppArray<IMatcher1<BlueprintEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<BlueprintEntity*>* (*)(void *, Il2CppArray<IMatcher1<BlueprintEntity*>*>*))(Il2CppBase() + 0x16C1FC0))(0, matchers);
	}
	 static IMatcher1<BlueprintEntity*>* get_ActiveCondition() {
		return ((IMatcher1<BlueprintEntity*>* (*)(void *))(Il2CppBase() + 0x16C2038))(0);
	}
	 static IMatcher1<BlueprintEntity*>* get_Blueprint() {
		return ((IMatcher1<BlueprintEntity*>* (*)(void *))(Il2CppBase() + 0x16C21B8))(0);
	}
	 static IMatcher1<BlueprintEntity*>* get_Click() {
		return ((IMatcher1<BlueprintEntity*>* (*)(void *))(Il2CppBase() + 0x16C2354))(0);
	}
	 static IMatcher1<BlueprintEntity*>* get_Count() {
		return ((IMatcher1<BlueprintEntity*>* (*)(void *))(Il2CppBase() + 0x16C24F0))(0);
	}
	 static IMatcher1<BlueprintEntity*>* get_Craft() {
		return ((IMatcher1<BlueprintEntity*>* (*)(void *))(Il2CppBase() + 0x16BD4BC))(0);
	}
	 static IMatcher1<BlueprintEntity*>* get_Description() {
		return ((IMatcher1<BlueprintEntity*>* (*)(void *))(Il2CppBase() + 0x16C268C))(0);
	}
	 static IMatcher1<BlueprintEntity*>* get_Duration() {
		return ((IMatcher1<BlueprintEntity*>* (*)(void *))(Il2CppBase() + 0x16C2828))(0);
	}
	 static IMatcher1<BlueprintEntity*>* get_Icon() {
		return ((IMatcher1<BlueprintEntity*>* (*)(void *))(Il2CppBase() + 0x16C29C4))(0);
	}
	 static IMatcher1<BlueprintEntity*>* get_Item() {
		return ((IMatcher1<BlueprintEntity*>* (*)(void *))(Il2CppBase() + 0x16C2B60))(0);
	}
	 static IMatcher1<BlueprintEntity*>* get_OldBlueprint() {
		return ((IMatcher1<BlueprintEntity*>* (*)(void *))(Il2CppBase() + 0x16C2CFC))(0);
	}
	 static IMatcher1<BlueprintEntity*>* get_Order() {
		return ((IMatcher1<BlueprintEntity*>* (*)(void *))(Il2CppBase() + 0x16C2E98))(0);
	}
	 static IMatcher1<BlueprintEntity*>* get_Prefab() {
		return ((IMatcher1<BlueprintEntity*>* (*)(void *))(Il2CppBase() + 0x16C3034))(0);
	}
	 static IMatcher1<BlueprintEntity*>* get_Resources() {
		return ((IMatcher1<BlueprintEntity*>* (*)(void *))(Il2CppBase() + 0x16C31D0))(0);
	}
	 static IMatcher1<BlueprintEntity*>* get_Tier() {
		return ((IMatcher1<BlueprintEntity*>* (*)(void *))(Il2CppBase() + 0x16C336C))(0);
	}

};

