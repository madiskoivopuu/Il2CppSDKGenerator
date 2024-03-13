#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ClientConfigRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ClientConfigRequest"));
	}

	template <typename T = MessageParser1ClientConfigRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CurrentConfigFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ClientConfigurationItem*> T& currentConfig_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ClientVersionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& clientVersion_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1ClientConfigRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xE166C8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xE1672C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ClientConfigRequest*))(Il2CppBase() + 0xE1684C))(this);
	}
	template <typename T = ClientConfigRequest*> T Clone() {
		return ((T (*)(ClientConfigRequest*))(Il2CppBase() + 0xE169C0))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ClientConfigRequest*))(Il2CppBase() + 0xE16A1C))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ClientConfigRequest*, int64_t))(Il2CppBase() + 0xE16A24))(this, value);
	}
	template <typename T = ClientConfigurationItem*> T get_CurrentConfig() {
		return ((T (*)(ClientConfigRequest*))(Il2CppBase() + 0xE16A2C))(this);
	}
	template <typename T = void> T set_CurrentConfig(ClientConfigurationItem* value) {
		return ((T (*)(ClientConfigRequest*, ClientConfigurationItem*))(Il2CppBase() + 0xE16A34))(this, value);
	}
	template <typename T = Il2CppString*> T get_ClientVersion() {
		return ((T (*)(ClientConfigRequest*))(Il2CppBase() + 0xE16A3C))(this);
	}
	template <typename T = void> T set_ClientVersion(Il2CppString* value) {
		return ((T (*)(ClientConfigRequest*, Il2CppString*))(Il2CppBase() + 0xE16A44))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ClientConfigRequest*, Il2CppObject*))(Il2CppBase() + 0xE16AC4))(this, other);
	}
	template <typename T = bool> T Equals_1(ClientConfigRequest* other) {
		return ((T (*)(ClientConfigRequest*, ClientConfigRequest*))(Il2CppBase() + 0xE16B34))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ClientConfigRequest*))(Il2CppBase() + 0xE16BAC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ClientConfigRequest*))(Il2CppBase() + 0xE16C38))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ClientConfigRequest*, uintptr_t))(Il2CppBase() + 0xE16C9C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ClientConfigRequest*))(Il2CppBase() + 0xE16D54))(this);
	}
	template <typename T = void> T MergeFrom(ClientConfigRequest* other) {
		return ((T (*)(ClientConfigRequest*, ClientConfigRequest*))(Il2CppBase() + 0xE16E58))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ClientConfigRequest*, uintptr_t))(Il2CppBase() + 0xE16F68))(this, input);
	}

};

}
