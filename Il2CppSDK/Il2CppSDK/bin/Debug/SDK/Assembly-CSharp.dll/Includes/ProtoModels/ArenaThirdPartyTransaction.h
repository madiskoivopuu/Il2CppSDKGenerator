#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaThirdPartyTransaction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaThirdPartyTransaction"));
	}

	template <typename T = MessageParser1ArenaThirdPartyTransaction*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PayloadFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& payload_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& TransactionIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& transactionID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& PurchaseTokenFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& purchaseToken_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ShopFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = PurchaseProvider*> T& shop_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& ProductIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& productID_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& MessageIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& messageID_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& StoreExpFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& storeExp_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& USDPriceFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& uSDPrice_() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = MessageParser1ArenaThirdPartyTransaction*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xF445B8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xF4461C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF4473C))(this);
	}
	template <typename T = ArenaThirdPartyTransaction*> T Clone() {
		return ((T (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF448AC))(this);
	}
	template <typename T = Il2CppString*> T get_Payload() {
		return ((T (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF44908))(this);
	}
	template <typename T = void> T set_Payload(Il2CppString* value) {
		return ((T (*)(ArenaThirdPartyTransaction*, Il2CppString*))(Il2CppBase() + 0xF44910))(this, value);
	}
	template <typename T = Il2CppString*> T get_TransactionID() {
		return ((T (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF44990))(this);
	}
	template <typename T = void> T set_TransactionID(Il2CppString* value) {
		return ((T (*)(ArenaThirdPartyTransaction*, Il2CppString*))(Il2CppBase() + 0xF44998))(this, value);
	}
	template <typename T = Il2CppString*> T get_PurchaseToken() {
		return ((T (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF44A18))(this);
	}
	template <typename T = void> T set_PurchaseToken(Il2CppString* value) {
		return ((T (*)(ArenaThirdPartyTransaction*, Il2CppString*))(Il2CppBase() + 0xF44A20))(this, value);
	}
	template <typename T = PurchaseProvider*> T get_Shop() {
		return ((T (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF44AA0))(this);
	}
	template <typename T = void> T set_Shop(PurchaseProvider* value) {
		return ((T (*)(ArenaThirdPartyTransaction*, PurchaseProvider*))(Il2CppBase() + 0xF44AA8))(this, value);
	}
	template <typename T = Il2CppString*> T get_ProductID() {
		return ((T (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF44AB0))(this);
	}
	template <typename T = void> T set_ProductID(Il2CppString* value) {
		return ((T (*)(ArenaThirdPartyTransaction*, Il2CppString*))(Il2CppBase() + 0xF44AB8))(this, value);
	}
	template <typename T = int64_t> T get_MessageID() {
		return ((T (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF44B38))(this);
	}
	template <typename T = void> T set_MessageID(int64_t value) {
		return ((T (*)(ArenaThirdPartyTransaction*, int64_t))(Il2CppBase() + 0xF44B40))(this, value);
	}
	template <typename T = int32_t> T get_StoreExp() {
		return ((T (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF44B48))(this);
	}
	template <typename T = void> T set_StoreExp(int32_t value) {
		return ((T (*)(ArenaThirdPartyTransaction*, int32_t))(Il2CppBase() + 0xF44B50))(this, value);
	}
	template <typename T = int32_t> T get_USDPrice() {
		return ((T (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF44B58))(this);
	}
	template <typename T = void> T set_USDPrice(int32_t value) {
		return ((T (*)(ArenaThirdPartyTransaction*, int32_t))(Il2CppBase() + 0xF44B60))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaThirdPartyTransaction*, Il2CppObject*))(Il2CppBase() + 0xF44B68))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaThirdPartyTransaction* other) {
		return ((T (*)(ArenaThirdPartyTransaction*, ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF44BD8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF44CA4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF44DD4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaThirdPartyTransaction*, uintptr_t))(Il2CppBase() + 0xF44E38))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF44FE4))(this);
	}
	template <typename T = void> T MergeFrom(ArenaThirdPartyTransaction* other) {
		return ((T (*)(ArenaThirdPartyTransaction*, ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF45234))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaThirdPartyTransaction*, uintptr_t))(Il2CppBase() + 0xF452EC))(this, input);
	}

};

}
