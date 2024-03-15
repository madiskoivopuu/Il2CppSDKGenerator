#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerHealComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerHealComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TriggerHealComponent*, Il2CppObject*))(Il2CppBase() + 0x15258C8))(this, target);
	}

};

