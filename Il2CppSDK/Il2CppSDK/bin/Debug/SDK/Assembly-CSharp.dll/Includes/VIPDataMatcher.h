#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VIPDataMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPDataMatcher"));
	}

	template <typename T = IMatcher1VIPDataEntity*>*> static T& _matcherDescription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1VIPDataEntity*>*> static T& _matcherLinkToStoreProduct() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1VIPDataEntity*>*> static T& _matcherVIPPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1VIPDataEntity*>*> static T& _matcherVipBonuses() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1VIPDataEntity*>*> static T& _matcherVipDataId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = IMatcher1VIPDataEntity*>*> static T& _matcherVipLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = IMatcher1VIPDataEntity*>*> static T get_Description() {
		return ((T (*)(void *))(Il2CppBase() + 0x15BF054))(0);
	}
	template <typename T = IMatcher1VIPDataEntity*>*> static T get_LinkToStoreProduct() {
		return ((T (*)(void *))(Il2CppBase() + 0x15BF1D4))(0);
	}
	template <typename T = IMatcher1VIPDataEntity*>*> static T get_VIPPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x15BF370))(0);
	}
	template <typename T = IMatcher1VIPDataEntity*>*> static T get_VipBonuses() {
		return ((T (*)(void *))(Il2CppBase() + 0x15BF50C))(0);
	}
	template <typename T = IMatcher1VIPDataEntity*>*> static T get_VipDataId() {
		return ((T (*)(void *))(Il2CppBase() + 0x15BDB04))(0);
	}
	template <typename T = IMatcher1VIPDataEntity*>*> static T get_VipLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x15BF6A8))(0);
	}
	template <typename T = IAllOfMatcher1VIPDataEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15BF844))(0, indices);
	}
	template <typename T = IAllOfMatcher1VIPDataEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15BF8BC))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1VIPDataEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15BF934))(0, indices);
	}
	template <typename T = IAnyOfMatcher1VIPDataEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15BF9AC))(0, matchers);
	}

};

