#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaRegisterRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaRegisterRequest"));
	}

	 static MessageParser1ProtoModels::ArenaRegisterRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaRegisterRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& AddressFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& address_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& SaltFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& salt_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& LocalIPFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& localIP_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& VersionStrFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& versionStr_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& UdpPortFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& udpPort_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& GMapUdpPortFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& gMapUdpPort_() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = int32_t> static R& BuildCIFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& buildCI_() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	 static MessageParser1ProtoModels::ArenaRegisterRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaRegisterRequest*>* (*)(void *))(Il2CppBase() + 0x1A93498))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A934FC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A9361C))(this);
	}
	template <typename R = ProtoModels::ArenaRegisterRequest*> R Clone() {
		return ((R (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A9381C))(this);
	}
	template <typename R = Il2CppString*> R get_Address() {
		return ((R (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A93878))(this);
	}
	template <typename R = void> R set_Address(Il2CppString* value) {
		return ((R (*)(ArenaRegisterRequest*, Il2CppString*))(Il2CppBase() + 0x1A93880))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A93900))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(ArenaRegisterRequest*, Il2CppString*))(Il2CppBase() + 0x1A93908))(this, value);
	}
	template <typename R = uintptr_t> R get_Salt() {
		return ((R (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A93988))(this);
	}
	template <typename R = void> R set_Salt(uintptr_t value) {
		return ((R (*)(ArenaRegisterRequest*, uintptr_t))(Il2CppBase() + 0x1A93990))(this, value);
	}
	template <typename R = Il2CppString*> R get_LocalIP() {
		return ((R (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A93A10))(this);
	}
	template <typename R = void> R set_LocalIP(Il2CppString* value) {
		return ((R (*)(ArenaRegisterRequest*, Il2CppString*))(Il2CppBase() + 0x1A93A18))(this, value);
	}
	template <typename R = Il2CppString*> R get_VersionStr() {
		return ((R (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A93A98))(this);
	}
	template <typename R = void> R set_VersionStr(Il2CppString* value) {
		return ((R (*)(ArenaRegisterRequest*, Il2CppString*))(Il2CppBase() + 0x1A93AA0))(this, value);
	}
	template <typename R = int32_t> R get_UdpPort() {
		return ((R (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A93B20))(this);
	}
	template <typename R = void> R set_UdpPort(int32_t value) {
		return ((R (*)(ArenaRegisterRequest*, int32_t))(Il2CppBase() + 0x1A93B28))(this, value);
	}
	template <typename R = int32_t> R get_GMapUdpPort() {
		return ((R (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A93B30))(this);
	}
	template <typename R = void> R set_GMapUdpPort(int32_t value) {
		return ((R (*)(ArenaRegisterRequest*, int32_t))(Il2CppBase() + 0x1A93B38))(this, value);
	}
	template <typename R = int32_t> R get_BuildCI() {
		return ((R (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A93B40))(this);
	}
	template <typename R = void> R set_BuildCI(int32_t value) {
		return ((R (*)(ArenaRegisterRequest*, int32_t))(Il2CppBase() + 0x1A93B48))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaRegisterRequest*, Il2CppObject*))(Il2CppBase() + 0x1A93B50))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaRegisterRequest* other) {
		return ((R (*)(ArenaRegisterRequest*, ProtoModels::ArenaRegisterRequest*))(Il2CppBase() + 0x1A93BC0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A93CE0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A93E18))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaRegisterRequest*, uintptr_t))(Il2CppBase() + 0x1A93E7C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A94034))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaRegisterRequest* other) {
		return ((R (*)(ArenaRegisterRequest*, ProtoModels::ArenaRegisterRequest*))(Il2CppBase() + 0x1A94294))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaRegisterRequest*, uintptr_t))(Il2CppBase() + 0x1A94360))(this, input);
	}

};

}
