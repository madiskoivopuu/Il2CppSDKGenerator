#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildChatMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildChatMessage"));
	}

	 static MessageParser1ProtoModels::GuildChatMessage*>*& _parser() {
		return *(MessageParser1ProtoModels::GuildChatMessage*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& GuildIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& guildID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& TimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& time_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& TypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::GuildEventType*> R& type_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& DataFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static CodecIl2CppString*, Il2CppString*>*& _map_data_codec() {
		return *(CodecIl2CppString*, Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 MapField2Il2CppString*, Il2CppString*>*& data_() {
		return *(MapField2Il2CppString*, Il2CppString*>**)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::GuildChatMessage*>* get_Parser() {
		return ((MessageParser1ProtoModels::GuildChatMessage*>* (*)(void *))(Il2CppBase() + 0x12E8A50))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x12E8AB4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildChatMessage*))(Il2CppBase() + 0x12E8BD4))(this);
	}
	template <typename R = ProtoModels::GuildChatMessage*> R Clone() {
		return ((R (*)(GuildChatMessage*))(Il2CppBase() + 0x12E8D44))(this);
	}
	template <typename R = int64_t> R get_GuildID() {
		return ((R (*)(GuildChatMessage*))(Il2CppBase() + 0x12E8DA0))(this);
	}
	template <typename R = void> R set_GuildID(int64_t value) {
		return ((R (*)(GuildChatMessage*, int64_t))(Il2CppBase() + 0x12E8DA8))(this, value);
	}
	template <typename R = int64_t> R get_Time() {
		return ((R (*)(GuildChatMessage*))(Il2CppBase() + 0x12E8DB0))(this);
	}
	template <typename R = void> R set_Time(int64_t value) {
		return ((R (*)(GuildChatMessage*, int64_t))(Il2CppBase() + 0x12E8DB8))(this, value);
	}
	template <typename R = ProtoModels::GuildEventType*> R get_Type() {
		return ((R (*)(GuildChatMessage*))(Il2CppBase() + 0x12E8DC0))(this);
	}
	template <typename R = void> R set_Type(ProtoModels::GuildEventType* value) {
		return ((R (*)(GuildChatMessage*, ProtoModels::GuildEventType*))(Il2CppBase() + 0x12E8DC8))(this, value);
	}
	 MapField2Il2CppString*, Il2CppString*>* get_Data() {
		return ((MapField2Il2CppString*, Il2CppString*>* (*)(GuildChatMessage*))(Il2CppBase() + 0x12E8DD0))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildChatMessage*, Il2CppObject*))(Il2CppBase() + 0x12E8DD8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildChatMessage* other) {
		return ((R (*)(GuildChatMessage*, ProtoModels::GuildChatMessage*))(Il2CppBase() + 0x12E8E48))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildChatMessage*))(Il2CppBase() + 0x12E8F04))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildChatMessage*))(Il2CppBase() + 0x12E8FA8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildChatMessage*, uintptr_t))(Il2CppBase() + 0x12E900C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildChatMessage*))(Il2CppBase() + 0x12E9130))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildChatMessage* other) {
		return ((R (*)(GuildChatMessage*, ProtoModels::GuildChatMessage*))(Il2CppBase() + 0x12E9294))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildChatMessage*, uintptr_t))(Il2CppBase() + 0x12E9330))(this, input);
	}

};

}
