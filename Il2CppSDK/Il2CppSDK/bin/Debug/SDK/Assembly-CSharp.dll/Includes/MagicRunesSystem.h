#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicRunesSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicRunesSystem"));
	}

	template <typename T = ICommonContexts*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1GameEntity*>*> T GetTrigger(IContext1GameEntity*>* context) {
		return ((T (*)(MagicRunesSystem*, IContext1GameEntity*>*))(Il2CppBase() + 0x1AE0150))(this, context);
	}
	template <typename T = bool> T Filter(GameEntity* entity) {
		return ((T (*)(MagicRunesSystem*, GameEntity*))(Il2CppBase() + 0x1AE021C))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<GameEntity*>* entities) {
		return ((T (*)(MagicRunesSystem*, Il2CppList<GameEntity*>*))(Il2CppBase() + 0x1AE0238))(this, entities);
	}

};

