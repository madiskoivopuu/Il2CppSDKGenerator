#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildQuestsPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestsPanel"));
	}

	template <typename R = uintptr_t> R& _restPanel() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _questsPanel() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _rankPointsText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = TooltipTrigger*> R& _rankPointsTooltip() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _guildCoinsText() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = TooltipTrigger*> R& _guildCoinsTooltip() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = GuildQuestsTabButton*> R& _easyButton() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = GuildQuestsTabButton*> R& _mediumButton() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = GuildQuestsTabButton*> R& _hardButton() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _questsCounterText() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _resetTimerText() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& _activePanel() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& _unactivePanel() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _container() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = GuildQuestItemView*> R& _questViewPrefab() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	 Il2CppList<GuildQuestItemView*>*& _questViewList() {
		return *(Il2CppList<GuildQuestItemView*>**)((uintptr_t)this + 0x90);
	}
	template <typename R = UIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = GuildQuestDifficulty> R& _currentDifficulty() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = int32_t> R& _rankPoints() {
		return *(R*)((uintptr_t)this + 0xA4);
	}
	template <typename R = int32_t> R& _guildCoins() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = int32_t> R& _actualCount() {
		return *(R*)((uintptr_t)this + 0xAC);
	}
	template <typename R = bool> R& _start() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	 HashSet1<Il2CppString*>*& _questNames() {
		return *(HashSet1<Il2CppString*>**)((uintptr_t)this + 0xB8);
	}
	template <typename R = Il2CppString*> R& _sendStartQuest() {
		return *(R*)((uintptr_t)this + 0xC0);
	}

	template <typename R = GuildQuestDifficulty> R get_CurrentDifficulty() {
		return ((R (*)(GuildQuestsPanel*))(Il2CppBase() + 0x193AA00))(this);
	}
	template <typename R = void> R set_CurrentDifficulty(GuildQuestDifficulty value) {
		return ((R (*)(GuildQuestsPanel*, GuildQuestDifficulty))(Il2CppBase() + 0x193AA08))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(GuildQuestsPanel*))(Il2CppBase() + 0x193AA7C))(this);
	}
	template <typename R = void> R Bind(UIWindow* window) {
		return ((R (*)(GuildQuestsPanel*, UIWindow*))(Il2CppBase() + 0x193AC34))(this, window);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(GuildQuestsPanel*))(Il2CppBase() + 0x193AE34))(this);
	}
	template <typename R = void> R OnDraw(float deltaTime) {
		return ((R (*)(GuildQuestsPanel*, float))(Il2CppBase() + 0x193B080))(this, deltaTime);
	}
	template <typename R = bool> R UpdateStateView(AccountEntity* account, GuildEntity* guild, int64_t now) {
		return ((R (*)(GuildQuestsPanel*, AccountEntity*, GuildEntity*, int64_t))(Il2CppBase() + 0x193B5DC))(this, account, guild, now);
	}
	template <typename R = void> R UpdateQuestViews(AccountEntity* account, GuildEntity* guild, bool canStart, int64_t now) {
		return ((R (*)(GuildQuestsPanel*, AccountEntity*, GuildEntity*, bool, int64_t))(Il2CppBase() + 0x193BC10))(this, account, guild, canStart, now);
	}
	template <typename R = void> R OnQuestStartClick(GuildQuestItemView* item) {
		return ((R (*)(GuildQuestsPanel*, GuildQuestItemView*))(Il2CppBase() + 0x193C730))(this, item);
	}
	template <typename R = void> R OnQuestOpenClick(GuildQuestItemView* item) {
		return ((R (*)(GuildQuestsPanel*, GuildQuestItemView*))(Il2CppBase() + 0x193CAB0))(this, item);
	}
	template <typename R = void> R OnChangeDifficulty(GuildQuestDifficulty difficulty) {
		return ((R (*)(GuildQuestsPanel*, GuildQuestDifficulty))(Il2CppBase() + 0x193AA1C))(this, difficulty);
	}
	template <typename R = void> R OnStartQuestResult(Il2CppString* errMessage) {
		return ((R (*)(GuildQuestsPanel*, Il2CppString*))(Il2CppBase() + 0x193CE50))(this, errMessage);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(GuildQuestsPanel*))(Il2CppBase() + 0x193D148))(this);
	}
	template <typename R = void> R Awakeb__25_0() {
		return ((R (*)(GuildQuestsPanel*))(Il2CppBase() + 0x193D2EC))(this);
	}
	template <typename R = void> R Awakeb__25_1() {
		return ((R (*)(GuildQuestsPanel*))(Il2CppBase() + 0x193D304))(this);
	}
	template <typename R = void> R Awakeb__25_2() {
		return ((R (*)(GuildQuestsPanel*))(Il2CppBase() + 0x193D31C))(this);
	}

};

