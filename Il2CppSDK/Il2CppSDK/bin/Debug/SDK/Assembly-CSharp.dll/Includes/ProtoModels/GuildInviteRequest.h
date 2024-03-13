#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildInviteRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildInviteRequest"));
	}

	template <typename T = MessageParser1GuildInviteRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& InviteIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& inviteID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1GuildInviteRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B30DEC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B30E50))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildInviteRequest*))(Il2CppBase() + 0x1B30F70))(this);
	}
	template <typename T = GuildInviteRequest*> T Clone() {
		return ((T (*)(GuildInviteRequest*))(Il2CppBase() + 0x1B31018))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(GuildInviteRequest*))(Il2CppBase() + 0x1B31074))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(GuildInviteRequest*, int64_t))(Il2CppBase() + 0x1B3107C))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(GuildInviteRequest*))(Il2CppBase() + 0x1B31084))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(GuildInviteRequest*, int64_t))(Il2CppBase() + 0x1B3108C))(this, value);
	}
	template <typename T = int64_t> T get_InviteID() {
		return ((T (*)(GuildInviteRequest*))(Il2CppBase() + 0x1B31094))(this);
	}
	template <typename T = void> T set_InviteID(int64_t value) {
		return ((T (*)(GuildInviteRequest*, int64_t))(Il2CppBase() + 0x1B3109C))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(GuildInviteRequest*, Il2CppObject*))(Il2CppBase() + 0x1B310A4))(this, other);
	}
	template <typename T = bool> T Equals_1(GuildInviteRequest* other) {
		return ((T (*)(GuildInviteRequest*, GuildInviteRequest*))(Il2CppBase() + 0x1B31150))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildInviteRequest*))(Il2CppBase() + 0x1B311A0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildInviteRequest*))(Il2CppBase() + 0x1B31228))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildInviteRequest*, uintptr_t))(Il2CppBase() + 0x1B3128C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildInviteRequest*))(Il2CppBase() + 0x1B3133C))(this);
	}
	template <typename T = void> T MergeFrom(GuildInviteRequest* other) {
		return ((T (*)(GuildInviteRequest*, GuildInviteRequest*))(Il2CppBase() + 0x1B31434))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildInviteRequest*, uintptr_t))(Il2CppBase() + 0x1B31460))(this, input);
	}

};

}
