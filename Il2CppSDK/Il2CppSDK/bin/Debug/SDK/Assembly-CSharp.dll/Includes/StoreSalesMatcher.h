#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreSalesMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreSalesMatcher"));
	}

	template <typename T = IMatcher1StoreSalesEntity*>*> static T& _matcherAvailabilityEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1StoreSalesEntity*>*> static T& _matcherAvailabilityStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1StoreSalesEntity*>*> static T& _matcherCategoryType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1StoreSalesEntity*>*> static T& _matcherIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1StoreSalesEntity*>*> static T& _matcherPlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = IMatcher1StoreSalesEntity*>*> static T& _matcherRead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = IMatcher1StoreSalesEntity*>*> static T& _matcherStoreSalesId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = IMatcher1StoreSalesEntity*>*> static T& _matcherText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = IMatcher1StoreSalesEntity*>*> static T& _matcherTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = IMatcher1StoreSalesEntity*>*> static T& _matcherWindowFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = IMatcher1StoreSalesEntity*>*> static T get_AvailabilityEnd() {
		return ((T (*)(void *))(Il2CppBase() + 0x1841484))(0);
	}
	template <typename T = IMatcher1StoreSalesEntity*>*> static T get_AvailabilityStart() {
		return ((T (*)(void *))(Il2CppBase() + 0x1841604))(0);
	}
	template <typename T = IMatcher1StoreSalesEntity*>*> static T get_CategoryType() {
		return ((T (*)(void *))(Il2CppBase() + 0x18417A0))(0);
	}
	template <typename T = IMatcher1StoreSalesEntity*>*> static T get_Icon() {
		return ((T (*)(void *))(Il2CppBase() + 0x184193C))(0);
	}
	template <typename T = IMatcher1StoreSalesEntity*>*> static T get_PlayerId() {
		return ((T (*)(void *))(Il2CppBase() + 0x183F40C))(0);
	}
	template <typename T = IMatcher1StoreSalesEntity*>*> static T get_Read() {
		return ((T (*)(void *))(Il2CppBase() + 0x1841AD8))(0);
	}
	template <typename T = IMatcher1StoreSalesEntity*>*> static T get_StoreSalesId() {
		return ((T (*)(void *))(Il2CppBase() + 0x183F270))(0);
	}
	template <typename T = IMatcher1StoreSalesEntity*>*> static T get_Text() {
		return ((T (*)(void *))(Il2CppBase() + 0x1841C74))(0);
	}
	template <typename T = IMatcher1StoreSalesEntity*>*> static T get_Title() {
		return ((T (*)(void *))(Il2CppBase() + 0x1841E10))(0);
	}
	template <typename T = IMatcher1StoreSalesEntity*>*> static T get_WindowFrame() {
		return ((T (*)(void *))(Il2CppBase() + 0x1841FAC))(0);
	}
	template <typename T = IAllOfMatcher1StoreSalesEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1842148))(0, indices);
	}
	template <typename T = IAllOfMatcher1StoreSalesEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x18421C0))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1StoreSalesEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1842238))(0, indices);
	}
	template <typename T = IAnyOfMatcher1StoreSalesEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x18422B0))(0, matchers);
	}

};

