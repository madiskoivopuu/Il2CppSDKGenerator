#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VIPMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPMatcher"));
	}

	 static IMatcher1VIPEntity*>*& _matcherPlayerId() {
		return *(IMatcher1VIPEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1VIPEntity*>*& _matcherVipBonus() {
		return *(IMatcher1VIPEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1VIPEntity*>*& _matcherVipId() {
		return *(IMatcher1VIPEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	 static IMatcher1VIPEntity*>* get_PlayerId() {
		return ((IMatcher1VIPEntity*>* (*)(void *))(Il2CppBase() + 0x15BC2C0))(0);
	}
	 static IMatcher1VIPEntity*>* get_VipBonus() {
		return ((IMatcher1VIPEntity*>* (*)(void *))(Il2CppBase() + 0x15BC440))(0);
	}
	 static IMatcher1VIPEntity*>* get_VipId() {
		return ((IMatcher1VIPEntity*>* (*)(void *))(Il2CppBase() + 0x15BC124))(0);
	}
	 static IAllOfMatcher1VIPEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1VIPEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x15C1634))(0, indices);
	}
	 static IAllOfMatcher1VIPEntity*>* AllOf_1(Il2CppArray<IMatcher1VIPEntity*>*>* matchers) {
		return ((IAllOfMatcher1VIPEntity*>* (*)(void *, Il2CppArray<IMatcher1VIPEntity*>*>*))(Il2CppBase() + 0x15BC5DC))(0, matchers);
	}
	 static IAnyOfMatcher1VIPEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1VIPEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x15C16AC))(0, indices);
	}
	 static IAnyOfMatcher1VIPEntity*>* AnyOf_1(Il2CppArray<IMatcher1VIPEntity*>*>* matchers) {
		return ((IAnyOfMatcher1VIPEntity*>* (*)(void *, Il2CppArray<IMatcher1VIPEntity*>*>*))(Il2CppBase() + 0x15C1724))(0, matchers);
	}

};

