#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PvPMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PvPMatcher"));
	}

	template <typename T = IMatcher1PvPEntity*>*> static T& _matcherAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1PvPEntity*>*> static T& _matcherDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1PvPEntity*>*> static T& _matcherPvP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1PvPEntity*>*> static T& _matcherPvPState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1PvPEntity*>*> static T& _matcherSearchDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = IMatcher1PvPEntity*>*> static T& _matcherTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = IMatcher1PvPEntity*>*> static T get_Avatar() {
		return ((T (*)(void *))(Il2CppBase() + 0x11BCFFC))(0);
	}
	template <typename T = IMatcher1PvPEntity*>*> static T get_Duration() {
		return ((T (*)(void *))(Il2CppBase() + 0x11BE170))(0);
	}
	template <typename T = IMatcher1PvPEntity*>*> static T get_PvP() {
		return ((T (*)(void *))(Il2CppBase() + 0x11BC9B0))(0);
	}
	template <typename T = IMatcher1PvPEntity*>*> static T get_PvPState() {
		return ((T (*)(void *))(Il2CppBase() + 0x11BE30C))(0);
	}
	template <typename T = IMatcher1PvPEntity*>*> static T get_SearchDuration() {
		return ((T (*)(void *))(Il2CppBase() + 0x11BE4A8))(0);
	}
	template <typename T = IMatcher1PvPEntity*>*> static T get_Tick() {
		return ((T (*)(void *))(Il2CppBase() + 0x11BE644))(0);
	}
	template <typename T = IAllOfMatcher1PvPEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x11BE7E0))(0, indices);
	}
	template <typename T = IAllOfMatcher1PvPEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x11BE858))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1PvPEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x11BE8D0))(0, indices);
	}
	template <typename T = IAnyOfMatcher1PvPEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x11BE948))(0, matchers);
	}

};

