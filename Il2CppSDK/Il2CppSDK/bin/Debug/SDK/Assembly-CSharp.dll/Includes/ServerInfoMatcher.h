#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServerInfoMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServerInfoMatcher"));
	}

	 static IMatcher1<ServerInfoEntity*>*& _matcherAddress() {
		return *(IMatcher1<ServerInfoEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<ServerInfoEntity*>*& _matcherChatServer() {
		return *(IMatcher1<ServerInfoEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<ServerInfoEntity*>*& _matcherCurrentServer() {
		return *(IMatcher1<ServerInfoEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<ServerInfoEntity*>*& _matcherName() {
		return *(IMatcher1<ServerInfoEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<ServerInfoEntity*>*& _matcherPopulation() {
		return *(IMatcher1<ServerInfoEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<ServerInfoEntity*>*& _matcherRegion() {
		return *(IMatcher1<ServerInfoEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<ServerInfoEntity*>*& _matcherSelectedServer() {
		return *(IMatcher1<ServerInfoEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<ServerInfoEntity*>*& _matcherServerView() {
		return *(IMatcher1<ServerInfoEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<ServerInfoEntity*>*& _matcherStatus() {
		return *(IMatcher1<ServerInfoEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<ServerInfoEntity*>*& _matcherSubregion() {
		return *(IMatcher1<ServerInfoEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<ServerInfoEntity*>*& _matcherTick() {
		return *(IMatcher1<ServerInfoEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	 static IMatcher1<ServerInfoEntity*>* get_Address() {
		return ((IMatcher1<ServerInfoEntity*>* (*)(void *))(Il2CppBase() + 0x161EEA4))(0);
	}
	 static IMatcher1<ServerInfoEntity*>* get_ChatServer() {
		return ((IMatcher1<ServerInfoEntity*>* (*)(void *))(Il2CppBase() + 0x161F024))(0);
	}
	 static IMatcher1<ServerInfoEntity*>* get_CurrentServer() {
		return ((IMatcher1<ServerInfoEntity*>* (*)(void *))(Il2CppBase() + 0x161C99C))(0);
	}
	 static IMatcher1<ServerInfoEntity*>* get_Name() {
		return ((IMatcher1<ServerInfoEntity*>* (*)(void *))(Il2CppBase() + 0x161F1C0))(0);
	}
	 static IMatcher1<ServerInfoEntity*>* get_Population() {
		return ((IMatcher1<ServerInfoEntity*>* (*)(void *))(Il2CppBase() + 0x161F35C))(0);
	}
	 static IMatcher1<ServerInfoEntity*>* get_Region() {
		return ((IMatcher1<ServerInfoEntity*>* (*)(void *))(Il2CppBase() + 0x161C58C))(0);
	}
	 static IMatcher1<ServerInfoEntity*>* get_SelectedServer() {
		return ((IMatcher1<ServerInfoEntity*>* (*)(void *))(Il2CppBase() + 0x161F4F8))(0);
	}
	 static IMatcher1<ServerInfoEntity*>* get_ServerView() {
		return ((IMatcher1<ServerInfoEntity*>* (*)(void *))(Il2CppBase() + 0x161F694))(0);
	}
	 static IMatcher1<ServerInfoEntity*>* get_Status() {
		return ((IMatcher1<ServerInfoEntity*>* (*)(void *))(Il2CppBase() + 0x161F830))(0);
	}
	 static IMatcher1<ServerInfoEntity*>* get_Subregion() {
		return ((IMatcher1<ServerInfoEntity*>* (*)(void *))(Il2CppBase() + 0x161C3F0))(0);
	}
	 static IMatcher1<ServerInfoEntity*>* get_Tick() {
		return ((IMatcher1<ServerInfoEntity*>* (*)(void *))(Il2CppBase() + 0x161F9CC))(0);
	}
	 static IAllOfMatcher1<ServerInfoEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<ServerInfoEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x161FB68))(0, indices);
	}
	 static IAllOfMatcher1<ServerInfoEntity*>* AllOf_1(Il2CppArray<IMatcher1<ServerInfoEntity*>*>* matchers) {
		return ((IAllOfMatcher1<ServerInfoEntity*>* (*)(void *, Il2CppArray<IMatcher1<ServerInfoEntity*>*>*))(Il2CppBase() + 0x161FBE0))(0, matchers);
	}
	 static IAnyOfMatcher1<ServerInfoEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<ServerInfoEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x161FC58))(0, indices);
	}
	 static IAnyOfMatcher1<ServerInfoEntity*>* AnyOf_1(Il2CppArray<IMatcher1<ServerInfoEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<ServerInfoEntity*>* (*)(void *, Il2CppArray<IMatcher1<ServerInfoEntity*>*>*))(Il2CppBase() + 0x161FCD0))(0, matchers);
	}

};

