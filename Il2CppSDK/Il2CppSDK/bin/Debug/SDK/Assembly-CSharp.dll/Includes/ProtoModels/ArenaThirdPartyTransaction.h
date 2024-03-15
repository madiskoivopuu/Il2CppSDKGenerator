#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaThirdPartyTransaction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaThirdPartyTransaction"));
	}

	 static MessageParser1<ProtoModels::ArenaThirdPartyTransaction*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaThirdPartyTransaction*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& PayloadFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& payload_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& TransactionIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& transactionID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& PurchaseTokenFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& purchaseToken_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ShopFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::PurchaseProvider> R& shop_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& ProductIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& productID_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& MessageIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& messageID_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& StoreExpFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& storeExp_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& USDPriceFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& uSDPrice_() {
		return *(R*)((uintptr_t)this + 0x44);
	}

	 static MessageParser1<ProtoModels::ArenaThirdPartyTransaction*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaThirdPartyTransaction*>* (*)(void *))(Il2CppBase() + 0xF445B8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xF4461C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF4473C))(this);
	}
	template <typename R = ProtoModels::ArenaThirdPartyTransaction*> R Clone() {
		return ((R (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF448AC))(this);
	}
	template <typename R = Il2CppString*> R get_Payload() {
		return ((R (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF44908))(this);
	}
	template <typename R = void> R set_Payload(Il2CppString* value) {
		return ((R (*)(ArenaThirdPartyTransaction*, Il2CppString*))(Il2CppBase() + 0xF44910))(this, value);
	}
	template <typename R = Il2CppString*> R get_TransactionID() {
		return ((R (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF44990))(this);
	}
	template <typename R = void> R set_TransactionID(Il2CppString* value) {
		return ((R (*)(ArenaThirdPartyTransaction*, Il2CppString*))(Il2CppBase() + 0xF44998))(this, value);
	}
	template <typename R = Il2CppString*> R get_PurchaseToken() {
		return ((R (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF44A18))(this);
	}
	template <typename R = void> R set_PurchaseToken(Il2CppString* value) {
		return ((R (*)(ArenaThirdPartyTransaction*, Il2CppString*))(Il2CppBase() + 0xF44A20))(this, value);
	}
	template <typename R = ProtoModels::PurchaseProvider> R get_Shop() {
		return ((R (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF44AA0))(this);
	}
	template <typename R = void> R set_Shop(ProtoModels::PurchaseProvider value) {
		return ((R (*)(ArenaThirdPartyTransaction*, ProtoModels::PurchaseProvider))(Il2CppBase() + 0xF44AA8))(this, value);
	}
	template <typename R = Il2CppString*> R get_ProductID() {
		return ((R (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF44AB0))(this);
	}
	template <typename R = void> R set_ProductID(Il2CppString* value) {
		return ((R (*)(ArenaThirdPartyTransaction*, Il2CppString*))(Il2CppBase() + 0xF44AB8))(this, value);
	}
	template <typename R = int64_t> R get_MessageID() {
		return ((R (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF44B38))(this);
	}
	template <typename R = void> R set_MessageID(int64_t value) {
		return ((R (*)(ArenaThirdPartyTransaction*, int64_t))(Il2CppBase() + 0xF44B40))(this, value);
	}
	template <typename R = int32_t> R get_StoreExp() {
		return ((R (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF44B48))(this);
	}
	template <typename R = void> R set_StoreExp(int32_t value) {
		return ((R (*)(ArenaThirdPartyTransaction*, int32_t))(Il2CppBase() + 0xF44B50))(this, value);
	}
	template <typename R = int32_t> R get_USDPrice() {
		return ((R (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF44B58))(this);
	}
	template <typename R = void> R set_USDPrice(int32_t value) {
		return ((R (*)(ArenaThirdPartyTransaction*, int32_t))(Il2CppBase() + 0xF44B60))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaThirdPartyTransaction*, Il2CppObject*))(Il2CppBase() + 0xF44B68))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaThirdPartyTransaction* other) {
		return ((R (*)(ArenaThirdPartyTransaction*, ProtoModels::ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF44BD8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF44CA4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF44DD4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaThirdPartyTransaction*, uintptr_t))(Il2CppBase() + 0xF44E38))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF44FE4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaThirdPartyTransaction* other) {
		return ((R (*)(ArenaThirdPartyTransaction*, ProtoModels::ArenaThirdPartyTransaction*))(Il2CppBase() + 0xF45234))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaThirdPartyTransaction*, uintptr_t))(Il2CppBase() + 0xF452EC))(this, input);
	}

};

}
