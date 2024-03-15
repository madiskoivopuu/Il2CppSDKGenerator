#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CurrencyHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrencyHelper"));
	}

	template <typename R = int32_t> static R& CartCurrenciesCount() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppArray<CurrencyType>*> static R& FontanelCurrencies() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppArray<CurrencyType>*> static R& _allCurrencies() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename R = Il2CppArray<CurrencyType>*> static R get_AllCurrencies() {
		return ((R (*)(void *))(Il2CppBase() + 0x1BD56CC))(0);
	}
	template <typename R = ItemEntity*> static R GetCurrencyItem(CurrencyType currencyType, ICommonContexts* contexts) {
		return ((R (*)(void *, CurrencyType, ICommonContexts*))(Il2CppBase() + 0x1BD583C))(0, currencyType, contexts);
	}
	template <typename R = Il2CppString*> static R GetCurrencyIconMini(CurrencyType currencyType, ICommonContexts* contexts) {
		return ((R (*)(void *, CurrencyType, ICommonContexts*))(Il2CppBase() + 0x1BD2E84))(0, currencyType, contexts);
	}
	template <typename R = int32_t> static R GetCurrencyCount(uintptr_t entity, CurrencyType currency) {
		return ((R (*)(void *, uintptr_t, CurrencyType))(Il2CppBase() + 0x0))(0, entity, currency);
	}
	template <typename R = int32_t> static R GetCurrencyCount_1(PlayerEntity* entity, CurrencyType currency) {
		return ((R (*)(void *, PlayerEntity*, CurrencyType))(Il2CppBase() + 0x1BD5900))(0, entity, currency);
	}
	template <typename R = bool> static R HasCurrency(uintptr_t entity, CurrencyType currency) {
		return ((R (*)(void *, uintptr_t, CurrencyType))(Il2CppBase() + 0x0))(0, entity, currency);
	}
	template <typename R = bool> static R HasAnyCurrency(uintptr_t entity) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, entity);
	}
	template <typename R = Il2CppArray<CurrencyType>*> static R GetCurrencyTypes(uintptr_t entity) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, entity);
	}
	 static Nullable1<CurrencyType>* GetCurrencyType(uintptr_t entity) {
		return ((Nullable1<CurrencyType>* (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, entity);
	}
	 static Nullable1<CurrencyType>* GetCurrencyTypeByAny(uintptr_t entity) {
		return ((Nullable1<CurrencyType>* (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, entity);
	}
	template <typename R = void> static R SetCurrency(uintptr_t entity, CurrencyType currency, int32_t count) {
		return ((R (*)(void *, uintptr_t, CurrencyType, int32_t))(Il2CppBase() + 0x0))(0, entity, currency, count);
	}

};

