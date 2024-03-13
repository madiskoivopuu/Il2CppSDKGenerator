#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildQuestsPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildQuestsPanel"));
	}

	template <typename T = uintptr_t> T& _restPanel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _questsPanel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _rankPointsText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = TooltipTrigger*> T& _rankPointsTooltip() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _guildCoinsText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = TooltipTrigger*> T& _guildCoinsTooltip() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = GuildQuestsTabButton*> T& _easyButton() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = GuildQuestsTabButton*> T& _mediumButton() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = GuildQuestsTabButton*> T& _hardButton() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _questsCounterText() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _resetTimerText() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _activePanel() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _unactivePanel() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _container() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = GuildQuestItemView*> T& _questViewPrefab() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<GuildQuestItemView*>*> T& _questViewList() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = UIWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = GuildQuestDifficulty*> T& _currentDifficulty() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& _rankPoints() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& _guildCoins() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& _actualCount() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& _start() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = HashSet1Il2CppString*>*> T& _questNames() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& _sendStartQuest() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = GuildQuestDifficulty*> T get_CurrentDifficulty() {
		return ((T (*)(GuildQuestsPanel*))(Il2CppBase() + 0x193AA00))(this);
	}
	template <typename T = void> T set_CurrentDifficulty(GuildQuestDifficulty* value) {
		return ((T (*)(GuildQuestsPanel*, GuildQuestDifficulty*))(Il2CppBase() + 0x193AA08))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuildQuestsPanel*))(Il2CppBase() + 0x193AA7C))(this);
	}
	template <typename T = void> T Bind(UIWindow* window) {
		return ((T (*)(GuildQuestsPanel*, UIWindow*))(Il2CppBase() + 0x193AC34))(this, window);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(GuildQuestsPanel*))(Il2CppBase() + 0x193AE34))(this);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(GuildQuestsPanel*, float))(Il2CppBase() + 0x193B080))(this, deltaTime);
	}
	template <typename T = bool> T UpdateStateView(AccountEntity* account, GuildEntity* guild, int64_t now) {
		return ((T (*)(GuildQuestsPanel*, AccountEntity*, GuildEntity*, int64_t))(Il2CppBase() + 0x193B5DC))(this, account, guild, now);
	}
	template <typename T = void> T UpdateQuestViews(AccountEntity* account, GuildEntity* guild, bool canStart, int64_t now) {
		return ((T (*)(GuildQuestsPanel*, AccountEntity*, GuildEntity*, bool, int64_t))(Il2CppBase() + 0x193BC10))(this, account, guild, canStart, now);
	}
	template <typename T = void> T OnQuestStartClick(GuildQuestItemView* item) {
		return ((T (*)(GuildQuestsPanel*, GuildQuestItemView*))(Il2CppBase() + 0x193C730))(this, item);
	}
	template <typename T = void> T OnQuestOpenClick(GuildQuestItemView* item) {
		return ((T (*)(GuildQuestsPanel*, GuildQuestItemView*))(Il2CppBase() + 0x193CAB0))(this, item);
	}
	template <typename T = void> T OnChangeDifficulty(GuildQuestDifficulty* difficulty) {
		return ((T (*)(GuildQuestsPanel*, GuildQuestDifficulty*))(Il2CppBase() + 0x193AA1C))(this, difficulty);
	}
	template <typename T = void> T OnStartQuestResult(Il2CppString* errMessage) {
		return ((T (*)(GuildQuestsPanel*, Il2CppString*))(Il2CppBase() + 0x193CE50))(this, errMessage);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GuildQuestsPanel*))(Il2CppBase() + 0x193D148))(this);
	}
	template <typename T = void> T Awakeb__25_0() {
		return ((T (*)(GuildQuestsPanel*))(Il2CppBase() + 0x193D2EC))(this);
	}
	template <typename T = void> T Awakeb__25_1() {
		return ((T (*)(GuildQuestsPanel*))(Il2CppBase() + 0x193D304))(this);
	}
	template <typename T = void> T Awakeb__25_2() {
		return ((T (*)(GuildQuestsPanel*))(Il2CppBase() + 0x193D31C))(this);
	}

};

