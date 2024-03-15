#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyActionEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyActionEffectSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1ActionEntity*>* GetTrigger(IContext1ActionEntity*>* context) {
		return ((ICollector1ActionEntity*>* (*)(DestroyActionEffectSystem*, IContext1ActionEntity*>*))(Il2CppBase() + 0xEBB8FC))(this, context);
	}
	template <typename R = bool> R Filter(ActionEntity* action) {
		return ((R (*)(DestroyActionEffectSystem*, ActionEntity*))(Il2CppBase() + 0xEBBAB4))(this, action);
	}
	template <typename R = void> R Execute(Il2CppList<ActionEntity*>* actions) {
		return ((R (*)(DestroyActionEffectSystem*, Il2CppList<ActionEntity*>*))(Il2CppBase() + 0xEBBAD0))(this, actions);
	}
	template <typename R = void> R TryStopStartEffect(Il2CppString* name, ActionEntity* action) {
		return ((R (*)(DestroyActionEffectSystem*, Il2CppString*, ActionEntity*))(Il2CppBase() + 0xEBBE1C))(this, name, action);
	}
	template <typename R = void> R TryStopApplyEffect(Il2CppString* name, ActionEntity* action) {
		return ((R (*)(DestroyActionEffectSystem*, Il2CppString*, ActionEntity*))(Il2CppBase() + 0xEBC050))(this, name, action);
	}

};

