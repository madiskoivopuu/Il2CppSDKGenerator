#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerInfoMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerInfoMatcher"));
	}

	 static IMatcher1ServerInfoEntity*>*& _matcherAddress() {
		return *(IMatcher1ServerInfoEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1ServerInfoEntity*>*& _matcherChatServer() {
		return *(IMatcher1ServerInfoEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1ServerInfoEntity*>*& _matcherCurrentServer() {
		return *(IMatcher1ServerInfoEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1ServerInfoEntity*>*& _matcherName() {
		return *(IMatcher1ServerInfoEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1ServerInfoEntity*>*& _matcherPopulation() {
		return *(IMatcher1ServerInfoEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1ServerInfoEntity*>*& _matcherRegion() {
		return *(IMatcher1ServerInfoEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1ServerInfoEntity*>*& _matcherSelectedServer() {
		return *(IMatcher1ServerInfoEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1ServerInfoEntity*>*& _matcherServerView() {
		return *(IMatcher1ServerInfoEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1ServerInfoEntity*>*& _matcherStatus() {
		return *(IMatcher1ServerInfoEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1ServerInfoEntity*>*& _matcherSubregion() {
		return *(IMatcher1ServerInfoEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1ServerInfoEntity*>*& _matcherTick() {
		return *(IMatcher1ServerInfoEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	 static IMatcher1ServerInfoEntity*>* get_Address() {
		return ((IMatcher1ServerInfoEntity*>* (*)(void *))(Il2CppBase() + 0x161EEA4))(0);
	}
	 static IMatcher1ServerInfoEntity*>* get_ChatServer() {
		return ((IMatcher1ServerInfoEntity*>* (*)(void *))(Il2CppBase() + 0x161F024))(0);
	}
	 static IMatcher1ServerInfoEntity*>* get_CurrentServer() {
		return ((IMatcher1ServerInfoEntity*>* (*)(void *))(Il2CppBase() + 0x161C99C))(0);
	}
	 static IMatcher1ServerInfoEntity*>* get_Name() {
		return ((IMatcher1ServerInfoEntity*>* (*)(void *))(Il2CppBase() + 0x161F1C0))(0);
	}
	 static IMatcher1ServerInfoEntity*>* get_Population() {
		return ((IMatcher1ServerInfoEntity*>* (*)(void *))(Il2CppBase() + 0x161F35C))(0);
	}
	 static IMatcher1ServerInfoEntity*>* get_Region() {
		return ((IMatcher1ServerInfoEntity*>* (*)(void *))(Il2CppBase() + 0x161C58C))(0);
	}
	 static IMatcher1ServerInfoEntity*>* get_SelectedServer() {
		return ((IMatcher1ServerInfoEntity*>* (*)(void *))(Il2CppBase() + 0x161F4F8))(0);
	}
	 static IMatcher1ServerInfoEntity*>* get_ServerView() {
		return ((IMatcher1ServerInfoEntity*>* (*)(void *))(Il2CppBase() + 0x161F694))(0);
	}
	 static IMatcher1ServerInfoEntity*>* get_Status() {
		return ((IMatcher1ServerInfoEntity*>* (*)(void *))(Il2CppBase() + 0x161F830))(0);
	}
	 static IMatcher1ServerInfoEntity*>* get_Subregion() {
		return ((IMatcher1ServerInfoEntity*>* (*)(void *))(Il2CppBase() + 0x161C3F0))(0);
	}
	 static IMatcher1ServerInfoEntity*>* get_Tick() {
		return ((IMatcher1ServerInfoEntity*>* (*)(void *))(Il2CppBase() + 0x161F9CC))(0);
	}
	 static IAllOfMatcher1ServerInfoEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1ServerInfoEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x161FB68))(0, indices);
	}
	 static IAllOfMatcher1ServerInfoEntity*>* AllOf_1(Il2CppArray<IMatcher1ServerInfoEntity*>*>* matchers) {
		return ((IAllOfMatcher1ServerInfoEntity*>* (*)(void *, Il2CppArray<IMatcher1ServerInfoEntity*>*>*))(Il2CppBase() + 0x161FBE0))(0, matchers);
	}
	 static IAnyOfMatcher1ServerInfoEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1ServerInfoEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x161FC58))(0, indices);
	}
	 static IAnyOfMatcher1ServerInfoEntity*>* AnyOf_1(Il2CppArray<IMatcher1ServerInfoEntity*>*>* matchers) {
		return ((IAnyOfMatcher1ServerInfoEntity*>* (*)(void *, Il2CppArray<IMatcher1ServerInfoEntity*>*>*))(Il2CppBase() + 0x161FCD0))(0, matchers);
	}

};

