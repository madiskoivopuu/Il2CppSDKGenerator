#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerKillComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerKillComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TriggerKillComponent*, Il2CppObject*))(Il2CppBase() + 0x15258D4))(this, target);
	}

};

