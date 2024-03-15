#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewMagicSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewMagicSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1MagicEntity*>* GetTrigger(IContext1MagicEntity*>* context) {
		return ((ICollector1MagicEntity*>* (*)(ViewMagicSystem*, IContext1MagicEntity*>*))(Il2CppBase() + 0x15CBC20))(this, context);
	}
	template <typename R = bool> R Filter(MagicEntity* entity) {
		return ((R (*)(ViewMagicSystem*, MagicEntity*))(Il2CppBase() + 0x15CBD3C))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<MagicEntity*>* entities) {
		return ((R (*)(ViewMagicSystem*, Il2CppList<MagicEntity*>*))(Il2CppBase() + 0x15CBD88))(this, entities);
	}

};

