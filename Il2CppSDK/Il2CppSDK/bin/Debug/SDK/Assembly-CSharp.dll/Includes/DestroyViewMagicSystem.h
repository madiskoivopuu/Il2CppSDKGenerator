#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyViewMagicSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyViewMagicSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1<MagicEntity*>* GetTrigger(IContext1<MagicEntity*>* context) {
		return ((ICollector1<MagicEntity*>* (*)(DestroyViewMagicSystem*, IContext1<MagicEntity*>*))(Il2CppBase() + 0xEBF054))(this, context);
	}
	template <typename R = bool> R Filter(MagicEntity* entity) {
		return ((R (*)(DestroyViewMagicSystem*, MagicEntity*))(Il2CppBase() + 0xEBF120))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<MagicEntity*>* magics) {
		return ((R (*)(DestroyViewMagicSystem*, Il2CppList<MagicEntity*>*))(Il2CppBase() + 0xEBF14C))(this, magics);
	}

};

