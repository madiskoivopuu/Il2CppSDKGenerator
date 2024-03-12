#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildQuestView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestView"));
	}

	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _description() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _progressPanel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _progressBar() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _progressText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _reward() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _rewardTooltip() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _timerText() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _bonusRewardText() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _winMarks() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _loseMarks() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _activeMarks() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& QuestName() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& QuestData() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& _duration() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& _maxProgress() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& _currentProgress() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& _minGuildRankPoints() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& _maxGuildRankPoints() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = void*> T& _active() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = void*> T& _win() {
		return *(T*)((uintptr_t)this + 0x9E);
	}
	template <typename T = void*> T& _lose() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& _currentTime() {
		return *(T*)((uintptr_t)this + 0xA4);
	}

	template <typename T = Il2CppString*> T get_QuestName() {
		return ((T (*)(GuildQuestView*))(Il2CppBase() + 0x1937DE8))(this);
	}
	template <typename T = void> T set_QuestName(Il2CppString* value) {
		return ((T (*)(GuildQuestView*, Il2CppString*))(Il2CppBase() + 0x1937DF0))(this, value);
	}
	template <typename T = uintptr_t> T get_QuestData() {
		return ((T (*)(GuildQuestView*))(Il2CppBase() + 0x1937DF8))(this);
	}
	template <typename T = void> T set_QuestData(uintptr_t value) {
		return ((T (*)(GuildQuestView*, uintptr_t))(Il2CppBase() + 0x1937E00))(this, value);
	}
	template <typename T = void> T Init(uintptr_t questData, uintptr_t tooltipView) {
		return ((T (*)(GuildQuestView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1937E08))(this, questData, tooltipView);
	}
	template <typename T = void> T UpdateView(uintptr_t guildQuest) {
		return ((T (*)(GuildQuestView*, uintptr_t))(Il2CppBase() + 0x19380C0))(this, guildQuest);
	}
	template <typename T = void> T OnUpdateTime(uintptr_t guildQuest, int64_t now) {
		return ((T (*)(GuildQuestView*, uintptr_t, int64_t))(Il2CppBase() + 0x1938A40))(this, guildQuest, now);
	}

};

}
