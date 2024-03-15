#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChatOnMessageSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChatOnMessageSystem"));
	}

	template <typename R = ICommonClientWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = UIWindowsManager*> R& _manager() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 ICollector1ChatEntity*>* GetTrigger(IContext1ChatEntity*>* context) {
		return ((ICollector1ChatEntity*>* (*)(ChatOnMessageSystem*, IContext1ChatEntity*>*))(Il2CppBase() + 0x17352E0))(this, context);
	}
	template <typename R = bool> R Filter(ChatEntity* entity) {
		return ((R (*)(ChatOnMessageSystem*, ChatEntity*))(Il2CppBase() + 0x1735338))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<ChatEntity*>* entities) {
		return ((R (*)(ChatOnMessageSystem*, Il2CppList<ChatEntity*>*))(Il2CppBase() + 0x1735354))(this, entities);
	}

};

