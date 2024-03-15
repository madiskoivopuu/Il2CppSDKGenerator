#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../UIWindow1.h" 
namespace AdvancedCheats {

class AdvancedCheatsWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "AdvancedCheatsWindow"));
	}

	template <typename R = uintptr_t> R& container() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& tabsRoot() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = AdvancedCheats::TabView*> R& tabViewPrefab() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = AdvancedCheats::ButtonCheatView*> R& buttonCheatViewPrefab() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = AdvancedCheats::ToggleCheatView*> R& toggleCheatViewPrefab() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = AdvancedCheats::GridCell*> R& cellPrefab() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& filterInputField() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& countInputField() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& durabilityInputField() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& debugText() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& fps() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& mouseRaycast() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = PolyAndCodeUI::RecyclableScrollRect*> R& recyclableScrollRect() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = uintptr_t> R& HideShowUI() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = uintptr_t> R& HideCheatsUI() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = StandartButton*> R& DebugRunOnOff() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = uintptr_t> R& mountsConstructorRoot() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& controlsRoot() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& scrollRoot() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = uintptr_t> R& addMountButton() {
		return *(R*)((uintptr_t)this + 0x110);
	}
	template <typename R = uintptr_t> R& mountSkillsFilter() {
		return *(R*)((uintptr_t)this + 0x118);
	}
	template <typename R = MountConstructorViewPool*> R& mountsPool() {
		return *(R*)((uintptr_t)this + 0x120);
	}
	template <typename R = MountConstructorViewPool*> R& skill1Pool() {
		return *(R*)((uintptr_t)this + 0x128);
	}
	template <typename R = MountConstructorViewPool*> R& skill2Pool() {
		return *(R*)((uintptr_t)this + 0x130);
	}
	template <typename R = MountConstructorViewPool*> R& skill3Pool() {
		return *(R*)((uintptr_t)this + 0x138);
	}
	template <typename R = HistoryEntryPool*> R& cheatsHistoryPool() {
		return *(R*)((uintptr_t)this + 0x140);
	}
	template <typename R = AdvancedCheats::RandomGroupTest*> R& randomGroupTest() {
		return *(R*)((uintptr_t)this + 0x148);
	}
	template <typename R = EventsTimersView*> R& eventsTimersView() {
		return *(R*)((uintptr_t)this + 0x150);
	}
	template <typename R = AdvancedCheats::PetsConstructionView*> R& petsConstructionView() {
		return *(R*)((uintptr_t)this + 0x158);
	}
	template <typename R = uintptr_t> R& recordMacrosButton() {
		return *(R*)((uintptr_t)this + 0x160);
	}
	template <typename R = TabsDictionary*> R& customTabs() {
		return *(R*)((uintptr_t)this + 0x168);
	}
	 Il2CppList<AdvancedCheats::TabView*>*& tabs() {
		return *(Il2CppList<AdvancedCheats::TabView*>**)((uintptr_t)this + 0x170);
	}
	 Il2CppDictionary<Il2CppString*, TabInfo*>*& tabsDict() {
		return *(Il2CppDictionary<Il2CppString*, TabInfo*>**)((uintptr_t)this + 0x178);
	}
	 Il2CppList<CheatInfo*>*& activeCheats() {
		return *(Il2CppList<CheatInfo*>**)((uintptr_t)this + 0x180);
	}
	template <typename R = uintptr_t> R& UIResolutionNormal() {
		return *(R*)((uintptr_t)this + 0x188);
	}
	template <typename R = uintptr_t> R& UIResolution4k() {
		return *(R*)((uintptr_t)this + 0x190);
	}
	template <typename R = Il2CppString*> R& selectedTab() {
		return *(R*)((uintptr_t)this + 0x198);
	}
	template <typename R = bool> R& isFilterChanged() {
		return *(R*)((uintptr_t)this + 0x1A0);
	}
	 Il2CppList<ItemEntity*>*& skillsCache() {
		return *(Il2CppList<ItemEntity*>**)((uintptr_t)this + 0x1A8);
	}
	 Il2CppList<Data*>*& dataCache() {
		return *(Il2CppList<Data*>**)((uintptr_t)this + 0x1B0);
	}
	template <typename R = bool> R& isDebugRunOn() {
		return *(R*)((uintptr_t)this + 0x1B8);
	}
	template <typename R = bool> static R& CheatUIHided() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = bool> static R get_CheatUIHided() {
		return ((R (*)(void *))(Il2CppBase() + 0x129B950))(0);
	}
	template <typename R = void> static R set_CheatUIHided(bool value) {
		return ((R (*)(void *, bool))(Il2CppBase() + 0x129B99C))(0, value);
	}
	template <typename R = uintptr_t> R get_OnInitialize() {
		return ((R (*)(AdvancedCheatsWindow*))(Il2CppBase() + 0x129B9F0))(this);
	}
	template <typename R = int32_t> R GetItemCount() {
		return ((R (*)(AdvancedCheatsWindow*))(Il2CppBase() + 0x129B9F8))(this);
	}
	template <typename R = void> R SetCell(PolyAndCodeUI::ICell* cell, int32_t index) {
		return ((R (*)(AdvancedCheatsWindow*, PolyAndCodeUI::ICell*, int32_t))(Il2CppBase() + 0x129BA00))(this, cell, index);
	}
	template <typename R = uintptr_t> R StartSpam(uintptr_t action, int32_t count, float delaySecond, int32_t countInPack) {
		return ((R (*)(AdvancedCheatsWindow*, uintptr_t, int32_t, float, int32_t))(Il2CppBase() + 0x129BA04))(this, action, count, delaySecond, countInPack);
	}

};

}
