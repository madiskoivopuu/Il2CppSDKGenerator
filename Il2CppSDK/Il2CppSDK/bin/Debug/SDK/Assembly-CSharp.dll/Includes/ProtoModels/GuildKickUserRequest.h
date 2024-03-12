#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildKickUserRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildKickUserRequest"));
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
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& KickUserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& kickUserID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B33D6C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B33DD0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildKickUserRequest*))(Il2CppBase() + 0x1B33EF0))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(GuildKickUserRequest*))(Il2CppBase() + 0x1B33F98))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(GuildKickUserRequest*))(Il2CppBase() + 0x1B33FF4))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(GuildKickUserRequest*, int64_t))(Il2CppBase() + 0x1B33FFC))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(GuildKickUserRequest*))(Il2CppBase() + 0x1B34004))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(GuildKickUserRequest*, int64_t))(Il2CppBase() + 0x1B3400C))(this, value);
	}
	template <typename T = int64_t> T get_KickUserID() {
		return ((T (*)(GuildKickUserRequest*))(Il2CppBase() + 0x1B34014))(this);
	}
	template <typename T = void> T set_KickUserID(int64_t value) {
		return ((T (*)(GuildKickUserRequest*, int64_t))(Il2CppBase() + 0x1B3401C))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(GuildKickUserRequest*, uintptr_t))(Il2CppBase() + 0x1B34024))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(GuildKickUserRequest*, uintptr_t))(Il2CppBase() + 0x1B340D0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildKickUserRequest*))(Il2CppBase() + 0x1B34120))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildKickUserRequest*))(Il2CppBase() + 0x1B341A8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildKickUserRequest*, uintptr_t))(Il2CppBase() + 0x1B3420C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildKickUserRequest*))(Il2CppBase() + 0x1B342BC))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(GuildKickUserRequest*, uintptr_t))(Il2CppBase() + 0x1B343B4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildKickUserRequest*, uintptr_t))(Il2CppBase() + 0x1B343E0))(this, input);
	}

};

}
