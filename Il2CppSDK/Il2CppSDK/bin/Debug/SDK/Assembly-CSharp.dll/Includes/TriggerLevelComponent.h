#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerLevelComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerLevelComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(TriggerLevelComponent*, Il2CppObject*))(Il2CppBase() + 0x15258E0))(this, target);
	}

};

