#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IObjectTriggerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IObjectTriggerEntity"));
	}


	template <typename T = uintptr_t> T get_objectTrigger() {
		return ((T (*)(IObjectTriggerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasObjectTrigger() {
		return ((T (*)(IObjectTriggerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddObjectTrigger(bool newAttack, bool newPocket, bool newInteract) {
		return ((T (*)(IObjectTriggerEntity*, bool, bool, bool))(Il2CppBase() + 0x0))(this, newAttack, newPocket, newInteract);
	}
	template <typename T = void> T ReplaceObjectTrigger(bool newAttack, bool newPocket, bool newInteract) {
		return ((T (*)(IObjectTriggerEntity*, bool, bool, bool))(Il2CppBase() + 0x0))(this, newAttack, newPocket, newInteract);
	}
	template <typename T = void> T RemoveObjectTrigger() {
		return ((T (*)(IObjectTriggerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
