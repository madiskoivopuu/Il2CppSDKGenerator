#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaRegisterRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaRegisterRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AddressFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& address_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& SaltFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& salt_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& LocalIPFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& localIP_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& VersionStrFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& versionStr_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& UdpPortFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& udpPort_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& GMapUdpPortFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& gMapUdpPort_() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> static T& BuildCIFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& buildCI_() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A93498))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A934FC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A9361C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A9381C))(this);
	}
	template <typename T = Il2CppString*> T get_Address() {
		return ((T (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A93878))(this);
	}
	template <typename T = void> T set_Address(Il2CppString* value) {
		return ((T (*)(ArenaRegisterRequest*, Il2CppString*))(Il2CppBase() + 0x1A93880))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A93900))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(ArenaRegisterRequest*, Il2CppString*))(Il2CppBase() + 0x1A93908))(this, value);
	}
	template <typename T = uintptr_t> T get_Salt() {
		return ((T (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A93988))(this);
	}
	template <typename T = void> T set_Salt(uintptr_t value) {
		return ((T (*)(ArenaRegisterRequest*, uintptr_t))(Il2CppBase() + 0x1A93990))(this, value);
	}
	template <typename T = Il2CppString*> T get_LocalIP() {
		return ((T (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A93A10))(this);
	}
	template <typename T = void> T set_LocalIP(Il2CppString* value) {
		return ((T (*)(ArenaRegisterRequest*, Il2CppString*))(Il2CppBase() + 0x1A93A18))(this, value);
	}
	template <typename T = Il2CppString*> T get_VersionStr() {
		return ((T (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A93A98))(this);
	}
	template <typename T = void> T set_VersionStr(Il2CppString* value) {
		return ((T (*)(ArenaRegisterRequest*, Il2CppString*))(Il2CppBase() + 0x1A93AA0))(this, value);
	}
	template <typename T = int32_t> T get_UdpPort() {
		return ((T (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A93B20))(this);
	}
	template <typename T = void> T set_UdpPort(int32_t value) {
		return ((T (*)(ArenaRegisterRequest*, int32_t))(Il2CppBase() + 0x1A93B28))(this, value);
	}
	template <typename T = int32_t> T get_GMapUdpPort() {
		return ((T (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A93B30))(this);
	}
	template <typename T = void> T set_GMapUdpPort(int32_t value) {
		return ((T (*)(ArenaRegisterRequest*, int32_t))(Il2CppBase() + 0x1A93B38))(this, value);
	}
	template <typename T = int32_t> T get_BuildCI() {
		return ((T (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A93B40))(this);
	}
	template <typename T = void> T set_BuildCI(int32_t value) {
		return ((T (*)(ArenaRegisterRequest*, int32_t))(Il2CppBase() + 0x1A93B48))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaRegisterRequest*, uintptr_t))(Il2CppBase() + 0x1A93B50))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaRegisterRequest*, uintptr_t))(Il2CppBase() + 0x1A93BC0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A93CE0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A93E18))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaRegisterRequest*, uintptr_t))(Il2CppBase() + 0x1A93E7C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaRegisterRequest*))(Il2CppBase() + 0x1A94034))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaRegisterRequest*, uintptr_t))(Il2CppBase() + 0x1A94294))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaRegisterRequest*, uintptr_t))(Il2CppBase() + 0x1A94360))(this, input);
	}

};

}
