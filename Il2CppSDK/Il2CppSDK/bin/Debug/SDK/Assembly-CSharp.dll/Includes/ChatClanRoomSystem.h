#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatClanRoomSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatClanRoomSystem"));
	}

	template <typename T = ICommonContexts*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1AccountEntity*>*> T GetTrigger(IContext1AccountEntity*>* context) {
		return ((T (*)(ChatClanRoomSystem*, IContext1AccountEntity*>*))(Il2CppBase() + 0x13F08C0))(this, context);
	}
	template <typename T = bool> T Filter(AccountEntity* entity) {
		return ((T (*)(ChatClanRoomSystem*, AccountEntity*))(Il2CppBase() + 0x13F0918))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<AccountEntity*>* accounts) {
		return ((T (*)(ChatClanRoomSystem*, Il2CppList<AccountEntity*>*))(Il2CppBase() + 0x13F0934))(this, accounts);
	}

};

