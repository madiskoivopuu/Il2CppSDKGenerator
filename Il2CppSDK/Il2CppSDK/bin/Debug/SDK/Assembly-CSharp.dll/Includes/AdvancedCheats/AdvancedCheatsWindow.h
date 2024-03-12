#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "../UIWindow`1" 
namespace AdvancedCheats {

class AdvancedCheatsWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "AdvancedCheatsWindow"));
	}

	template <typename T = uintptr_t> T& container() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& tabsRoot() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& tabViewPrefab() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& buttonCheatViewPrefab() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& toggleCheatViewPrefab() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& cellPrefab() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& filterInputField() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& countInputField() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& durabilityInputField() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& debugText() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& fps() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& mouseRaycast() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& recyclableScrollRect() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& HideShowUI() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& HideCheatsUI() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& DebugRunOnOff() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& mountsConstructorRoot() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& controlsRoot() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& scrollRoot() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& addMountButton() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& mountSkillsFilter() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& mountsPool() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& skill1Pool() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& skill2Pool() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& skill3Pool() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& cheatsHistoryPool() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& randomGroupTest() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& eventsTimersView() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& petsConstructionView() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& recordMacrosButton() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& customTabs() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tabs() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& tabsDict() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& activeCheats() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppVector2> T& UIResolutionNormal() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = Il2CppVector2> T& UIResolution4k() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = Il2CppString*> T& selectedTab() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = bool> T& isFilterChanged() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& skillsCache() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& dataCache() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = bool> T& isDebugRunOn() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = bool> static T& CheatUIHided() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T get_CheatUIHided() {
		return ((T (*)(void *))(Il2CppBase() + 0x129B950))(0);
	}
	template <typename T = void> static T set_CheatUIHided(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x129B99C))(0, value);
	}
	template <typename T = uintptr_t> T get_OnInitialize() {
		return ((T (*)(AdvancedCheatsWindow*))(Il2CppBase() + 0x129B9F0))(this);
	}
	template <typename T = int32_t> T GetItemCount() {
		return ((T (*)(AdvancedCheatsWindow*))(Il2CppBase() + 0x129B9F8))(this);
	}
	template <typename T = void> T SetCell(uintptr_t cell, int32_t index) {
		return ((T (*)(AdvancedCheatsWindow*, uintptr_t, int32_t))(Il2CppBase() + 0x129BA00))(this, cell, index);
	}
	template <typename T = uintptr_t> T StartSpam(uintptr_t action, int32_t count, float delaySecond, int32_t countInPack) {
		return ((T (*)(AdvancedCheatsWindow*, uintptr_t, int32_t, float, int32_t))(Il2CppBase() + 0x129BA04))(this, action, count, delaySecond, countInPack);
	}

};

}
