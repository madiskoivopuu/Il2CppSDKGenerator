#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicDestorySystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicDestorySystem"));
	}

	template <typename R = ICommonContexts*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1MagicEntity*>* GetTrigger(IContext1MagicEntity*>* context) {
		return ((ICollector1MagicEntity*>* (*)(MagicDestorySystem*, IContext1MagicEntity*>*))(Il2CppBase() + 0x1ACD814))(this, context);
	}
	template <typename R = bool> R Filter(MagicEntity* entity) {
		return ((R (*)(MagicDestorySystem*, MagicEntity*))(Il2CppBase() + 0x1ACDD74))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<MagicEntity*>* entities) {
		return ((R (*)(MagicDestorySystem*, Il2CppList<MagicEntity*>*))(Il2CppBase() + 0x1ACDDE4))(this, entities);
	}

};

