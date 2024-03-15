#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassesMenu
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassesMenu"));
	}

	template <typename R = bool> R& _showOnHold() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _avatarClassBtn() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _avatarClassIcon() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _avatarClassRarityImage() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _closeClassMenuButton() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _settingsClassMenuButton() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = PlayerClassMenuBtn*> R& _buttonPrefab() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _emptyPanel() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	 Il2CppList<PlayerClassMenuBtn*>*& _buttons() {
		return *(Il2CppList<PlayerClassMenuBtn*>**)((uintptr_t)this + 0x58);
	}
	template <typename R = ItemEntity*> R& _selectedClass() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = Il2CppString*> R& _className() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = IHUDWindow*> R& _hudWindow() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = UIWindowsManager*> R& _manager() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = UIHotKeysManager*> R& _hotKeyManager() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = Il2CppString*> R& _playerClassMenuTag() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = bool> R& _isCheckerInited() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& OnPlayerClassMenuOpen() {
		return *(R*)((uintptr_t)this + 0x98);
	}

	template <typename R = bool> R get_IsOpen() {
		return ((R (*)(PlayerClassesMenu*))(Il2CppBase() + 0x1B7588C))(this);
	}
	template <typename R = void> R Bind(IHUDWindow* hudWindow, uintptr_t onPlayerClassMenuOpen) {
		return ((R (*)(PlayerClassesMenu*, IHUDWindow*, uintptr_t))(Il2CppBase() + 0x1B758B0))(this, hudWindow, onPlayerClassMenuOpen);
	}
	template <typename R = void> R InitClassSwitchButton() {
		return ((R (*)(PlayerClassesMenu*))(Il2CppBase() + 0x1B75AF8))(this);
	}
	template <typename R = void> R ShowClassesMenu(bool show, Il2CppArray<Il2CppString*>* classes) {
		return ((R (*)(PlayerClassesMenu*, bool, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1B75E0C))(this, show, classes);
	}
	template <typename R = bool> R ShowSelectedClasses(Il2CppArray<Il2CppString*>* classes) {
		return ((R (*)(PlayerClassesMenu*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1B75EC8))(this, classes);
	}
	template <typename R = void> R OnSelected(PlayerClassMenuBtn* btn) {
		return ((R (*)(PlayerClassesMenu*, PlayerClassMenuBtn*))(Il2CppBase() + 0x1B76520))(this, btn);
	}
	template <typename R = void> R OnDeselectedEvent(PlayerClassMenuBtn* btn) {
		return ((R (*)(PlayerClassesMenu*, PlayerClassMenuBtn*))(Il2CppBase() + 0x1B7694C))(this, btn);
	}
	template <typename R = void> R OnSelectClassEvent(ItemEntity* classEntity) {
		return ((R (*)(PlayerClassesMenu*, ItemEntity*))(Il2CppBase() + 0x1B76568))(this, classEntity);
	}
	template <typename R = void> R UpdateDraw(float deltaTime) {
		return ((R (*)(PlayerClassesMenu*, float))(Il2CppBase() + 0x1B7699C))(this, deltaTime);
	}
	template <typename R = void> R OnUpdateInput(float deltaTime) {
		return ((R (*)(PlayerClassesMenu*, float))(Il2CppBase() + 0x1B76DD0))(this, deltaTime);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(PlayerClassesMenu*))(Il2CppBase() + 0x1B76E78))(this);
	}
	template <typename R = void> R InitClassSwitchButtonb__20_3(uintptr_t d) {
		return ((R (*)(PlayerClassesMenu*, uintptr_t))(Il2CppBase() + 0x1B77190))(this, d);
	}
	template <typename R = void> R InitClassSwitchButtonb__20_4(uintptr_t d) {
		return ((R (*)(PlayerClassesMenu*, uintptr_t))(Il2CppBase() + 0x1B7719C))(this, d);
	}
	template <typename R = void> R InitClassSwitchButtonb__20_0() {
		return ((R (*)(PlayerClassesMenu*))(Il2CppBase() + 0x1B771A8))(this);
	}
	template <typename R = void> R InitClassSwitchButtonb__20_1() {
		return ((R (*)(PlayerClassesMenu*))(Il2CppBase() + 0x1B771EC))(this);
	}
	template <typename R = void> R InitClassSwitchButtonb__20_2() {
		return ((R (*)(PlayerClassesMenu*))(Il2CppBase() + 0x1B771F8))(this);
	}
	template <typename R = void> R InitClassSwitchButtonb__20_5(Il2CppArray<Il2CppString*>* classes) {
		return ((R (*)(PlayerClassesMenu*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1B772A4))(this, classes);
	}

};

