#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PvPMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PvPMatcher"));
	}

	 static IMatcher1PvPEntity*>*& _matcherAvatar() {
		return *(IMatcher1PvPEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1PvPEntity*>*& _matcherDuration() {
		return *(IMatcher1PvPEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1PvPEntity*>*& _matcherPvP() {
		return *(IMatcher1PvPEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1PvPEntity*>*& _matcherPvPState() {
		return *(IMatcher1PvPEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1PvPEntity*>*& _matcherSearchDuration() {
		return *(IMatcher1PvPEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1PvPEntity*>*& _matcherTick() {
		return *(IMatcher1PvPEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	 static IMatcher1PvPEntity*>* get_Avatar() {
		return ((IMatcher1PvPEntity*>* (*)(void *))(Il2CppBase() + 0x11BCFFC))(0);
	}
	 static IMatcher1PvPEntity*>* get_Duration() {
		return ((IMatcher1PvPEntity*>* (*)(void *))(Il2CppBase() + 0x11BE170))(0);
	}
	 static IMatcher1PvPEntity*>* get_PvP() {
		return ((IMatcher1PvPEntity*>* (*)(void *))(Il2CppBase() + 0x11BC9B0))(0);
	}
	 static IMatcher1PvPEntity*>* get_PvPState() {
		return ((IMatcher1PvPEntity*>* (*)(void *))(Il2CppBase() + 0x11BE30C))(0);
	}
	 static IMatcher1PvPEntity*>* get_SearchDuration() {
		return ((IMatcher1PvPEntity*>* (*)(void *))(Il2CppBase() + 0x11BE4A8))(0);
	}
	 static IMatcher1PvPEntity*>* get_Tick() {
		return ((IMatcher1PvPEntity*>* (*)(void *))(Il2CppBase() + 0x11BE644))(0);
	}
	 static IAllOfMatcher1PvPEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1PvPEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x11BE7E0))(0, indices);
	}
	 static IAllOfMatcher1PvPEntity*>* AllOf_1(Il2CppArray<IMatcher1PvPEntity*>*>* matchers) {
		return ((IAllOfMatcher1PvPEntity*>* (*)(void *, Il2CppArray<IMatcher1PvPEntity*>*>*))(Il2CppBase() + 0x11BE858))(0, matchers);
	}
	 static IAnyOfMatcher1PvPEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1PvPEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x11BE8D0))(0, indices);
	}
	 static IAnyOfMatcher1PvPEntity*>* AnyOf_1(Il2CppArray<IMatcher1PvPEntity*>*>* matchers) {
		return ((IAnyOfMatcher1PvPEntity*>* (*)(void *, Il2CppArray<IMatcher1PvPEntity*>*>*))(Il2CppBase() + 0x11BE948))(0, matchers);
	}

};

