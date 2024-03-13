#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CurrencyHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrencyHelper"));
	}

	template <typename T = int32_t> static T& CartCurrenciesCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& FontanelCurrencies() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _allCurrencies() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T get_AllCurrencies() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BD56CC))(0);
	}
	template <typename T = ItemEntity*> static T GetCurrencyItem(CurrencyType* currencyType, ICommonContexts* contexts) {
		return ((T (*)(void *, CurrencyType*, ICommonContexts*))(Il2CppBase() + 0x1BD583C))(0, currencyType, contexts);
	}
	template <typename T = Il2CppString*> static T GetCurrencyIconMini(CurrencyType* currencyType, ICommonContexts* contexts) {
		return ((T (*)(void *, CurrencyType*, ICommonContexts*))(Il2CppBase() + 0x1BD2E84))(0, currencyType, contexts);
	}
	template <typename T = int32_t> static T GetCurrencyCount(uintptr_t entity, CurrencyType* currency) {
		return ((T (*)(void *, uintptr_t, CurrencyType*))(Il2CppBase() + 0x0))(0, entity, currency);
	}
	template <typename T = int32_t> static T GetCurrencyCount_1(PlayerEntity* entity, CurrencyType* currency) {
		return ((T (*)(void *, PlayerEntity*, CurrencyType*))(Il2CppBase() + 0x1BD5900))(0, entity, currency);
	}
	template <typename T = bool> static T HasCurrency(uintptr_t entity, CurrencyType* currency) {
		return ((T (*)(void *, uintptr_t, CurrencyType*))(Il2CppBase() + 0x0))(0, entity, currency);
	}
	template <typename T = bool> static T HasAnyCurrency(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, entity);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetCurrencyTypes(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, entity);
	}
	template <typename T = Nullable1CurrencyType*>*> static T GetCurrencyType(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, entity);
	}
	template <typename T = Nullable1CurrencyType*>*> static T GetCurrencyTypeByAny(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, entity);
	}
	template <typename T = void> static T SetCurrency(uintptr_t entity, CurrencyType* currency, int32_t count) {
		return ((T (*)(void *, uintptr_t, CurrencyType*, int32_t))(Il2CppBase() + 0x0))(0, entity, currency, count);
	}

};

