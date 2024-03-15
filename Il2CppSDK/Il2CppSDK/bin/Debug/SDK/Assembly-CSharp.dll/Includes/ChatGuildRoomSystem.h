#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatGuildRoomSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatGuildRoomSystem"));
	}

	template <typename R = ICommonContexts*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1AccountEntity*>* GetTrigger(IContext1AccountEntity*>* context) {
		return ((ICollector1AccountEntity*>* (*)(ChatGuildRoomSystem*, IContext1AccountEntity*>*))(Il2CppBase() + 0x13F6418))(this, context);
	}
	template <typename R = bool> R Filter(AccountEntity* entity) {
		return ((R (*)(ChatGuildRoomSystem*, AccountEntity*))(Il2CppBase() + 0x13F64E4))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<AccountEntity*>* entities) {
		return ((R (*)(ChatGuildRoomSystem*, Il2CppList<AccountEntity*>*))(Il2CppBase() + 0x13F6500))(this, entities);
	}

};

