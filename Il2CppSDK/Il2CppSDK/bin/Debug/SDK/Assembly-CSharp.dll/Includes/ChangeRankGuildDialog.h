#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class ChangeRankGuildDialog : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeRankGuildDialog"));
	}

	template <typename T = uintptr_t> T& CaptionText() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& CancelButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SaveButton() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LeaderToggle() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& OfficerToggle() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& SoldierToggle() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& NoviceToggle() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& LeaderRankDescription() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& OfficerRankDescription() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& SoldierRankDescription() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& NoviceRankDescription() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = GuildRole*> T& _selectedRole() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(ChangeRankGuildDialog*))(Il2CppBase() + 0x13EAC4C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ChangeRankGuildDialog*))(Il2CppBase() + 0x13EAEE4))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ChangeRankGuildDialog*))(Il2CppBase() + 0x13EAF40))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ChangeRankGuildDialog*))(Il2CppBase() + 0x13EB1A0))(this);
	}
	template <typename T = void> T OnLeaderToggleValueChanged(bool isOn) {
		return ((T (*)(ChangeRankGuildDialog*, bool))(Il2CppBase() + 0x13EB24C))(this, isOn);
	}
	template <typename T = void> T OnOfficerToggleValueChanged(bool isOn) {
		return ((T (*)(ChangeRankGuildDialog*, bool))(Il2CppBase() + 0x13EB2D4))(this, isOn);
	}
	template <typename T = void> T OnSoldierToggleValueChanged(bool isOn) {
		return ((T (*)(ChangeRankGuildDialog*, bool))(Il2CppBase() + 0x13EB35C))(this, isOn);
	}
	template <typename T = void> T OnNoviceToggleValueChanged(bool isOn) {
		return ((T (*)(ChangeRankGuildDialog*, bool))(Il2CppBase() + 0x13EB3E4))(this, isOn);
	}
	template <typename T = void> T OnSaveButtonPressed() {
		return ((T (*)(ChangeRankGuildDialog*))(Il2CppBase() + 0x13EB46C))(this);
	}
	template <typename T = void> T OnSaveButtonPressedb__21_0(int32_t i) {
		return ((T (*)(ChangeRankGuildDialog*, int32_t))(Il2CppBase() + 0x13EB9BC))(this, i);
	}

};

