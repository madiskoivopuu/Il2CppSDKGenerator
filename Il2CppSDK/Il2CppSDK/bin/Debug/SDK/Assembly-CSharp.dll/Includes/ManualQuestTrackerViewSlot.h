#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "SlotRoll/Slot1.h" 

class ManualQuestTrackerViewSlot : public Slot1<Data*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ManualQuestTrackerViewSlot"));
	}


	template <typename T = void> T Fill(Data* content) {
		return ((T (*)(ManualQuestTrackerViewSlot*, Data*))(Il2CppBase() + 0x12651E0))(this, content);
	}

};

