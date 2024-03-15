#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientStoreHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientStoreHelper"));
	}


	template <typename R = bool> static R HasFreePriceInCategory(StoreCategory category) {
		return ((R (*)(void *, StoreCategory))(Il2CppBase() + 0xE1DA60))(0, category);
	}
	 static Il2CppList<ValueTuple2<Store2Entity*, Store2DataEntity*>*>* GetStoreProductsForCategory(StoreCategory category) {
		return ((Il2CppList<ValueTuple2<Store2Entity*, Store2DataEntity*>*>* (*)(void *, StoreCategory))(Il2CppBase() + 0xE1DF60))(0, category);
	}
	template <typename R = void> static R FillStoreProductsForCategory(StoreCategory category, Il2CppList<ValueTuple2<Store2Entity*, Store2DataEntity*>*>* result) {
		return ((R (*)(void *, StoreCategory, Il2CppList<ValueTuple2<Store2Entity*, Store2DataEntity*>*>*))(Il2CppBase() + 0xE1DBF4))(0, category, result);
	}
	template <typename R = Store2DataEntity*> static R GetStoreDataWithBlueprint(Il2CppString* name) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0xE1E350))(0, name);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> static R GetTooltipForItem(Store2DataEntity* entity) {
		return ((R (*)(void *, Store2DataEntity*))(Il2CppBase() + 0xE1E5F4))(0, entity);
	}
	template <typename R = Il2CppString*> static R GetDescriptionCaption(Store2DataContext* context, Il2CppString* name) {
		return ((R (*)(void *, Store2DataContext*, Il2CppString*))(Il2CppBase() + 0xE1E838))(0, context, name);
	}
	template <typename R = Il2CppString*> static R GetDescriptionText(Store2DataEntity* entity) {
		return ((R (*)(void *, Store2DataEntity*))(Il2CppBase() + 0xE1E7B0))(0, entity);
	}
	template <typename R = Il2CppString*> static R GetIconName(Store2DataContext* context, Il2CppString* name) {
		return ((R (*)(void *, Store2DataContext*, Il2CppString*))(Il2CppBase() + 0xE1E8E0))(0, context, name);
	}
	 static Il2CppList<ValueTuple2<Store2Entity*, Store2DataEntity*>*>* PrioritizeOrderedProducts(Il2CppList<ValueTuple2<Store2Entity*, Store2DataEntity*>*>* orderedProducts, Il2CppString* selectedCategory, StoreFillingType fillingType) {
		return ((Il2CppList<ValueTuple2<Store2Entity*, Store2DataEntity*>*>* (*)(void *, Il2CppList<ValueTuple2<Store2Entity*, Store2DataEntity*>*>*, Il2CppString*, StoreFillingType))(Il2CppBase() + 0xE1E980))(0, orderedProducts, selectedCategory, fillingType);
	}
	template <typename R = int32_t> static R GetCategoryPriority(Store2DataEntity* storeData, Il2CppString* category) {
		return ((R (*)(void *, Store2DataEntity*, Il2CppString*))(Il2CppBase() + 0xE1F0EC))(0, storeData, category);
	}
	 static Il2CppList<Resource>* GetUnlockedResources(Store2Entity* product) {
		return ((Il2CppList<Resource>* (*)(void *, Store2Entity*))(Il2CppBase() + 0xE1F20C))(0, product);
	}
	template <typename R = void> static R ShowProduct(int64_t storeId, StoreCategory category) {
		return ((R (*)(void *, int64_t, StoreCategory))(Il2CppBase() + 0xE1F4EC))(0, storeId, category);
	}
	template <typename R = void> static R ShowProduct_1(int64_t storeId, Category category) {
		return ((R (*)(void *, int64_t, Category))(Il2CppBase() + 0xE1F7C4))(0, storeId, category);
	}
	template <typename R = void> static R BuyProduct(int64_t productStoreId, Price price, Action1<int32_t>* onSuccess, Action2<PurchaseError, int32_t>* onFail) {
		return ((R (*)(void *, int64_t, Price, Action1<int32_t>*, Action2<PurchaseError, int32_t>*))(Il2CppBase() + 0xE1FE34))(0, productStoreId, price, onSuccess, onFail);
	}
	template <typename R = void> static R PurchaseWithCurrency(int64_t productStoreId, Price price, Action1<int32_t>* onSuccess, Action2<PurchaseError, int32_t>* onFail) {
		return ((R (*)(void *, int64_t, Price, Action1<int32_t>*, Action2<PurchaseError, int32_t>*))(Il2CppBase() + 0xE20328))(0, productStoreId, price, onSuccess, onFail);
	}
	template <typename R = void> static R PurchaseWithItem(int64_t productStoreId, Price price, Action1<int32_t>* onSuccess, Action2<PurchaseError, int32_t>* onFail) {
		return ((R (*)(void *, int64_t, Price, Action1<int32_t>*, Action2<PurchaseError, int32_t>*))(Il2CppBase() + 0xE20A30))(0, productStoreId, price, onSuccess, onFail);
	}
	template <typename R = void> static R PurchaseWithIAP(int64_t storeId, Price price, Action1<int32_t>* onSuccess, Action2<PurchaseError, int32_t>* onFail) {
		return ((R (*)(void *, int64_t, Price, Action1<int32_t>*, Action2<PurchaseError, int32_t>*))(Il2CppBase() + 0xE2127C))(0, storeId, price, onSuccess, onFail);
	}
	template <typename R = bool> static R FillStoreProductsForCategoryg__isAvailable|2_0(Store2Entity* e) {
		return ((R (*)(void *, Store2Entity*))(Il2CppBase() + 0xE1DFDC))(0, e);
	}
	template <typename R = bool> static R FillStoreProductsForCategoryg__isEnoughCount|2_1(Store2Entity* e) {
		return ((R (*)(void *, Store2Entity*))(Il2CppBase() + 0xE1E1AC))(0, e);
	}
	template <typename R = void> static R PurchaseWithIAPg__tryToReinitializeGooglePlay|16_4(uintptr_t onSuccessReinit, uintptr_t onFailReinit) {
		return ((R (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xE21818))(0, onSuccessReinit, onFailReinit);
	}

};

