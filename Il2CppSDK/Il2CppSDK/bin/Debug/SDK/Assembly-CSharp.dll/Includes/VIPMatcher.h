#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VIPMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPMatcher"));
	}

	template <typename T = IMatcher1VIPEntity*>*> static T& _matcherPlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1VIPEntity*>*> static T& _matcherVipBonus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1VIPEntity*>*> static T& _matcherVipId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = IMatcher1VIPEntity*>*> static T get_PlayerId() {
		return ((T (*)(void *))(Il2CppBase() + 0x15BC2C0))(0);
	}
	template <typename T = IMatcher1VIPEntity*>*> static T get_VipBonus() {
		return ((T (*)(void *))(Il2CppBase() + 0x15BC440))(0);
	}
	template <typename T = IMatcher1VIPEntity*>*> static T get_VipId() {
		return ((T (*)(void *))(Il2CppBase() + 0x15BC124))(0);
	}
	template <typename T = IAllOfMatcher1VIPEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15C1634))(0, indices);
	}
	template <typename T = IAllOfMatcher1VIPEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15BC5DC))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1VIPEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15C16AC))(0, indices);
	}
	template <typename T = IAnyOfMatcher1VIPEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15C1724))(0, matchers);
	}

};

