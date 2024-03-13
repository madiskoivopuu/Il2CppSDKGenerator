#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetStatisticResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetStatisticResponse"));
	}

	template <typename T = MessageParser1AdminGetStatisticResponse*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& UsersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& users_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& UsersOnlineFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& usersOnline_() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& WorldsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& worlds_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& GmapsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& gmaps_() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> static T& PveWorldsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& pveWorlds_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& PvpGroupFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& pvpGroup_() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> static T& PvpQueueFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& pvpQueue_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& ClansFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& clans_() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> static T& ServersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& servers_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& ServersOnlineFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& serversOnline_() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> static T& MetricNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& metricName_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& MetricValueFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& metricValue_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& MetricCurrentFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& metricCurrent_() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = MessageParser1AdminGetStatisticResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B6F04))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B6F68))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7088))(this);
	}
	template <typename T = AdminGetStatisticResponse*> T Clone() {
		return ((T (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B722C))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7288))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(AdminGetStatisticResponse*, int32_t))(Il2CppBase() + 0x18B7290))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7298))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(AdminGetStatisticResponse*, Il2CppString*))(Il2CppBase() + 0x18B72A0))(this, value);
	}
	template <typename T = int32_t> T get_Users() {
		return ((T (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7320))(this);
	}
	template <typename T = void> T set_Users(int32_t value) {
		return ((T (*)(AdminGetStatisticResponse*, int32_t))(Il2CppBase() + 0x18B7328))(this, value);
	}
	template <typename T = int32_t> T get_UsersOnline() {
		return ((T (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7330))(this);
	}
	template <typename T = void> T set_UsersOnline(int32_t value) {
		return ((T (*)(AdminGetStatisticResponse*, int32_t))(Il2CppBase() + 0x18B7338))(this, value);
	}
	template <typename T = int32_t> T get_Worlds() {
		return ((T (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7340))(this);
	}
	template <typename T = void> T set_Worlds(int32_t value) {
		return ((T (*)(AdminGetStatisticResponse*, int32_t))(Il2CppBase() + 0x18B7348))(this, value);
	}
	template <typename T = int32_t> T get_Gmaps() {
		return ((T (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7350))(this);
	}
	template <typename T = void> T set_Gmaps(int32_t value) {
		return ((T (*)(AdminGetStatisticResponse*, int32_t))(Il2CppBase() + 0x18B7358))(this, value);
	}
	template <typename T = int32_t> T get_PveWorlds() {
		return ((T (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7360))(this);
	}
	template <typename T = void> T set_PveWorlds(int32_t value) {
		return ((T (*)(AdminGetStatisticResponse*, int32_t))(Il2CppBase() + 0x18B7368))(this, value);
	}
	template <typename T = int32_t> T get_PvpGroup() {
		return ((T (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7370))(this);
	}
	template <typename T = void> T set_PvpGroup(int32_t value) {
		return ((T (*)(AdminGetStatisticResponse*, int32_t))(Il2CppBase() + 0x18B7378))(this, value);
	}
	template <typename T = int32_t> T get_PvpQueue() {
		return ((T (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7380))(this);
	}
	template <typename T = void> T set_PvpQueue(int32_t value) {
		return ((T (*)(AdminGetStatisticResponse*, int32_t))(Il2CppBase() + 0x18B7388))(this, value);
	}
	template <typename T = int32_t> T get_Clans() {
		return ((T (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7390))(this);
	}
	template <typename T = void> T set_Clans(int32_t value) {
		return ((T (*)(AdminGetStatisticResponse*, int32_t))(Il2CppBase() + 0x18B7398))(this, value);
	}
	template <typename T = int32_t> T get_Servers() {
		return ((T (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B73A0))(this);
	}
	template <typename T = void> T set_Servers(int32_t value) {
		return ((T (*)(AdminGetStatisticResponse*, int32_t))(Il2CppBase() + 0x18B73A8))(this, value);
	}
	template <typename T = int32_t> T get_ServersOnline() {
		return ((T (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B73B0))(this);
	}
	template <typename T = void> T set_ServersOnline(int32_t value) {
		return ((T (*)(AdminGetStatisticResponse*, int32_t))(Il2CppBase() + 0x18B73B8))(this, value);
	}
	template <typename T = Il2CppString*> T get_MetricName() {
		return ((T (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B73C0))(this);
	}
	template <typename T = void> T set_MetricName(Il2CppString* value) {
		return ((T (*)(AdminGetStatisticResponse*, Il2CppString*))(Il2CppBase() + 0x18B73C8))(this, value);
	}
	template <typename T = Il2CppString*> T get_MetricValue() {
		return ((T (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7448))(this);
	}
	template <typename T = void> T set_MetricValue(Il2CppString* value) {
		return ((T (*)(AdminGetStatisticResponse*, Il2CppString*))(Il2CppBase() + 0x18B7450))(this, value);
	}
	template <typename T = Il2CppString*> T get_MetricCurrent() {
		return ((T (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B74D0))(this);
	}
	template <typename T = void> T set_MetricCurrent(Il2CppString* value) {
		return ((T (*)(AdminGetStatisticResponse*, Il2CppString*))(Il2CppBase() + 0x18B74D8))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(AdminGetStatisticResponse*, Il2CppObject*))(Il2CppBase() + 0x18B7558))(this, other);
	}
	template <typename T = bool> T Equals_1(AdminGetStatisticResponse* other) {
		return ((T (*)(AdminGetStatisticResponse*, AdminGetStatisticResponse*))(Il2CppBase() + 0x18B75C8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7708))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B78F4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AdminGetStatisticResponse*, uintptr_t))(Il2CppBase() + 0x18B7958))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AdminGetStatisticResponse*))(Il2CppBase() + 0x18B7C38))(this);
	}
	template <typename T = void> T MergeFrom(AdminGetStatisticResponse* other) {
		return ((T (*)(AdminGetStatisticResponse*, AdminGetStatisticResponse*))(Il2CppBase() + 0x18B8024))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AdminGetStatisticResponse*, uintptr_t))(Il2CppBase() + 0x18B8138))(this, input);
	}

};

}
