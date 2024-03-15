#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NakedViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NakedViewSystem"));
	}

	template <typename R = ICommonUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1ModifierEntity*>* GetTrigger(IContext1ModifierEntity*>* context) {
		return ((ICollector1ModifierEntity*>* (*)(NakedViewSystem*, IContext1ModifierEntity*>*))(Il2CppBase() + 0x155A418))(this, context);
	}
	template <typename R = bool> R Filter(ModifierEntity* entity) {
		return ((R (*)(NakedViewSystem*, ModifierEntity*))(Il2CppBase() + 0x155A4E4))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<ModifierEntity*>* entitiesModifiers) {
		return ((R (*)(NakedViewSystem*, Il2CppList<ModifierEntity*>*))(Il2CppBase() + 0x155A500))(this, entitiesModifiers);
	}

};

