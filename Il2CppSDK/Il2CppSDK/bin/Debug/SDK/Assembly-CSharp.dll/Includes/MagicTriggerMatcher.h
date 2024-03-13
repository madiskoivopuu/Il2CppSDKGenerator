#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicTriggerMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicTriggerMatcher"));
	}

	template <typename T = IMatcher1MagicTriggerEntity*>*> static T& _matcherActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1MagicTriggerEntity*>*> static T& _matcherActor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1MagicTriggerEntity*>*> static T& _matcherChance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1MagicTriggerEntity*>*> static T& _matcherId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1MagicTriggerEntity*>*> static T& _matcherItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = IMatcher1MagicTriggerEntity*>*> static T& _matcherMagicTriggerData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = IMatcher1MagicTriggerEntity*>*> static T& _matcherMagicTriggerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = IMatcher1MagicTriggerEntity*>*> static T& _matcherParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = IMatcher1MagicTriggerEntity*>*> static T& _matcherResetSkipTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = IMatcher1MagicTriggerEntity*>*> static T& _matcherSkipCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = IMatcher1MagicTriggerEntity*>*> static T& _matcherTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = IMatcher1MagicTriggerEntity*>*> static T& _matcherUseCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = IMatcher1MagicTriggerEntity*>*> static T get_Active() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A4687C))(0);
	}
	template <typename T = IMatcher1MagicTriggerEntity*>*> static T get_Actor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A469FC))(0);
	}
	template <typename T = IMatcher1MagicTriggerEntity*>*> static T get_Chance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A46B98))(0);
	}
	template <typename T = IMatcher1MagicTriggerEntity*>*> static T get_Id() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A30A18))(0);
	}
	template <typename T = IMatcher1MagicTriggerEntity*>*> static T get_Item() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A46D34))(0);
	}
	template <typename T = IMatcher1MagicTriggerEntity*>*> static T get_MagicTriggerData() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A3125C))(0);
	}
	template <typename T = IMatcher1MagicTriggerEntity*>*> static T get_MagicTriggerId() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A46ED0))(0);
	}
	template <typename T = IMatcher1MagicTriggerEntity*>*> static T get_Parent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A30DC4))(0);
	}
	template <typename T = IMatcher1MagicTriggerEntity*>*> static T get_ResetSkipTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A4706C))(0);
	}
	template <typename T = IMatcher1MagicTriggerEntity*>*> static T get_SkipCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A47208))(0);
	}
	template <typename T = IMatcher1MagicTriggerEntity*>*> static T get_Target() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A31600))(0);
	}
	template <typename T = IMatcher1MagicTriggerEntity*>*> static T get_UseCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A473A4))(0);
	}
	template <typename T = IAllOfMatcher1MagicTriggerEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A47540))(0, indices);
	}
	template <typename T = IAllOfMatcher1MagicTriggerEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A313F8))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1MagicTriggerEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A475B8))(0, indices);
	}
	template <typename T = IAnyOfMatcher1MagicTriggerEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A47630))(0, matchers);
	}

};

