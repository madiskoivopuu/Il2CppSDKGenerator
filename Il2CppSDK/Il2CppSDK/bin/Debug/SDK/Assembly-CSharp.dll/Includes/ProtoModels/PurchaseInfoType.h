#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PurchaseInfoType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PurchaseInfoType"));
	}

	 static MessageParser1<ProtoModels::PurchaseInfoType*>*& _parser() {
		return *(MessageParser1<ProtoModels::PurchaseInfoType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& TransactionIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& transactionID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& PayloadFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& payload_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ItemsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::PurchaseItemType*>*& _repeated_items_codec() {
		return *(FieldCodec1<ProtoModels::PurchaseItemType*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::PurchaseItemType*>*& items_() {
		return *(RepeatedField1<ProtoModels::PurchaseItemType*>**)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& ShopFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::PurchaseProvider> R& shop_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& CurrencyTypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::CurrencyTypeEnum> R& currencyType_() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = int32_t> static R& CurrencyDeltaFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& currencyDelta_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& OperationFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::CurrencyOperation> R& operation_() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = int32_t> static R& MessageIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& messageID_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& BattlePassStepFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& battlePassStep_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& HasBattlePassPremiumFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& hasBattlePassPremium_() {
		return *(R*)((uintptr_t)this + 0x4C);
	}
	template <typename R = int32_t> static R& ReasonsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<Il2CppString*>*& _repeated_reasons_codec() {
		return *(FieldCodec1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1<Il2CppString*>*& reasons_() {
		return *(RepeatedField1<Il2CppString*>**)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& BpTypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& bpType_() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	 static MessageParser1<ProtoModels::PurchaseInfoType*>* get_Parser() {
		return ((MessageParser1<ProtoModels::PurchaseInfoType*>* (*)(void *))(Il2CppBase() + 0x11B7D68))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x11B7DCC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B7EEC))(this);
	}
	template <typename R = ProtoModels::PurchaseInfoType*> R Clone() {
		return ((R (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B8168))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B81C4))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(PurchaseInfoType*, int64_t))(Il2CppBase() + 0x11B81CC))(this, value);
	}
	template <typename R = Il2CppString*> R get_TransactionID() {
		return ((R (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B81D4))(this);
	}
	template <typename R = void> R set_TransactionID(Il2CppString* value) {
		return ((R (*)(PurchaseInfoType*, Il2CppString*))(Il2CppBase() + 0x11B81DC))(this, value);
	}
	template <typename R = Il2CppString*> R get_Payload() {
		return ((R (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B825C))(this);
	}
	template <typename R = void> R set_Payload(Il2CppString* value) {
		return ((R (*)(PurchaseInfoType*, Il2CppString*))(Il2CppBase() + 0x11B8264))(this, value);
	}
	 RepeatedField1<ProtoModels::PurchaseItemType*>* get_Items() {
		return ((RepeatedField1<ProtoModels::PurchaseItemType*>* (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B82E4))(this);
	}
	template <typename R = ProtoModels::PurchaseProvider> R get_Shop() {
		return ((R (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B82EC))(this);
	}
	template <typename R = void> R set_Shop(ProtoModels::PurchaseProvider value) {
		return ((R (*)(PurchaseInfoType*, ProtoModels::PurchaseProvider))(Il2CppBase() + 0x11B82F4))(this, value);
	}
	template <typename R = ProtoModels::CurrencyTypeEnum> R get_CurrencyType() {
		return ((R (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B82FC))(this);
	}
	template <typename R = void> R set_CurrencyType(ProtoModels::CurrencyTypeEnum value) {
		return ((R (*)(PurchaseInfoType*, ProtoModels::CurrencyTypeEnum))(Il2CppBase() + 0x11B8304))(this, value);
	}
	template <typename R = int32_t> R get_CurrencyDelta() {
		return ((R (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B830C))(this);
	}
	template <typename R = void> R set_CurrencyDelta(int32_t value) {
		return ((R (*)(PurchaseInfoType*, int32_t))(Il2CppBase() + 0x11B8314))(this, value);
	}
	template <typename R = ProtoModels::CurrencyOperation> R get_Operation() {
		return ((R (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B831C))(this);
	}
	template <typename R = void> R set_Operation(ProtoModels::CurrencyOperation value) {
		return ((R (*)(PurchaseInfoType*, ProtoModels::CurrencyOperation))(Il2CppBase() + 0x11B8324))(this, value);
	}
	template <typename R = int64_t> R get_MessageID() {
		return ((R (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B832C))(this);
	}
	template <typename R = void> R set_MessageID(int64_t value) {
		return ((R (*)(PurchaseInfoType*, int64_t))(Il2CppBase() + 0x11B8334))(this, value);
	}
	template <typename R = int32_t> R get_BattlePassStep() {
		return ((R (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B833C))(this);
	}
	template <typename R = void> R set_BattlePassStep(int32_t value) {
		return ((R (*)(PurchaseInfoType*, int32_t))(Il2CppBase() + 0x11B8344))(this, value);
	}
	template <typename R = bool> R get_HasBattlePassPremium() {
		return ((R (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B834C))(this);
	}
	template <typename R = void> R set_HasBattlePassPremium(bool value) {
		return ((R (*)(PurchaseInfoType*, bool))(Il2CppBase() + 0x11B8354))(this, value);
	}
	 RepeatedField1<Il2CppString*>* get_Reasons() {
		return ((RepeatedField1<Il2CppString*>* (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B8360))(this);
	}
	template <typename R = int32_t> R get_BpType() {
		return ((R (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B8368))(this);
	}
	template <typename R = void> R set_BpType(int32_t value) {
		return ((R (*)(PurchaseInfoType*, int32_t))(Il2CppBase() + 0x11B8370))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(PurchaseInfoType*, Il2CppObject*))(Il2CppBase() + 0x11B8378))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::PurchaseInfoType* other) {
		return ((R (*)(PurchaseInfoType*, ProtoModels::PurchaseInfoType*))(Il2CppBase() + 0x11B83E8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B8564))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B8714))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(PurchaseInfoType*, uintptr_t))(Il2CppBase() + 0x11B8778))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B8A6C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::PurchaseInfoType* other) {
		return ((R (*)(PurchaseInfoType*, ProtoModels::PurchaseInfoType*))(Il2CppBase() + 0x11B8DE8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(PurchaseInfoType*, uintptr_t))(Il2CppBase() + 0x11B8F18))(this, input);
	}

};

}
