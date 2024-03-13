#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyActionCloseWindowSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyActionCloseWindowSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1ActionEntity*>*> T GetTrigger(IContext1ActionEntity*>* context) {
		return ((T (*)(DestroyActionCloseWindowSystem*, IContext1ActionEntity*>*))(Il2CppBase() + 0xEBA608))(this, context);
	}
	template <typename T = bool> T Filter(ActionEntity* entity) {
		return ((T (*)(DestroyActionCloseWindowSystem*, ActionEntity*))(Il2CppBase() + 0xEBA76C))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<ActionEntity*>* actions) {
		return ((T (*)(DestroyActionCloseWindowSystem*, Il2CppList<ActionEntity*>*))(Il2CppBase() + 0xEBA7B8))(this, actions);
	}

};

