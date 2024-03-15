#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CurrencyEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrencyEntity"));
	}

	template <typename R = BattlePassCurrencyComponent*> static R& battlePassCurrencyComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = GlobalTourneyComponent*> static R& globalTourneyComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = ResetOnSeasonComponent*> static R& resetOnSeasonComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(CurrencyEntity*))(Il2CppBase() + 0x1BCFD98))(this);
	}
	template <typename R = bool> R get_isBattlePassCurrency() {
		return ((R (*)(CurrencyEntity*))(Il2CppBase() + 0x1BCFEA0))(this);
	}
	template <typename R = void> R set_isBattlePassCurrency(bool value) {
		return ((R (*)(CurrencyEntity*, bool))(Il2CppBase() + 0x1BCFEAC))(this, value);
	}
	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(CurrencyEntity*))(Il2CppBase() + 0x1BCFE18))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(CurrencyEntity*))(Il2CppBase() + 0x1BCFE0C))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(CurrencyEntity*, Il2CppString*))(Il2CppBase() + 0x1BCFFC8))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(CurrencyEntity*, Il2CppString*))(Il2CppBase() + 0x1BD00DC))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD01F0))(this);
	}
	template <typename R = CurrencyTypeComponent*> R get_currencyType() {
		return ((R (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD01FC))(this);
	}
	template <typename R = bool> R get_hasCurrencyType() {
		return ((R (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD0284))(this);
	}
	template <typename R = void> R AddCurrencyType(CurrencyType* newType) {
		return ((R (*)(CurrencyEntity*, CurrencyType*))(Il2CppBase() + 0x1BD0290))(this, newType);
	}
	template <typename R = void> R ReplaceCurrencyType(CurrencyType* newType) {
		return ((R (*)(CurrencyEntity*, CurrencyType*))(Il2CppBase() + 0x1BD0394))(this, newType);
	}
	template <typename R = void> R RemoveCurrencyType() {
		return ((R (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD0498))(this);
	}
	template <typename R = bool> R get_isGlobalTourney() {
		return ((R (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD04A4))(this);
	}
	template <typename R = void> R set_isGlobalTourney(bool value) {
		return ((R (*)(CurrencyEntity*, bool))(Il2CppBase() + 0x1BD04B0))(this, value);
	}
	template <typename R = ItemsComponent*> R get_items() {
		return ((R (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD05C8))(this);
	}
	template <typename R = bool> R get_hasItems() {
		return ((R (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD0650))(this);
	}
	template <typename R = void> R AddItems(Il2CppString* newInbox, Il2CppString* newInstant, Il2CppString* newWithdrawal) {
		return ((R (*)(CurrencyEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1BD065C))(this, newInbox, newInstant, newWithdrawal);
	}
	template <typename R = void> R ReplaceItems(Il2CppString* newInbox, Il2CppString* newInstant, Il2CppString* newWithdrawal) {
		return ((R (*)(CurrencyEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1BD07A0))(this, newInbox, newInstant, newWithdrawal);
	}
	template <typename R = void> R RemoveItems() {
		return ((R (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD08E4))(this);
	}
	template <typename R = LimitedComponent*> R get_limited() {
		return ((R (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD08F0))(this);
	}
	template <typename R = bool> R get_hasLimited() {
		return ((R (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD0978))(this);
	}
	template <typename R = void> R AddLimited(Nullable1int32_t>* newMin, Nullable1int32_t>* newMax) {
		return ((R (*)(CurrencyEntity*, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x1BD0984))(this, newMin, newMax);
	}
	template <typename R = void> R ReplaceLimited(Nullable1int32_t>* newMin, Nullable1int32_t>* newMax) {
		return ((R (*)(CurrencyEntity*, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x1BD0A8C))(this, newMin, newMax);
	}
	template <typename R = void> R RemoveLimited() {
		return ((R (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD0B94))(this);
	}
	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD0BA0))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD0C28))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(CurrencyEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1BD0C34))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(CurrencyEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1BD0D48))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD0E5C))(this);
	}
	template <typename R = bool> R get_isResetOnSeason() {
		return ((R (*)(CurrencyEntity*))(Il2CppBase() + 0x1BD0E68))(this);
	}
	template <typename R = void> R set_isResetOnSeason(bool value) {
		return ((R (*)(CurrencyEntity*, bool))(Il2CppBase() + 0x1BD0E74))(this, value);
	}

};

