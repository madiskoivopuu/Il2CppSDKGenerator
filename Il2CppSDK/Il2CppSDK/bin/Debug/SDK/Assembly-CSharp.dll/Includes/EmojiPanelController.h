#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EmojiPanelController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EmojiPanelController"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& objectsToHide() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = EmojiSlotElement*> R& _emojiSlotPrefab() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = EmojiActionButton*> R& _emojiActionButtonPrefab() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& currentEmojiContainer() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& allEmojisContainer() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& puppetContainer() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = PuppetRendererController*> R& puppetRendererController() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& currentEmojiSlots() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = EmojiSlotElement*> R& allEmojisSlots() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& settingsButton() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& openButtonBage() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& openButtonBageText() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& settingsButtonBage() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& settingsButtonBageText() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = UIHotKeysManager*> R& _hotKeyManager() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = HUDWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = bool> R& _isSettings() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = bool> R& _isShown() {
		return *(R*)((uintptr_t)this + 0x99);
	}
	template <typename R = Il2CppArray<EmojiSlotElement*>*> R& _slots() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	 Il2CppDictionary<Il2CppString*, EmojiActionButton*>*& _emojiButtons() {
		return *(Il2CppDictionary<Il2CppString*, EmojiActionButton*>**)((uintptr_t)this + 0xA8);
	}
	template <typename R = EmojiActionButton*> R& _currentSelected() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = Il2CppString*> R& _hudEmojiPanelTag() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	 Action1<bool>*& _onSwitchSettings() {
		return *(Action1<bool>**)((uintptr_t)this + 0xC0);
	}
	 Il2CppDictionary<Il2CppString*, bool>*& _availableCosmetics() {
		return *(Il2CppDictionary<Il2CppString*, bool>**)((uintptr_t)this + 0xC8);
	}
	template <typename R = bool> R& _changedArmings() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& _armingEmojis() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	 Nullable1<int32_t>*& _newCount() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0xE0);
	}
	 Nullable1<bool>*& _firstBanner() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0xE8);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(EmojiPanelController*))(Il2CppBase() + 0x136C8D8))(this);
	}
	template <typename R = void> R Bind(HUDWindow* window, Action1<bool>* onSwitchSettings) {
		return ((R (*)(EmojiPanelController*, HUDWindow*, Action1<bool>*))(Il2CppBase() + 0x136C974))(this, window, onSwitchSettings);
	}
	template <typename R = void> R UpdateInput(float deltaTime) {
		return ((R (*)(EmojiPanelController*, float))(Il2CppBase() + 0x136D0A4))(this, deltaTime);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(EmojiPanelController*, float))(Il2CppBase() + 0x136D4B4))(this, deltaTime);
	}
	template <typename R = void> R SwitchShowState(bool isShown) {
		return ((R (*)(EmojiPanelController*, bool))(Il2CppBase() + 0x136DDCC))(this, isShown);
	}
	template <typename R = void> R SwitchShowState_1() {
		return ((R (*)(EmojiPanelController*))(Il2CppBase() + 0x136D13C))(this);
	}
	template <typename R = void> R SwitchSettingsState() {
		return ((R (*)(EmojiPanelController*))(Il2CppBase() + 0x136E570))(this);
	}
	template <typename R = void> R SendEmojisData() {
		return ((R (*)(EmojiPanelController*))(Il2CppBase() + 0x136E9DC))(this);
	}
	template <typename R = void> R CreateEmojiButtons() {
		return ((R (*)(EmojiPanelController*))(Il2CppBase() + 0x136CAC4))(this);
	}
	template <typename R = void> R OrderAndShowButtons() {
		return ((R (*)(EmojiPanelController*))(Il2CppBase() + 0x136DDE8))(this);
	}
	template <typename R = void> R UpdateSlotActiveState() {
		return ((R (*)(EmojiPanelController*))(Il2CppBase() + 0x136EB18))(this);
	}
	template <typename R = void> R SortNonActiveEmojis() {
		return ((R (*)(EmojiPanelController*))(Il2CppBase() + 0x136F050))(this);
	}
	template <typename R = void> R ShowEmoji(EmojiActionButton* actionButton) {
		return ((R (*)(EmojiPanelController*, EmojiActionButton*))(Il2CppBase() + 0x136F2B4))(this, actionButton);
	}
	template <typename R = void> R EmojiChangedSlot(EmojiActionButton* actionButton, EmojiSlotElement* newSlot) {
		return ((R (*)(EmojiPanelController*, EmojiActionButton*, EmojiSlotElement*))(Il2CppBase() + 0x136F740))(this, actionButton, newSlot);
	}
	template <typename R = void> R CreateEmojiButtonsb__36_0(EmojiActionButton* b) {
		return ((R (*)(EmojiPanelController*, EmojiActionButton*))(Il2CppBase() + 0x136F9E4))(this, b);
	}
	template <typename R = void> R CreateEmojiButtonsb__36_1(EmojiActionButton* b) {
		return ((R (*)(EmojiPanelController*, EmojiActionButton*))(Il2CppBase() + 0x136FA08))(this, b);
	}

};

