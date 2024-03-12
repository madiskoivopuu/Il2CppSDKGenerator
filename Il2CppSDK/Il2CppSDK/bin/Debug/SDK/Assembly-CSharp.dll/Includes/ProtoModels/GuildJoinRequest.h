#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildJoinRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildJoinRequest"));
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
	template <typename T = int32_t> static T& GuildIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& guildID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B33288))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B332EC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildJoinRequest*))(Il2CppBase() + 0x1B3340C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(GuildJoinRequest*))(Il2CppBase() + 0x1B334B4))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(GuildJoinRequest*))(Il2CppBase() + 0x1B33510))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(GuildJoinRequest*, int64_t))(Il2CppBase() + 0x1B33518))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(GuildJoinRequest*))(Il2CppBase() + 0x1B33520))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(GuildJoinRequest*, int64_t))(Il2CppBase() + 0x1B33528))(this, value);
	}
	template <typename T = int64_t> T get_GuildID() {
		return ((T (*)(GuildJoinRequest*))(Il2CppBase() + 0x1B33530))(this);
	}
	template <typename T = void> T set_GuildID(int64_t value) {
		return ((T (*)(GuildJoinRequest*, int64_t))(Il2CppBase() + 0x1B33538))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(GuildJoinRequest*, uintptr_t))(Il2CppBase() + 0x1B33540))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(GuildJoinRequest*, uintptr_t))(Il2CppBase() + 0x1B335EC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildJoinRequest*))(Il2CppBase() + 0x1B3363C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildJoinRequest*))(Il2CppBase() + 0x1B336C4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildJoinRequest*, uintptr_t))(Il2CppBase() + 0x1B33728))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildJoinRequest*))(Il2CppBase() + 0x1B337D8))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(GuildJoinRequest*, uintptr_t))(Il2CppBase() + 0x1B338D0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildJoinRequest*, uintptr_t))(Il2CppBase() + 0x1B338FC))(this, input);
	}

};

}
