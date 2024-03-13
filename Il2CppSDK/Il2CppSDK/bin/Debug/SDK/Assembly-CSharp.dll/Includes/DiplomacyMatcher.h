#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DiplomacyMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DiplomacyMatcher"));
	}

	template <typename T = IMatcher1DiplomacyEntity*>*> static T& _matcherAccepted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1DiplomacyEntity*>*> static T& _matcherDiplomacy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1DiplomacyEntity*>*> static T& _matcherDiscarded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1DiplomacyEntity*>*> static T& _matcherFromClan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1DiplomacyEntity*>*> static T& _matcherPvP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = IMatcher1DiplomacyEntity*>*> static T& _matcherTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = IMatcher1DiplomacyEntity*>*> static T& _matcherToClan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = IMatcher1DiplomacyEntity*>*> static T get_Accepted() {
		return ((T (*)(void *))(Il2CppBase() + 0x12FEF24))(0);
	}
	template <typename T = IMatcher1DiplomacyEntity*>*> static T get_Diplomacy() {
		return ((T (*)(void *))(Il2CppBase() + 0x12FD1A8))(0);
	}
	template <typename T = IMatcher1DiplomacyEntity*>*> static T get_Discarded() {
		return ((T (*)(void *))(Il2CppBase() + 0x12FF0A4))(0);
	}
	template <typename T = IMatcher1DiplomacyEntity*>*> static T get_FromClan() {
		return ((T (*)(void *))(Il2CppBase() + 0x12FD344))(0);
	}
	template <typename T = IMatcher1DiplomacyEntity*>*> static T get_PvP() {
		return ((T (*)(void *))(Il2CppBase() + 0x12FD6F4))(0);
	}
	template <typename T = IMatcher1DiplomacyEntity*>*> static T get_Tick() {
		return ((T (*)(void *))(Il2CppBase() + 0x12FF240))(0);
	}
	template <typename T = IMatcher1DiplomacyEntity*>*> static T get_ToClan() {
		return ((T (*)(void *))(Il2CppBase() + 0x12FD4E0))(0);
	}
	template <typename T = IAllOfMatcher1DiplomacyEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12FF3DC))(0, indices);
	}
	template <typename T = IAllOfMatcher1DiplomacyEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12FD67C))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1DiplomacyEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12FF454))(0, indices);
	}
	template <typename T = IAnyOfMatcher1DiplomacyEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12FF4CC))(0, matchers);
	}

};

