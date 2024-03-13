#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicDestorySystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicDestorySystem"));
	}

	template <typename T = ICommonContexts*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1MagicEntity*>*> T GetTrigger(IContext1MagicEntity*>* context) {
		return ((T (*)(MagicDestorySystem*, IContext1MagicEntity*>*))(Il2CppBase() + 0x1ACD814))(this, context);
	}
	template <typename T = bool> T Filter(MagicEntity* entity) {
		return ((T (*)(MagicDestorySystem*, MagicEntity*))(Il2CppBase() + 0x1ACDD74))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<MagicEntity*>* entities) {
		return ((T (*)(MagicDestorySystem*, Il2CppList<MagicEntity*>*))(Il2CppBase() + 0x1ACDDE4))(this, entities);
	}

};

