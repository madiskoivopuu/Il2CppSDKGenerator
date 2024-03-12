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
	template <typename T = uintptr_t> T& _rankPointsTooltip() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _guildCoinsText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _guildCoinsTooltip() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _easyButton() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _mediumButton() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _hardButton() {
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
	template <typename T = uintptr_t> T& _questViewPrefab() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _questViewList() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _currentDifficulty() {
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
	template <typename T = void*> T& _questNames() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& _sendStartQuest() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = uintptr_t> T get_CurrentDifficulty() {
		return ((T (*)(GuildQuestsPanel*))(Il2CppBase() + 0x193AA00))(this);
	}
	template <typename T = void> T set_CurrentDifficulty(uintptr_t value) {
		return ((T (*)(GuildQuestsPanel*, uintptr_t))(Il2CppBase() + 0x193AA08))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GuildQuestsPanel*))(Il2CppBase() + 0x193AA7C))(this);
	}
	template <typename T = void> T Bind(uintptr_t window) {
		return ((T (*)(GuildQuestsPanel*, uintptr_t))(Il2CppBase() + 0x193AC34))(this, window);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(GuildQuestsPanel*))(Il2CppBase() + 0x193AE34))(this);
	}
	template <typename T = void> T OnDraw(float deltaTime) {
		return ((T (*)(GuildQuestsPanel*, float))(Il2CppBase() + 0x193B080))(this, deltaTime);
	}
	template <typename T = bool> T UpdateStateView(uintptr_t account, uintptr_t guild, int64_t now) {
		return ((T (*)(GuildQuestsPanel*, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x193B5DC))(this, account, guild, now);
	}
	template <typename T = void> T UpdateQuestViews(uintptr_t account, uintptr_t guild, bool canStart, int64_t now) {
		return ((T (*)(GuildQuestsPanel*, uintptr_t, uintptr_t, bool, int64_t))(Il2CppBase() + 0x193BC10))(this, account, guild, canStart, now);
	}
	template <typename T = void> T OnQuestStartClick(uintptr_t item) {
		return ((T (*)(GuildQuestsPanel*, uintptr_t))(Il2CppBase() + 0x193C730))(this, item);
	}
	template <typename T = void> T OnQuestOpenClick(uintptr_t item) {
		return ((T (*)(GuildQuestsPanel*, uintptr_t))(Il2CppBase() + 0x193CAB0))(this, item);
	}
	template <typename T = void> T OnChangeDifficulty(uintptr_t difficulty) {
		return ((T (*)(GuildQuestsPanel*, uintptr_t))(Il2CppBase() + 0x193AA1C))(this, difficulty);
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

}
