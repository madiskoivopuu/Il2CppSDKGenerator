#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VIPDataMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPDataMatcher"));
	}

	 static IMatcher1VIPDataEntity*>*& _matcherDescription() {
		return *(IMatcher1VIPDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1VIPDataEntity*>*& _matcherLinkToStoreProduct() {
		return *(IMatcher1VIPDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1VIPDataEntity*>*& _matcherVIPPoints() {
		return *(IMatcher1VIPDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1VIPDataEntity*>*& _matcherVipBonuses() {
		return *(IMatcher1VIPDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1VIPDataEntity*>*& _matcherVipDataId() {
		return *(IMatcher1VIPDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1VIPDataEntity*>*& _matcherVipLevel() {
		return *(IMatcher1VIPDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	 static IMatcher1VIPDataEntity*>* get_Description() {
		return ((IMatcher1VIPDataEntity*>* (*)(void *))(Il2CppBase() + 0x15BF054))(0);
	}
	 static IMatcher1VIPDataEntity*>* get_LinkToStoreProduct() {
		return ((IMatcher1VIPDataEntity*>* (*)(void *))(Il2CppBase() + 0x15BF1D4))(0);
	}
	 static IMatcher1VIPDataEntity*>* get_VIPPoints() {
		return ((IMatcher1VIPDataEntity*>* (*)(void *))(Il2CppBase() + 0x15BF370))(0);
	}
	 static IMatcher1VIPDataEntity*>* get_VipBonuses() {
		return ((IMatcher1VIPDataEntity*>* (*)(void *))(Il2CppBase() + 0x15BF50C))(0);
	}
	 static IMatcher1VIPDataEntity*>* get_VipDataId() {
		return ((IMatcher1VIPDataEntity*>* (*)(void *))(Il2CppBase() + 0x15BDB04))(0);
	}
	 static IMatcher1VIPDataEntity*>* get_VipLevel() {
		return ((IMatcher1VIPDataEntity*>* (*)(void *))(Il2CppBase() + 0x15BF6A8))(0);
	}
	 static IAllOfMatcher1VIPDataEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1VIPDataEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x15BF844))(0, indices);
	}
	 static IAllOfMatcher1VIPDataEntity*>* AllOf_1(Il2CppArray<IMatcher1VIPDataEntity*>*>* matchers) {
		return ((IAllOfMatcher1VIPDataEntity*>* (*)(void *, Il2CppArray<IMatcher1VIPDataEntity*>*>*))(Il2CppBase() + 0x15BF8BC))(0, matchers);
	}
	 static IAnyOfMatcher1VIPDataEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1VIPDataEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x15BF934))(0, indices);
	}
	 static IAnyOfMatcher1VIPDataEntity*>* AnyOf_1(Il2CppArray<IMatcher1VIPDataEntity*>*>* matchers) {
		return ((IAnyOfMatcher1VIPDataEntity*>* (*)(void *, Il2CppArray<IMatcher1VIPDataEntity*>*>*))(Il2CppBase() + 0x15BF9AC))(0, matchers);
	}

};

