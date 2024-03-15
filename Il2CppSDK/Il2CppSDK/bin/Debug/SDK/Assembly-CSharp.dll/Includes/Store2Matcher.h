#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Store2Matcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Store2Matcher"));
	}

	 static IMatcher1Store2Entity*>*& _matcherAvailabilityEnd() {
		return *(IMatcher1Store2Entity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1Store2Entity*>*& _matcherAvailabilityStart() {
		return *(IMatcher1Store2Entity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1Store2Entity*>*& _matcherCountLeft() {
		return *(IMatcher1Store2Entity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1Store2Entity*>*& _matcherGachaProgress() {
		return *(IMatcher1Store2Entity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1Store2Entity*>*& _matcherPlayerId() {
		return *(IMatcher1Store2Entity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1Store2Entity*>*& _matcherResetTime() {
		return *(IMatcher1Store2Entity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1Store2Entity*>*& _matcherSlotsProgress() {
		return *(IMatcher1Store2Entity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1Store2Entity*>*& _matcherStoreDataId() {
		return *(IMatcher1Store2Entity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1Store2Entity*>*& _matcherStoreExp() {
		return *(IMatcher1Store2Entity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1Store2Entity*>*& _matcherStoreId() {
		return *(IMatcher1Store2Entity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1Store2Entity*>*& _matcherVisible() {
		return *(IMatcher1Store2Entity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	 static IMatcher1Store2Entity*>* get_AvailabilityEnd() {
		return ((IMatcher1Store2Entity*>* (*)(void *))(Il2CppBase() + 0x141548C))(0);
	}
	 static IMatcher1Store2Entity*>* get_AvailabilityStart() {
		return ((IMatcher1Store2Entity*>* (*)(void *))(Il2CppBase() + 0x141560C))(0);
	}
	 static IMatcher1Store2Entity*>* get_CountLeft() {
		return ((IMatcher1Store2Entity*>* (*)(void *))(Il2CppBase() + 0x14157A8))(0);
	}
	 static IMatcher1Store2Entity*>* get_GachaProgress() {
		return ((IMatcher1Store2Entity*>* (*)(void *))(Il2CppBase() + 0x1415944))(0);
	}
	 static IMatcher1Store2Entity*>* get_PlayerId() {
		return ((IMatcher1Store2Entity*>* (*)(void *))(Il2CppBase() + 0x14065BC))(0);
	}
	 static IMatcher1Store2Entity*>* get_ResetTime() {
		return ((IMatcher1Store2Entity*>* (*)(void *))(Il2CppBase() + 0x1415AE0))(0);
	}
	 static IMatcher1Store2Entity*>* get_SlotsProgress() {
		return ((IMatcher1Store2Entity*>* (*)(void *))(Il2CppBase() + 0x1415C7C))(0);
	}
	 static IMatcher1Store2Entity*>* get_StoreDataId() {
		return ((IMatcher1Store2Entity*>* (*)(void *))(Il2CppBase() + 0x1406758))(0);
	}
	 static IMatcher1Store2Entity*>* get_StoreExp() {
		return ((IMatcher1Store2Entity*>* (*)(void *))(Il2CppBase() + 0x1415E18))(0);
	}
	 static IMatcher1Store2Entity*>* get_StoreId() {
		return ((IMatcher1Store2Entity*>* (*)(void *))(Il2CppBase() + 0x1406420))(0);
	}
	 static IMatcher1Store2Entity*>* get_Visible() {
		return ((IMatcher1Store2Entity*>* (*)(void *))(Il2CppBase() + 0x1415FB4))(0);
	}
	 static IAllOfMatcher1Store2Entity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1Store2Entity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1416150))(0, indices);
	}
	 static IAllOfMatcher1Store2Entity*>* AllOf_1(Il2CppArray<IMatcher1Store2Entity*>*>* matchers) {
		return ((IAllOfMatcher1Store2Entity*>* (*)(void *, Il2CppArray<IMatcher1Store2Entity*>*>*))(Il2CppBase() + 0x14068F4))(0, matchers);
	}
	 static IAnyOfMatcher1Store2Entity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1Store2Entity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x14161C8))(0, indices);
	}
	 static IAnyOfMatcher1Store2Entity*>* AnyOf_1(Il2CppArray<IMatcher1Store2Entity*>*>* matchers) {
		return ((IAnyOfMatcher1Store2Entity*>* (*)(void *, Il2CppArray<IMatcher1Store2Entity*>*>*))(Il2CppBase() + 0x1416240))(0, matchers);
	}

};

