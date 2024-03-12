#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildResetBossLocationRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildResetBossLocationRequest"));
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
	template <typename T = int32_t> static T& PveTagFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& pveTag_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x19401E0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1940244))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildResetBossLocationRequest*))(Il2CppBase() + 0x1940364))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(GuildResetBossLocationRequest*))(Il2CppBase() + 0x1940468))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(GuildResetBossLocationRequest*))(Il2CppBase() + 0x19404C4))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(GuildResetBossLocationRequest*, int64_t))(Il2CppBase() + 0x19404CC))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(GuildResetBossLocationRequest*))(Il2CppBase() + 0x19404D4))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(GuildResetBossLocationRequest*, int64_t))(Il2CppBase() + 0x19404DC))(this, value);
	}
	template <typename T = int64_t> T get_GuildID() {
		return ((T (*)(GuildResetBossLocationRequest*))(Il2CppBase() + 0x19404E4))(this);
	}
	template <typename T = void> T set_GuildID(int64_t value) {
		return ((T (*)(GuildResetBossLocationRequest*, int64_t))(Il2CppBase() + 0x19404EC))(this, value);
	}
	template <typename T = Il2CppString*> T get_PveTag() {
		return ((T (*)(GuildResetBossLocationRequest*))(Il2CppBase() + 0x19404F4))(this);
	}
	template <typename T = void> T set_PveTag(Il2CppString* value) {
		return ((T (*)(GuildResetBossLocationRequest*, Il2CppString*))(Il2CppBase() + 0x19404FC))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(GuildResetBossLocationRequest*, uintptr_t))(Il2CppBase() + 0x194057C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(GuildResetBossLocationRequest*, uintptr_t))(Il2CppBase() + 0x19405EC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildResetBossLocationRequest*))(Il2CppBase() + 0x1940660))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildResetBossLocationRequest*))(Il2CppBase() + 0x194070C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildResetBossLocationRequest*, uintptr_t))(Il2CppBase() + 0x1940770))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildResetBossLocationRequest*))(Il2CppBase() + 0x1940854))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(GuildResetBossLocationRequest*, uintptr_t))(Il2CppBase() + 0x1940994))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildResetBossLocationRequest*, uintptr_t))(Il2CppBase() + 0x19409E0))(this, input);
	}

};

}
