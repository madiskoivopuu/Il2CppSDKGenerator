#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace AdvancedCheats {

class AdvancedCheatHelpers
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "AdvancedCheats", "AdvancedCheatHelpers"));
	}

	template <typename R = bool> static R& ShowPowerRating() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> static R& ShowPvpGroup() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename R = bool> static R& ShowPointsName() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x2);
	}
	template <typename R = bool> static R& DoubleSend() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x3);
	}

	template <typename R = bool> static R get_ShowPowerRating() {
		return ((R (*)(void *))(Il2CppBase() + 0x1299D6C))(0);
	}
	template <typename R = void> static R set_ShowPowerRating(bool value) {
		return ((R (*)(void *, bool))(Il2CppBase() + 0x1299DB8))(0, value);
	}
	template <typename R = bool> static R get_ShowPvpGroup() {
		return ((R (*)(void *))(Il2CppBase() + 0x1299E0C))(0);
	}
	template <typename R = void> static R set_ShowPvpGroup(bool value) {
		return ((R (*)(void *, bool))(Il2CppBase() + 0x1299E58))(0, value);
	}
	template <typename R = bool> static R get_ShowPointsName() {
		return ((R (*)(void *))(Il2CppBase() + 0x1299EAC))(0);
	}
	template <typename R = void> static R set_ShowPointsName(bool value) {
		return ((R (*)(void *, bool))(Il2CppBase() + 0x1299EF8))(0, value);
	}
	template <typename R = bool> static R get_DoubleSend() {
		return ((R (*)(void *))(Il2CppBase() + 0x1299F4C))(0);
	}
	template <typename R = void> static R set_DoubleSend(bool value) {
		return ((R (*)(void *, bool))(Il2CppBase() + 0x1299F98))(0, value);
	}
	template <typename R = bool> static R IsTabCustom(Il2CppDictionary<Il2CppString*, TabInfo*>* dict, Il2CppString* tabName) {
		return ((R (*)(void *, Il2CppDictionary<Il2CppString*, TabInfo*>*, Il2CppString*))(Il2CppBase() + 0x1299FEC))(0, dict, tabName);
	}
	template <typename R = bool> static R IsNeedToHideCheatView(CheatInfo* info, Il2CppString* filter) {
		return ((R (*)(void *, CheatInfo*, Il2CppString*))(Il2CppBase() + 0x129A07C))(0, info, filter);
	}
	template <typename R = void> static R Show(uintptr_t canvasGroup) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x129A134))(0, canvasGroup);
	}
	template <typename R = void> static R Hide(uintptr_t canvasGroup) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x129A180))(0, canvasGroup);
	}
	template <typename R = ButtonCheatInfo*> static R CreateItemCheatInfo(ItemEntity* item, uintptr_t countField, uintptr_t durabilityField, bool hideOnMap, bool hideOnArena) {
		return ((R (*)(void *, ItemEntity*, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x129A1CC))(0, item, countField, durabilityField, hideOnMap, hideOnArena);
	}
	template <typename R = ButtonCheatInfo*> static R CreateSpawnCheatInfo(GameDataEntity* spawn, bool hideOnMap, bool hideOnArena) {
		return ((R (*)(void *, GameDataEntity*, bool, bool))(Il2CppBase() + 0x129A4E0))(0, spawn, hideOnMap, hideOnArena);
	}
	template <typename R = ButtonCheatInfo*> static R CreateQuestCheatInfo(QuestDataEntity* questData, uintptr_t countField, bool hideOnMap, bool hideOnArena) {
		return ((R (*)(void *, QuestDataEntity*, uintptr_t, bool, bool))(Il2CppBase() + 0x129A784))(0, questData, countField, hideOnMap, hideOnArena);
	}
	template <typename R = ButtonCheatInfo*> static R CreateMagicToggleCheatInfo(Il2CppString* cheatName, Il2CppString* magicName, bool hideOnMap, bool hideOnArena) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x129AA3C))(0, cheatName, magicName, hideOnMap, hideOnArena);
	}
	template <typename R = ButtonCheatInfo*> static R CreateMagicCheatInfo(MagicDataEntity* magicData, uintptr_t countField, bool hideOnMap, bool hideOnArena) {
		return ((R (*)(void *, MagicDataEntity*, uintptr_t, bool, bool))(Il2CppBase() + 0x129ACB0))(0, magicData, countField, hideOnMap, hideOnArena);
	}
	template <typename R = ButtonCheatInfo*> static R CreateCurrencyCheatInfo(uintptr_t countField, CurrencyType* type, bool hideOnMap, bool hideOnArena) {
		return ((R (*)(void *, uintptr_t, CurrencyType*, bool, bool))(Il2CppBase() + 0x129AE64))(0, countField, type, hideOnMap, hideOnArena);
	}
	template <typename R = ButtonCheatInfo*> static R CreateCustomCheatInfo(Il2CppString* cheatName, uintptr_t action, Action1Il2CppString*>* actionWithParameter, Il2CppString* iconName, bool hideOnMap, bool hideOnArena, Func2Il2CppString*, Il2CppString*>* captionGetter) {
		return ((R (*)(void *, Il2CppString*, uintptr_t, Action1Il2CppString*>*, Il2CppString*, bool, bool, Func2Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x129B224))(0, cheatName, action, actionWithParameter, iconName, hideOnMap, hideOnArena, captionGetter);
	}
	template <typename R = ButtonCheatInfo*> static R CreateCustomItemCheatInfo(Il2CppString* blueprint, int32_t count, bool hideOnMap, bool hideOnArena) {
		return ((R (*)(void *, Il2CppString*, int32_t, bool, bool))(Il2CppBase() + 0x129B33C))(0, blueprint, count, hideOnMap, hideOnArena);
	}
	template <typename R = ButtonCheatInfo*> static R CreateCustomItemSetCheatInfo(Il2CppList<ItemInfo*>* items, Il2CppString* cheatName, Il2CppString* iconName, bool hideOnMap, bool hideOnArena) {
		return ((R (*)(void *, Il2CppList<ItemInfo*>*, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x129B724))(0, items, cheatName, iconName, hideOnMap, hideOnArena);
	}
	template <typename R = ToggleCheatInfo*> static R CreateToggleCheatInfo(Il2CppString* cheatName, Func1bool>* getter, Action1bool>* setter, bool hideOnMap, bool hideOnArena) {
		return ((R (*)(void *, Il2CppString*, Func1bool>*, Action1bool>*, bool, bool))(Il2CppBase() + 0x129B88C))(0, cheatName, getter, setter, hideOnMap, hideOnArena);
	}

};

}
