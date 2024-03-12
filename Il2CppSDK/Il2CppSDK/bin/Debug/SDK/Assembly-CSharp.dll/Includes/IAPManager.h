#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAPManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAPManager"));
	}

	template <typename T = uintptr_t> T& m_Controller() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_AppleExtensions() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_GooglePlayStoreExtensions() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_TransactionHistoryExtensions() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_IsGooglePlayStoreSelected() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_IsLoggedIn() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& _isPurchaseInProgress() {
		return *(T*)((uintptr_t)this + 0x3A);
	}
	template <typename T = void*> T& _callback() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& _onPlatformStoreFail() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& _pendingPurchases() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _stub_products() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& OnInitialize() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& Builder() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E38744))(0);
	}
	template <typename T = void> T add_OnInitialize(uintptr_t value) {
		return ((T (*)(IAPManager*, uintptr_t))(Il2CppBase() + 0x1E3881C))(this, value);
	}
	template <typename T = void> T remove_OnInitialize(uintptr_t value) {
		return ((T (*)(IAPManager*, uintptr_t))(Il2CppBase() + 0x1E388BC))(this, value);
	}
	template <typename T = uintptr_t> T get_Builder() {
		return ((T (*)(IAPManager*))(Il2CppBase() + 0x1E3895C))(this);
	}
	template <typename T = void> T set_Builder(uintptr_t value) {
		return ((T (*)(IAPManager*, uintptr_t))(Il2CppBase() + 0x1E38964))(this, value);
	}
	template <typename T = uintptr_t> T get__logger() {
		return ((T (*)(IAPManager*))(Il2CppBase() + 0x1E3896C))(this);
	}
	template <typename T = bool> T get_IsInitialized() {
		return ((T (*)(IAPManager*))(Il2CppBase() + 0x1E389B8))(this);
	}
	template <typename T = bool> T get_IsPurchaseInProgress() {
		return ((T (*)(IAPManager*))(Il2CppBase() + 0x1E389C8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(IAPManager*))(Il2CppBase() + 0x1E389D0))(this);
	}
	template <typename T = uintptr_t> T GetProduct(Il2CppString* withId) {
		return ((T (*)(IAPManager*, Il2CppString*))(Il2CppBase() + 0x1E39438))(this, withId);
	}
	template <typename T = Il2CppString*> T GetProductPrice(Il2CppString* productId) {
		return ((T (*)(IAPManager*, Il2CppString*))(Il2CppBase() + 0x1E39760))(this, productId);
	}
	template <typename T = void> T BuyProduct(uintptr_t entity, void* callback, void* onPlatformStoreFail) {
		return ((T (*)(IAPManager*, uintptr_t, void*, void*))(Il2CppBase() + 0x1E39A2C))(this, entity, callback, onPlatformStoreFail);
	}
	template <typename T = void> T ProcessPendingPurchases() {
		return ((T (*)(IAPManager*))(Il2CppBase() + 0x1E3A35C))(this);
	}
	template <typename T = void> T OnInitialized(uintptr_t controller, uintptr_t extensions) {
		return ((T (*)(IAPManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E3A988))(this, controller, extensions);
	}
	template <typename T = void> T OnInitializeFailed(uintptr_t error) {
		return ((T (*)(IAPManager*, uintptr_t))(Il2CppBase() + 0x1E3AC24))(this, error);
	}
	template <typename T = void> T OnInitializeFailed_1(uintptr_t error, Il2CppString* message) {
		return ((T (*)(IAPManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1E3AC78))(this, error, message);
	}
	template <typename T = uintptr_t> T ProcessPurchase(uintptr_t e) {
		return ((T (*)(IAPManager*, uintptr_t))(Il2CppBase() + 0x1E3A488))(this, e);
	}
	template <typename T = void> T OnPurchaseFailed(uintptr_t item, uintptr_t r) {
		return ((T (*)(IAPManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E3B3BC))(this, item, r);
	}
	template <typename T = void> T OnProductValidated(uintptr_t world, uintptr_t transaction) {
		return ((T (*)(IAPManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E3B96C))(this, world, transaction);
	}
	template <typename T = bool> T ValidateLocal(uintptr_t e) {
		return ((T (*)(IAPManager*, uintptr_t))(Il2CppBase() + 0x1E3AE34))(this, e);
	}

};

}
