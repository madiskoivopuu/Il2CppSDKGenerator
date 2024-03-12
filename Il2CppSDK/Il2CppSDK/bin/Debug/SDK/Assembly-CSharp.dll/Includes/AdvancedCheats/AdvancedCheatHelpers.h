#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AdvancedCheats {

class AdvancedCheatHelpers
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "AdvancedCheatHelpers"));
	}

	template <typename T = bool> static T& ShowPowerRating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& ShowPvpGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = bool> static T& ShowPointsName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2);
	}
	template <typename T = bool> static T& DoubleSend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3);
	}

	template <typename T = bool> static T get_ShowPowerRating() {
		return ((T (*)(void *))(Il2CppBase() + 0x1299D6C))(0);
	}
	template <typename T = void> static T set_ShowPowerRating(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1299DB8))(0, value);
	}
	template <typename T = bool> static T get_ShowPvpGroup() {
		return ((T (*)(void *))(Il2CppBase() + 0x1299E0C))(0);
	}
	template <typename T = void> static T set_ShowPvpGroup(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1299E58))(0, value);
	}
	template <typename T = bool> static T get_ShowPointsName() {
		return ((T (*)(void *))(Il2CppBase() + 0x1299EAC))(0);
	}
	template <typename T = void> static T set_ShowPointsName(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1299EF8))(0, value);
	}
	template <typename T = bool> static T get_DoubleSend() {
		return ((T (*)(void *))(Il2CppBase() + 0x1299F4C))(0);
	}
	template <typename T = void> static T set_DoubleSend(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x1299F98))(0, value);
	}
	template <typename T = bool> static T IsTabCustom(Il2CppDictionary<Il2CppString*, uintptr_t>* dict, Il2CppString* tabName) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x1299FEC))(0, dict, tabName);
	}
	template <typename T = bool> static T IsNeedToHideCheatView(uintptr_t info, Il2CppString* filter) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x129A07C))(0, info, filter);
	}
	template <typename T = void> static T Show(uintptr_t canvasGroup) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x129A134))(0, canvasGroup);
	}
	template <typename T = void> static T Hide(uintptr_t canvasGroup) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x129A180))(0, canvasGroup);
	}
	template <typename T = uintptr_t> static T CreateItemCheatInfo(uintptr_t item, uintptr_t countField, uintptr_t durabilityField, bool hideOnMap, bool hideOnArena) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x129A1CC))(0, item, countField, durabilityField, hideOnMap, hideOnArena);
	}
	template <typename T = uintptr_t> static T CreateSpawnCheatInfo(uintptr_t spawn, bool hideOnMap, bool hideOnArena) {
		return ((T (*)(void *, uintptr_t, bool, bool))(Il2CppBase() + 0x129A4E0))(0, spawn, hideOnMap, hideOnArena);
	}
	template <typename T = uintptr_t> static T CreateQuestCheatInfo(uintptr_t questData, uintptr_t countField, bool hideOnMap, bool hideOnArena) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x129A784))(0, questData, countField, hideOnMap, hideOnArena);
	}
	template <typename T = uintptr_t> static T CreateMagicToggleCheatInfo(Il2CppString* cheatName, Il2CppString* magicName, bool hideOnMap, bool hideOnArena) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x129AA3C))(0, cheatName, magicName, hideOnMap, hideOnArena);
	}
	template <typename T = uintptr_t> static T CreateMagicCheatInfo(uintptr_t magicData, uintptr_t countField, bool hideOnMap, bool hideOnArena) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x129ACB0))(0, magicData, countField, hideOnMap, hideOnArena);
	}
	template <typename T = uintptr_t> static T CreateCurrencyCheatInfo(uintptr_t countField, uintptr_t type, bool hideOnMap, bool hideOnArena) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x129AE64))(0, countField, type, hideOnMap, hideOnArena);
	}
	template <typename T = uintptr_t> static T CreateCustomCheatInfo(Il2CppString* cheatName, uintptr_t action, void* actionWithParameter, Il2CppString* iconName, bool hideOnMap, bool hideOnArena, void* captionGetter) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, void*, Il2CppString*, bool, bool, void*))(Il2CppBase() + 0x129B224))(0, cheatName, action, actionWithParameter, iconName, hideOnMap, hideOnArena, captionGetter);
	}
	template <typename T = uintptr_t> static T CreateCustomItemCheatInfo(Il2CppString* blueprint, int32_t count, bool hideOnMap, bool hideOnArena) {
		return ((T (*)(void *, Il2CppString*, int32_t, bool, bool))(Il2CppBase() + 0x129B33C))(0, blueprint, count, hideOnMap, hideOnArena);
	}
	template <typename T = uintptr_t> static T CreateCustomItemSetCheatInfo(Il2CppList<uintptr_t>* items, Il2CppString* cheatName, Il2CppString* iconName, bool hideOnMap, bool hideOnArena) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x129B724))(0, items, cheatName, iconName, hideOnMap, hideOnArena);
	}
	template <typename T = uintptr_t> static T CreateToggleCheatInfo(Il2CppString* cheatName, void* getter, void* setter, bool hideOnMap, bool hideOnArena) {
		return ((T (*)(void *, Il2CppString*, void*, void*, bool, bool))(Il2CppBase() + 0x129B88C))(0, cheatName, getter, setter, hideOnMap, hideOnArena);
	}

};

}
