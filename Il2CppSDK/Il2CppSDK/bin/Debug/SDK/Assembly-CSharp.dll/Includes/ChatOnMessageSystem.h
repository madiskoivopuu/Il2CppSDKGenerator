#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatOnMessageSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatOnMessageSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _manager() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(ChatOnMessageSystem*, void*))(Il2CppBase() + 0x17352E0))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(ChatOnMessageSystem*, uintptr_t))(Il2CppBase() + 0x1735338))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(ChatOnMessageSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1735354))(this, entities);
	}

};

}
