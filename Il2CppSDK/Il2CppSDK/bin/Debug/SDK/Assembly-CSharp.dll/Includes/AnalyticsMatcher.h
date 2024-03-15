#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnalyticsMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsMatcher"));
	}

	 static IMatcher1<AnalyticsEntity*>*& _matcherAction() {
		return *(IMatcher1<AnalyticsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<AnalyticsEntity*>*& _matcherAnalyticsSystem() {
		return *(IMatcher1<AnalyticsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<AnalyticsEntity*>*& _matcherCreationTime() {
		return *(IMatcher1<AnalyticsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<AnalyticsEntity*>*& _matcherEventName() {
		return *(IMatcher1<AnalyticsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<AnalyticsEntity*>*& _matcherFirstTime() {
		return *(IMatcher1<AnalyticsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<AnalyticsEntity*>*& _matcherLabel() {
		return *(IMatcher1<AnalyticsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<AnalyticsEntity*>*& _matcherOften() {
		return *(IMatcher1<AnalyticsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<AnalyticsEntity*>*& _matcherPlayerLevel() {
		return *(IMatcher1<AnalyticsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<AnalyticsEntity*>*& _matcherSublabel() {
		return *(IMatcher1<AnalyticsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<AnalyticsEntity*>*& _matcherValue() {
		return *(IMatcher1<AnalyticsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<AnalyticsEntity*>*& _matcherValueTwo() {
		return *(IMatcher1<AnalyticsEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	 static IAllOfMatcher1<AnalyticsEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<AnalyticsEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x12A2DB8))(0, indices);
	}
	 static IAllOfMatcher1<AnalyticsEntity*>* AllOf_1(Il2CppArray<IMatcher1<AnalyticsEntity*>*>* matchers) {
		return ((IAllOfMatcher1<AnalyticsEntity*>* (*)(void *, Il2CppArray<IMatcher1<AnalyticsEntity*>*>*))(Il2CppBase() + 0x12A0630))(0, matchers);
	}
	 static IAnyOfMatcher1<AnalyticsEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<AnalyticsEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x12A2E30))(0, indices);
	}
	 static IAnyOfMatcher1<AnalyticsEntity*>* AnyOf_1(Il2CppArray<IMatcher1<AnalyticsEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<AnalyticsEntity*>* (*)(void *, Il2CppArray<IMatcher1<AnalyticsEntity*>*>*))(Il2CppBase() + 0x12A2EA8))(0, matchers);
	}
	 static IMatcher1<AnalyticsEntity*>* get_Action() {
		return ((IMatcher1<AnalyticsEntity*>* (*)(void *))(Il2CppBase() + 0x12A0178))(0);
	}
	 static IMatcher1<AnalyticsEntity*>* get_AnalyticsSystem() {
		return ((IMatcher1<AnalyticsEntity*>* (*)(void *))(Il2CppBase() + 0x12A2F20))(0);
	}
	 static IMatcher1<AnalyticsEntity*>* get_CreationTime() {
		return ((IMatcher1<AnalyticsEntity*>* (*)(void *))(Il2CppBase() + 0x12A30BC))(0);
	}
	 static IMatcher1<AnalyticsEntity*>* get_EventName() {
		return ((IMatcher1<AnalyticsEntity*>* (*)(void *))(Il2CppBase() + 0x129E73C))(0);
	}
	 static IMatcher1<AnalyticsEntity*>* get_FirstTime() {
		return ((IMatcher1<AnalyticsEntity*>* (*)(void *))(Il2CppBase() + 0x12A3258))(0);
	}
	 static IMatcher1<AnalyticsEntity*>* get_Label() {
		return ((IMatcher1<AnalyticsEntity*>* (*)(void *))(Il2CppBase() + 0x12A02F8))(0);
	}
	 static IMatcher1<AnalyticsEntity*>* get_Often() {
		return ((IMatcher1<AnalyticsEntity*>* (*)(void *))(Il2CppBase() + 0x12A33F4))(0);
	}
	 static IMatcher1<AnalyticsEntity*>* get_PlayerLevel() {
		return ((IMatcher1<AnalyticsEntity*>* (*)(void *))(Il2CppBase() + 0x12A3590))(0);
	}
	 static IMatcher1<AnalyticsEntity*>* get_Sublabel() {
		return ((IMatcher1<AnalyticsEntity*>* (*)(void *))(Il2CppBase() + 0x12A0494))(0);
	}
	 static IMatcher1<AnalyticsEntity*>* get_Value() {
		return ((IMatcher1<AnalyticsEntity*>* (*)(void *))(Il2CppBase() + 0x12A372C))(0);
	}
	 static IMatcher1<AnalyticsEntity*>* get_ValueTwo() {
		return ((IMatcher1<AnalyticsEntity*>* (*)(void *))(Il2CppBase() + 0x12A38C8))(0);
	}

};

