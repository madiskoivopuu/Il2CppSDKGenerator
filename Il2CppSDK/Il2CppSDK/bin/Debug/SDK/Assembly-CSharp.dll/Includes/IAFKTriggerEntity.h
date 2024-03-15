#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAFKTriggerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAFKTriggerEntity"));
	}


	template <typename R = AFKTriggerComponent*> R get_aFKTrigger() {
		return ((R (*)(IAFKTriggerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAFKTrigger() {
		return ((R (*)(IAFKTriggerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAFKTrigger(bool newMove) {
		return ((R (*)(IAFKTriggerEntity*, bool))(Il2CppBase() + 0x0))(this, newMove);
	}
	template <typename R = void> R ReplaceAFKTrigger(bool newMove) {
		return ((R (*)(IAFKTriggerEntity*, bool))(Il2CppBase() + 0x0))(this, newMove);
	}
	template <typename R = void> R RemoveAFKTrigger() {
		return ((R (*)(IAFKTriggerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

