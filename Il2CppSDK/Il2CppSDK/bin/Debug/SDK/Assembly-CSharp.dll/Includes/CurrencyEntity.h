#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CurrencyEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrencyEntity"));
	}

	template <typename T = uintptr_t> static T& battlePassCurrencyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& globalTourneyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& resetOnSeasonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CurrencyEntity*))(Il2CppBase() + 0x1BCFD98))(this);
	}
	template <typename T = bool> T get_isBattlePassCurrency() {
		return ((T (*)(CurrencyEntity*))(Il2CppBase() + 0x1BCFEA0))(this);
	}
	template <typename T = void> T set_isBattlePassCurrency(bool value) {
		return ((T (*)(CurrencyEntity*, bool))(Il2CppBase() + 0x1BCFEAC))(this, value);
	}
	template <typename T = uintptr_t> T get_blueprint() {
		return ((T (*)(CurrencyEntity*))(Il2CppBase() + 0x1BCFE18))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(CurrencyEntity*))(Il2CppBase() + 0x1BCFE0C))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(CurrencyEntity*, Il2CppString*))(Il2CppBase() + 0x1BCFFC8))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(CurrencyEntity*, Il2CppString*))(Il2CppBase() + 0x1BD00DC))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD01F0))(this);
	}
	template <typename T = uintptr_t> T get_currencyType() {
		return ((T (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD01FC))(this);
	}
	template <typename T = bool> T get_hasCurrencyType() {
		return ((T (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD0284))(this);
	}
	template <typename T = void> T AddCurrencyType(uintptr_t newType) {
		return ((T (*)(CurrencyEntity*, uintptr_t))(Il2CppBase() + 0x1BD0290))(this, newType);
	}
	template <typename T = void> T ReplaceCurrencyType(uintptr_t newType) {
		return ((T (*)(CurrencyEntity*, uintptr_t))(Il2CppBase() + 0x1BD0394))(this, newType);
	}
	template <typename T = void> T RemoveCurrencyType() {
		return ((T (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD0498))(this);
	}
	template <typename T = bool> T get_isGlobalTourney() {
		return ((T (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD04A4))(this);
	}
	template <typename T = void> T set_isGlobalTourney(bool value) {
		return ((T (*)(CurrencyEntity*, bool))(Il2CppBase() + 0x1BD04B0))(this, value);
	}
	template <typename T = uintptr_t> T get_items() {
		return ((T (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD05C8))(this);
	}
	template <typename T = bool> T get_hasItems() {
		return ((T (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD0650))(this);
	}
	template <typename T = void> T AddItems(Il2CppString* newInbox, Il2CppString* newInstant, Il2CppString* newWithdrawal) {
		return ((T (*)(CurrencyEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1BD065C))(this, newInbox, newInstant, newWithdrawal);
	}
	template <typename T = void> T ReplaceItems(Il2CppString* newInbox, Il2CppString* newInstant, Il2CppString* newWithdrawal) {
		return ((T (*)(CurrencyEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1BD07A0))(this, newInbox, newInstant, newWithdrawal);
	}
	template <typename T = void> T RemoveItems() {
		return ((T (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD08E4))(this);
	}
	template <typename T = uintptr_t> T get_limited() {
		return ((T (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD08F0))(this);
	}
	template <typename T = bool> T get_hasLimited() {
		return ((T (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD0978))(this);
	}
	template <typename T = void> T AddLimited(void* newMin, void* newMax) {
		return ((T (*)(CurrencyEntity*, void*, void*))(Il2CppBase() + 0x1BD0984))(this, newMin, newMax);
	}
	template <typename T = void> T ReplaceLimited(void* newMin, void* newMax) {
		return ((T (*)(CurrencyEntity*, void*, void*))(Il2CppBase() + 0x1BD0A8C))(this, newMin, newMax);
	}
	template <typename T = void> T RemoveLimited() {
		return ((T (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD0B94))(this);
	}
	template <typename T = uintptr_t> T get_oldBlueprint() {
		return ((T (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD0BA0))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD0C28))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(CurrencyEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1BD0C34))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(CurrencyEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1BD0D48))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD0E5C))(this);
	}
	template <typename T = bool> T get_isResetOnSeason() {
		return ((T (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD0E68))(this);
	}
	template <typename T = void> T set_isResetOnSeason(bool value) {
		return ((T (*)(CurrencyEntity*, bool))(Il2CppBase() + 0x1BD0E74))(this, value);
	}

};

}
