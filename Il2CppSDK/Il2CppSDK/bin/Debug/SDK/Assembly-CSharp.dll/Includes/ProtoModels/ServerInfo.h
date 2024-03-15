#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ServerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ServerInfo"));
	}

	 static MessageParser1<ProtoModels::ServerInfo*>*& _parser() {
		return *(MessageParser1<ProtoModels::ServerInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& RegionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& region_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& SubRegionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& subRegion_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ServerNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& serverName_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& AddressFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& address_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& OpenTimeUnixFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& openTimeUnix_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& LoadFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> R& load_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& ChatServerIPFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& chatServerIP_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& ChatServerFQDNFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& chatServerFQDN_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& StatusFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& status_() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	 static MessageParser1<ProtoModels::ServerInfo*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ServerInfo*>* (*)(void *))(Il2CppBase() + 0x1619D10))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1619D74))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ServerInfo*))(Il2CppBase() + 0x1619E94))(this);
	}
	template <typename R = ProtoModels::ServerInfo*> R Clone() {
		return ((R (*)(ServerInfo*))(Il2CppBase() + 0x161A050))(this);
	}
	template <typename R = Il2CppString*> R get_Region() {
		return ((R (*)(ServerInfo*))(Il2CppBase() + 0x161A0AC))(this);
	}
	template <typename R = void> R set_Region(Il2CppString* value) {
		return ((R (*)(ServerInfo*, Il2CppString*))(Il2CppBase() + 0x161A0B4))(this, value);
	}
	template <typename R = Il2CppString*> R get_SubRegion() {
		return ((R (*)(ServerInfo*))(Il2CppBase() + 0x161A134))(this);
	}
	template <typename R = void> R set_SubRegion(Il2CppString* value) {
		return ((R (*)(ServerInfo*, Il2CppString*))(Il2CppBase() + 0x161A13C))(this, value);
	}
	template <typename R = Il2CppString*> R get_ServerName() {
		return ((R (*)(ServerInfo*))(Il2CppBase() + 0x161A1BC))(this);
	}
	template <typename R = void> R set_ServerName(Il2CppString* value) {
		return ((R (*)(ServerInfo*, Il2CppString*))(Il2CppBase() + 0x161A1C4))(this, value);
	}
	template <typename R = Il2CppString*> R get_Address() {
		return ((R (*)(ServerInfo*))(Il2CppBase() + 0x161A244))(this);
	}
	template <typename R = void> R set_Address(Il2CppString* value) {
		return ((R (*)(ServerInfo*, Il2CppString*))(Il2CppBase() + 0x161A24C))(this, value);
	}
	template <typename R = int64_t> R get_OpenTimeUnix() {
		return ((R (*)(ServerInfo*))(Il2CppBase() + 0x161A2CC))(this);
	}
	template <typename R = void> R set_OpenTimeUnix(int64_t value) {
		return ((R (*)(ServerInfo*, int64_t))(Il2CppBase() + 0x161A2D4))(this, value);
	}
	template <typename R = float> R get_Load() {
		return ((R (*)(ServerInfo*))(Il2CppBase() + 0x161A2DC))(this);
	}
	template <typename R = void> R set_Load(float value) {
		return ((R (*)(ServerInfo*, float))(Il2CppBase() + 0x161A2E4))(this, value);
	}
	template <typename R = Il2CppString*> R get_ChatServerIP() {
		return ((R (*)(ServerInfo*))(Il2CppBase() + 0x161A2EC))(this);
	}
	template <typename R = void> R set_ChatServerIP(Il2CppString* value) {
		return ((R (*)(ServerInfo*, Il2CppString*))(Il2CppBase() + 0x161A2F4))(this, value);
	}
	template <typename R = Il2CppString*> R get_ChatServerFQDN() {
		return ((R (*)(ServerInfo*))(Il2CppBase() + 0x161A374))(this);
	}
	template <typename R = void> R set_ChatServerFQDN(Il2CppString* value) {
		return ((R (*)(ServerInfo*, Il2CppString*))(Il2CppBase() + 0x161A37C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Status() {
		return ((R (*)(ServerInfo*))(Il2CppBase() + 0x161A3FC))(this);
	}
	template <typename R = void> R set_Status(Il2CppString* value) {
		return ((R (*)(ServerInfo*, Il2CppString*))(Il2CppBase() + 0x161A404))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ServerInfo*, Il2CppObject*))(Il2CppBase() + 0x161A484))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ServerInfo* other) {
		return ((R (*)(ServerInfo*, ProtoModels::ServerInfo*))(Il2CppBase() + 0x161A4F4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ServerInfo*))(Il2CppBase() + 0x161A5E0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ServerInfo*))(Il2CppBase() + 0x161A738))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ServerInfo*, uintptr_t))(Il2CppBase() + 0x161A79C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ServerInfo*))(Il2CppBase() + 0x161A990))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ServerInfo* other) {
		return ((R (*)(ServerInfo*, ProtoModels::ServerInfo*))(Il2CppBase() + 0x161AC08))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ServerInfo*, uintptr_t))(Il2CppBase() + 0x161ACFC))(this, input);
	}

};

}
