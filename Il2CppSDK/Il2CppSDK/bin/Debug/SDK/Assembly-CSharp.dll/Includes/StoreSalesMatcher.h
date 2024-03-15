#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreSalesMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreSalesMatcher"));
	}

	 static IMatcher1<StoreSalesEntity*>*& _matcherAvailabilityEnd() {
		return *(IMatcher1<StoreSalesEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<StoreSalesEntity*>*& _matcherAvailabilityStart() {
		return *(IMatcher1<StoreSalesEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<StoreSalesEntity*>*& _matcherCategoryType() {
		return *(IMatcher1<StoreSalesEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<StoreSalesEntity*>*& _matcherIcon() {
		return *(IMatcher1<StoreSalesEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<StoreSalesEntity*>*& _matcherPlayerId() {
		return *(IMatcher1<StoreSalesEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<StoreSalesEntity*>*& _matcherRead() {
		return *(IMatcher1<StoreSalesEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<StoreSalesEntity*>*& _matcherStoreSalesId() {
		return *(IMatcher1<StoreSalesEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<StoreSalesEntity*>*& _matcherText() {
		return *(IMatcher1<StoreSalesEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<StoreSalesEntity*>*& _matcherTitle() {
		return *(IMatcher1<StoreSalesEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<StoreSalesEntity*>*& _matcherWindowFrame() {
		return *(IMatcher1<StoreSalesEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	 static IMatcher1<StoreSalesEntity*>* get_AvailabilityEnd() {
		return ((IMatcher1<StoreSalesEntity*>* (*)(void *))(Il2CppBase() + 0x1841484))(0);
	}
	 static IMatcher1<StoreSalesEntity*>* get_AvailabilityStart() {
		return ((IMatcher1<StoreSalesEntity*>* (*)(void *))(Il2CppBase() + 0x1841604))(0);
	}
	 static IMatcher1<StoreSalesEntity*>* get_CategoryType() {
		return ((IMatcher1<StoreSalesEntity*>* (*)(void *))(Il2CppBase() + 0x18417A0))(0);
	}
	 static IMatcher1<StoreSalesEntity*>* get_Icon() {
		return ((IMatcher1<StoreSalesEntity*>* (*)(void *))(Il2CppBase() + 0x184193C))(0);
	}
	 static IMatcher1<StoreSalesEntity*>* get_PlayerId() {
		return ((IMatcher1<StoreSalesEntity*>* (*)(void *))(Il2CppBase() + 0x183F40C))(0);
	}
	 static IMatcher1<StoreSalesEntity*>* get_Read() {
		return ((IMatcher1<StoreSalesEntity*>* (*)(void *))(Il2CppBase() + 0x1841AD8))(0);
	}
	 static IMatcher1<StoreSalesEntity*>* get_StoreSalesId() {
		return ((IMatcher1<StoreSalesEntity*>* (*)(void *))(Il2CppBase() + 0x183F270))(0);
	}
	 static IMatcher1<StoreSalesEntity*>* get_Text() {
		return ((IMatcher1<StoreSalesEntity*>* (*)(void *))(Il2CppBase() + 0x1841C74))(0);
	}
	 static IMatcher1<StoreSalesEntity*>* get_Title() {
		return ((IMatcher1<StoreSalesEntity*>* (*)(void *))(Il2CppBase() + 0x1841E10))(0);
	}
	 static IMatcher1<StoreSalesEntity*>* get_WindowFrame() {
		return ((IMatcher1<StoreSalesEntity*>* (*)(void *))(Il2CppBase() + 0x1841FAC))(0);
	}
	 static IAllOfMatcher1<StoreSalesEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<StoreSalesEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1842148))(0, indices);
	}
	 static IAllOfMatcher1<StoreSalesEntity*>* AllOf_1(Il2CppArray<IMatcher1<StoreSalesEntity*>*>* matchers) {
		return ((IAllOfMatcher1<StoreSalesEntity*>* (*)(void *, Il2CppArray<IMatcher1<StoreSalesEntity*>*>*))(Il2CppBase() + 0x18421C0))(0, matchers);
	}
	 static IAnyOfMatcher1<StoreSalesEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<StoreSalesEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1842238))(0, indices);
	}
	 static IAnyOfMatcher1<StoreSalesEntity*>* AnyOf_1(Il2CppArray<IMatcher1<StoreSalesEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<StoreSalesEntity*>* (*)(void *, Il2CppArray<IMatcher1<StoreSalesEntity*>*>*))(Il2CppBase() + 0x18422B0))(0, matchers);
	}

};

