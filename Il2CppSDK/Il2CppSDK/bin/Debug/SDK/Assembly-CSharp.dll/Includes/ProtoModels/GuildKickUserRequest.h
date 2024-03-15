#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildKickUserRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildKickUserRequest"));
	}

	 static MessageParser1<ProtoModels::GuildKickUserRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::GuildKickUserRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& KickUserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& kickUserID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::GuildKickUserRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::GuildKickUserRequest*>* (*)(void *))(Il2CppBase() + 0x1B33D6C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1B33DD0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildKickUserRequest*))(Il2CppBase() + 0x1B33EF0))(this);
	}
	template <typename R = ProtoModels::GuildKickUserRequest*> R Clone() {
		return ((R (*)(GuildKickUserRequest*))(Il2CppBase() + 0x1B33F98))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(GuildKickUserRequest*))(Il2CppBase() + 0x1B33FF4))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(GuildKickUserRequest*, int64_t))(Il2CppBase() + 0x1B33FFC))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(GuildKickUserRequest*))(Il2CppBase() + 0x1B34004))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(GuildKickUserRequest*, int64_t))(Il2CppBase() + 0x1B3400C))(this, value);
	}
	template <typename R = int64_t> R get_KickUserID() {
		return ((R (*)(GuildKickUserRequest*))(Il2CppBase() + 0x1B34014))(this);
	}
	template <typename R = void> R set_KickUserID(int64_t value) {
		return ((R (*)(GuildKickUserRequest*, int64_t))(Il2CppBase() + 0x1B3401C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildKickUserRequest*, Il2CppObject*))(Il2CppBase() + 0x1B34024))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildKickUserRequest* other) {
		return ((R (*)(GuildKickUserRequest*, ProtoModels::GuildKickUserRequest*))(Il2CppBase() + 0x1B340D0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildKickUserRequest*))(Il2CppBase() + 0x1B34120))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildKickUserRequest*))(Il2CppBase() + 0x1B341A8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildKickUserRequest*, uintptr_t))(Il2CppBase() + 0x1B3420C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildKickUserRequest*))(Il2CppBase() + 0x1B342BC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildKickUserRequest* other) {
		return ((R (*)(GuildKickUserRequest*, ProtoModels::GuildKickUserRequest*))(Il2CppBase() + 0x1B343B4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildKickUserRequest*, uintptr_t))(Il2CppBase() + 0x1B343E0))(this, input);
	}

};

}
