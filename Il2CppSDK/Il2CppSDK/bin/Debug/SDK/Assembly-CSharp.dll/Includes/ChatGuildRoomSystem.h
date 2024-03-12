#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatGuildRoomSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatGuildRoomSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(ChatGuildRoomSystem*, void*))(Il2CppBase() + 0x13F6418))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(ChatGuildRoomSystem*, uintptr_t))(Il2CppBase() + 0x13F64E4))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(ChatGuildRoomSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x13F6500))(this, entities);
	}

};

}
