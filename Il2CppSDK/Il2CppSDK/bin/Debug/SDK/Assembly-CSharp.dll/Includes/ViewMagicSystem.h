#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ViewMagicSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ViewMagicSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1MagicEntity*>*> T GetTrigger(IContext1MagicEntity*>* context) {
		return ((T (*)(ViewMagicSystem*, IContext1MagicEntity*>*))(Il2CppBase() + 0x15CBC20))(this, context);
	}
	template <typename T = bool> T Filter(MagicEntity* entity) {
		return ((T (*)(ViewMagicSystem*, MagicEntity*))(Il2CppBase() + 0x15CBD3C))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<MagicEntity*>* entities) {
		return ((T (*)(ViewMagicSystem*, Il2CppList<MagicEntity*>*))(Il2CppBase() + 0x15CBD88))(this, entities);
	}

};

