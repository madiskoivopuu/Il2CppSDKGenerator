#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserPurchaseResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserPurchaseResponse"));
	}

	template <typename T = MessageParser1ArenaUserPurchaseResponse*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CurrenciesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Currencies*> T& currencies_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& MailsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1Mail*>*> static T& _repeated_mails_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1Mail*>*> T& mails_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& AvailableProductFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ArenaUserAvailableProduct*>*> static T& _repeated_availableProduct_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = RepeatedField1ArenaUserAvailableProduct*>*> T& availableProduct_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& TransactionIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& transactionID_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& PurchaceErrorFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = PurchaceErrorEnum*> T& purchaceError_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& BattlePassStepFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& battlePassStep_() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> static T& HasBattlePassPremiumFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& hasBattlePassPremium_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& BpTypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& bpType_() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> static T& VipFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = VipUser*> T& vip_() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& ExtendInfoFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& extendInfo_() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& SaviorPointsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& saviorPoints_() {
		return *(T*)((uintptr_t)this + 0x64);
	}

	template <typename T = MessageParser1ArenaUserPurchaseResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x28633E0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2863444))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2863564))(this);
	}
	template <typename T = ArenaUserPurchaseResponse*> T Clone() {
		return ((T (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2863828))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2863884))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaUserPurchaseResponse*, int64_t))(Il2CppBase() + 0x286388C))(this, value);
	}
	template <typename T = Currencies*> T get_Currencies() {
		return ((T (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2863894))(this);
	}
	template <typename T = void> T set_Currencies(Currencies* value) {
		return ((T (*)(ArenaUserPurchaseResponse*, Currencies*))(Il2CppBase() + 0x286389C))(this, value);
	}
	template <typename T = RepeatedField1Mail*>*> T get_Mails() {
		return ((T (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x28638A4))(this);
	}
	template <typename T = RepeatedField1ArenaUserAvailableProduct*>*> T get_AvailableProduct() {
		return ((T (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x28638AC))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x28638B4))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(ArenaUserPurchaseResponse*, int32_t))(Il2CppBase() + 0x28638BC))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x28638C4))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(ArenaUserPurchaseResponse*, Il2CppString*))(Il2CppBase() + 0x28638CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_TransactionID() {
		return ((T (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x286394C))(this);
	}
	template <typename T = void> T set_TransactionID(Il2CppString* value) {
		return ((T (*)(ArenaUserPurchaseResponse*, Il2CppString*))(Il2CppBase() + 0x2863954))(this, value);
	}
	template <typename T = PurchaceErrorEnum*> T get_PurchaceError() {
		return ((T (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x28639D4))(this);
	}
	template <typename T = void> T set_PurchaceError(PurchaceErrorEnum* value) {
		return ((T (*)(ArenaUserPurchaseResponse*, PurchaceErrorEnum*))(Il2CppBase() + 0x28639DC))(this, value);
	}
	template <typename T = int32_t> T get_BattlePassStep() {
		return ((T (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x28639E4))(this);
	}
	template <typename T = void> T set_BattlePassStep(int32_t value) {
		return ((T (*)(ArenaUserPurchaseResponse*, int32_t))(Il2CppBase() + 0x28639EC))(this, value);
	}
	template <typename T = bool> T get_HasBattlePassPremium() {
		return ((T (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x28639F4))(this);
	}
	template <typename T = void> T set_HasBattlePassPremium(bool value) {
		return ((T (*)(ArenaUserPurchaseResponse*, bool))(Il2CppBase() + 0x28639FC))(this, value);
	}
	template <typename T = int32_t> T get_BpType() {
		return ((T (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2863A08))(this);
	}
	template <typename T = void> T set_BpType(int32_t value) {
		return ((T (*)(ArenaUserPurchaseResponse*, int32_t))(Il2CppBase() + 0x2863A10))(this, value);
	}
	template <typename T = VipUser*> T get_Vip() {
		return ((T (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2863A18))(this);
	}
	template <typename T = void> T set_Vip(VipUser* value) {
		return ((T (*)(ArenaUserPurchaseResponse*, VipUser*))(Il2CppBase() + 0x2863A20))(this, value);
	}
	template <typename T = int32_t> T get_ExtendInfo() {
		return ((T (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2863A28))(this);
	}
	template <typename T = void> T set_ExtendInfo(int32_t value) {
		return ((T (*)(ArenaUserPurchaseResponse*, int32_t))(Il2CppBase() + 0x2863A30))(this, value);
	}
	template <typename T = int32_t> T get_SaviorPoints() {
		return ((T (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2863A38))(this);
	}
	template <typename T = void> T set_SaviorPoints(int32_t value) {
		return ((T (*)(ArenaUserPurchaseResponse*, int32_t))(Il2CppBase() + 0x2863A40))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaUserPurchaseResponse*, Il2CppObject*))(Il2CppBase() + 0x2863A48))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaUserPurchaseResponse* other) {
		return ((T (*)(ArenaUserPurchaseResponse*, ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2863AB8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2863C4C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2863E10))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUserPurchaseResponse*, uintptr_t))(Il2CppBase() + 0x2863E74))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2864178))(this);
	}
	template <typename T = void> T MergeFrom(ArenaUserPurchaseResponse* other) {
		return ((T (*)(ArenaUserPurchaseResponse*, ArenaUserPurchaseResponse*))(Il2CppBase() + 0x2864518))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUserPurchaseResponse*, uintptr_t))(Il2CppBase() + 0x28646FC))(this, input);
	}

};

}
