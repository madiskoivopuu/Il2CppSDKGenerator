#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VIPDataMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPDataMatcher"));
	}

	 static IMatcher1<VIPDataEntity*>*& _matcherDescription() {
		return *(IMatcher1<VIPDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<VIPDataEntity*>*& _matcherLinkToStoreProduct() {
		return *(IMatcher1<VIPDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<VIPDataEntity*>*& _matcherVIPPoints() {
		return *(IMatcher1<VIPDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<VIPDataEntity*>*& _matcherVipBonuses() {
		return *(IMatcher1<VIPDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<VIPDataEntity*>*& _matcherVipDataId() {
		return *(IMatcher1<VIPDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<VIPDataEntity*>*& _matcherVipLevel() {
		return *(IMatcher1<VIPDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	 static IMatcher1<VIPDataEntity*>* get_Description() {
		return ((IMatcher1<VIPDataEntity*>* (*)(void *))(Il2CppBase() + 0x15BF054))(0);
	}
	 static IMatcher1<VIPDataEntity*>* get_LinkToStoreProduct() {
		return ((IMatcher1<VIPDataEntity*>* (*)(void *))(Il2CppBase() + 0x15BF1D4))(0);
	}
	 static IMatcher1<VIPDataEntity*>* get_VIPPoints() {
		return ((IMatcher1<VIPDataEntity*>* (*)(void *))(Il2CppBase() + 0x15BF370))(0);
	}
	 static IMatcher1<VIPDataEntity*>* get_VipBonuses() {
		return ((IMatcher1<VIPDataEntity*>* (*)(void *))(Il2CppBase() + 0x15BF50C))(0);
	}
	 static IMatcher1<VIPDataEntity*>* get_VipDataId() {
		return ((IMatcher1<VIPDataEntity*>* (*)(void *))(Il2CppBase() + 0x15BDB04))(0);
	}
	 static IMatcher1<VIPDataEntity*>* get_VipLevel() {
		return ((IMatcher1<VIPDataEntity*>* (*)(void *))(Il2CppBase() + 0x15BF6A8))(0);
	}
	 static IAllOfMatcher1<VIPDataEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<VIPDataEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x15BF844))(0, indices);
	}
	 static IAllOfMatcher1<VIPDataEntity*>* AllOf_1(Il2CppArray<IMatcher1<VIPDataEntity*>*>* matchers) {
		return ((IAllOfMatcher1<VIPDataEntity*>* (*)(void *, Il2CppArray<IMatcher1<VIPDataEntity*>*>*))(Il2CppBase() + 0x15BF8BC))(0, matchers);
	}
	 static IAnyOfMatcher1<VIPDataEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<VIPDataEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x15BF934))(0, indices);
	}
	 static IAnyOfMatcher1<VIPDataEntity*>* AnyOf_1(Il2CppArray<IMatcher1<VIPDataEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<VIPDataEntity*>* (*)(void *, Il2CppArray<IMatcher1<VIPDataEntity*>*>*))(Il2CppBase() + 0x15BF9AC))(0, matchers);
	}

};

