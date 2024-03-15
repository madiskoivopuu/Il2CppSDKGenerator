#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CooldownMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CooldownMatcher"));
	}

	 static IMatcher1CooldownEntity*>*& _matcherDuration() {
		return *(IMatcher1CooldownEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1CooldownEntity*>*& _matcherName() {
		return *(IMatcher1CooldownEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1CooldownEntity*>*& _matcherSequenceIndex() {
		return *(IMatcher1CooldownEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1CooldownEntity*>*& _matcherStartTime() {
		return *(IMatcher1CooldownEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1CooldownEntity*>*& _matcherTags() {
		return *(IMatcher1CooldownEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1CooldownEntity*>*& _matcherTarget() {
		return *(IMatcher1CooldownEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	 static IMatcher1CooldownEntity*>* get_Duration() {
		return ((IMatcher1CooldownEntity*>* (*)(void *))(Il2CppBase() + 0x13394A0))(0);
	}
	 static IMatcher1CooldownEntity*>* get_Name() {
		return ((IMatcher1CooldownEntity*>* (*)(void *))(Il2CppBase() + 0x13365D0))(0);
	}
	 static IMatcher1CooldownEntity*>* get_SequenceIndex() {
		return ((IMatcher1CooldownEntity*>* (*)(void *))(Il2CppBase() + 0x1339620))(0);
	}
	 static IMatcher1CooldownEntity*>* get_StartTime() {
		return ((IMatcher1CooldownEntity*>* (*)(void *))(Il2CppBase() + 0x13397BC))(0);
	}
	 static IMatcher1CooldownEntity*>* get_Tags() {
		return ((IMatcher1CooldownEntity*>* (*)(void *))(Il2CppBase() + 0x1339958))(0);
	}
	 static IMatcher1CooldownEntity*>* get_Target() {
		return ((IMatcher1CooldownEntity*>* (*)(void *))(Il2CppBase() + 0x1336434))(0);
	}
	 static IAllOfMatcher1CooldownEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1CooldownEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1339AF4))(0, indices);
	}
	 static IAllOfMatcher1CooldownEntity*>* AllOf_1(Il2CppArray<IMatcher1CooldownEntity*>*>* matchers) {
		return ((IAllOfMatcher1CooldownEntity*>* (*)(void *, Il2CppArray<IMatcher1CooldownEntity*>*>*))(Il2CppBase() + 0x133676C))(0, matchers);
	}
	 static IAnyOfMatcher1CooldownEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1CooldownEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1339B6C))(0, indices);
	}
	 static IAnyOfMatcher1CooldownEntity*>* AnyOf_1(Il2CppArray<IMatcher1CooldownEntity*>*>* matchers) {
		return ((IAnyOfMatcher1CooldownEntity*>* (*)(void *, Il2CppArray<IMatcher1CooldownEntity*>*>*))(Il2CppBase() + 0x1339BE4))(0, matchers);
	}

};

