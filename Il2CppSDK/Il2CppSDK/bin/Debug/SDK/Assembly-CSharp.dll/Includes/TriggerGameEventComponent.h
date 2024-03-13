#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerGameEventComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerGameEventComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(TriggerGameEventComponent*, Il2CppObject*))(Il2CppBase() + 0x15258BC))(this, target);
	}

};

