#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CooldownMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CooldownMatcher"));
	}

	 static IMatcher1<CooldownEntity*>*& _matcherDuration() {
		return *(IMatcher1<CooldownEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<CooldownEntity*>*& _matcherName() {
		return *(IMatcher1<CooldownEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<CooldownEntity*>*& _matcherSequenceIndex() {
		return *(IMatcher1<CooldownEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<CooldownEntity*>*& _matcherStartTime() {
		return *(IMatcher1<CooldownEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<CooldownEntity*>*& _matcherTags() {
		return *(IMatcher1<CooldownEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<CooldownEntity*>*& _matcherTarget() {
		return *(IMatcher1<CooldownEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	 static IMatcher1<CooldownEntity*>* get_Duration() {
		return ((IMatcher1<CooldownEntity*>* (*)(void *))(Il2CppBase() + 0x13394A0))(0);
	}
	 static IMatcher1<CooldownEntity*>* get_Name() {
		return ((IMatcher1<CooldownEntity*>* (*)(void *))(Il2CppBase() + 0x13365D0))(0);
	}
	 static IMatcher1<CooldownEntity*>* get_SequenceIndex() {
		return ((IMatcher1<CooldownEntity*>* (*)(void *))(Il2CppBase() + 0x1339620))(0);
	}
	 static IMatcher1<CooldownEntity*>* get_StartTime() {
		return ((IMatcher1<CooldownEntity*>* (*)(void *))(Il2CppBase() + 0x13397BC))(0);
	}
	 static IMatcher1<CooldownEntity*>* get_Tags() {
		return ((IMatcher1<CooldownEntity*>* (*)(void *))(Il2CppBase() + 0x1339958))(0);
	}
	 static IMatcher1<CooldownEntity*>* get_Target() {
		return ((IMatcher1<CooldownEntity*>* (*)(void *))(Il2CppBase() + 0x1336434))(0);
	}
	 static IAllOfMatcher1<CooldownEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<CooldownEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1339AF4))(0, indices);
	}
	 static IAllOfMatcher1<CooldownEntity*>* AllOf_1(Il2CppArray<IMatcher1<CooldownEntity*>*>* matchers) {
		return ((IAllOfMatcher1<CooldownEntity*>* (*)(void *, Il2CppArray<IMatcher1<CooldownEntity*>*>*))(Il2CppBase() + 0x133676C))(0, matchers);
	}
	 static IAnyOfMatcher1<CooldownEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<CooldownEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1339B6C))(0, indices);
	}
	 static IAnyOfMatcher1<CooldownEntity*>* AnyOf_1(Il2CppArray<IMatcher1<CooldownEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<CooldownEntity*>* (*)(void *, Il2CppArray<IMatcher1<CooldownEntity*>*>*))(Il2CppBase() + 0x1339BE4))(0, matchers);
	}

};

