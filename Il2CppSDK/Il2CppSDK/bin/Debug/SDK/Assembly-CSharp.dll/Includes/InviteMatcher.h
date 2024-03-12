#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InviteMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InviteMatcher"));
	}

	template <typename T = void*> static T& _matcherCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherFromPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherInvite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& _matcherMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& _matcherTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& _matcherToPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void*> static T get_Cell() {
		return ((T (*)(void *))(Il2CppBase() + 0x1245500))(0);
	}
	template <typename T = void*> static T get_FromPlayer() {
		return ((T (*)(void *))(Il2CppBase() + 0x1245364))(0);
	}
	template <typename T = void*> static T get_Invite() {
		return ((T (*)(void *))(Il2CppBase() + 0x12451C8))(0);
	}
	template <typename T = void*> static T get_Message() {
		return ((T (*)(void *))(Il2CppBase() + 0x1247068))(0);
	}
	template <typename T = void*> static T get_Tick() {
		return ((T (*)(void *))(Il2CppBase() + 0x1247204))(0);
	}
	template <typename T = void*> static T get_ToPlayer() {
		return ((T (*)(void *))(Il2CppBase() + 0x12456F8))(0);
	}
	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12473A0))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1245680))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1247418))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1247490))(0, matchers);
	}

};

}
