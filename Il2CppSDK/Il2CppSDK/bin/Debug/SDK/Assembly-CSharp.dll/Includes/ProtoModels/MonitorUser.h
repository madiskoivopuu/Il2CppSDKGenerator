#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class MonitorUser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "MonitorUser"));
	}

	 static MessageParser1ProtoModels::MonitorUser*>*& _parser() {
		return *(MessageParser1ProtoModels::MonitorUser*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& SLevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ServerLevel*> R& sLevel_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& IdFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& id_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ServerFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& server_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& ClanIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& clanID_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& HomeClanNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& homeClanName_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& InGlobalMapFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& inGlobalMap_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& ConnectedFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& connected_() {
		return *(R*)((uintptr_t)this + 0x49);
	}
	template <typename R = int32_t> static R& PvpIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& pvpID_() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	 static MessageParser1ProtoModels::MonitorUser*>* get_Parser() {
		return ((MessageParser1ProtoModels::MonitorUser*>* (*)(void *))(Il2CppBase() + 0x1EA8BA0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1EA8C04))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(MonitorUser*))(Il2CppBase() + 0x1EA8D24))(this);
	}
	template <typename R = ProtoModels::MonitorUser*> R Clone() {
		return ((R (*)(MonitorUser*))(Il2CppBase() + 0x1EA8E74))(this);
	}
	template <typename R = ProtoModels::ServerLevel*> R get_SLevel() {
		return ((R (*)(MonitorUser*))(Il2CppBase() + 0x1EA8ED0))(this);
	}
	template <typename R = void> R set_SLevel(ProtoModels::ServerLevel* value) {
		return ((R (*)(MonitorUser*, ProtoModels::ServerLevel*))(Il2CppBase() + 0x1EA8ED8))(this, value);
	}
	template <typename R = int64_t> R get_Id() {
		return ((R (*)(MonitorUser*))(Il2CppBase() + 0x1EA8EE0))(this);
	}
	template <typename R = void> R set_Id(int64_t value) {
		return ((R (*)(MonitorUser*, int64_t))(Il2CppBase() + 0x1EA8EE8))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(MonitorUser*))(Il2CppBase() + 0x1EA8EF0))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(MonitorUser*, Il2CppString*))(Il2CppBase() + 0x1EA8EF8))(this, value);
	}
	template <typename R = int64_t> R get_Server() {
		return ((R (*)(MonitorUser*))(Il2CppBase() + 0x1EA8F78))(this);
	}
	template <typename R = void> R set_Server(int64_t value) {
		return ((R (*)(MonitorUser*, int64_t))(Il2CppBase() + 0x1EA8F80))(this, value);
	}
	template <typename R = int64_t> R get_ClanID() {
		return ((R (*)(MonitorUser*))(Il2CppBase() + 0x1EA8F88))(this);
	}
	template <typename R = void> R set_ClanID(int64_t value) {
		return ((R (*)(MonitorUser*, int64_t))(Il2CppBase() + 0x1EA8F90))(this, value);
	}
	template <typename R = Il2CppString*> R get_HomeClanName() {
		return ((R (*)(MonitorUser*))(Il2CppBase() + 0x1EA8F98))(this);
	}
	template <typename R = void> R set_HomeClanName(Il2CppString* value) {
		return ((R (*)(MonitorUser*, Il2CppString*))(Il2CppBase() + 0x1EA8FA0))(this, value);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(MonitorUser*))(Il2CppBase() + 0x1EA9020))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(MonitorUser*, int64_t))(Il2CppBase() + 0x1EA9028))(this, value);
	}
	template <typename R = bool> R get_InGlobalMap() {
		return ((R (*)(MonitorUser*))(Il2CppBase() + 0x1EA9030))(this);
	}
	template <typename R = void> R set_InGlobalMap(bool value) {
		return ((R (*)(MonitorUser*, bool))(Il2CppBase() + 0x1EA9038))(this, value);
	}
	template <typename R = bool> R get_Connected() {
		return ((R (*)(MonitorUser*))(Il2CppBase() + 0x1EA9044))(this);
	}
	template <typename R = void> R set_Connected(bool value) {
		return ((R (*)(MonitorUser*, bool))(Il2CppBase() + 0x1EA904C))(this, value);
	}
	template <typename R = int64_t> R get_PvpID() {
		return ((R (*)(MonitorUser*))(Il2CppBase() + 0x1EA9058))(this);
	}
	template <typename R = void> R set_PvpID(int64_t value) {
		return ((R (*)(MonitorUser*, int64_t))(Il2CppBase() + 0x1EA9060))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(MonitorUser*, Il2CppObject*))(Il2CppBase() + 0x1EA9068))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::MonitorUser* other) {
		return ((R (*)(MonitorUser*, ProtoModels::MonitorUser*))(Il2CppBase() + 0x1EA90D8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(MonitorUser*))(Il2CppBase() + 0x1EA91DC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(MonitorUser*))(Il2CppBase() + 0x1EA9344))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(MonitorUser*, uintptr_t))(Il2CppBase() + 0x1EA93A8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(MonitorUser*))(Il2CppBase() + 0x1EA959C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::MonitorUser* other) {
		return ((R (*)(MonitorUser*, ProtoModels::MonitorUser*))(Il2CppBase() + 0x1EA97FC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(MonitorUser*, uintptr_t))(Il2CppBase() + 0x1EA98B4))(this, input);
	}

};

}
