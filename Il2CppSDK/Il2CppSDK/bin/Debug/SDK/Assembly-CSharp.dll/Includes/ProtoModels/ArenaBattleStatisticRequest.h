#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaBattleStatisticRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaBattleStatisticRequest"));
	}

	 static MessageParser1ProtoModels::ArenaBattleStatisticRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaBattleStatisticRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& GuildIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& guildID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& DataFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& data_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::ArenaBattleStatisticRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaBattleStatisticRequest*>* (*)(void *))(Il2CppBase() + 0x1A18890))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A188F4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaBattleStatisticRequest*))(Il2CppBase() + 0x1A18A14))(this);
	}
	template <typename R = ProtoModels::ArenaBattleStatisticRequest*> R Clone() {
		return ((R (*)(ArenaBattleStatisticRequest*))(Il2CppBase() + 0x1A18B10))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaBattleStatisticRequest*))(Il2CppBase() + 0x1A18B6C))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaBattleStatisticRequest*, int64_t))(Il2CppBase() + 0x1A18B74))(this, value);
	}
	template <typename R = int64_t> R get_GuildID() {
		return ((R (*)(ArenaBattleStatisticRequest*))(Il2CppBase() + 0x1A18B7C))(this);
	}
	template <typename R = void> R set_GuildID(int64_t value) {
		return ((R (*)(ArenaBattleStatisticRequest*, int64_t))(Il2CppBase() + 0x1A18B84))(this, value);
	}
	template <typename R = Il2CppString*> R get_Data() {
		return ((R (*)(ArenaBattleStatisticRequest*))(Il2CppBase() + 0x1A18B8C))(this);
	}
	template <typename R = void> R set_Data(Il2CppString* value) {
		return ((R (*)(ArenaBattleStatisticRequest*, Il2CppString*))(Il2CppBase() + 0x1A18B94))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaBattleStatisticRequest*, Il2CppObject*))(Il2CppBase() + 0x1A18C14))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaBattleStatisticRequest* other) {
		return ((R (*)(ArenaBattleStatisticRequest*, ProtoModels::ArenaBattleStatisticRequest*))(Il2CppBase() + 0x1A18C84))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaBattleStatisticRequest*))(Il2CppBase() + 0x1A18CE8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaBattleStatisticRequest*))(Il2CppBase() + 0x1A18D78))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaBattleStatisticRequest*, uintptr_t))(Il2CppBase() + 0x1A18DDC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaBattleStatisticRequest*))(Il2CppBase() + 0x1A18E94))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaBattleStatisticRequest* other) {
		return ((R (*)(ArenaBattleStatisticRequest*, ProtoModels::ArenaBattleStatisticRequest*))(Il2CppBase() + 0x1A18F98))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaBattleStatisticRequest*, uintptr_t))(Il2CppBase() + 0x1A18FD8))(this, input);
	}

};

}
