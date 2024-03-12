#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class LoginUserResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "LoginUserResponse"));
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
	template <typename T = int32_t> static T& HomeWorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& homeWorldID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& TokenFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& token_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& CoordinatorAddressFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& coordinatorAddress_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& CoordinatorServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& coordinatorServerID_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& UserTagIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& userTagID_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& LoginIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& loginID_() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& ChatServerIPFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& chatServerIP_() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& ChatServerFQDNFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& chatServerFQDN_() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> static T& BanTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& banTime_() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> static T& BanRuleFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& banRule_() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> static T& ConfigsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_configs_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& configs_() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> static T& IsCyclycServerFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isCyclycServer_() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> static T& BonusUserFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& bonusUser_() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x172E400))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x172E464))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(LoginUserResponse*))(Il2CppBase() + 0x172E584))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(LoginUserResponse*))(Il2CppBase() + 0x172E8C8))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(LoginUserResponse*))(Il2CppBase() + 0x172E924))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(LoginUserResponse*, int64_t))(Il2CppBase() + 0x172E92C))(this, value);
	}
	template <typename T = int64_t> T get_HomeWorldID() {
		return ((T (*)(LoginUserResponse*))(Il2CppBase() + 0x172E934))(this);
	}
	template <typename T = void> T set_HomeWorldID(int64_t value) {
		return ((T (*)(LoginUserResponse*, int64_t))(Il2CppBase() + 0x172E93C))(this, value);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(LoginUserResponse*))(Il2CppBase() + 0x172E944))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(LoginUserResponse*, int32_t))(Il2CppBase() + 0x172E94C))(this, value);
	}
	template <typename T = uintptr_t> T get_Token() {
		return ((T (*)(LoginUserResponse*))(Il2CppBase() + 0x172E954))(this);
	}
	template <typename T = void> T set_Token(uintptr_t value) {
		return ((T (*)(LoginUserResponse*, uintptr_t))(Il2CppBase() + 0x172E95C))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(LoginUserResponse*))(Il2CppBase() + 0x172E9DC))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(LoginUserResponse*, Il2CppString*))(Il2CppBase() + 0x172E9E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_CoordinatorAddress() {
		return ((T (*)(LoginUserResponse*))(Il2CppBase() + 0x172EA64))(this);
	}
	template <typename T = void> T set_CoordinatorAddress(Il2CppString* value) {
		return ((T (*)(LoginUserResponse*, Il2CppString*))(Il2CppBase() + 0x172EA6C))(this, value);
	}
	template <typename T = int64_t> T get_CoordinatorServerID() {
		return ((T (*)(LoginUserResponse*))(Il2CppBase() + 0x172EAEC))(this);
	}
	template <typename T = void> T set_CoordinatorServerID(int64_t value) {
		return ((T (*)(LoginUserResponse*, int64_t))(Il2CppBase() + 0x172EAF4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(LoginUserResponse*))(Il2CppBase() + 0x172EAFC))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(LoginUserResponse*, Il2CppString*))(Il2CppBase() + 0x172EB04))(this, value);
	}
	template <typename T = Il2CppString*> T get_UserTagID() {
		return ((T (*)(LoginUserResponse*))(Il2CppBase() + 0x172EB84))(this);
	}
	template <typename T = void> T set_UserTagID(Il2CppString* value) {
		return ((T (*)(LoginUserResponse*, Il2CppString*))(Il2CppBase() + 0x172EB8C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LoginID() {
		return ((T (*)(LoginUserResponse*))(Il2CppBase() + 0x172EC0C))(this);
	}
	template <typename T = void> T set_LoginID(Il2CppString* value) {
		return ((T (*)(LoginUserResponse*, Il2CppString*))(Il2CppBase() + 0x172EC14))(this, value);
	}
	template <typename T = Il2CppString*> T get_ChatServerIP() {
		return ((T (*)(LoginUserResponse*))(Il2CppBase() + 0x172EC94))(this);
	}
	template <typename T = void> T set_ChatServerIP(Il2CppString* value) {
		return ((T (*)(LoginUserResponse*, Il2CppString*))(Il2CppBase() + 0x172EC9C))(this, value);
	}
	template <typename T = Il2CppString*> T get_ChatServerFQDN() {
		return ((T (*)(LoginUserResponse*))(Il2CppBase() + 0x172ED1C))(this);
	}
	template <typename T = void> T set_ChatServerFQDN(Il2CppString* value) {
		return ((T (*)(LoginUserResponse*, Il2CppString*))(Il2CppBase() + 0x172ED24))(this, value);
	}
	template <typename T = int64_t> T get_BanTime() {
		return ((T (*)(LoginUserResponse*))(Il2CppBase() + 0x172EDA4))(this);
	}
	template <typename T = void> T set_BanTime(int64_t value) {
		return ((T (*)(LoginUserResponse*, int64_t))(Il2CppBase() + 0x172EDAC))(this, value);
	}
	template <typename T = int32_t> T get_BanRule() {
		return ((T (*)(LoginUserResponse*))(Il2CppBase() + 0x172EDB4))(this);
	}
	template <typename T = void> T set_BanRule(int32_t value) {
		return ((T (*)(LoginUserResponse*, int32_t))(Il2CppBase() + 0x172EDBC))(this, value);
	}
	template <typename T = void*> T get_Configs() {
		return ((T (*)(LoginUserResponse*))(Il2CppBase() + 0x172EDC4))(this);
	}
	template <typename T = bool> T get_IsCyclycServer() {
		return ((T (*)(LoginUserResponse*))(Il2CppBase() + 0x172EDCC))(this);
	}
	template <typename T = void> T set_IsCyclycServer(bool value) {
		return ((T (*)(LoginUserResponse*, bool))(Il2CppBase() + 0x172EDD4))(this, value);
	}
	template <typename T = uintptr_t> T get_BonusUser() {
		return ((T (*)(LoginUserResponse*))(Il2CppBase() + 0x172EDE0))(this);
	}
	template <typename T = void> T set_BonusUser(uintptr_t value) {
		return ((T (*)(LoginUserResponse*, uintptr_t))(Il2CppBase() + 0x172EDE8))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(LoginUserResponse*, uintptr_t))(Il2CppBase() + 0x172EDF0))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(LoginUserResponse*, uintptr_t))(Il2CppBase() + 0x172EE60))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(LoginUserResponse*))(Il2CppBase() + 0x172F054))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(LoginUserResponse*))(Il2CppBase() + 0x172F298))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(LoginUserResponse*, uintptr_t))(Il2CppBase() + 0x172F2FC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(LoginUserResponse*))(Il2CppBase() + 0x172F6BC))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(LoginUserResponse*, uintptr_t))(Il2CppBase() + 0x172FB4C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(LoginUserResponse*, uintptr_t))(Il2CppBase() + 0x172FD3C))(this, input);
	}

};

}
