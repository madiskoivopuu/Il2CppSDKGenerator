#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyActionEffectSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyActionEffectSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1ActionEntity*>*> T GetTrigger(IContext1ActionEntity*>* context) {
		return ((T (*)(DestroyActionEffectSystem*, IContext1ActionEntity*>*))(Il2CppBase() + 0xEBB8FC))(this, context);
	}
	template <typename T = bool> T Filter(ActionEntity* action) {
		return ((T (*)(DestroyActionEffectSystem*, ActionEntity*))(Il2CppBase() + 0xEBBAB4))(this, action);
	}
	template <typename T = void> T Execute(Il2CppList<ActionEntity*>* actions) {
		return ((T (*)(DestroyActionEffectSystem*, Il2CppList<ActionEntity*>*))(Il2CppBase() + 0xEBBAD0))(this, actions);
	}
	template <typename T = void> T TryStopStartEffect(Il2CppString* name, ActionEntity* action) {
		return ((T (*)(DestroyActionEffectSystem*, Il2CppString*, ActionEntity*))(Il2CppBase() + 0xEBBE1C))(this, name, action);
	}
	template <typename T = void> T TryStopApplyEffect(Il2CppString* name, ActionEntity* action) {
		return ((T (*)(DestroyActionEffectSystem*, Il2CppString*, ActionEntity*))(Il2CppBase() + 0xEBC050))(this, name, action);
	}

};

