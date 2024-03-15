#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicTriggerMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicTriggerMatcher"));
	}

	 static IMatcher1MagicTriggerEntity*>*& _matcherActive() {
		return *(IMatcher1MagicTriggerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1MagicTriggerEntity*>*& _matcherActor() {
		return *(IMatcher1MagicTriggerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1MagicTriggerEntity*>*& _matcherChance() {
		return *(IMatcher1MagicTriggerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1MagicTriggerEntity*>*& _matcherId() {
		return *(IMatcher1MagicTriggerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1MagicTriggerEntity*>*& _matcherItem() {
		return *(IMatcher1MagicTriggerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1MagicTriggerEntity*>*& _matcherMagicTriggerData() {
		return *(IMatcher1MagicTriggerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1MagicTriggerEntity*>*& _matcherMagicTriggerId() {
		return *(IMatcher1MagicTriggerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1MagicTriggerEntity*>*& _matcherParent() {
		return *(IMatcher1MagicTriggerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1MagicTriggerEntity*>*& _matcherResetSkipTime() {
		return *(IMatcher1MagicTriggerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1MagicTriggerEntity*>*& _matcherSkipCount() {
		return *(IMatcher1MagicTriggerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1MagicTriggerEntity*>*& _matcherTarget() {
		return *(IMatcher1MagicTriggerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1MagicTriggerEntity*>*& _matcherUseCount() {
		return *(IMatcher1MagicTriggerEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	 static IMatcher1MagicTriggerEntity*>* get_Active() {
		return ((IMatcher1MagicTriggerEntity*>* (*)(void *))(Il2CppBase() + 0x1A4687C))(0);
	}
	 static IMatcher1MagicTriggerEntity*>* get_Actor() {
		return ((IMatcher1MagicTriggerEntity*>* (*)(void *))(Il2CppBase() + 0x1A469FC))(0);
	}
	 static IMatcher1MagicTriggerEntity*>* get_Chance() {
		return ((IMatcher1MagicTriggerEntity*>* (*)(void *))(Il2CppBase() + 0x1A46B98))(0);
	}
	 static IMatcher1MagicTriggerEntity*>* get_Id() {
		return ((IMatcher1MagicTriggerEntity*>* (*)(void *))(Il2CppBase() + 0x1A30A18))(0);
	}
	 static IMatcher1MagicTriggerEntity*>* get_Item() {
		return ((IMatcher1MagicTriggerEntity*>* (*)(void *))(Il2CppBase() + 0x1A46D34))(0);
	}
	 static IMatcher1MagicTriggerEntity*>* get_MagicTriggerData() {
		return ((IMatcher1MagicTriggerEntity*>* (*)(void *))(Il2CppBase() + 0x1A3125C))(0);
	}
	 static IMatcher1MagicTriggerEntity*>* get_MagicTriggerId() {
		return ((IMatcher1MagicTriggerEntity*>* (*)(void *))(Il2CppBase() + 0x1A46ED0))(0);
	}
	 static IMatcher1MagicTriggerEntity*>* get_Parent() {
		return ((IMatcher1MagicTriggerEntity*>* (*)(void *))(Il2CppBase() + 0x1A30DC4))(0);
	}
	 static IMatcher1MagicTriggerEntity*>* get_ResetSkipTime() {
		return ((IMatcher1MagicTriggerEntity*>* (*)(void *))(Il2CppBase() + 0x1A4706C))(0);
	}
	 static IMatcher1MagicTriggerEntity*>* get_SkipCount() {
		return ((IMatcher1MagicTriggerEntity*>* (*)(void *))(Il2CppBase() + 0x1A47208))(0);
	}
	 static IMatcher1MagicTriggerEntity*>* get_Target() {
		return ((IMatcher1MagicTriggerEntity*>* (*)(void *))(Il2CppBase() + 0x1A31600))(0);
	}
	 static IMatcher1MagicTriggerEntity*>* get_UseCount() {
		return ((IMatcher1MagicTriggerEntity*>* (*)(void *))(Il2CppBase() + 0x1A473A4))(0);
	}
	 static IAllOfMatcher1MagicTriggerEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1MagicTriggerEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1A47540))(0, indices);
	}
	 static IAllOfMatcher1MagicTriggerEntity*>* AllOf_1(Il2CppArray<IMatcher1MagicTriggerEntity*>*>* matchers) {
		return ((IAllOfMatcher1MagicTriggerEntity*>* (*)(void *, Il2CppArray<IMatcher1MagicTriggerEntity*>*>*))(Il2CppBase() + 0x1A313F8))(0, matchers);
	}
	 static IAnyOfMatcher1MagicTriggerEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1MagicTriggerEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1A475B8))(0, indices);
	}
	 static IAnyOfMatcher1MagicTriggerEntity*>* AnyOf_1(Il2CppArray<IMatcher1MagicTriggerEntity*>*>* matchers) {
		return ((IAnyOfMatcher1MagicTriggerEntity*>* (*)(void *, Il2CppArray<IMatcher1MagicTriggerEntity*>*>*))(Il2CppBase() + 0x1A47630))(0, matchers);
	}

};

