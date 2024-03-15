#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "SlotRoll1.h" 

class QuestsSlotRoll : public SlotRoll1<Data*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestsSlotRoll"));
	}

	 Il2CppList<ManualQuestTrackerView*>*& questViews() {
		return *(Il2CppList<ManualQuestTrackerView*>**)((uintptr_t)this + 0x38);
	}
	 Action1<ManualQuestTrackerView*>*& onClickAction() {
		return *(Action1<ManualQuestTrackerView*>**)((uintptr_t)this + 0x40);
	}
	 Il2CppList<int32_t>*& toRemove() {
		return *(Il2CppList<int32_t>**)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R UpdateQuests(int64_t ownerId, Il2CppString* tutorialTag, Il2CppList<QuestEntity*>* currentQuests) {
		return ((R (*)(QuestsSlotRoll*, int64_t, Il2CppString*, Il2CppList<QuestEntity*>*))(Il2CppBase() + 0x17098BC))(this, ownerId, tutorialTag, currentQuests);
	}
	template <typename R = void> R OnStabilized() {
		return ((R (*)(QuestsSlotRoll*))(Il2CppBase() + 0x1709F84))(this);
	}
	template <typename R = Data*> R GetData(Action1<ManualQuestTrackerView*>* onClickAction, QuestEntity* quest, int64_t now) {
		return ((R (*)(QuestsSlotRoll*, Action1<ManualQuestTrackerView*>*, QuestEntity*, int64_t))(Il2CppBase() + 0x1709E84))(this, onClickAction, quest, now);
	}
	template <typename R = ManualQuestTrackerView*> R GetView(Il2CppString* questName) {
		return ((R (*)(QuestsSlotRoll*, Il2CppString*))(Il2CppBase() + 0x170A09C))(this, questName);
	}
	template <typename R = void> R RemoveView(Il2CppString* questName) {
		return ((R (*)(QuestsSlotRoll*, Il2CppString*))(Il2CppBase() + 0x170A1E0))(this, questName);
	}

};

