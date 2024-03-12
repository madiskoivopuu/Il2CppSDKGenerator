#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassesMenu
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassesMenu"));
	}

	template <typename T = bool> T& _showOnHold() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _avatarClassBtn() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _avatarClassIcon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _avatarClassRarityImage() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _closeClassMenuButton() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _settingsClassMenuButton() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _buttonPrefab() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _emptyPanel() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _buttons() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _selectedClass() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& _className() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _hudWindow() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _manager() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _hotKeyManager() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& _playerClassMenuTag() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& _isCheckerInited() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& OnPlayerClassMenuOpen() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = bool> T get_IsOpen() {
		return ((T (*)(PlayerClassesMenu*))(Il2CppBase() + 0x1B7588C))(this);
	}
	template <typename T = void> T Bind(uintptr_t hudWindow, uintptr_t onPlayerClassMenuOpen) {
		return ((T (*)(PlayerClassesMenu*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B758B0))(this, hudWindow, onPlayerClassMenuOpen);
	}
	template <typename T = void> T InitClassSwitchButton() {
		return ((T (*)(PlayerClassesMenu*))(Il2CppBase() + 0x1B75AF8))(this);
	}
	template <typename T = void> T ShowClassesMenu(bool show, Il2CppArray<uintptr_t>* classes) {
		return ((T (*)(PlayerClassesMenu*, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B75E0C))(this, show, classes);
	}
	template <typename T = bool> T ShowSelectedClasses(Il2CppArray<uintptr_t>* classes) {
		return ((T (*)(PlayerClassesMenu*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B75EC8))(this, classes);
	}
	template <typename T = void> T OnSelected(uintptr_t btn) {
		return ((T (*)(PlayerClassesMenu*, uintptr_t))(Il2CppBase() + 0x1B76520))(this, btn);
	}
	template <typename T = void> T OnDeselectedEvent(uintptr_t btn) {
		return ((T (*)(PlayerClassesMenu*, uintptr_t))(Il2CppBase() + 0x1B7694C))(this, btn);
	}
	template <typename T = void> T OnSelectClassEvent(uintptr_t classEntity) {
		return ((T (*)(PlayerClassesMenu*, uintptr_t))(Il2CppBase() + 0x1B76568))(this, classEntity);
	}
	template <typename T = void> T UpdateDraw(float deltaTime) {
		return ((T (*)(PlayerClassesMenu*, float))(Il2CppBase() + 0x1B7699C))(this, deltaTime);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(PlayerClassesMenu*, float))(Il2CppBase() + 0x1B76DD0))(this, deltaTime);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(PlayerClassesMenu*))(Il2CppBase() + 0x1B76E78))(this);
	}
	template <typename T = void> T InitClassSwitchButtonb__20_3(uintptr_t d) {
		return ((T (*)(PlayerClassesMenu*, uintptr_t))(Il2CppBase() + 0x1B77190))(this, d);
	}
	template <typename T = void> T InitClassSwitchButtonb__20_4(uintptr_t d) {
		return ((T (*)(PlayerClassesMenu*, uintptr_t))(Il2CppBase() + 0x1B7719C))(this, d);
	}
	template <typename T = void> T InitClassSwitchButtonb__20_0() {
		return ((T (*)(PlayerClassesMenu*))(Il2CppBase() + 0x1B771A8))(this);
	}
	template <typename T = void> T InitClassSwitchButtonb__20_1() {
		return ((T (*)(PlayerClassesMenu*))(Il2CppBase() + 0x1B771EC))(this);
	}
	template <typename T = void> T InitClassSwitchButtonb__20_2() {
		return ((T (*)(PlayerClassesMenu*))(Il2CppBase() + 0x1B771F8))(this);
	}
	template <typename T = void> T InitClassSwitchButtonb__20_5(Il2CppArray<uintptr_t>* classes) {
		return ((T (*)(PlayerClassesMenu*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1B772A4))(this, classes);
	}

};

}
