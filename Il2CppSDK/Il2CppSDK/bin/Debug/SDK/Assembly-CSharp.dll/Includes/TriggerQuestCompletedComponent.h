#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerQuestCompletedComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerQuestCompletedComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(TriggerQuestCompletedComponent*, uintptr_t))(Il2CppBase() + 0x1525A30))(this, target);
	}

};

}
