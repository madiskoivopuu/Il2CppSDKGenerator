#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerQuestCompletedComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerQuestCompletedComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(TriggerQuestCompletedComponent*, Il2CppObject*))(Il2CppBase() + 0x1525A30))(this, target);
	}

};
