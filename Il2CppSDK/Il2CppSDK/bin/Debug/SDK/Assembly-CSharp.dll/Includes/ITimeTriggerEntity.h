#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITimeTriggerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITimeTriggerEntity"));
	}


	template <typename T = TimeTriggerComponent*> T get_timeTrigger() {
		return ((T (*)(ITimeTriggerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTimeTrigger() {
		return ((T (*)(ITimeTriggerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTimeTrigger(float newBeforeEnd) {
		return ((T (*)(ITimeTriggerEntity*, float))(Il2CppBase() + 0x0))(this, newBeforeEnd);
	}
	template <typename T = void> T ReplaceTimeTrigger(float newBeforeEnd) {
		return ((T (*)(ITimeTriggerEntity*, float))(Il2CppBase() + 0x0))(this, newBeforeEnd);
	}
	template <typename T = void> T RemoveTimeTrigger() {
		return ((T (*)(ITimeTriggerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

