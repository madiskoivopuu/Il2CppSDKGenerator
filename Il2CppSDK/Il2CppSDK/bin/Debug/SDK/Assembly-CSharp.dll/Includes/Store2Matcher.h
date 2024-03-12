#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Store2Matcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Store2Matcher"));
	}

	template <typename T = void*> static T& _matcherAvailabilityEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherAvailabilityStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherCountLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& _matcherGachaProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& _matcherPlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& _matcherResetTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& _matcherSlotsProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& _matcherStoreDataId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& _matcherStoreExp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& _matcherStoreId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& _matcherVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = void*> static T get_AvailabilityEnd() {
		return ((T (*)(void *))(Il2CppBase() + 0x141548C))(0);
	}
	template <typename T = void*> static T get_AvailabilityStart() {
		return ((T (*)(void *))(Il2CppBase() + 0x141560C))(0);
	}
	template <typename T = void*> static T get_CountLeft() {
		return ((T (*)(void *))(Il2CppBase() + 0x14157A8))(0);
	}
	template <typename T = void*> static T get_GachaProgress() {
		return ((T (*)(void *))(Il2CppBase() + 0x1415944))(0);
	}
	template <typename T = void*> static T get_PlayerId() {
		return ((T (*)(void *))(Il2CppBase() + 0x14065BC))(0);
	}
	template <typename T = void*> static T get_ResetTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1415AE0))(0);
	}
	template <typename T = void*> static T get_SlotsProgress() {
		return ((T (*)(void *))(Il2CppBase() + 0x1415C7C))(0);
	}
	template <typename T = void*> static T get_StoreDataId() {
		return ((T (*)(void *))(Il2CppBase() + 0x1406758))(0);
	}
	template <typename T = void*> static T get_StoreExp() {
		return ((T (*)(void *))(Il2CppBase() + 0x1415E18))(0);
	}
	template <typename T = void*> static T get_StoreId() {
		return ((T (*)(void *))(Il2CppBase() + 0x1406420))(0);
	}
	template <typename T = void*> static T get_Visible() {
		return ((T (*)(void *))(Il2CppBase() + 0x1415FB4))(0);
	}
	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1416150))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14068F4))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14161C8))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1416240))(0, matchers);
	}

};

}
