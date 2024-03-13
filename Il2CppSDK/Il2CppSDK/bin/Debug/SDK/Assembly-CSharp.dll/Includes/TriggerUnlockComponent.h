#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerUnlockComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerUnlockComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(TriggerUnlockComponent*, Il2CppObject*))(Il2CppBase() + 0x1525BA0))(this, target);
	}

};

