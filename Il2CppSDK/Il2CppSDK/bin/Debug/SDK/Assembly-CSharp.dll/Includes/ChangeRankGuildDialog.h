#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ChangeRankGuildDialog : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeRankGuildDialog"));
	}

	template <typename R = uintptr_t> R& CaptionText() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& CancelButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& SaveButton() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& LeaderToggle() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& OfficerToggle() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& SoldierToggle() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& NoviceToggle() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& LeaderRankDescription() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& OfficerRankDescription() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& SoldierRankDescription() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& NoviceRankDescription() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = GuildRole> R& _selectedRole() {
		return *(R*)((uintptr_t)this + 0xD0);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(ChangeRankGuildDialog*))(Il2CppBase() + 0x13EAC4C))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(ChangeRankGuildDialog*))(Il2CppBase() + 0x13EAEE4))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(ChangeRankGuildDialog*))(Il2CppBase() + 0x13EAF40))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(ChangeRankGuildDialog*))(Il2CppBase() + 0x13EB1A0))(this);
	}
	template <typename R = void> R OnLeaderToggleValueChanged(bool isOn) {
		return ((R (*)(ChangeRankGuildDialog*, bool))(Il2CppBase() + 0x13EB24C))(this, isOn);
	}
	template <typename R = void> R OnOfficerToggleValueChanged(bool isOn) {
		return ((R (*)(ChangeRankGuildDialog*, bool))(Il2CppBase() + 0x13EB2D4))(this, isOn);
	}
	template <typename R = void> R OnSoldierToggleValueChanged(bool isOn) {
		return ((R (*)(ChangeRankGuildDialog*, bool))(Il2CppBase() + 0x13EB35C))(this, isOn);
	}
	template <typename R = void> R OnNoviceToggleValueChanged(bool isOn) {
		return ((R (*)(ChangeRankGuildDialog*, bool))(Il2CppBase() + 0x13EB3E4))(this, isOn);
	}
	template <typename R = void> R OnSaveButtonPressed() {
		return ((R (*)(ChangeRankGuildDialog*))(Il2CppBase() + 0x13EB46C))(this);
	}
	template <typename R = void> R OnSaveButtonPressedb__21_0(int32_t i) {
		return ((R (*)(ChangeRankGuildDialog*, int32_t))(Il2CppBase() + 0x13EB9BC))(this, i);
	}

};

