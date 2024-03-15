#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAPManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAPManager"));
	}

	template <typename R = uintptr_t> R& m_Controller() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& m_AppleExtensions() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& m_GooglePlayStoreExtensions() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& m_TransactionHistoryExtensions() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& m_IsGooglePlayStoreSelected() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& m_IsLoggedIn() {
		return *(R*)((uintptr_t)this + 0x39);
	}
	template <typename R = IAPManager*> static R& _instance() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& _isPurchaseInProgress() {
		return *(R*)((uintptr_t)this + 0x3A);
	}
	 Action1<TransactionEntity*>*& _callback() {
		return *(Action1<TransactionEntity*>**)((uintptr_t)this + 0x40);
	}
	 Action1<uintptr_t>*& _onPlatformStoreFail() {
		return *(Action1<uintptr_t>**)((uintptr_t)this + 0x48);
	}
	 Queue1<uintptr_t>*& _pendingPurchases() {
		return *(Queue1<uintptr_t>**)((uintptr_t)this + 0x50);
	}
	 Il2CppDictionary<Il2CppString*, StubProduct>*& _stub_products() {
		return *(Il2CppDictionary<Il2CppString*, StubProduct>**)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& OnInitialize() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& Builder() {
		return *(R*)((uintptr_t)this + 0x68);
	}

	template <typename R = IAPManager*> static R get_Instance() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E38744))(0);
	}
	template <typename R = void> R add_OnInitialize(uintptr_t value) {
		return ((R (*)(IAPManager*, uintptr_t))(Il2CppBase() + 0x1E3881C))(this, value);
	}
	template <typename R = void> R remove_OnInitialize(uintptr_t value) {
		return ((R (*)(IAPManager*, uintptr_t))(Il2CppBase() + 0x1E388BC))(this, value);
	}
	template <typename R = uintptr_t> R get_Builder() {
		return ((R (*)(IAPManager*))(Il2CppBase() + 0x1E3895C))(this);
	}
	template <typename R = void> R set_Builder(uintptr_t value) {
		return ((R (*)(IAPManager*, uintptr_t))(Il2CppBase() + 0x1E38964))(this, value);
	}
	template <typename R = ICommonLogger*> R get__logger() {
		return ((R (*)(IAPManager*))(Il2CppBase() + 0x1E3896C))(this);
	}
	template <typename R = bool> R get_IsInitialized() {
		return ((R (*)(IAPManager*))(Il2CppBase() + 0x1E389B8))(this);
	}
	template <typename R = bool> R get_IsPurchaseInProgress() {
		return ((R (*)(IAPManager*))(Il2CppBase() + 0x1E389C8))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(IAPManager*))(Il2CppBase() + 0x1E389D0))(this);
	}
	template <typename R = uintptr_t> R GetProduct(Il2CppString* withId) {
		return ((R (*)(IAPManager*, Il2CppString*))(Il2CppBase() + 0x1E39438))(this, withId);
	}
	template <typename R = Il2CppString*> R GetProductPrice(Il2CppString* productId) {
		return ((R (*)(IAPManager*, Il2CppString*))(Il2CppBase() + 0x1E39760))(this, productId);
	}
	template <typename R = void> R BuyProduct(Store2DataEntity* entity, Action1<TransactionEntity*>* callback, Action1<uintptr_t>* onPlatformStoreFail) {
		return ((R (*)(IAPManager*, Store2DataEntity*, Action1<TransactionEntity*>*, Action1<uintptr_t>*))(Il2CppBase() + 0x1E39A2C))(this, entity, callback, onPlatformStoreFail);
	}
	template <typename R = void> R ProcessPendingPurchases() {
		return ((R (*)(IAPManager*))(Il2CppBase() + 0x1E3A35C))(this);
	}
	template <typename R = void> R OnInitialized(uintptr_t controller, uintptr_t extensions) {
		return ((R (*)(IAPManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E3A988))(this, controller, extensions);
	}
	template <typename R = void> R OnInitializeFailed(uintptr_t error) {
		return ((R (*)(IAPManager*, uintptr_t))(Il2CppBase() + 0x1E3AC24))(this, error);
	}
	template <typename R = void> R OnInitializeFailed_1(uintptr_t error, Il2CppString* message) {
		return ((R (*)(IAPManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1E3AC78))(this, error, message);
	}
	template <typename R = uintptr_t> R ProcessPurchase(uintptr_t e) {
		return ((R (*)(IAPManager*, uintptr_t))(Il2CppBase() + 0x1E3A488))(this, e);
	}
	template <typename R = void> R OnPurchaseFailed(uintptr_t item, uintptr_t r) {
		return ((R (*)(IAPManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E3B3BC))(this, item, r);
	}
	template <typename R = void> R OnProductValidated(BaseClientWorld* world, TransactionEntity* transaction) {
		return ((R (*)(IAPManager*, BaseClientWorld*, TransactionEntity*))(Il2CppBase() + 0x1E3B96C))(this, world, transaction);
	}
	template <typename R = bool> R ValidateLocal(uintptr_t e) {
		return ((R (*)(IAPManager*, uintptr_t))(Il2CppBase() + 0x1E3AE34))(this, e);
	}

};

