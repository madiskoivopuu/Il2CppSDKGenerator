#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DiplomacyMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DiplomacyMatcher"));
	}

	 static IMatcher1DiplomacyEntity*>*& _matcherAccepted() {
		return *(IMatcher1DiplomacyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1DiplomacyEntity*>*& _matcherDiplomacy() {
		return *(IMatcher1DiplomacyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1DiplomacyEntity*>*& _matcherDiscarded() {
		return *(IMatcher1DiplomacyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1DiplomacyEntity*>*& _matcherFromClan() {
		return *(IMatcher1DiplomacyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1DiplomacyEntity*>*& _matcherPvP() {
		return *(IMatcher1DiplomacyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1DiplomacyEntity*>*& _matcherTick() {
		return *(IMatcher1DiplomacyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1DiplomacyEntity*>*& _matcherToClan() {
		return *(IMatcher1DiplomacyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	 static IMatcher1DiplomacyEntity*>* get_Accepted() {
		return ((IMatcher1DiplomacyEntity*>* (*)(void *))(Il2CppBase() + 0x12FEF24))(0);
	}
	 static IMatcher1DiplomacyEntity*>* get_Diplomacy() {
		return ((IMatcher1DiplomacyEntity*>* (*)(void *))(Il2CppBase() + 0x12FD1A8))(0);
	}
	 static IMatcher1DiplomacyEntity*>* get_Discarded() {
		return ((IMatcher1DiplomacyEntity*>* (*)(void *))(Il2CppBase() + 0x12FF0A4))(0);
	}
	 static IMatcher1DiplomacyEntity*>* get_FromClan() {
		return ((IMatcher1DiplomacyEntity*>* (*)(void *))(Il2CppBase() + 0x12FD344))(0);
	}
	 static IMatcher1DiplomacyEntity*>* get_PvP() {
		return ((IMatcher1DiplomacyEntity*>* (*)(void *))(Il2CppBase() + 0x12FD6F4))(0);
	}
	 static IMatcher1DiplomacyEntity*>* get_Tick() {
		return ((IMatcher1DiplomacyEntity*>* (*)(void *))(Il2CppBase() + 0x12FF240))(0);
	}
	 static IMatcher1DiplomacyEntity*>* get_ToClan() {
		return ((IMatcher1DiplomacyEntity*>* (*)(void *))(Il2CppBase() + 0x12FD4E0))(0);
	}
	 static IAllOfMatcher1DiplomacyEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1DiplomacyEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x12FF3DC))(0, indices);
	}
	 static IAllOfMatcher1DiplomacyEntity*>* AllOf_1(Il2CppArray<IMatcher1DiplomacyEntity*>*>* matchers) {
		return ((IAllOfMatcher1DiplomacyEntity*>* (*)(void *, Il2CppArray<IMatcher1DiplomacyEntity*>*>*))(Il2CppBase() + 0x12FD67C))(0, matchers);
	}
	 static IAnyOfMatcher1DiplomacyEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1DiplomacyEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x12FF454))(0, indices);
	}
	 static IAnyOfMatcher1DiplomacyEntity*>* AnyOf_1(Il2CppArray<IMatcher1DiplomacyEntity*>*>* matchers) {
		return ((IAnyOfMatcher1DiplomacyEntity*>* (*)(void *, Il2CppArray<IMatcher1DiplomacyEntity*>*>*))(Il2CppBase() + 0x12FF4CC))(0, matchers);
	}

};

