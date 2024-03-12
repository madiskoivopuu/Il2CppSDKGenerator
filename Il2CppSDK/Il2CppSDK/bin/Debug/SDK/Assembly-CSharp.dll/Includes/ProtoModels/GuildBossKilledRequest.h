#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildBossKilledRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildBossKilledRequest"));
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
	template <typename T = int32_t> static T& GuildIdFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& guildId_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& PlayerIdsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_playerIds_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& playerIds_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ParticipantRewardFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& participantReward_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& CommonRewardFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& commonReward_() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> static T& BossNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& bossName_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x12E64CC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x12E6530))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildBossKilledRequest*))(Il2CppBase() + 0x12E6650))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(GuildBossKilledRequest*))(Il2CppBase() + 0x12E67FC))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(GuildBossKilledRequest*))(Il2CppBase() + 0x12E6858))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(GuildBossKilledRequest*, int64_t))(Il2CppBase() + 0x12E6860))(this, value);
	}
	template <typename T = int64_t> T get_GuildId() {
		return ((T (*)(GuildBossKilledRequest*))(Il2CppBase() + 0x12E6868))(this);
	}
	template <typename T = void> T set_GuildId(int64_t value) {
		return ((T (*)(GuildBossKilledRequest*, int64_t))(Il2CppBase() + 0x12E6870))(this, value);
	}
	template <typename T = void*> T get_PlayerIds() {
		return ((T (*)(GuildBossKilledRequest*))(Il2CppBase() + 0x12E6878))(this);
	}
	template <typename T = int32_t> T get_ParticipantReward() {
		return ((T (*)(GuildBossKilledRequest*))(Il2CppBase() + 0x12E6880))(this);
	}
	template <typename T = void> T set_ParticipantReward(int32_t value) {
		return ((T (*)(GuildBossKilledRequest*, int32_t))(Il2CppBase() + 0x12E6888))(this, value);
	}
	template <typename T = int32_t> T get_CommonReward() {
		return ((T (*)(GuildBossKilledRequest*))(Il2CppBase() + 0x12E6890))(this);
	}
	template <typename T = void> T set_CommonReward(int32_t value) {
		return ((T (*)(GuildBossKilledRequest*, int32_t))(Il2CppBase() + 0x12E6898))(this, value);
	}
	template <typename T = Il2CppString*> T get_BossName() {
		return ((T (*)(GuildBossKilledRequest*))(Il2CppBase() + 0x12E68A0))(this);
	}
	template <typename T = void> T set_BossName(Il2CppString* value) {
		return ((T (*)(GuildBossKilledRequest*, Il2CppString*))(Il2CppBase() + 0x12E68A8))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(GuildBossKilledRequest*, uintptr_t))(Il2CppBase() + 0x12E6928))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(GuildBossKilledRequest*, uintptr_t))(Il2CppBase() + 0x12E6998))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildBossKilledRequest*))(Il2CppBase() + 0x12E6A78))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildBossKilledRequest*))(Il2CppBase() + 0x12E6B5C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildBossKilledRequest*, uintptr_t))(Il2CppBase() + 0x12E6BC0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildBossKilledRequest*))(Il2CppBase() + 0x12E6D54))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(GuildBossKilledRequest*, uintptr_t))(Il2CppBase() + 0x12E6F3C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildBossKilledRequest*, uintptr_t))(Il2CppBase() + 0x12E6FFC))(this, input);
	}

};

}
