#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EmojiPanelController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EmojiPanelController"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& objectsToHide() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = EmojiSlotElement*> T& _emojiSlotPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = EmojiActionButton*> T& _emojiActionButtonPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& currentEmojiContainer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& allEmojisContainer() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& puppetContainer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = PuppetRendererController*> T& puppetRendererController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& currentEmojiSlots() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = EmojiSlotElement*> T& allEmojisSlots() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& settingsButton() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& openButtonBage() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& openButtonBageText() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& settingsButtonBage() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& settingsButtonBageText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = UIHotKeysManager*> T& _hotKeyManager() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = HUDWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& _isSettings() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& _isShown() {
		return *(T*)((uintptr_t)this + 0x99);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _slots() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, EmojiActionButton*>*> T& _emojiButtons() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = EmojiActionButton*> T& _currentSelected() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& _hudEmojiPanelTag() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Action1bool>*> T& _onSwitchSettings() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, bool>*> T& _availableCosmetics() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& _changedArmings() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _armingEmojis() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Nullable1int32_t>*> T& _newCount() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Nullable1bool>*> T& _firstBanner() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EmojiPanelController*))(Il2CppBase() + 0x136C8D8))(this);
	}
	template <typename T = void> T Bind(HUDWindow* window, Action1bool>* onSwitchSettings) {
		return ((T (*)(EmojiPanelController*, HUDWindow*, Action1bool>*))(Il2CppBase() + 0x136C974))(this, window, onSwitchSettings);
	}
	template <typename T = void> T UpdateInput(float deltaTime) {
		return ((T (*)(EmojiPanelController*, float))(Il2CppBase() + 0x136D0A4))(this, deltaTime);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(EmojiPanelController*, float))(Il2CppBase() + 0x136D4B4))(this, deltaTime);
	}
	template <typename T = void> T SwitchShowState(bool isShown) {
		return ((T (*)(EmojiPanelController*, bool))(Il2CppBase() + 0x136DDCC))(this, isShown);
	}
	template <typename T = void> T SwitchShowState_1() {
		return ((T (*)(EmojiPanelController*))(Il2CppBase() + 0x136D13C))(this);
	}
	template <typename T = void> T SwitchSettingsState() {
		return ((T (*)(EmojiPanelController*))(Il2CppBase() + 0x136E570))(this);
	}
	template <typename T = void> T SendEmojisData() {
		return ((T (*)(EmojiPanelController*))(Il2CppBase() + 0x136E9DC))(this);
	}
	template <typename T = void> T CreateEmojiButtons() {
		return ((T (*)(EmojiPanelController*))(Il2CppBase() + 0x136CAC4))(this);
	}
	template <typename T = void> T OrderAndShowButtons() {
		return ((T (*)(EmojiPanelController*))(Il2CppBase() + 0x136DDE8))(this);
	}
	template <typename T = void> T UpdateSlotActiveState() {
		return ((T (*)(EmojiPanelController*))(Il2CppBase() + 0x136EB18))(this);
	}
	template <typename T = void> T SortNonActiveEmojis() {
		return ((T (*)(EmojiPanelController*))(Il2CppBase() + 0x136F050))(this);
	}
	template <typename T = void> T ShowEmoji(EmojiActionButton* actionButton) {
		return ((T (*)(EmojiPanelController*, EmojiActionButton*))(Il2CppBase() + 0x136F2B4))(this, actionButton);
	}
	template <typename T = void> T EmojiChangedSlot(EmojiActionButton* actionButton, EmojiSlotElement* newSlot) {
		return ((T (*)(EmojiPanelController*, EmojiActionButton*, EmojiSlotElement*))(Il2CppBase() + 0x136F740))(this, actionButton, newSlot);
	}
	template <typename T = void> T CreateEmojiButtonsb__36_0(EmojiActionButton* b) {
		return ((T (*)(EmojiPanelController*, EmojiActionButton*))(Il2CppBase() + 0x136F9E4))(this, b);
	}
	template <typename T = void> T CreateEmojiButtonsb__36_1(EmojiActionButton* b) {
		return ((T (*)(EmojiPanelController*, EmojiActionButton*))(Il2CppBase() + 0x136FA08))(this, b);
	}

};

