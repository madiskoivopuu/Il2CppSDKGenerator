#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DiplomacyMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DiplomacyMatcher"));
	}

	 static IMatcher1<DiplomacyEntity*>*& _matcherAccepted() {
		return *(IMatcher1<DiplomacyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<DiplomacyEntity*>*& _matcherDiplomacy() {
		return *(IMatcher1<DiplomacyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<DiplomacyEntity*>*& _matcherDiscarded() {
		return *(IMatcher1<DiplomacyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<DiplomacyEntity*>*& _matcherFromClan() {
		return *(IMatcher1<DiplomacyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<DiplomacyEntity*>*& _matcherPvP() {
		return *(IMatcher1<DiplomacyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<DiplomacyEntity*>*& _matcherTick() {
		return *(IMatcher1<DiplomacyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<DiplomacyEntity*>*& _matcherToClan() {
		return *(IMatcher1<DiplomacyEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	 static IMatcher1<DiplomacyEntity*>* get_Accepted() {
		return ((IMatcher1<DiplomacyEntity*>* (*)(void *))(Il2CppBase() + 0x12FEF24))(0);
	}
	 static IMatcher1<DiplomacyEntity*>* get_Diplomacy() {
		return ((IMatcher1<DiplomacyEntity*>* (*)(void *))(Il2CppBase() + 0x12FD1A8))(0);
	}
	 static IMatcher1<DiplomacyEntity*>* get_Discarded() {
		return ((IMatcher1<DiplomacyEntity*>* (*)(void *))(Il2CppBase() + 0x12FF0A4))(0);
	}
	 static IMatcher1<DiplomacyEntity*>* get_FromClan() {
		return ((IMatcher1<DiplomacyEntity*>* (*)(void *))(Il2CppBase() + 0x12FD344))(0);
	}
	 static IMatcher1<DiplomacyEntity*>* get_PvP() {
		return ((IMatcher1<DiplomacyEntity*>* (*)(void *))(Il2CppBase() + 0x12FD6F4))(0);
	}
	 static IMatcher1<DiplomacyEntity*>* get_Tick() {
		return ((IMatcher1<DiplomacyEntity*>* (*)(void *))(Il2CppBase() + 0x12FF240))(0);
	}
	 static IMatcher1<DiplomacyEntity*>* get_ToClan() {
		return ((IMatcher1<DiplomacyEntity*>* (*)(void *))(Il2CppBase() + 0x12FD4E0))(0);
	}
	 static IAllOfMatcher1<DiplomacyEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<DiplomacyEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x12FF3DC))(0, indices);
	}
	 static IAllOfMatcher1<DiplomacyEntity*>* AllOf_1(Il2CppArray<IMatcher1<DiplomacyEntity*>*>* matchers) {
		return ((IAllOfMatcher1<DiplomacyEntity*>* (*)(void *, Il2CppArray<IMatcher1<DiplomacyEntity*>*>*))(Il2CppBase() + 0x12FD67C))(0, matchers);
	}
	 static IAnyOfMatcher1<DiplomacyEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<DiplomacyEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x12FF454))(0, indices);
	}
	 static IAnyOfMatcher1<DiplomacyEntity*>* AnyOf_1(Il2CppArray<IMatcher1<DiplomacyEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<DiplomacyEntity*>* (*)(void *, Il2CppArray<IMatcher1<DiplomacyEntity*>*>*))(Il2CppBase() + 0x12FF4CC))(0, matchers);
	}

};

