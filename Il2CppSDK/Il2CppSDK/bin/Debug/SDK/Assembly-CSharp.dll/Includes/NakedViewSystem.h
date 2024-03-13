#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NakedViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NakedViewSystem"));
	}

	template <typename T = ICommonUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1ModifierEntity*>*> T GetTrigger(IContext1ModifierEntity*>* context) {
		return ((T (*)(NakedViewSystem*, IContext1ModifierEntity*>*))(Il2CppBase() + 0x155A418))(this, context);
	}
	template <typename T = bool> T Filter(ModifierEntity* entity) {
		return ((T (*)(NakedViewSystem*, ModifierEntity*))(Il2CppBase() + 0x155A4E4))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<ModifierEntity*>* entitiesModifiers) {
		return ((T (*)(NakedViewSystem*, Il2CppList<ModifierEntity*>*))(Il2CppBase() + 0x155A500))(this, entitiesModifiers);
	}

};

