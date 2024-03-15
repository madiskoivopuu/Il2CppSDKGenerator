#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildJoinRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildJoinRequest"));
	}

	 static MessageParser1<ProtoModels::GuildJoinRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::GuildJoinRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& GuildIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& guildID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::GuildJoinRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::GuildJoinRequest*>* (*)(void *))(Il2CppBase() + 0x1B33288))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1B332EC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildJoinRequest*))(Il2CppBase() + 0x1B3340C))(this);
	}
	template <typename R = ProtoModels::GuildJoinRequest*> R Clone() {
		return ((R (*)(GuildJoinRequest*))(Il2CppBase() + 0x1B334B4))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(GuildJoinRequest*))(Il2CppBase() + 0x1B33510))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(GuildJoinRequest*, int64_t))(Il2CppBase() + 0x1B33518))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(GuildJoinRequest*))(Il2CppBase() + 0x1B33520))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(GuildJoinRequest*, int64_t))(Il2CppBase() + 0x1B33528))(this, value);
	}
	template <typename R = int64_t> R get_GuildID() {
		return ((R (*)(GuildJoinRequest*))(Il2CppBase() + 0x1B33530))(this);
	}
	template <typename R = void> R set_GuildID(int64_t value) {
		return ((R (*)(GuildJoinRequest*, int64_t))(Il2CppBase() + 0x1B33538))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildJoinRequest*, Il2CppObject*))(Il2CppBase() + 0x1B33540))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildJoinRequest* other) {
		return ((R (*)(GuildJoinRequest*, ProtoModels::GuildJoinRequest*))(Il2CppBase() + 0x1B335EC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildJoinRequest*))(Il2CppBase() + 0x1B3363C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildJoinRequest*))(Il2CppBase() + 0x1B336C4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildJoinRequest*, uintptr_t))(Il2CppBase() + 0x1B33728))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildJoinRequest*))(Il2CppBase() + 0x1B337D8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildJoinRequest* other) {
		return ((R (*)(GuildJoinRequest*, ProtoModels::GuildJoinRequest*))(Il2CppBase() + 0x1B338D0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildJoinRequest*, uintptr_t))(Il2CppBase() + 0x1B338FC))(this, input);
	}

};

}
