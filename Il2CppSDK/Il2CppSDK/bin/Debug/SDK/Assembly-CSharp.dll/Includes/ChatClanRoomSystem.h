#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatClanRoomSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatClanRoomSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(ChatClanRoomSystem*, void*))(Il2CppBase() + 0x13F08C0))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(ChatClanRoomSystem*, uintptr_t))(Il2CppBase() + 0x13F0918))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* accounts) {
		return ((T (*)(ChatClanRoomSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x13F0934))(this, accounts);
	}

};

}
