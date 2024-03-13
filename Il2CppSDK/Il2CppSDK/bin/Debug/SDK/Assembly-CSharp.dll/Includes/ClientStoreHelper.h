#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientStoreHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientStoreHelper"));
	}


	template <typename T = bool> static T HasFreePriceInCategory(StoreCategory* category) {
		return ((T (*)(void *, StoreCategory*))(Il2CppBase() + 0xE1DA60))(0, category);
	}
	template <typename T = Il2CppList<ValueTuple2Store2Entity*, Store2DataEntity*>*>*> static T GetStoreProductsForCategory(StoreCategory* category) {
		return ((T (*)(void *, StoreCategory*))(Il2CppBase() + 0xE1DF60))(0, category);
	}
	template <typename T = void> static T FillStoreProductsForCategory(StoreCategory* category, Il2CppList<ValueTuple2Store2Entity*, Store2DataEntity*>*>* result) {
		return ((T (*)(void *, StoreCategory*, Il2CppList<ValueTuple2Store2Entity*, Store2DataEntity*>*>*))(Il2CppBase() + 0xE1DBF4))(0, category, result);
	}
	template <typename T = Store2DataEntity*> static T GetStoreDataWithBlueprint(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0xE1E350))(0, name);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetTooltipForItem(Store2DataEntity* entity) {
		return ((T (*)(void *, Store2DataEntity*))(Il2CppBase() + 0xE1E5F4))(0, entity);
	}
	template <typename T = Il2CppString*> static T GetDescriptionCaption(Store2DataContext* context, Il2CppString* name) {
		return ((T (*)(void *, Store2DataContext*, Il2CppString*))(Il2CppBase() + 0xE1E838))(0, context, name);
	}
	template <typename T = Il2CppString*> static T GetDescriptionText(Store2DataEntity* entity) {
		return ((T (*)(void *, Store2DataEntity*))(Il2CppBase() + 0xE1E7B0))(0, entity);
	}
	template <typename T = Il2CppString*> static T GetIconName(Store2DataContext* context, Il2CppString* name) {
		return ((T (*)(void *, Store2DataContext*, Il2CppString*))(Il2CppBase() + 0xE1E8E0))(0, context, name);
	}
	template <typename T = Il2CppList<ValueTuple2Store2Entity*, Store2DataEntity*>*>*> static T PrioritizeOrderedProducts(Il2CppList<ValueTuple2Store2Entity*, Store2DataEntity*>*>* orderedProducts, Il2CppString* selectedCategory, StoreFillingType* fillingType) {
		return ((T (*)(void *, Il2CppList<ValueTuple2Store2Entity*, Store2DataEntity*>*>*, Il2CppString*, StoreFillingType*))(Il2CppBase() + 0xE1E980))(0, orderedProducts, selectedCategory, fillingType);
	}
	template <typename T = int32_t> static T GetCategoryPriority(Store2DataEntity* storeData, Il2CppString* category) {
		return ((T (*)(void *, Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0xE1F0EC))(0, storeData, category);
	}
	template <typename T = Il2CppList<Resource*>*> static T GetUnlockedResources(Store2Entity* product) {
		return ((T (*)(void *, Store2Entity*))(Il2CppBase() + 0xE1F20C))(0, product);
	}
	template <typename T = void> static T ShowProduct(int64_t storeId, StoreCategory* category) {
		return ((T (*)(void *, int64_t, StoreCategory*))(Il2CppBase() + 0xE1F4EC))(0, storeId, category);
	}
	template <typename T = void> static T ShowProduct_1(int64_t storeId, Category* category) {
		return ((T (*)(void *, int64_t, Category*))(Il2CppBase() + 0xE1F7C4))(0, storeId, category);
	}
	template <typename T = void> static T BuyProduct(int64_t productStoreId, Price* price, Action1int32_t>* onSuccess, Action2PurchaseError*, int32_t>* onFail) {
		return ((T (*)(void *, int64_t, Price*, Action1int32_t>*, Action2PurchaseError*, int32_t>*))(Il2CppBase() + 0xE1FE34))(0, productStoreId, price, onSuccess, onFail);
	}
	template <typename T = void> static T PurchaseWithCurrency(int64_t productStoreId, Price* price, Action1int32_t>* onSuccess, Action2PurchaseError*, int32_t>* onFail) {
		return ((T (*)(void *, int64_t, Price*, Action1int32_t>*, Action2PurchaseError*, int32_t>*))(Il2CppBase() + 0xE20328))(0, productStoreId, price, onSuccess, onFail);
	}
	template <typename T = void> static T PurchaseWithItem(int64_t productStoreId, Price* price, Action1int32_t>* onSuccess, Action2PurchaseError*, int32_t>* onFail) {
		return ((T (*)(void *, int64_t, Price*, Action1int32_t>*, Action2PurchaseError*, int32_t>*))(Il2CppBase() + 0xE20A30))(0, productStoreId, price, onSuccess, onFail);
	}
	template <typename T = void> static T PurchaseWithIAP(int64_t storeId, Price* price, Action1int32_t>* onSuccess, Action2PurchaseError*, int32_t>* onFail) {
		return ((T (*)(void *, int64_t, Price*, Action1int32_t>*, Action2PurchaseError*, int32_t>*))(Il2CppBase() + 0xE2127C))(0, storeId, price, onSuccess, onFail);
	}
	template <typename T = bool> static T FillStoreProductsForCategoryg__isAvailable|2_0(Store2Entity* e) {
		return ((T (*)(void *, Store2Entity*))(Il2CppBase() + 0xE1DFDC))(0, e);
	}
	template <typename T = bool> static T FillStoreProductsForCategoryg__isEnoughCount|2_1(Store2Entity* e) {
		return ((T (*)(void *, Store2Entity*))(Il2CppBase() + 0xE1E1AC))(0, e);
	}
	template <typename T = void> static T PurchaseWithIAPg__tryToReinitializeGooglePlay|16_4(uintptr_t onSuccessReinit, uintptr_t onFailReinit) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xE21818))(0, onSuccessReinit, onFailReinit);
	}

};

