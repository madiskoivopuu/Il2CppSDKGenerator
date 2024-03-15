#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class DisbandGuildRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "DisbandGuildRequest"));
	}

	 static MessageParser1ProtoModels::DisbandGuildRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::DisbandGuildRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& GuildIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& guildID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::DisbandGuildRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::DisbandGuildRequest*>* (*)(void *))(Il2CppBase() + 0x13010FC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1301160))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(DisbandGuildRequest*))(Il2CppBase() + 0x1301280))(this);
	}
	template <typename R = ProtoModels::DisbandGuildRequest*> R Clone() {
		return ((R (*)(DisbandGuildRequest*))(Il2CppBase() + 0x1301328))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(DisbandGuildRequest*))(Il2CppBase() + 0x1301384))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(DisbandGuildRequest*, int64_t))(Il2CppBase() + 0x130138C))(this, value);
	}
	template <typename R = int64_t> R get_GuildID() {
		return ((R (*)(DisbandGuildRequest*))(Il2CppBase() + 0x1301394))(this);
	}
	template <typename R = void> R set_GuildID(int64_t value) {
		return ((R (*)(DisbandGuildRequest*, int64_t))(Il2CppBase() + 0x130139C))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(DisbandGuildRequest*))(Il2CppBase() + 0x13013A4))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(DisbandGuildRequest*, int64_t))(Il2CppBase() + 0x13013AC))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(DisbandGuildRequest*, Il2CppObject*))(Il2CppBase() + 0x13013B4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::DisbandGuildRequest* other) {
		return ((R (*)(DisbandGuildRequest*, ProtoModels::DisbandGuildRequest*))(Il2CppBase() + 0x1301460))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(DisbandGuildRequest*))(Il2CppBase() + 0x13014B0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(DisbandGuildRequest*))(Il2CppBase() + 0x1301538))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(DisbandGuildRequest*, uintptr_t))(Il2CppBase() + 0x130159C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(DisbandGuildRequest*))(Il2CppBase() + 0x130164C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::DisbandGuildRequest* other) {
		return ((R (*)(DisbandGuildRequest*, ProtoModels::DisbandGuildRequest*))(Il2CppBase() + 0x1301744))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(DisbandGuildRequest*, uintptr_t))(Il2CppBase() + 0x1301770))(this, input);
	}

};

}
