#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class MonitorUser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "MonitorUser"));
	}

	template <typename T = MessageParser1MonitorUser*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SLevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServerLevel*> T& sLevel_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& IdFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& id_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ServerFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& server_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& ClanIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& clanID_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& HomeClanNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& homeClanName_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& InGlobalMapFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& inGlobalMap_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& ConnectedFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& connected_() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = int32_t> static T& PvpIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& pvpID_() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = MessageParser1MonitorUser*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA8BA0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA8C04))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(MonitorUser*))(Il2CppBase() + 0x1EA8D24))(this);
	}
	template <typename T = MonitorUser*> T Clone() {
		return ((T (*)(MonitorUser*))(Il2CppBase() + 0x1EA8E74))(this);
	}
	template <typename T = ServerLevel*> T get_SLevel() {
		return ((T (*)(MonitorUser*))(Il2CppBase() + 0x1EA8ED0))(this);
	}
	template <typename T = void> T set_SLevel(ServerLevel* value) {
		return ((T (*)(MonitorUser*, ServerLevel*))(Il2CppBase() + 0x1EA8ED8))(this, value);
	}
	template <typename T = int64_t> T get_Id() {
		return ((T (*)(MonitorUser*))(Il2CppBase() + 0x1EA8EE0))(this);
	}
	template <typename T = void> T set_Id(int64_t value) {
		return ((T (*)(MonitorUser*, int64_t))(Il2CppBase() + 0x1EA8EE8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(MonitorUser*))(Il2CppBase() + 0x1EA8EF0))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(MonitorUser*, Il2CppString*))(Il2CppBase() + 0x1EA8EF8))(this, value);
	}
	template <typename T = int64_t> T get_Server() {
		return ((T (*)(MonitorUser*))(Il2CppBase() + 0x1EA8F78))(this);
	}
	template <typename T = void> T set_Server(int64_t value) {
		return ((T (*)(MonitorUser*, int64_t))(Il2CppBase() + 0x1EA8F80))(this, value);
	}
	template <typename T = int64_t> T get_ClanID() {
		return ((T (*)(MonitorUser*))(Il2CppBase() + 0x1EA8F88))(this);
	}
	template <typename T = void> T set_ClanID(int64_t value) {
		return ((T (*)(MonitorUser*, int64_t))(Il2CppBase() + 0x1EA8F90))(this, value);
	}
	template <typename T = Il2CppString*> T get_HomeClanName() {
		return ((T (*)(MonitorUser*))(Il2CppBase() + 0x1EA8F98))(this);
	}
	template <typename T = void> T set_HomeClanName(Il2CppString* value) {
		return ((T (*)(MonitorUser*, Il2CppString*))(Il2CppBase() + 0x1EA8FA0))(this, value);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(MonitorUser*))(Il2CppBase() + 0x1EA9020))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(MonitorUser*, int64_t))(Il2CppBase() + 0x1EA9028))(this, value);
	}
	template <typename T = bool> T get_InGlobalMap() {
		return ((T (*)(MonitorUser*))(Il2CppBase() + 0x1EA9030))(this);
	}
	template <typename T = void> T set_InGlobalMap(bool value) {
		return ((T (*)(MonitorUser*, bool))(Il2CppBase() + 0x1EA9038))(this, value);
	}
	template <typename T = bool> T get_Connected() {
		return ((T (*)(MonitorUser*))(Il2CppBase() + 0x1EA9044))(this);
	}
	template <typename T = void> T set_Connected(bool value) {
		return ((T (*)(MonitorUser*, bool))(Il2CppBase() + 0x1EA904C))(this, value);
	}
	template <typename T = int64_t> T get_PvpID() {
		return ((T (*)(MonitorUser*))(Il2CppBase() + 0x1EA9058))(this);
	}
	template <typename T = void> T set_PvpID(int64_t value) {
		return ((T (*)(MonitorUser*, int64_t))(Il2CppBase() + 0x1EA9060))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(MonitorUser*, Il2CppObject*))(Il2CppBase() + 0x1EA9068))(this, other);
	}
	template <typename T = bool> T Equals_1(MonitorUser* other) {
		return ((T (*)(MonitorUser*, MonitorUser*))(Il2CppBase() + 0x1EA90D8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(MonitorUser*))(Il2CppBase() + 0x1EA91DC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MonitorUser*))(Il2CppBase() + 0x1EA9344))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(MonitorUser*, uintptr_t))(Il2CppBase() + 0x1EA93A8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(MonitorUser*))(Il2CppBase() + 0x1EA959C))(this);
	}
	template <typename T = void> T MergeFrom(MonitorUser* other) {
		return ((T (*)(MonitorUser*, MonitorUser*))(Il2CppBase() + 0x1EA97FC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(MonitorUser*, uintptr_t))(Il2CppBase() + 0x1EA98B4))(this, input);
	}

};

}
