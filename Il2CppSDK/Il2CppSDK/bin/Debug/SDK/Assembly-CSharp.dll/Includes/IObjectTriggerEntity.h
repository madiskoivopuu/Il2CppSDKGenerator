#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IObjectTriggerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IObjectTriggerEntity"));
	}


	template <typename R = ObjectTriggerComponent*> R get_objectTrigger() {
		return ((R (*)(IObjectTriggerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasObjectTrigger() {
		return ((R (*)(IObjectTriggerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddObjectTrigger(bool newAttack, bool newPocket, bool newInteract) {
		return ((R (*)(IObjectTriggerEntity*, bool, bool, bool))(Il2CppBase() + 0x0))(this, newAttack, newPocket, newInteract);
	}
	template <typename R = void> R ReplaceObjectTrigger(bool newAttack, bool newPocket, bool newInteract) {
		return ((R (*)(IObjectTriggerEntity*, bool, bool, bool))(Il2CppBase() + 0x0))(this, newAttack, newPocket, newInteract);
	}
	template <typename R = void> R RemoveObjectTrigger() {
		return ((R (*)(IObjectTriggerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

