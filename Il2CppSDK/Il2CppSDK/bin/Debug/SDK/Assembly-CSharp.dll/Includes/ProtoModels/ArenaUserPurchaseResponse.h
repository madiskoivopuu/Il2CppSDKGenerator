#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserPurchaseResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserPurchaseResponse"));
	}

	 static MessageParser1<ProtoModels::ArenaUserPurchaseResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaUserPurchaseResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CurrenciesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::Currencies*> R& currencies_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& MailsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::Mail*>*& _repeated_mails_codec() {
		return *(FieldCodec1<ProtoModels::Mail*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::Mail*>*& mails_() {
		return *(RepeatedField1<ProtoModels::Mail*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& AvailableProductFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::ArenaUserAvailableProduct*>*& _repeated_availableProduct_codec() {
		return *(FieldCodec1<ProtoModels::ArenaUserAvailableProduct*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1<ProtoModels::ArenaUserAvailableProduct*>*& availableProduct_() {
		return *(RepeatedField1<ProtoModels::ArenaUserAvailableProduct*>**)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& TransactionIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& transactionID_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& PurchaceErrorFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::PurchaceErrorEnum> R& purchaceError_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& BattlePassStepFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& battlePassStep_() {
		return *(R*)((uintptr_t)this + 0x4C);
	}
	template <typename R = int32_t> static R& HasBattlePassPremiumFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& hasBattlePassPremium_() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& BpTypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& bpType_() {
		return *(R*)((uintptr_t)this + 0x54);
	}
	template <typename R = int32_t> static R& VipFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::VipUser*> R& vip_() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> static R& ExtendInfoFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& extendInfo_() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> static R& SaviorPointsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& saviorPoints_() {
		return *(R*)((uintptr_t)this + 0x64);
	}

	 static MessageParser1<ProtoModels::ArenaUserPurchaseResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaUserPurchaseResponse*>* (*)(void *))(Il2CppBase() + 0x28633E0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x2863444))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2863564))(this);
	}
	template <typename R = ProtoModels::ArenaUserPurchaseResponse*> R Clone() {
		return ((R (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2863828))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2863884))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaUserPurchaseResponse*, int64_t))(Il2CppBase() + 0x286388C))(this, value);
	}
	template <typename R = ProtoModels::Currencies*> R get_Currencies() {
		return ((R (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2863894))(this);
	}
	template <typename R = void> R set_Currencies(ProtoModels::Currencies* value) {
		return ((R (*)(ArenaUserPurchaseResponse*, ProtoModels::Currencies*))(Il2CppBase() + 0x286389C))(this, value);
	}
	 RepeatedField1<ProtoModels::Mail*>* get_Mails() {
		return ((RepeatedField1<ProtoModels::Mail*>* (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x28638A4))(this);
	}
	 RepeatedField1<ProtoModels::ArenaUserAvailableProduct*>* get_AvailableProduct() {
		return ((RepeatedField1<ProtoModels::ArenaUserAvailableProduct*>* (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x28638AC))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x28638B4))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(ArenaUserPurchaseResponse*, int32_t))(Il2CppBase() + 0x28638BC))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x28638C4))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(ArenaUserPurchaseResponse*, Il2CppString*))(Il2CppBase() + 0x28638CC))(this, value);
	}
	template <typename R = Il2CppString*> R get_TransactionID() {
		return ((R (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x286394C))(this);
	}
	template <typename R = void> R set_TransactionID(Il2CppString* value) {
		return ((R (*)(ArenaUserPurchaseResponse*, Il2CppString*))(Il2CppBase() + 0x2863954))(this, value);
	}
	template <typename R = ProtoModels::PurchaceErrorEnum> R get_PurchaceError() {
		return ((R (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x28639D4))(this);
	}
	template <typename R = void> R set_PurchaceError(ProtoModels::PurchaceErrorEnum value) {
		return ((R (*)(ArenaUserPurchaseResponse*, ProtoModels::PurchaceErrorEnum))(Il2CppBase() + 0x28639DC))(this, value);
	}
	template <typename R = int32_t> R get_BattlePassStep() {
		return ((R (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x28639E4))(this);
	}
	template <typename R = void> R set_BattlePassStep(int32_t value) {
		return ((R (*)(ArenaUserPurchaseResponse*, int32_t))(Il2CppBase() + 0x28639EC))(this, value);
	}
	template <typename R = bool> R get_HasBattlePassPremium() {
		return ((R (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x28639F4))(this);
	}
	template <typename R = void> R set_HasBattlePassPremium(bool value) {
		return ((R (*)(ArenaUserPurchaseResponse*, bool))(Il2CppBase() + 0x28639FC))(this, value);
	}
	template <typename R = int32_t> R get_BpType() {
		return ((R (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2863A08))(this);
	}
	template <typename R = void> R set_BpType(int32_t value) {
		return ((R (*)(ArenaUserPurchaseResponse*, int32_t))(Il2CppBase() + 0x2863A10))(this, value);
	}
	template <typename R = ProtoModels::VipUser*> R get_Vip() {
		return ((R (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2863A18))(this);
	}
	template <typename R = void> R set_Vip(ProtoModels::VipUser* value) {
		return ((R (*)(ArenaUserPurchaseResponse*, ProtoModels::VipUser*))(Il2CppBase() + 0x2863A20))(this, value);
	}
	template <typename R = int32_t> R get_ExtendInfo() {
		return ((R (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2863A28))(this);
	}
	template <typename R = void> R set_ExtendInfo(int32_t value) {
		return ((R (*)(ArenaUserPurchaseResponse*, int32_t))(Il2CppBase() + 0x2863A30))(this, value);
	}
	template <typename R = int32_t> R get_SaviorPoints() {
		return ((R (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2863A38))(this);
	}
	template <typename R = void> R set_SaviorPoints(int32_t value) {
		return ((R (*)(ArenaUserPurchaseResponse*, int32_t))(Il2CppBase() + 0x2863A40))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUserPurchaseResponse*, Il2CppObject*))(Il2CppBase() + 0x2863A48))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUserPurchaseResponse* other) {
		return ((R (*)(ArenaUserPurchaseResponse*, ProtoModels::ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2863AB8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2863C4C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2863E10))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUserPurchaseResponse*, uintptr_t))(Il2CppBase() + 0x2863E74))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2864178))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUserPurchaseResponse* other) {
		return ((R (*)(ArenaUserPurchaseResponse*, ProtoModels::ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2864518))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUserPurchaseResponse*, uintptr_t))(Il2CppBase() + 0x28646FC))(this, input);
	}

};

}
