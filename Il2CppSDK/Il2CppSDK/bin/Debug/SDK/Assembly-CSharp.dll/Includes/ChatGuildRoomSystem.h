#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatGuildRoomSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatGuildRoomSystem"));
	}

	template <typename T = ICommonContexts*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1AccountEntity*>*> T GetTrigger(IContext1AccountEntity*>* context) {
		return ((T (*)(ChatGuildRoomSystem*, IContext1AccountEntity*>*))(Il2CppBase() + 0x13F6418))(this, context);
	}
	template <typename T = bool> T Filter(AccountEntity* entity) {
		return ((T (*)(ChatGuildRoomSystem*, AccountEntity*))(Il2CppBase() + 0x13F64E4))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<AccountEntity*>* entities) {
		return ((T (*)(ChatGuildRoomSystem*, Il2CppList<AccountEntity*>*))(Il2CppBase() + 0x13F6500))(this, entities);
	}

};

