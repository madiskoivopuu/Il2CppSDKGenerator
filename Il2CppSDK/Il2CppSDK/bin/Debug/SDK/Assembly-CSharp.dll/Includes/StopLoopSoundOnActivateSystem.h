#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StopLoopSoundOnActivateSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StopLoopSoundOnActivateSystem"));
	}


	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(StopLoopSoundOnActivateSystem*, void*))(Il2CppBase() + 0x1404BA4))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(StopLoopSoundOnActivateSystem*, uintptr_t))(Il2CppBase() + 0x1404D08))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(StopLoopSoundOnActivateSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1404D34))(this, entities);
	}

};

}
