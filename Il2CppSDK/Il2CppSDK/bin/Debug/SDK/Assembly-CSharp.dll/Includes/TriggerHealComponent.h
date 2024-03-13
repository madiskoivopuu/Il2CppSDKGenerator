#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerHealComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerHealComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(TriggerHealComponent*, Il2CppObject*))(Il2CppBase() + 0x15258C8))(this, target);
	}

};

