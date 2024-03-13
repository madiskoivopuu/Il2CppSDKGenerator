#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ServerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ServerInfo"));
	}

	template <typename T = MessageParser1ServerInfo*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& RegionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& region_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& SubRegionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& subRegion_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ServerNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& serverName_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& AddressFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& address_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& OpenTimeUnixFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& openTimeUnix_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& LoadFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& load_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& ChatServerIPFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& chatServerIP_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& ChatServerFQDNFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& chatServerFQDN_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& StatusFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& status_() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = MessageParser1ServerInfo*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1619D10))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1619D74))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ServerInfo*))(Il2CppBase() + 0x1619E94))(this);
	}
	template <typename T = ServerInfo*> T Clone() {
		return ((T (*)(ServerInfo*))(Il2CppBase() + 0x161A050))(this);
	}
	template <typename T = Il2CppString*> T get_Region() {
		return ((T (*)(ServerInfo*))(Il2CppBase() + 0x161A0AC))(this);
	}
	template <typename T = void> T set_Region(Il2CppString* value) {
		return ((T (*)(ServerInfo*, Il2CppString*))(Il2CppBase() + 0x161A0B4))(this, value);
	}
	template <typename T = Il2CppString*> T get_SubRegion() {
		return ((T (*)(ServerInfo*))(Il2CppBase() + 0x161A134))(this);
	}
	template <typename T = void> T set_SubRegion(Il2CppString* value) {
		return ((T (*)(ServerInfo*, Il2CppString*))(Il2CppBase() + 0x161A13C))(this, value);
	}
	template <typename T = Il2CppString*> T get_ServerName() {
		return ((T (*)(ServerInfo*))(Il2CppBase() + 0x161A1BC))(this);
	}
	template <typename T = void> T set_ServerName(Il2CppString* value) {
		return ((T (*)(ServerInfo*, Il2CppString*))(Il2CppBase() + 0x161A1C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Address() {
		return ((T (*)(ServerInfo*))(Il2CppBase() + 0x161A244))(this);
	}
	template <typename T = void> T set_Address(Il2CppString* value) {
		return ((T (*)(ServerInfo*, Il2CppString*))(Il2CppBase() + 0x161A24C))(this, value);
	}
	template <typename T = int64_t> T get_OpenTimeUnix() {
		return ((T (*)(ServerInfo*))(Il2CppBase() + 0x161A2CC))(this);
	}
	template <typename T = void> T set_OpenTimeUnix(int64_t value) {
		return ((T (*)(ServerInfo*, int64_t))(Il2CppBase() + 0x161A2D4))(this, value);
	}
	template <typename T = float> T get_Load() {
		return ((T (*)(ServerInfo*))(Il2CppBase() + 0x161A2DC))(this);
	}
	template <typename T = void> T set_Load(float value) {
		return ((T (*)(ServerInfo*, float))(Il2CppBase() + 0x161A2E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ChatServerIP() {
		return ((T (*)(ServerInfo*))(Il2CppBase() + 0x161A2EC))(this);
	}
	template <typename T = void> T set_ChatServerIP(Il2CppString* value) {
		return ((T (*)(ServerInfo*, Il2CppString*))(Il2CppBase() + 0x161A2F4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ChatServerFQDN() {
		return ((T (*)(ServerInfo*))(Il2CppBase() + 0x161A374))(this);
	}
	template <typename T = void> T set_ChatServerFQDN(Il2CppString* value) {
		return ((T (*)(ServerInfo*, Il2CppString*))(Il2CppBase() + 0x161A37C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Status() {
		return ((T (*)(ServerInfo*))(Il2CppBase() + 0x161A3FC))(this);
	}
	template <typename T = void> T set_Status(Il2CppString* value) {
		return ((T (*)(ServerInfo*, Il2CppString*))(Il2CppBase() + 0x161A404))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ServerInfo*, Il2CppObject*))(Il2CppBase() + 0x161A484))(this, other);
	}
	template <typename T = bool> T Equals_1(ServerInfo* other) {
		return ((T (*)(ServerInfo*, ServerInfo*))(Il2CppBase() + 0x161A4F4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ServerInfo*))(Il2CppBase() + 0x161A5E0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ServerInfo*))(Il2CppBase() + 0x161A738))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ServerInfo*, uintptr_t))(Il2CppBase() + 0x161A79C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ServerInfo*))(Il2CppBase() + 0x161A990))(this);
	}
	template <typename T = void> T MergeFrom(ServerInfo* other) {
		return ((T (*)(ServerInfo*, ServerInfo*))(Il2CppBase() + 0x161AC08))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ServerInfo*, uintptr_t))(Il2CppBase() + 0x161ACFC))(this, input);
	}

};

}
