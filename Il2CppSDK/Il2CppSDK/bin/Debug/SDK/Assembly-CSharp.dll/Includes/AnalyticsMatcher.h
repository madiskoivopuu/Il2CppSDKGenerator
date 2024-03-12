#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnalyticsMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsMatcher"));
	}

	template <typename T = void*> static T& _matcherAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherAnalyticsSystem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherCreationTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& _matcherEventName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& _matcherFirstTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& _matcherLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& _matcherOften() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& _matcherPlayerLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& _matcherSublabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& _matcherValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& _matcherValueTwo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12A2DB8))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12A0630))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12A2E30))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12A2EA8))(0, matchers);
	}
	template <typename T = void*> static T get_Action() {
		return ((T (*)(void *))(Il2CppBase() + 0x12A0178))(0);
	}
	template <typename T = void*> static T get_AnalyticsSystem() {
		return ((T (*)(void *))(Il2CppBase() + 0x12A2F20))(0);
	}
	template <typename T = void*> static T get_CreationTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x12A30BC))(0);
	}
	template <typename T = void*> static T get_EventName() {
		return ((T (*)(void *))(Il2CppBase() + 0x129E73C))(0);
	}
	template <typename T = void*> static T get_FirstTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x12A3258))(0);
	}
	template <typename T = void*> static T get_Label() {
		return ((T (*)(void *))(Il2CppBase() + 0x12A02F8))(0);
	}
	template <typename T = void*> static T get_Often() {
		return ((T (*)(void *))(Il2CppBase() + 0x12A33F4))(0);
	}
	template <typename T = void*> static T get_PlayerLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x12A3590))(0);
	}
	template <typename T = void*> static T get_Sublabel() {
		return ((T (*)(void *))(Il2CppBase() + 0x12A0494))(0);
	}
	template <typename T = void*> static T get_Value() {
		return ((T (*)(void *))(Il2CppBase() + 0x12A372C))(0);
	}
	template <typename T = void*> static T get_ValueTwo() {
		return ((T (*)(void *))(Il2CppBase() + 0x12A38C8))(0);
	}

};

}
