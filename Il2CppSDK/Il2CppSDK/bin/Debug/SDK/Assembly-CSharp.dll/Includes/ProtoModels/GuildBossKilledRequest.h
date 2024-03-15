#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildBossKilledRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildBossKilledRequest"));
	}

	 static MessageParser1ProtoModels::GuildBossKilledRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::GuildBossKilledRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& GuildIdFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& guildId_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& PlayerIdsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1int64_t>*& _repeated_playerIds_codec() {
		return *(FieldCodec1int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1int64_t>*& playerIds_() {
		return *(RepeatedField1int64_t>**)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ParticipantRewardFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& participantReward_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& CommonRewardFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& commonReward_() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = int32_t> static R& BossNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& bossName_() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 static MessageParser1ProtoModels::GuildBossKilledRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::GuildBossKilledRequest*>* (*)(void *))(Il2CppBase() + 0x12E64CC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x12E6530))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildBossKilledRequest*))(Il2CppBase() + 0x12E6650))(this);
	}
	template <typename R = ProtoModels::GuildBossKilledRequest*> R Clone() {
		return ((R (*)(GuildBossKilledRequest*))(Il2CppBase() + 0x12E67FC))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(GuildBossKilledRequest*))(Il2CppBase() + 0x12E6858))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(GuildBossKilledRequest*, int64_t))(Il2CppBase() + 0x12E6860))(this, value);
	}
	template <typename R = int64_t> R get_GuildId() {
		return ((R (*)(GuildBossKilledRequest*))(Il2CppBase() + 0x12E6868))(this);
	}
	template <typename R = void> R set_GuildId(int64_t value) {
		return ((R (*)(GuildBossKilledRequest*, int64_t))(Il2CppBase() + 0x12E6870))(this, value);
	}
	 RepeatedField1int64_t>* get_PlayerIds() {
		return ((RepeatedField1int64_t>* (*)(GuildBossKilledRequest*))(Il2CppBase() + 0x12E6878))(this);
	}
	template <typename R = int32_t> R get_ParticipantReward() {
		return ((R (*)(GuildBossKilledRequest*))(Il2CppBase() + 0x12E6880))(this);
	}
	template <typename R = void> R set_ParticipantReward(int32_t value) {
		return ((R (*)(GuildBossKilledRequest*, int32_t))(Il2CppBase() + 0x12E6888))(this, value);
	}
	template <typename R = int32_t> R get_CommonReward() {
		return ((R (*)(GuildBossKilledRequest*))(Il2CppBase() + 0x12E6890))(this);
	}
	template <typename R = void> R set_CommonReward(int32_t value) {
		return ((R (*)(GuildBossKilledRequest*, int32_t))(Il2CppBase() + 0x12E6898))(this, value);
	}
	template <typename R = Il2CppString*> R get_BossName() {
		return ((R (*)(GuildBossKilledRequest*))(Il2CppBase() + 0x12E68A0))(this);
	}
	template <typename R = void> R set_BossName(Il2CppString* value) {
		return ((R (*)(GuildBossKilledRequest*, Il2CppString*))(Il2CppBase() + 0x12E68A8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildBossKilledRequest*, Il2CppObject*))(Il2CppBase() + 0x12E6928))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildBossKilledRequest* other) {
		return ((R (*)(GuildBossKilledRequest*, ProtoModels::GuildBossKilledRequest*))(Il2CppBase() + 0x12E6998))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildBossKilledRequest*))(Il2CppBase() + 0x12E6A78))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildBossKilledRequest*))(Il2CppBase() + 0x12E6B5C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildBossKilledRequest*, uintptr_t))(Il2CppBase() + 0x12E6BC0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildBossKilledRequest*))(Il2CppBase() + 0x12E6D54))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildBossKilledRequest* other) {
		return ((R (*)(GuildBossKilledRequest*, ProtoModels::GuildBossKilledRequest*))(Il2CppBase() + 0x12E6F3C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildBossKilledRequest*, uintptr_t))(Il2CppBase() + 0x12E6FFC))(this, input);
	}

};

}
