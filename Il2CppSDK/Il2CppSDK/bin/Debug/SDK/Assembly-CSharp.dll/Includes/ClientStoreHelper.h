#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientStoreHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientStoreHelper"));
	}


	template <typename T = bool> static T HasFreePriceInCategory(uintptr_t category) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xE1DA60))(0, category);
	}
	template <typename T = Il2CppList<void*>*> static T GetStoreProductsForCategory(uintptr_t category) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xE1DF60))(0, category);
	}
	template <typename T = void> static T FillStoreProductsForCategory(uintptr_t category, Il2CppList<void*>* result) {
		return ((T (*)(void *, uintptr_t, Il2CppList<void*>*))(Il2CppBase() + 0xE1DBF4))(0, category, result);
	}
	template <typename T = uintptr_t> static T GetStoreDataWithBlueprint(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0xE1E350))(0, name);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetTooltipForItem(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xE1E5F4))(0, entity);
	}
	template <typename T = Il2CppString*> static T GetDescriptionCaption(uintptr_t context, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xE1E838))(0, context, name);
	}
	template <typename T = Il2CppString*> static T GetDescriptionText(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xE1E7B0))(0, entity);
	}
	template <typename T = Il2CppString*> static T GetIconName(uintptr_t context, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xE1E8E0))(0, context, name);
	}
	template <typename T = Il2CppList<void*>*> static T PrioritizeOrderedProducts(Il2CppList<void*>* orderedProducts, Il2CppString* selectedCategory, uintptr_t fillingType) {
		return ((T (*)(void *, Il2CppList<void*>*, Il2CppString*, uintptr_t))(Il2CppBase() + 0xE1E980))(0, orderedProducts, selectedCategory, fillingType);
	}
	template <typename T = int32_t> static T GetCategoryPriority(uintptr_t storeData, Il2CppString* category) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0xE1F0EC))(0, storeData, category);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetUnlockedResources(uintptr_t product) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xE1F20C))(0, product);
	}
	template <typename T = void> static T ShowProduct(int64_t storeId, uintptr_t category) {
		return ((T (*)(void *, int64_t, uintptr_t))(Il2CppBase() + 0xE1F4EC))(0, storeId, category);
	}
	template <typename T = void> static T ShowProduct_1(int64_t storeId, uintptr_t category) {
		return ((T (*)(void *, int64_t, uintptr_t))(Il2CppBase() + 0xE1F7C4))(0, storeId, category);
	}
	template <typename T = void> static T BuyProduct(int64_t productStoreId, uintptr_t price, void* onSuccess, void* onFail) {
		return ((T (*)(void *, int64_t, uintptr_t, void*, void*))(Il2CppBase() + 0xE1FE34))(0, productStoreId, price, onSuccess, onFail);
	}
	template <typename T = void> static T PurchaseWithCurrency(int64_t productStoreId, uintptr_t price, void* onSuccess, void* onFail) {
		return ((T (*)(void *, int64_t, uintptr_t, void*, void*))(Il2CppBase() + 0xE20328))(0, productStoreId, price, onSuccess, onFail);
	}
	template <typename T = void> static T PurchaseWithItem(int64_t productStoreId, uintptr_t price, void* onSuccess, void* onFail) {
		return ((T (*)(void *, int64_t, uintptr_t, void*, void*))(Il2CppBase() + 0xE20A30))(0, productStoreId, price, onSuccess, onFail);
	}
	template <typename T = void> static T PurchaseWithIAP(int64_t storeId, uintptr_t price, void* onSuccess, void* onFail) {
		return ((T (*)(void *, int64_t, uintptr_t, void*, void*))(Il2CppBase() + 0xE2127C))(0, storeId, price, onSuccess, onFail);
	}
	template <typename T = bool> static T FillStoreProductsForCategoryg__isAvailable|2_0(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xE1DFDC))(0, e);
	}
	template <typename T = bool> static T FillStoreProductsForCategoryg__isEnoughCount|2_1(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xE1E1AC))(0, e);
	}
	template <typename T = void> static T PurchaseWithIAPg__tryToReinitializeGooglePlay|16_4(uintptr_t onSuccessReinit, uintptr_t onFailReinit) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xE21818))(0, onSuccessReinit, onFailReinit);
	}

};

}
