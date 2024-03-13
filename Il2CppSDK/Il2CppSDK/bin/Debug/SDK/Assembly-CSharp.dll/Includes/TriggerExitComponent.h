#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerExitComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerExitComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(TriggerExitComponent*, Il2CppObject*))(Il2CppBase() + 0x1525808))(this, target);
	}

};

