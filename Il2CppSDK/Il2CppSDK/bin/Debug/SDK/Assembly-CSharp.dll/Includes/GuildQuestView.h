#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildQuestView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestView"));
	}

	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _description() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _progressPanel() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _progressBar() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _progressText() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _reward() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = TooltipTrigger*> R& _rewardTooltip() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _timerText() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _bonusRewardText() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _winMarks() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _loseMarks() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _activeMarks() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = Il2CppString*> R& QuestName() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = QuestDataEntity*> R& QuestData() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = float> R& _duration() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = int32_t> R& _maxProgress() {
		return *(R*)((uintptr_t)this + 0x8C);
	}
	template <typename R = int32_t> R& _currentProgress() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = int32_t> R& _minGuildRankPoints() {
		return *(R*)((uintptr_t)this + 0x94);
	}
	template <typename R = int32_t> R& _maxGuildRankPoints() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	 Nullable1bool>*& _active() {
		return *(Nullable1bool>**)((uintptr_t)this + 0x9C);
	}
	 Nullable1bool>*& _win() {
		return *(Nullable1bool>**)((uintptr_t)this + 0x9E);
	}
	 Nullable1bool>*& _lose() {
		return *(Nullable1bool>**)((uintptr_t)this + 0xA0);
	}
	template <typename R = float> R& _currentTime() {
		return *(R*)((uintptr_t)this + 0xA4);
	}

	template <typename R = Il2CppString*> R get_QuestName() {
		return ((R (*)(GuildQuestView*))(Il2CppBase() + 0x1937DE8))(this);
	}
	template <typename R = void> R set_QuestName(Il2CppString* value) {
		return ((R (*)(GuildQuestView*, Il2CppString*))(Il2CppBase() + 0x1937DF0))(this, value);
	}
	template <typename R = QuestDataEntity*> R get_QuestData() {
		return ((R (*)(GuildQuestView*))(Il2CppBase() + 0x1937DF8))(this);
	}
	template <typename R = void> R set_QuestData(QuestDataEntity* value) {
		return ((R (*)(GuildQuestView*, QuestDataEntity*))(Il2CppBase() + 0x1937E00))(this, value);
	}
	template <typename R = void> R Init(QuestDataEntity* questData, TooltipView* tooltipView) {
		return ((R (*)(GuildQuestView*, QuestDataEntity*, TooltipView*))(Il2CppBase() + 0x1937E08))(this, questData, tooltipView);
	}
	template <typename R = void> R UpdateView(GuildQuestEntity* guildQuest) {
		return ((R (*)(GuildQuestView*, GuildQuestEntity*))(Il2CppBase() + 0x19380C0))(this, guildQuest);
	}
	template <typename R = void> R OnUpdateTime(GuildQuestEntity* guildQuest, int64_t now) {
		return ((R (*)(GuildQuestView*, GuildQuestEntity*, int64_t))(Il2CppBase() + 0x1938A40))(this, guildQuest, now);
	}

};

