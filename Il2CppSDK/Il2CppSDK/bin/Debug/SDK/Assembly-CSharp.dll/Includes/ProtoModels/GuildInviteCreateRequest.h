#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildInviteCreateRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildInviteCreateRequest"));
	}

	 static MessageParser1ProtoModels::GuildInviteCreateRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::GuildInviteCreateRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& DescriptionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& description_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& TypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::GuildInviteType*> R& type_() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 static MessageParser1ProtoModels::GuildInviteCreateRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::GuildInviteCreateRequest*>* (*)(void *))(Il2CppBase() + 0x1B2C9C0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1B2CA24))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildInviteCreateRequest*))(Il2CppBase() + 0x1B2CB44))(this);
	}
	template <typename R = ProtoModels::GuildInviteCreateRequest*> R Clone() {
		return ((R (*)(GuildInviteCreateRequest*))(Il2CppBase() + 0x1B2CC54))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(GuildInviteCreateRequest*))(Il2CppBase() + 0x1B2CCB0))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(GuildInviteCreateRequest*, int64_t))(Il2CppBase() + 0x1B2CCB8))(this, value);
	}
	template <typename R = int64_t> R get_GuildID() {
		return ((R (*)(GuildInviteCreateRequest*))(Il2CppBase() + 0x1B2CCC0))(this);
	}
	template <typename R = void> R set_GuildID(int64_t value) {
		return ((R (*)(GuildInviteCreateRequest*, int64_t))(Il2CppBase() + 0x1B2CCC8))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(GuildInviteCreateRequest*))(Il2CppBase() + 0x1B2CCD0))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(GuildInviteCreateRequest*, int64_t))(Il2CppBase() + 0x1B2CCD8))(this, value);
	}
	template <typename R = Il2CppString*> R get_Description() {
		return ((R (*)(GuildInviteCreateRequest*))(Il2CppBase() + 0x1B2CCE0))(this);
	}
	template <typename R = void> R set_Description(Il2CppString* value) {
		return ((R (*)(GuildInviteCreateRequest*, Il2CppString*))(Il2CppBase() + 0x1B2CCE8))(this, value);
	}
	template <typename R = ProtoModels::GuildInviteType*> R get_Type() {
		return ((R (*)(GuildInviteCreateRequest*))(Il2CppBase() + 0x1B2CD68))(this);
	}
	template <typename R = void> R set_Type(ProtoModels::GuildInviteType* value) {
		return ((R (*)(GuildInviteCreateRequest*, ProtoModels::GuildInviteType*))(Il2CppBase() + 0x1B2CD70))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildInviteCreateRequest*, Il2CppObject*))(Il2CppBase() + 0x1B2CD78))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildInviteCreateRequest* other) {
		return ((R (*)(GuildInviteCreateRequest*, ProtoModels::GuildInviteCreateRequest*))(Il2CppBase() + 0x1B2CDE8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildInviteCreateRequest*))(Il2CppBase() + 0x1B2CE78))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildInviteCreateRequest*))(Il2CppBase() + 0x1B2CF44))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildInviteCreateRequest*, uintptr_t))(Il2CppBase() + 0x1B2CFA8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildInviteCreateRequest*))(Il2CppBase() + 0x1B2D0B8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildInviteCreateRequest* other) {
		return ((R (*)(GuildInviteCreateRequest*, ProtoModels::GuildInviteCreateRequest*))(Il2CppBase() + 0x1B2D234))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildInviteCreateRequest*, uintptr_t))(Il2CppBase() + 0x1B2D2A4))(this, input);
	}

};

}
