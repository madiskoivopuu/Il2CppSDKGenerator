#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildInvite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildInvite"));
	}

	template <typename T = MessageParser1GuildInvite*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& iD_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& GuildIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& guildID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& MessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& message_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& ExpiredFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& expired_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& TypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = GuildInviteType*> T& type_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& PlayerFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Player*> T& player_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& ActionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = InviteAction*> T& action_() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = MessageParser1GuildInvite*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B294C8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B2952C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildInvite*))(Il2CppBase() + 0x1B2964C))(this);
	}
	template <typename T = GuildInvite*> T Clone() {
		return ((T (*)(GuildInvite*))(Il2CppBase() + 0x1B29794))(this);
	}
	template <typename T = int64_t> T get_ID() {
		return ((T (*)(GuildInvite*))(Il2CppBase() + 0x1B297F0))(this);
	}
	template <typename T = void> T set_ID(int64_t value) {
		return ((T (*)(GuildInvite*, int64_t))(Il2CppBase() + 0x1B297F8))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(GuildInvite*))(Il2CppBase() + 0x1B29800))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(GuildInvite*, int64_t))(Il2CppBase() + 0x1B29808))(this, value);
	}
	template <typename T = int64_t> T get_GuildID() {
		return ((T (*)(GuildInvite*))(Il2CppBase() + 0x1B29810))(this);
	}
	template <typename T = void> T set_GuildID(int64_t value) {
		return ((T (*)(GuildInvite*, int64_t))(Il2CppBase() + 0x1B29818))(this, value);
	}
	template <typename T = Il2CppString*> T get_Message() {
		return ((T (*)(GuildInvite*))(Il2CppBase() + 0x1B29820))(this);
	}
	template <typename T = void> T set_Message(Il2CppString* value) {
		return ((T (*)(GuildInvite*, Il2CppString*))(Il2CppBase() + 0x1B29828))(this, value);
	}
	template <typename T = int64_t> T get_Expired() {
		return ((T (*)(GuildInvite*))(Il2CppBase() + 0x1B298A8))(this);
	}
	template <typename T = void> T set_Expired(int64_t value) {
		return ((T (*)(GuildInvite*, int64_t))(Il2CppBase() + 0x1B298B0))(this, value);
	}
	template <typename T = GuildInviteType*> T get_Type() {
		return ((T (*)(GuildInvite*))(Il2CppBase() + 0x1B298B8))(this);
	}
	template <typename T = void> T set_Type(GuildInviteType* value) {
		return ((T (*)(GuildInvite*, GuildInviteType*))(Il2CppBase() + 0x1B298C0))(this, value);
	}
	template <typename T = Player*> T get_Player() {
		return ((T (*)(GuildInvite*))(Il2CppBase() + 0x1B298C8))(this);
	}
	template <typename T = void> T set_Player(Player* value) {
		return ((T (*)(GuildInvite*, Player*))(Il2CppBase() + 0x1B298D0))(this, value);
	}
	template <typename T = InviteAction*> T get_Action() {
		return ((T (*)(GuildInvite*))(Il2CppBase() + 0x1B298D8))(this);
	}
	template <typename T = void> T set_Action(InviteAction* value) {
		return ((T (*)(GuildInvite*, InviteAction*))(Il2CppBase() + 0x1B298E0))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(GuildInvite*, Il2CppObject*))(Il2CppBase() + 0x1B298E8))(this, other);
	}
	template <typename T = bool> T Equals_1(GuildInvite* other) {
		return ((T (*)(GuildInvite*, GuildInvite*))(Il2CppBase() + 0x1B29958))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildInvite*))(Il2CppBase() + 0x1B29A1C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildInvite*))(Il2CppBase() + 0x1B29B34))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildInvite*, uintptr_t))(Il2CppBase() + 0x1B29B98))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildInvite*))(Il2CppBase() + 0x1B29D2C))(this);
	}
	template <typename T = void> T MergeFrom(GuildInvite* other) {
		return ((T (*)(GuildInvite*, GuildInvite*))(Il2CppBase() + 0x1B29F5C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildInvite*, uintptr_t))(Il2CppBase() + 0x1B2A060))(this, input);
	}

};

}
