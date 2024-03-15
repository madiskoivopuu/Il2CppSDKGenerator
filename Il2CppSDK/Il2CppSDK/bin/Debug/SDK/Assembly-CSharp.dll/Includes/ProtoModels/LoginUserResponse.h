#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class LoginUserResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "LoginUserResponse"));
	}

	 static MessageParser1ProtoModels::LoginUserResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::LoginUserResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& HomeWorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& homeWorldID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& TokenFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& token_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& CoordinatorAddressFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& coordinatorAddress_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& CoordinatorServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& coordinatorServerID_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& UserTagIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& userTagID_() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& LoginIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& loginID_() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> static R& ChatServerIPFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& chatServerIP_() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> static R& ChatServerFQDNFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& chatServerFQDN_() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> static R& BanTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& banTime_() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = int32_t> static R& BanRuleFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& banRule_() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = int32_t> static R& ConfigsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::ClientConfigurationItem*>*& _repeated_configs_codec() {
		return *(FieldCodec1ProtoModels::ClientConfigurationItem*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::ClientConfigurationItem*>*& configs_() {
		return *(RepeatedField1ProtoModels::ClientConfigurationItem*>**)((uintptr_t)this + 0x80);
	}
	template <typename R = int32_t> static R& IsCyclycServerFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isCyclycServer_() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = int32_t> static R& BonusUserFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ShortServerUserInfo*> R& bonusUser_() {
		return *(R*)((uintptr_t)this + 0x90);
	}

	 static MessageParser1ProtoModels::LoginUserResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::LoginUserResponse*>* (*)(void *))(Il2CppBase() + 0x172E400))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x172E464))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(LoginUserResponse*))(Il2CppBase() + 0x172E584))(this);
	}
	template <typename R = ProtoModels::LoginUserResponse*> R Clone() {
		return ((R (*)(LoginUserResponse*))(Il2CppBase() + 0x172E8C8))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(LoginUserResponse*))(Il2CppBase() + 0x172E924))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(LoginUserResponse*, int64_t))(Il2CppBase() + 0x172E92C))(this, value);
	}
	template <typename R = int64_t> R get_HomeWorldID() {
		return ((R (*)(LoginUserResponse*))(Il2CppBase() + 0x172E934))(this);
	}
	template <typename R = void> R set_HomeWorldID(int64_t value) {
		return ((R (*)(LoginUserResponse*, int64_t))(Il2CppBase() + 0x172E93C))(this, value);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(LoginUserResponse*))(Il2CppBase() + 0x172E944))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(LoginUserResponse*, int32_t))(Il2CppBase() + 0x172E94C))(this, value);
	}
	template <typename R = uintptr_t> R get_Token() {
		return ((R (*)(LoginUserResponse*))(Il2CppBase() + 0x172E954))(this);
	}
	template <typename R = void> R set_Token(uintptr_t value) {
		return ((R (*)(LoginUserResponse*, uintptr_t))(Il2CppBase() + 0x172E95C))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(LoginUserResponse*))(Il2CppBase() + 0x172E9DC))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(LoginUserResponse*, Il2CppString*))(Il2CppBase() + 0x172E9E4))(this, value);
	}
	template <typename R = Il2CppString*> R get_CoordinatorAddress() {
		return ((R (*)(LoginUserResponse*))(Il2CppBase() + 0x172EA64))(this);
	}
	template <typename R = void> R set_CoordinatorAddress(Il2CppString* value) {
		return ((R (*)(LoginUserResponse*, Il2CppString*))(Il2CppBase() + 0x172EA6C))(this, value);
	}
	template <typename R = int64_t> R get_CoordinatorServerID() {
		return ((R (*)(LoginUserResponse*))(Il2CppBase() + 0x172EAEC))(this);
	}
	template <typename R = void> R set_CoordinatorServerID(int64_t value) {
		return ((R (*)(LoginUserResponse*, int64_t))(Il2CppBase() + 0x172EAF4))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(LoginUserResponse*))(Il2CppBase() + 0x172EAFC))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(LoginUserResponse*, Il2CppString*))(Il2CppBase() + 0x172EB04))(this, value);
	}
	template <typename R = Il2CppString*> R get_UserTagID() {
		return ((R (*)(LoginUserResponse*))(Il2CppBase() + 0x172EB84))(this);
	}
	template <typename R = void> R set_UserTagID(Il2CppString* value) {
		return ((R (*)(LoginUserResponse*, Il2CppString*))(Il2CppBase() + 0x172EB8C))(this, value);
	}
	template <typename R = Il2CppString*> R get_LoginID() {
		return ((R (*)(LoginUserResponse*))(Il2CppBase() + 0x172EC0C))(this);
	}
	template <typename R = void> R set_LoginID(Il2CppString* value) {
		return ((R (*)(LoginUserResponse*, Il2CppString*))(Il2CppBase() + 0x172EC14))(this, value);
	}
	template <typename R = Il2CppString*> R get_ChatServerIP() {
		return ((R (*)(LoginUserResponse*))(Il2CppBase() + 0x172EC94))(this);
	}
	template <typename R = void> R set_ChatServerIP(Il2CppString* value) {
		return ((R (*)(LoginUserResponse*, Il2CppString*))(Il2CppBase() + 0x172EC9C))(this, value);
	}
	template <typename R = Il2CppString*> R get_ChatServerFQDN() {
		return ((R (*)(LoginUserResponse*))(Il2CppBase() + 0x172ED1C))(this);
	}
	template <typename R = void> R set_ChatServerFQDN(Il2CppString* value) {
		return ((R (*)(LoginUserResponse*, Il2CppString*))(Il2CppBase() + 0x172ED24))(this, value);
	}
	template <typename R = int64_t> R get_BanTime() {
		return ((R (*)(LoginUserResponse*))(Il2CppBase() + 0x172EDA4))(this);
	}
	template <typename R = void> R set_BanTime(int64_t value) {
		return ((R (*)(LoginUserResponse*, int64_t))(Il2CppBase() + 0x172EDAC))(this, value);
	}
	template <typename R = int32_t> R get_BanRule() {
		return ((R (*)(LoginUserResponse*))(Il2CppBase() + 0x172EDB4))(this);
	}
	template <typename R = void> R set_BanRule(int32_t value) {
		return ((R (*)(LoginUserResponse*, int32_t))(Il2CppBase() + 0x172EDBC))(this, value);
	}
	 RepeatedField1ProtoModels::ClientConfigurationItem*>* get_Configs() {
		return ((RepeatedField1ProtoModels::ClientConfigurationItem*>* (*)(LoginUserResponse*))(Il2CppBase() + 0x172EDC4))(this);
	}
	template <typename R = bool> R get_IsCyclycServer() {
		return ((R (*)(LoginUserResponse*))(Il2CppBase() + 0x172EDCC))(this);
	}
	template <typename R = void> R set_IsCyclycServer(bool value) {
		return ((R (*)(LoginUserResponse*, bool))(Il2CppBase() + 0x172EDD4))(this, value);
	}
	template <typename R = ProtoModels::ShortServerUserInfo*> R get_BonusUser() {
		return ((R (*)(LoginUserResponse*))(Il2CppBase() + 0x172EDE0))(this);
	}
	template <typename R = void> R set_BonusUser(ProtoModels::ShortServerUserInfo* value) {
		return ((R (*)(LoginUserResponse*, ProtoModels::ShortServerUserInfo*))(Il2CppBase() + 0x172EDE8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(LoginUserResponse*, Il2CppObject*))(Il2CppBase() + 0x172EDF0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::LoginUserResponse* other) {
		return ((R (*)(LoginUserResponse*, ProtoModels::LoginUserResponse*))(Il2CppBase() + 0x172EE60))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(LoginUserResponse*))(Il2CppBase() + 0x172F054))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(LoginUserResponse*))(Il2CppBase() + 0x172F298))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(LoginUserResponse*, uintptr_t))(Il2CppBase() + 0x172F2FC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(LoginUserResponse*))(Il2CppBase() + 0x172F6BC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::LoginUserResponse* other) {
		return ((R (*)(LoginUserResponse*, ProtoModels::LoginUserResponse*))(Il2CppBase() + 0x172FB4C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(LoginUserResponse*, uintptr_t))(Il2CppBase() + 0x172FD3C))(this, input);
	}

};

}
