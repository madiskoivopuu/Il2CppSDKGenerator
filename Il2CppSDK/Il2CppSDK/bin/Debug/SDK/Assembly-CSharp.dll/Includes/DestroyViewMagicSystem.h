#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyViewMagicSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyViewMagicSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1MagicEntity*>*> T GetTrigger(IContext1MagicEntity*>* context) {
		return ((T (*)(DestroyViewMagicSystem*, IContext1MagicEntity*>*))(Il2CppBase() + 0xEBF054))(this, context);
	}
	template <typename T = bool> T Filter(MagicEntity* entity) {
		return ((T (*)(DestroyViewMagicSystem*, MagicEntity*))(Il2CppBase() + 0xEBF120))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<MagicEntity*>* magics) {
		return ((T (*)(DestroyViewMagicSystem*, Il2CppList<MagicEntity*>*))(Il2CppBase() + 0xEBF14C))(this, magics);
	}

};

