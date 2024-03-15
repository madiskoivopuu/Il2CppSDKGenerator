#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserPurchaseRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserPurchaseRequest"));
	}

	 static MessageParser1<ProtoModels::ArenaUserPurchaseRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaUserPurchaseRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ProductIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& productID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& TransactionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaThirdPartyTransaction*> R& transaction_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::ArenaUserPurchaseRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaUserPurchaseRequest*>* (*)(void *))(Il2CppBase() + 0x28629EC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x2862A50))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUserPurchaseRequest*))(Il2CppBase() + 0x2862B70))(this);
	}
	template <typename R = ProtoModels::ArenaUserPurchaseRequest*> R Clone() {
		return ((R (*)(ArenaUserPurchaseRequest*))(Il2CppBase() + 0x2862C3C))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaUserPurchaseRequest*))(Il2CppBase() + 0x2862C98))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaUserPurchaseRequest*, int64_t))(Il2CppBase() + 0x2862CA0))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaUserPurchaseRequest*))(Il2CppBase() + 0x2862CA8))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaUserPurchaseRequest*, int64_t))(Il2CppBase() + 0x2862CB0))(this, value);
	}
	template <typename R = int32_t> R get_ProductID() {
		return ((R (*)(ArenaUserPurchaseRequest*))(Il2CppBase() + 0x2862CB8))(this);
	}
	template <typename R = void> R set_ProductID(int32_t value) {
		return ((R (*)(ArenaUserPurchaseRequest*, int32_t))(Il2CppBase() + 0x2862CC0))(this, value);
	}
	template <typename R = ProtoModels::ArenaThirdPartyTransaction*> R get_Transaction() {
		return ((R (*)(ArenaUserPurchaseRequest*))(Il2CppBase() + 0x2862CC8))(this);
	}
	template <typename R = void> R set_Transaction(ProtoModels::ArenaThirdPartyTransaction* value) {
		return ((R (*)(ArenaUserPurchaseRequest*, ProtoModels::ArenaThirdPartyTransaction*))(Il2CppBase() + 0x2862CD0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUserPurchaseRequest*, Il2CppObject*))(Il2CppBase() + 0x2862CD8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUserPurchaseRequest* other) {
		return ((R (*)(ArenaUserPurchaseRequest*, ProtoModels::ArenaUserPurchaseRequest*))(Il2CppBase() + 0x2862D48))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUserPurchaseRequest*))(Il2CppBase() + 0x2862DA4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUserPurchaseRequest*))(Il2CppBase() + 0x2862E48))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUserPurchaseRequest*, uintptr_t))(Il2CppBase() + 0x2862EAC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUserPurchaseRequest*))(Il2CppBase() + 0x2862F88))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUserPurchaseRequest* other) {
		return ((R (*)(ArenaUserPurchaseRequest*, ProtoModels::ArenaUserPurchaseRequest*))(Il2CppBase() + 0x28630BC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUserPurchaseRequest*, uintptr_t))(Il2CppBase() + 0x286318C))(this, input);
	}

};

}
