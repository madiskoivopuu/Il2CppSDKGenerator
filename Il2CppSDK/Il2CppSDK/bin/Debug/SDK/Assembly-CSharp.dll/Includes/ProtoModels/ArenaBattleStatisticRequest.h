#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaBattleStatisticRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaBattleStatisticRequest"));
	}

	template <typename T = MessageParser1ArenaBattleStatisticRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& GuildIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& guildID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& DataFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& data_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1ArenaBattleStatisticRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A18890))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A188F4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaBattleStatisticRequest*))(Il2CppBase() + 0x1A18A14))(this);
	}
	template <typename T = ArenaBattleStatisticRequest*> T Clone() {
		return ((T (*)(ArenaBattleStatisticRequest*))(Il2CppBase() + 0x1A18B10))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaBattleStatisticRequest*))(Il2CppBase() + 0x1A18B6C))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaBattleStatisticRequest*, int64_t))(Il2CppBase() + 0x1A18B74))(this, value);
	}
	template <typename T = int64_t> T get_GuildID() {
		return ((T (*)(ArenaBattleStatisticRequest*))(Il2CppBase() + 0x1A18B7C))(this);
	}
	template <typename T = void> T set_GuildID(int64_t value) {
		return ((T (*)(ArenaBattleStatisticRequest*, int64_t))(Il2CppBase() + 0x1A18B84))(this, value);
	}
	template <typename T = Il2CppString*> T get_Data() {
		return ((T (*)(ArenaBattleStatisticRequest*))(Il2CppBase() + 0x1A18B8C))(this);
	}
	template <typename T = void> T set_Data(Il2CppString* value) {
		return ((T (*)(ArenaBattleStatisticRequest*, Il2CppString*))(Il2CppBase() + 0x1A18B94))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaBattleStatisticRequest*, Il2CppObject*))(Il2CppBase() + 0x1A18C14))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaBattleStatisticRequest* other) {
		return ((T (*)(ArenaBattleStatisticRequest*, ArenaBattleStatisticRequest*))(Il2CppBase() + 0x1A18C84))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaBattleStatisticRequest*))(Il2CppBase() + 0x1A18CE8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaBattleStatisticRequest*))(Il2CppBase() + 0x1A18D78))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaBattleStatisticRequest*, uintptr_t))(Il2CppBase() + 0x1A18DDC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaBattleStatisticRequest*))(Il2CppBase() + 0x1A18E94))(this);
	}
	template <typename T = void> T MergeFrom(ArenaBattleStatisticRequest* other) {
		return ((T (*)(ArenaBattleStatisticRequest*, ArenaBattleStatisticRequest*))(Il2CppBase() + 0x1A18F98))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaBattleStatisticRequest*, uintptr_t))(Il2CppBase() + 0x1A18FD8))(this, input);
	}

};

}
