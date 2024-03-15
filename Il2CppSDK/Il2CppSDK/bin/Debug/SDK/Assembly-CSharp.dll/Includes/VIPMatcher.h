#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VIPMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPMatcher"));
	}

	 static IMatcher1<VIPEntity*>*& _matcherPlayerId() {
		return *(IMatcher1<VIPEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<VIPEntity*>*& _matcherVipBonus() {
		return *(IMatcher1<VIPEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<VIPEntity*>*& _matcherVipId() {
		return *(IMatcher1<VIPEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	 static IMatcher1<VIPEntity*>* get_PlayerId() {
		return ((IMatcher1<VIPEntity*>* (*)(void *))(Il2CppBase() + 0x15BC2C0))(0);
	}
	 static IMatcher1<VIPEntity*>* get_VipBonus() {
		return ((IMatcher1<VIPEntity*>* (*)(void *))(Il2CppBase() + 0x15BC440))(0);
	}
	 static IMatcher1<VIPEntity*>* get_VipId() {
		return ((IMatcher1<VIPEntity*>* (*)(void *))(Il2CppBase() + 0x15BC124))(0);
	}
	 static IAllOfMatcher1<VIPEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<VIPEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x15C1634))(0, indices);
	}
	 static IAllOfMatcher1<VIPEntity*>* AllOf_1(Il2CppArray<IMatcher1<VIPEntity*>*>* matchers) {
		return ((IAllOfMatcher1<VIPEntity*>* (*)(void *, Il2CppArray<IMatcher1<VIPEntity*>*>*))(Il2CppBase() + 0x15BC5DC))(0, matchers);
	}
	 static IAnyOfMatcher1<VIPEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<VIPEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x15C16AC))(0, indices);
	}
	 static IAnyOfMatcher1<VIPEntity*>* AnyOf_1(Il2CppArray<IMatcher1<VIPEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<VIPEntity*>* (*)(void *, Il2CppArray<IMatcher1<VIPEntity*>*>*))(Il2CppBase() + 0x15C1724))(0, matchers);
	}

};

