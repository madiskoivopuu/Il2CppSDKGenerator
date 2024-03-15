#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatClanRoomSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatClanRoomSystem"));
	}

	template <typename R = ICommonContexts*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1<AccountEntity*>* GetTrigger(IContext1<AccountEntity*>* context) {
		return ((ICollector1<AccountEntity*>* (*)(ChatClanRoomSystem*, IContext1<AccountEntity*>*))(Il2CppBase() + 0x13F08C0))(this, context);
	}
	template <typename R = bool> R Filter(AccountEntity* entity) {
		return ((R (*)(ChatClanRoomSystem*, AccountEntity*))(Il2CppBase() + 0x13F0918))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<AccountEntity*>* accounts) {
		return ((R (*)(ChatClanRoomSystem*, Il2CppList<AccountEntity*>*))(Il2CppBase() + 0x13F0934))(this, accounts);
	}

};

