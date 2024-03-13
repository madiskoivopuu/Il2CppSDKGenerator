#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatOnMessageSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatOnMessageSystem"));
	}

	template <typename T = ICommonClientWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = UIWindowsManager*> T& _manager() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = ICollector1ChatEntity*>*> T GetTrigger(IContext1ChatEntity*>* context) {
		return ((T (*)(ChatOnMessageSystem*, IContext1ChatEntity*>*))(Il2CppBase() + 0x17352E0))(this, context);
	}
	template <typename T = bool> T Filter(ChatEntity* entity) {
		return ((T (*)(ChatOnMessageSystem*, ChatEntity*))(Il2CppBase() + 0x1735338))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<ChatEntity*>* entities) {
		return ((T (*)(ChatOnMessageSystem*, Il2CppList<ChatEntity*>*))(Il2CppBase() + 0x1735354))(this, entities);
	}

};

