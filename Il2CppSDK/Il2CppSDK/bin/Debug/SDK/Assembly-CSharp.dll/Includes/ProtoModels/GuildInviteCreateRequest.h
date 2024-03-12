#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildInviteCreateRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildInviteCreateRequest"));
	}

	template <typename T = void*> static T& _parser() {
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
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& DescriptionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& description_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& TypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& type_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B2C9C0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B2CA24))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildInviteCreateRequest*))(Il2CppBase() + 0x1B2CB44))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(GuildInviteCreateRequest*))(Il2CppBase() + 0x1B2CC54))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(GuildInviteCreateRequest*))(Il2CppBase() + 0x1B2CCB0))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(GuildInviteCreateRequest*, int64_t))(Il2CppBase() + 0x1B2CCB8))(this, value);
	}
	template <typename T = int64_t> T get_GuildID() {
		return ((T (*)(GuildInviteCreateRequest*))(Il2CppBase() + 0x1B2CCC0))(this);
	}
	template <typename T = void> T set_GuildID(int64_t value) {
		return ((T (*)(GuildInviteCreateRequest*, int64_t))(Il2CppBase() + 0x1B2CCC8))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(GuildInviteCreateRequest*))(Il2CppBase() + 0x1B2CCD0))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(GuildInviteCreateRequest*, int64_t))(Il2CppBase() + 0x1B2CCD8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(GuildInviteCreateRequest*))(Il2CppBase() + 0x1B2CCE0))(this);
	}
	template <typename T = void> T set_Description(Il2CppString* value) {
		return ((T (*)(GuildInviteCreateRequest*, Il2CppString*))(Il2CppBase() + 0x1B2CCE8))(this, value);
	}
	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(GuildInviteCreateRequest*))(Il2CppBase() + 0x1B2CD68))(this);
	}
	template <typename T = void> T set_Type(uintptr_t value) {
		return ((T (*)(GuildInviteCreateRequest*, uintptr_t))(Il2CppBase() + 0x1B2CD70))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(GuildInviteCreateRequest*, uintptr_t))(Il2CppBase() + 0x1B2CD78))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(GuildInviteCreateRequest*, uintptr_t))(Il2CppBase() + 0x1B2CDE8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildInviteCreateRequest*))(Il2CppBase() + 0x1B2CE78))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildInviteCreateRequest*))(Il2CppBase() + 0x1B2CF44))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildInviteCreateRequest*, uintptr_t))(Il2CppBase() + 0x1B2CFA8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildInviteCreateRequest*))(Il2CppBase() + 0x1B2D0B8))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(GuildInviteCreateRequest*, uintptr_t))(Il2CppBase() + 0x1B2D234))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildInviteCreateRequest*, uintptr_t))(Il2CppBase() + 0x1B2D2A4))(this, input);
	}

};

}
