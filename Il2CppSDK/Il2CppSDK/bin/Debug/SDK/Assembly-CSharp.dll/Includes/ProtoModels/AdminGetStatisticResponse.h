#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetStatisticResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetStatisticResponse"));
	}

	 static MessageParser1ProtoModels::AdminGetStatisticResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::AdminGetStatisticResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& UsersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& users_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& UsersOnlineFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& usersOnline_() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> static R& WorldsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& worlds_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& GmapsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& gmaps_() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = int32_t> static R& PveWorldsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& pveWorlds_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& PvpGroupFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& pvpGroup_() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = int32_t> static R& PvpQueueFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& pvpQueue_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& ClansFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& clans_() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = int32_t> static R& ServersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& servers_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& ServersOnlineFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& serversOnline_() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = int32_t> static R& MetricNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& metricName_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& MetricValueFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& metricValue_() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& MetricCurrentFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& metricCurrent_() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	 static MessageParser1ProtoModels::AdminGetStatisticResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::AdminGetStatisticResponse*>* (*)(void *))(Il2CppBase() + 0x18B6F04))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x18B6F68))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7088))(this);
	}
	template <typename R = ProtoModels::AdminGetStatisticResponse*> R Clone() {
		return ((R (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B722C))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7288))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(AdminGetStatisticResponse*, int32_t))(Il2CppBase() + 0x18B7290))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7298))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(AdminGetStatisticResponse*, Il2CppString*))(Il2CppBase() + 0x18B72A0))(this, value);
	}
	template <typename R = int32_t> R get_Users() {
		return ((R (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7320))(this);
	}
	template <typename R = void> R set_Users(int32_t value) {
		return ((R (*)(AdminGetStatisticResponse*, int32_t))(Il2CppBase() + 0x18B7328))(this, value);
	}
	template <typename R = int32_t> R get_UsersOnline() {
		return ((R (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7330))(this);
	}
	template <typename R = void> R set_UsersOnline(int32_t value) {
		return ((R (*)(AdminGetStatisticResponse*, int32_t))(Il2CppBase() + 0x18B7338))(this, value);
	}
	template <typename R = int32_t> R get_Worlds() {
		return ((R (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7340))(this);
	}
	template <typename R = void> R set_Worlds(int32_t value) {
		return ((R (*)(AdminGetStatisticResponse*, int32_t))(Il2CppBase() + 0x18B7348))(this, value);
	}
	template <typename R = int32_t> R get_Gmaps() {
		return ((R (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7350))(this);
	}
	template <typename R = void> R set_Gmaps(int32_t value) {
		return ((R (*)(AdminGetStatisticResponse*, int32_t))(Il2CppBase() + 0x18B7358))(this, value);
	}
	template <typename R = int32_t> R get_PveWorlds() {
		return ((R (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7360))(this);
	}
	template <typename R = void> R set_PveWorlds(int32_t value) {
		return ((R (*)(AdminGetStatisticResponse*, int32_t))(Il2CppBase() + 0x18B7368))(this, value);
	}
	template <typename R = int32_t> R get_PvpGroup() {
		return ((R (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7370))(this);
	}
	template <typename R = void> R set_PvpGroup(int32_t value) {
		return ((R (*)(AdminGetStatisticResponse*, int32_t))(Il2CppBase() + 0x18B7378))(this, value);
	}
	template <typename R = int32_t> R get_PvpQueue() {
		return ((R (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7380))(this);
	}
	template <typename R = void> R set_PvpQueue(int32_t value) {
		return ((R (*)(AdminGetStatisticResponse*, int32_t))(Il2CppBase() + 0x18B7388))(this, value);
	}
	template <typename R = int32_t> R get_Clans() {
		return ((R (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7390))(this);
	}
	template <typename R = void> R set_Clans(int32_t value) {
		return ((R (*)(AdminGetStatisticResponse*, int32_t))(Il2CppBase() + 0x18B7398))(this, value);
	}
	template <typename R = int32_t> R get_Servers() {
		return ((R (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B73A0))(this);
	}
	template <typename R = void> R set_Servers(int32_t value) {
		return ((R (*)(AdminGetStatisticResponse*, int32_t))(Il2CppBase() + 0x18B73A8))(this, value);
	}
	template <typename R = int32_t> R get_ServersOnline() {
		return ((R (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B73B0))(this);
	}
	template <typename R = void> R set_ServersOnline(int32_t value) {
		return ((R (*)(AdminGetStatisticResponse*, int32_t))(Il2CppBase() + 0x18B73B8))(this, value);
	}
	template <typename R = Il2CppString*> R get_MetricName() {
		return ((R (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B73C0))(this);
	}
	template <typename R = void> R set_MetricName(Il2CppString* value) {
		return ((R (*)(AdminGetStatisticResponse*, Il2CppString*))(Il2CppBase() + 0x18B73C8))(this, value);
	}
	template <typename R = Il2CppString*> R get_MetricValue() {
		return ((R (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7448))(this);
	}
	template <typename R = void> R set_MetricValue(Il2CppString* value) {
		return ((R (*)(AdminGetStatisticResponse*, Il2CppString*))(Il2CppBase() + 0x18B7450))(this, value);
	}
	template <typename R = Il2CppString*> R get_MetricCurrent() {
		return ((R (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B74D0))(this);
	}
	template <typename R = void> R set_MetricCurrent(Il2CppString* value) {
		return ((R (*)(AdminGetStatisticResponse*, Il2CppString*))(Il2CppBase() + 0x18B74D8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminGetStatisticResponse*, Il2CppObject*))(Il2CppBase() + 0x18B7558))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminGetStatisticResponse* other) {
		return ((R (*)(AdminGetStatisticResponse*, ProtoModels::AdminGetStatisticResponse*))(Il2CppBase() + 0x18B75C8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7708))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B78F4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminGetStatisticResponse*, uintptr_t))(Il2CppBase() + 0x18B7958))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7C38))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminGetStatisticResponse* other) {
		return ((R (*)(AdminGetStatisticResponse*, ProtoModels::AdminGetStatisticResponse*))(Il2CppBase() + 0x18B8024))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminGetStatisticResponse*, uintptr_t))(Il2CppBase() + 0x18B8138))(this, input);
	}

};

}
