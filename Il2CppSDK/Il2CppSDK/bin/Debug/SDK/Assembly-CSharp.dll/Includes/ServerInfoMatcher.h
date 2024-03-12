#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerInfoMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerInfoMatcher"));
	}

	template <typename T = void*> static T& _matcherAddress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherChatServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherCurrentServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& _matcherName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& _matcherPopulation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& _matcherRegion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& _matcherSelectedServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& _matcherServerView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& _matcherStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& _matcherSubregion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& _matcherTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = void*> static T get_Address() {
		return ((T (*)(void *))(Il2CppBase() + 0x161EEA4))(0);
	}
	template <typename T = void*> static T get_ChatServer() {
		return ((T (*)(void *))(Il2CppBase() + 0x161F024))(0);
	}
	template <typename T = void*> static T get_CurrentServer() {
		return ((T (*)(void *))(Il2CppBase() + 0x161C99C))(0);
	}
	template <typename T = void*> static T get_Name() {
		return ((T (*)(void *))(Il2CppBase() + 0x161F1C0))(0);
	}
	template <typename T = void*> static T get_Population() {
		return ((T (*)(void *))(Il2CppBase() + 0x161F35C))(0);
	}
	template <typename T = void*> static T get_Region() {
		return ((T (*)(void *))(Il2CppBase() + 0x161C58C))(0);
	}
	template <typename T = void*> static T get_SelectedServer() {
		return ((T (*)(void *))(Il2CppBase() + 0x161F4F8))(0);
	}
	template <typename T = void*> static T get_ServerView() {
		return ((T (*)(void *))(Il2CppBase() + 0x161F694))(0);
	}
	template <typename T = void*> static T get_Status() {
		return ((T (*)(void *))(Il2CppBase() + 0x161F830))(0);
	}
	template <typename T = void*> static T get_Subregion() {
		return ((T (*)(void *))(Il2CppBase() + 0x161C3F0))(0);
	}
	template <typename T = void*> static T get_Tick() {
		return ((T (*)(void *))(Il2CppBase() + 0x161F9CC))(0);
	}
	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x161FB68))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x161FBE0))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x161FC58))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x161FCD0))(0, matchers);
	}

};

}
