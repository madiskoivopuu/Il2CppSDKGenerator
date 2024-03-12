#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PurchaseInfoType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PurchaseInfoType"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& TransactionIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& transactionID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& PayloadFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& payload_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ItemsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_items_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& items_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& ShopFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& shop_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& CurrencyTypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& currencyType_() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> static T& CurrencyDeltaFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& currencyDelta_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& OperationFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& operation_() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> static T& MessageIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& messageID_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& BattlePassStepFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& battlePassStep_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& HasBattlePassPremiumFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& hasBattlePassPremium_() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> static T& ReasonsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_reasons_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> T& reasons_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& BpTypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& bpType_() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x11B7D68))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x11B7DCC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B7EEC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B8168))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B81C4))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(PurchaseInfoType*, int64_t))(Il2CppBase() + 0x11B81CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_TransactionID() {
		return ((T (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B81D4))(this);
	}
	template <typename T = void> T set_TransactionID(Il2CppString* value) {
		return ((T (*)(PurchaseInfoType*, Il2CppString*))(Il2CppBase() + 0x11B81DC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Payload() {
		return ((T (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B825C))(this);
	}
	template <typename T = void> T set_Payload(Il2CppString* value) {
		return ((T (*)(PurchaseInfoType*, Il2CppString*))(Il2CppBase() + 0x11B8264))(this, value);
	}
	template <typename T = void*> T get_Items() {
		return ((T (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B82E4))(this);
	}
	template <typename T = uintptr_t> T get_Shop() {
		return ((T (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B82EC))(this);
	}
	template <typename T = void> T set_Shop(uintptr_t value) {
		return ((T (*)(PurchaseInfoType*, uintptr_t))(Il2CppBase() + 0x11B82F4))(this, value);
	}
	template <typename T = uintptr_t> T get_CurrencyType() {
		return ((T (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B82FC))(this);
	}
	template <typename T = void> T set_CurrencyType(uintptr_t value) {
		return ((T (*)(PurchaseInfoType*, uintptr_t))(Il2CppBase() + 0x11B8304))(this, value);
	}
	template <typename T = int32_t> T get_CurrencyDelta() {
		return ((T (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B830C))(this);
	}
	template <typename T = void> T set_CurrencyDelta(int32_t value) {
		return ((T (*)(PurchaseInfoType*, int32_t))(Il2CppBase() + 0x11B8314))(this, value);
	}
	template <typename T = uintptr_t> T get_Operation() {
		return ((T (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B831C))(this);
	}
	template <typename T = void> T set_Operation(uintptr_t value) {
		return ((T (*)(PurchaseInfoType*, uintptr_t))(Il2CppBase() + 0x11B8324))(this, value);
	}
	template <typename T = int64_t> T get_MessageID() {
		return ((T (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B832C))(this);
	}
	template <typename T = void> T set_MessageID(int64_t value) {
		return ((T (*)(PurchaseInfoType*, int64_t))(Il2CppBase() + 0x11B8334))(this, value);
	}
	template <typename T = int32_t> T get_BattlePassStep() {
		return ((T (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B833C))(this);
	}
	template <typename T = void> T set_BattlePassStep(int32_t value) {
		return ((T (*)(PurchaseInfoType*, int32_t))(Il2CppBase() + 0x11B8344))(this, value);
	}
	template <typename T = bool> T get_HasBattlePassPremium() {
		return ((T (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B834C))(this);
	}
	template <typename T = void> T set_HasBattlePassPremium(bool value) {
		return ((T (*)(PurchaseInfoType*, bool))(Il2CppBase() + 0x11B8354))(this, value);
	}
	template <typename T = void*> T get_Reasons() {
		return ((T (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B8360))(this);
	}
	template <typename T = int32_t> T get_BpType() {
		return ((T (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B8368))(this);
	}
	template <typename T = void> T set_BpType(int32_t value) {
		return ((T (*)(PurchaseInfoType*, int32_t))(Il2CppBase() + 0x11B8370))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(PurchaseInfoType*, uintptr_t))(Il2CppBase() + 0x11B8378))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(PurchaseInfoType*, uintptr_t))(Il2CppBase() + 0x11B83E8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B8564))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B8714))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(PurchaseInfoType*, uintptr_t))(Il2CppBase() + 0x11B8778))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(PurchaseInfoType*))(Il2CppBase() + 0x11B8A6C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(PurchaseInfoType*, uintptr_t))(Il2CppBase() + 0x11B8DE8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(PurchaseInfoType*, uintptr_t))(Il2CppBase() + 0x11B8F18))(this, input);
	}

};

}
