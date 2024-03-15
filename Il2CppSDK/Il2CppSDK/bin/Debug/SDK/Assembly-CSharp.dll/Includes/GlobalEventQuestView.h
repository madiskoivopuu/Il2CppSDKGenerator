#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ActQuestView.h" 

class GlobalEventQuestView : public ActQuestView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GlobalEventQuestView"));
	}

	template <typename R = uintptr_t> R& _fakeRewardPrefab() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	 Il2CppList<uintptr_t>*& _fakeResources() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x110);
	}
	template <typename R = int32_t> R& MaxFakeRewardCount() {
		return *(R*)((uintptr_t)this + 0x118);
	}

	template <typename R = int32_t> R get_MaxFakeRewardCount() {
		return ((R (*)(GlobalEventQuestView*))(Il2CppBase() + 0x177344C))(this);
	}
	template <typename R = void> R set_MaxFakeRewardCount(int32_t value) {
		return ((R (*)(GlobalEventQuestView*, int32_t))(Il2CppBase() + 0x1773454))(this, value);
	}
	template <typename R = void> R ShowReward(QuestEntity* quest, QuestDataEntity* questData) {
		return ((R (*)(GlobalEventQuestView*, QuestEntity*, QuestDataEntity*))(Il2CppBase() + 0x177345C))(this, quest, questData);
	}

};

