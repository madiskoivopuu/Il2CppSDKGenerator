#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITimeTriggerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITimeTriggerEntity"));
	}


	template <typename R = TimeTriggerComponent*> R get_timeTrigger() {
		return ((R (*)(ITimeTriggerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasTimeTrigger() {
		return ((R (*)(ITimeTriggerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddTimeTrigger(float newBeforeEnd) {
		return ((R (*)(ITimeTriggerEntity*, float))(Il2CppBase() + 0x0))(this, newBeforeEnd);
	}
	template <typename R = void> R ReplaceTimeTrigger(float newBeforeEnd) {
		return ((R (*)(ITimeTriggerEntity*, float))(Il2CppBase() + 0x0))(this, newBeforeEnd);
	}
	template <typename R = void> R RemoveTimeTrigger() {
		return ((R (*)(ITimeTriggerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

