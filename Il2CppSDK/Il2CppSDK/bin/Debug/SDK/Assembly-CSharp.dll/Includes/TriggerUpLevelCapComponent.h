#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerUpLevelCapComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerUpLevelCapComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TriggerUpLevelCapComponent*, Il2CppObject*))(Il2CppBase() + 0x1525BAC))(this, target);
	}

};

