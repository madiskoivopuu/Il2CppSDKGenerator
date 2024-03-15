#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ClientConfigRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ClientConfigRequest"));
	}

	 static MessageParser1<ProtoModels::ClientConfigRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::ClientConfigRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CurrentConfigFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ClientConfigurationItem*> R& currentConfig_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ClientVersionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& clientVersion_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::ClientConfigRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ClientConfigRequest*>* (*)(void *))(Il2CppBase() + 0xE166C8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xE1672C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ClientConfigRequest*))(Il2CppBase() + 0xE1684C))(this);
	}
	template <typename R = ProtoModels::ClientConfigRequest*> R Clone() {
		return ((R (*)(ClientConfigRequest*))(Il2CppBase() + 0xE169C0))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ClientConfigRequest*))(Il2CppBase() + 0xE16A1C))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ClientConfigRequest*, int64_t))(Il2CppBase() + 0xE16A24))(this, value);
	}
	template <typename R = ProtoModels::ClientConfigurationItem*> R get_CurrentConfig() {
		return ((R (*)(ClientConfigRequest*))(Il2CppBase() + 0xE16A2C))(this);
	}
	template <typename R = void> R set_CurrentConfig(ProtoModels::ClientConfigurationItem* value) {
		return ((R (*)(ClientConfigRequest*, ProtoModels::ClientConfigurationItem*))(Il2CppBase() + 0xE16A34))(this, value);
	}
	template <typename R = Il2CppString*> R get_ClientVersion() {
		return ((R (*)(ClientConfigRequest*))(Il2CppBase() + 0xE16A3C))(this);
	}
	template <typename R = void> R set_ClientVersion(Il2CppString* value) {
		return ((R (*)(ClientConfigRequest*, Il2CppString*))(Il2CppBase() + 0xE16A44))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ClientConfigRequest*, Il2CppObject*))(Il2CppBase() + 0xE16AC4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ClientConfigRequest* other) {
		return ((R (*)(ClientConfigRequest*, ProtoModels::ClientConfigRequest*))(Il2CppBase() + 0xE16B34))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ClientConfigRequest*))(Il2CppBase() + 0xE16BAC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ClientConfigRequest*))(Il2CppBase() + 0xE16C38))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ClientConfigRequest*, uintptr_t))(Il2CppBase() + 0xE16C9C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ClientConfigRequest*))(Il2CppBase() + 0xE16D54))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ClientConfigRequest* other) {
		return ((R (*)(ClientConfigRequest*, ProtoModels::ClientConfigRequest*))(Il2CppBase() + 0xE16E58))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ClientConfigRequest*, uintptr_t))(Il2CppBase() + 0xE16F68))(this, input);
	}

};

}
