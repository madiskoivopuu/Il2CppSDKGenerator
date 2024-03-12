#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BlueprintMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintMatcher"));
	}

	template <typename T = void*> static T& _matcherActiveCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& _matcherCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& _matcherCraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& _matcherDescription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& _matcherDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& _matcherIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& _matcherItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& _matcherOldBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& _matcherOrder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = void*> static T& _matcherPrefab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = void*> static T& _matcherResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = void*> static T& _matcherTier() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16C1E58))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16C1ED0))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16C1F48))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x16C1FC0))(0, matchers);
	}
	template <typename T = void*> static T get_ActiveCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x16C2038))(0);
	}
	template <typename T = void*> static T get_Blueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x16C21B8))(0);
	}
	template <typename T = void*> static T get_Click() {
		return ((T (*)(void *))(Il2CppBase() + 0x16C2354))(0);
	}
	template <typename T = void*> static T get_Count() {
		return ((T (*)(void *))(Il2CppBase() + 0x16C24F0))(0);
	}
	template <typename T = void*> static T get_Craft() {
		return ((T (*)(void *))(Il2CppBase() + 0x16BD4BC))(0);
	}
	template <typename T = void*> static T get_Description() {
		return ((T (*)(void *))(Il2CppBase() + 0x16C268C))(0);
	}
	template <typename T = void*> static T get_Duration() {
		return ((T (*)(void *))(Il2CppBase() + 0x16C2828))(0);
	}
	template <typename T = void*> static T get_Icon() {
		return ((T (*)(void *))(Il2CppBase() + 0x16C29C4))(0);
	}
	template <typename T = void*> static T get_Item() {
		return ((T (*)(void *))(Il2CppBase() + 0x16C2B60))(0);
	}
	template <typename T = void*> static T get_OldBlueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x16C2CFC))(0);
	}
	template <typename T = void*> static T get_Order() {
		return ((T (*)(void *))(Il2CppBase() + 0x16C2E98))(0);
	}
	template <typename T = void*> static T get_Prefab() {
		return ((T (*)(void *))(Il2CppBase() + 0x16C3034))(0);
	}
	template <typename T = void*> static T get_Resources() {
		return ((T (*)(void *))(Il2CppBase() + 0x16C31D0))(0);
	}
	template <typename T = void*> static T get_Tier() {
		return ((T (*)(void *))(Il2CppBase() + 0x16C336C))(0);
	}

};

}
