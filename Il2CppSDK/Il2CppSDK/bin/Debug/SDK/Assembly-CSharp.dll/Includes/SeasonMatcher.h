#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SeasonMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeasonMatcher"));
	}

	 static IMatcher1SeasonEntity*>*& _matcherBlueprint() {
		return *(IMatcher1SeasonEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1SeasonEntity*>*& _matcherCurrencyType() {
		return *(IMatcher1SeasonEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1SeasonEntity*>*& _matcherDescription() {
		return *(IMatcher1SeasonEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1SeasonEntity*>*& _matcherIcon() {
		return *(IMatcher1SeasonEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1SeasonEntity*>*& _matcherLevel() {
		return *(IMatcher1SeasonEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1SeasonEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1SeasonEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1SeasonEntity*>*& _matcherOrder() {
		return *(IMatcher1SeasonEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1SeasonEntity*>*& _matcherQuest() {
		return *(IMatcher1SeasonEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1SeasonEntity*>*& _matcherTemporary() {
		return *(IMatcher1SeasonEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	 static IMatcher1SeasonEntity*>* get_Blueprint() {
		return ((IMatcher1SeasonEntity*>* (*)(void *))(Il2CppBase() + 0x1360544))(0);
	}
	 static IMatcher1SeasonEntity*>* get_CurrencyType() {
		return ((IMatcher1SeasonEntity*>* (*)(void *))(Il2CppBase() + 0x13606C4))(0);
	}
	 static IMatcher1SeasonEntity*>* get_Description() {
		return ((IMatcher1SeasonEntity*>* (*)(void *))(Il2CppBase() + 0x1360860))(0);
	}
	 static IMatcher1SeasonEntity*>* get_Icon() {
		return ((IMatcher1SeasonEntity*>* (*)(void *))(Il2CppBase() + 0x13609FC))(0);
	}
	 static IMatcher1SeasonEntity*>* get_Level() {
		return ((IMatcher1SeasonEntity*>* (*)(void *))(Il2CppBase() + 0x1360B98))(0);
	}
	 static IMatcher1SeasonEntity*>* get_OldBlueprint() {
		return ((IMatcher1SeasonEntity*>* (*)(void *))(Il2CppBase() + 0x1360D34))(0);
	}
	 static IMatcher1SeasonEntity*>* get_Order() {
		return ((IMatcher1SeasonEntity*>* (*)(void *))(Il2CppBase() + 0x135DA54))(0);
	}
	 static IMatcher1SeasonEntity*>* get_Quest() {
		return ((IMatcher1SeasonEntity*>* (*)(void *))(Il2CppBase() + 0x1360ED0))(0);
	}
	 static IMatcher1SeasonEntity*>* get_Temporary() {
		return ((IMatcher1SeasonEntity*>* (*)(void *))(Il2CppBase() + 0x136106C))(0);
	}
	 static IAllOfMatcher1SeasonEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1SeasonEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1361208))(0, indices);
	}
	 static IAllOfMatcher1SeasonEntity*>* AllOf_1(Il2CppArray<IMatcher1SeasonEntity*>*>* matchers) {
		return ((IAllOfMatcher1SeasonEntity*>* (*)(void *, Il2CppArray<IMatcher1SeasonEntity*>*>*))(Il2CppBase() + 0x1361280))(0, matchers);
	}
	 static IAnyOfMatcher1SeasonEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1SeasonEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x13612F8))(0, indices);
	}
	 static IAnyOfMatcher1SeasonEntity*>* AnyOf_1(Il2CppArray<IMatcher1SeasonEntity*>*>* matchers) {
		return ((IAnyOfMatcher1SeasonEntity*>* (*)(void *, Il2CppArray<IMatcher1SeasonEntity*>*>*))(Il2CppBase() + 0x1361370))(0, matchers);
	}

};

