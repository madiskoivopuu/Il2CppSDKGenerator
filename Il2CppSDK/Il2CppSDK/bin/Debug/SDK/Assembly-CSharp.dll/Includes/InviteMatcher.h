#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InviteMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InviteMatcher"));
	}

	 static IMatcher1InviteEntity*>*& _matcherCell() {
		return *(IMatcher1InviteEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1InviteEntity*>*& _matcherFromPlayer() {
		return *(IMatcher1InviteEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1InviteEntity*>*& _matcherInvite() {
		return *(IMatcher1InviteEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1InviteEntity*>*& _matcherMessage() {
		return *(IMatcher1InviteEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1InviteEntity*>*& _matcherTick() {
		return *(IMatcher1InviteEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1InviteEntity*>*& _matcherToPlayer() {
		return *(IMatcher1InviteEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	 static IMatcher1InviteEntity*>* get_Cell() {
		return ((IMatcher1InviteEntity*>* (*)(void *))(Il2CppBase() + 0x1245500))(0);
	}
	 static IMatcher1InviteEntity*>* get_FromPlayer() {
		return ((IMatcher1InviteEntity*>* (*)(void *))(Il2CppBase() + 0x1245364))(0);
	}
	 static IMatcher1InviteEntity*>* get_Invite() {
		return ((IMatcher1InviteEntity*>* (*)(void *))(Il2CppBase() + 0x12451C8))(0);
	}
	 static IMatcher1InviteEntity*>* get_Message() {
		return ((IMatcher1InviteEntity*>* (*)(void *))(Il2CppBase() + 0x1247068))(0);
	}
	 static IMatcher1InviteEntity*>* get_Tick() {
		return ((IMatcher1InviteEntity*>* (*)(void *))(Il2CppBase() + 0x1247204))(0);
	}
	 static IMatcher1InviteEntity*>* get_ToPlayer() {
		return ((IMatcher1InviteEntity*>* (*)(void *))(Il2CppBase() + 0x12456F8))(0);
	}
	 static IAllOfMatcher1InviteEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1InviteEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x12473A0))(0, indices);
	}
	 static IAllOfMatcher1InviteEntity*>* AllOf_1(Il2CppArray<IMatcher1InviteEntity*>*>* matchers) {
		return ((IAllOfMatcher1InviteEntity*>* (*)(void *, Il2CppArray<IMatcher1InviteEntity*>*>*))(Il2CppBase() + 0x1245680))(0, matchers);
	}
	 static IAnyOfMatcher1InviteEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1InviteEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1247418))(0, indices);
	}
	 static IAnyOfMatcher1InviteEntity*>* AnyOf_1(Il2CppArray<IMatcher1InviteEntity*>*>* matchers) {
		return ((IAnyOfMatcher1InviteEntity*>* (*)(void *, Il2CppArray<IMatcher1InviteEntity*>*>*))(Il2CppBase() + 0x1247490))(0, matchers);
	}

};

