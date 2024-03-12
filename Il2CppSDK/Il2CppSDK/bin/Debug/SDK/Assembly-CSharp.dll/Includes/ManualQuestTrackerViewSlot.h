#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "SlotRoll/Slot`1" 

class ManualQuestTrackerViewSlot: Slot1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ManualQuestTrackerViewSlot"));
	}


	template <typename T = void> T Fill(uintptr_t content) {
		return ((T (*)(ManualQuestTrackerViewSlot*, uintptr_t))(Il2CppBase() + 0x12651E0))(this, content);
	}

};

}
