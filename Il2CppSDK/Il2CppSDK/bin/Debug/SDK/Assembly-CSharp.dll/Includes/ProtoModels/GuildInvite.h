#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildInvite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildInvite"));
	}

	 static MessageParser1ProtoModels::GuildInvite*>*& _parser() {
		return *(MessageParser1ProtoModels::GuildInvite*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& iD_() {
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
	template <typename R = int32_t> static R& MessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& message_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& ExpiredFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& expired_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& TypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::GuildInviteType*> R& type_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& PlayerFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::Player*> R& player_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& ActionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::InviteAction*> R& action_() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	 static MessageParser1ProtoModels::GuildInvite*>* get_Parser() {
		return ((MessageParser1ProtoModels::GuildInvite*>* (*)(void *))(Il2CppBase() + 0x1B294C8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1B2952C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildInvite*))(Il2CppBase() + 0x1B2964C))(this);
	}
	template <typename R = ProtoModels::GuildInvite*> R Clone() {
		return ((R (*)(GuildInvite*))(Il2CppBase() + 0x1B29794))(this);
	}
	template <typename R = int64_t> R get_ID() {
		return ((R (*)(GuildInvite*))(Il2CppBase() + 0x1B297F0))(this);
	}
	template <typename R = void> R set_ID(int64_t value) {
		return ((R (*)(GuildInvite*, int64_t))(Il2CppBase() + 0x1B297F8))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(GuildInvite*))(Il2CppBase() + 0x1B29800))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(GuildInvite*, int64_t))(Il2CppBase() + 0x1B29808))(this, value);
	}
	template <typename R = int64_t> R get_GuildID() {
		return ((R (*)(GuildInvite*))(Il2CppBase() + 0x1B29810))(this);
	}
	template <typename R = void> R set_GuildID(int64_t value) {
		return ((R (*)(GuildInvite*, int64_t))(Il2CppBase() + 0x1B29818))(this, value);
	}
	template <typename R = Il2CppString*> R get_Message() {
		return ((R (*)(GuildInvite*))(Il2CppBase() + 0x1B29820))(this);
	}
	template <typename R = void> R set_Message(Il2CppString* value) {
		return ((R (*)(GuildInvite*, Il2CppString*))(Il2CppBase() + 0x1B29828))(this, value);
	}
	template <typename R = int64_t> R get_Expired() {
		return ((R (*)(GuildInvite*))(Il2CppBase() + 0x1B298A8))(this);
	}
	template <typename R = void> R set_Expired(int64_t value) {
		return ((R (*)(GuildInvite*, int64_t))(Il2CppBase() + 0x1B298B0))(this, value);
	}
	template <typename R = ProtoModels::GuildInviteType*> R get_Type() {
		return ((R (*)(GuildInvite*))(Il2CppBase() + 0x1B298B8))(this);
	}
	template <typename R = void> R set_Type(ProtoModels::GuildInviteType* value) {
		return ((R (*)(GuildInvite*, ProtoModels::GuildInviteType*))(Il2CppBase() + 0x1B298C0))(this, value);
	}
	template <typename R = ProtoModels::Player*> R get_Player() {
		return ((R (*)(GuildInvite*))(Il2CppBase() + 0x1B298C8))(this);
	}
	template <typename R = void> R set_Player(ProtoModels::Player* value) {
		return ((R (*)(GuildInvite*, ProtoModels::Player*))(Il2CppBase() + 0x1B298D0))(this, value);
	}
	template <typename R = ProtoModels::InviteAction*> R get_Action() {
		return ((R (*)(GuildInvite*))(Il2CppBase() + 0x1B298D8))(this);
	}
	template <typename R = void> R set_Action(ProtoModels::InviteAction* value) {
		return ((R (*)(GuildInvite*, ProtoModels::InviteAction*))(Il2CppBase() + 0x1B298E0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildInvite*, Il2CppObject*))(Il2CppBase() + 0x1B298E8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildInvite* other) {
		return ((R (*)(GuildInvite*, ProtoModels::GuildInvite*))(Il2CppBase() + 0x1B29958))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildInvite*))(Il2CppBase() + 0x1B29A1C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildInvite*))(Il2CppBase() + 0x1B29B34))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildInvite*, uintptr_t))(Il2CppBase() + 0x1B29B98))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildInvite*))(Il2CppBase() + 0x1B29D2C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildInvite* other) {
		return ((R (*)(GuildInvite*, ProtoModels::GuildInvite*))(Il2CppBase() + 0x1B29F5C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildInvite*, uintptr_t))(Il2CppBase() + 0x1B2A060))(this, input);
	}

};

}
