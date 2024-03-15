#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicRunesSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicRunesSystem"));
	}

	template <typename R = ICommonContexts*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1<GameEntity*>* GetTrigger(IContext1<GameEntity*>* context) {
		return ((ICollector1<GameEntity*>* (*)(MagicRunesSystem*, IContext1<GameEntity*>*))(Il2CppBase() + 0x1AE0150))(this, context);
	}
	template <typename R = bool> R Filter(GameEntity* entity) {
		return ((R (*)(MagicRunesSystem*, GameEntity*))(Il2CppBase() + 0x1AE021C))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<GameEntity*>* entities) {
		return ((R (*)(MagicRunesSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x1AE0238))(this, entities);
	}

};

