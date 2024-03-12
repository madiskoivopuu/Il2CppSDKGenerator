#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "SlotRoll/SlotRoll`1" 

class QuestsSlotRoll: SlotRoll1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuestsSlotRoll"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& questViews() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& onClickAction() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<int32_t>*> T& toRemove() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T UpdateQuests(int64_t ownerId, Il2CppString* tutorialTag, Il2CppList<uintptr_t>* currentQuests) {
		return ((T (*)(QuestsSlotRoll*, int64_t, Il2CppString*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x17098BC))(this, ownerId, tutorialTag, currentQuests);
	}
	template <typename T = void> T OnStabilized() {
		return ((T (*)(QuestsSlotRoll*))(Il2CppBase() + 0x1709F84))(this);
	}
	template <typename T = uintptr_t> T GetData(void* onClickAction, uintptr_t quest, int64_t now) {
		return ((T (*)(QuestsSlotRoll*, void*, uintptr_t, int64_t))(Il2CppBase() + 0x1709E84))(this, onClickAction, quest, now);
	}
	template <typename T = uintptr_t> T GetView(Il2CppString* questName) {
		return ((T (*)(QuestsSlotRoll*, Il2CppString*))(Il2CppBase() + 0x170A09C))(this, questName);
	}
	template <typename T = void> T RemoveView(Il2CppString* questName) {
		return ((T (*)(QuestsSlotRoll*, Il2CppString*))(Il2CppBase() + 0x170A1E0))(this, questName);
	}

};

}
