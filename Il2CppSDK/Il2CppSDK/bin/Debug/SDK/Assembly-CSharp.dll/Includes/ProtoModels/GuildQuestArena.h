#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildQuestArena
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildQuestArena"));
	}

	 static MessageParser1<ProtoModels::GuildQuestArena*>*& _parser() {
		return *(MessageParser1<ProtoModels::GuildQuestArena*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& GuildIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& guildID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ProgressPointsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& progressPoints_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& StateFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::GuildQuestState> R& state_() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int32_t> static R& PlayersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codec<int64_t, ProtoModels::QuestPlayer*>*& _map_players_codec() {
		return *(Codec<int64_t, ProtoModels::QuestPlayer*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 MapField2<int64_t, ProtoModels::QuestPlayer*>*& players_() {
		return *(MapField2<int64_t, ProtoModels::QuestPlayer*>**)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& StartedAtFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& startedAt_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& DurationFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& duration_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& EndTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& endTime_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& IDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& iD_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& MaxProgressFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& maxProgress_() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& BonusRewardFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& bonusReward_() {
		return *(R*)((uintptr_t)this + 0x54);
	}

	 static MessageParser1<ProtoModels::GuildQuestArena*>* get_Parser() {
		return ((MessageParser1<ProtoModels::GuildQuestArena*>* (*)(void *))(Il2CppBase() + 0x19306C0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1930724))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildQuestArena*))(Il2CppBase() + 0x1930844))(this);
	}
	template <typename R = ProtoModels::GuildQuestArena*> R Clone() {
		return ((R (*)(GuildQuestArena*))(Il2CppBase() + 0x1930A20))(this);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(GuildQuestArena*))(Il2CppBase() + 0x1930A7C))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(GuildQuestArena*, Il2CppString*))(Il2CppBase() + 0x1930A84))(this, value);
	}
	template <typename R = int64_t> R get_GuildID() {
		return ((R (*)(GuildQuestArena*))(Il2CppBase() + 0x1930B04))(this);
	}
	template <typename R = void> R set_GuildID(int64_t value) {
		return ((R (*)(GuildQuestArena*, int64_t))(Il2CppBase() + 0x1930B0C))(this, value);
	}
	template <typename R = int32_t> R get_ProgressPoints() {
		return ((R (*)(GuildQuestArena*))(Il2CppBase() + 0x1930B14))(this);
	}
	template <typename R = void> R set_ProgressPoints(int32_t value) {
		return ((R (*)(GuildQuestArena*, int32_t))(Il2CppBase() + 0x1930B1C))(this, value);
	}
	template <typename R = ProtoModels::GuildQuestState> R get_State() {
		return ((R (*)(GuildQuestArena*))(Il2CppBase() + 0x1930B24))(this);
	}
	template <typename R = void> R set_State(ProtoModels::GuildQuestState value) {
		return ((R (*)(GuildQuestArena*, ProtoModels::GuildQuestState))(Il2CppBase() + 0x1930B2C))(this, value);
	}
	 MapField2<int64_t, ProtoModels::QuestPlayer*>* get_Players() {
		return ((MapField2<int64_t, ProtoModels::QuestPlayer*>* (*)(GuildQuestArena*))(Il2CppBase() + 0x1930B34))(this);
	}
	template <typename R = int64_t> R get_StartedAt() {
		return ((R (*)(GuildQuestArena*))(Il2CppBase() + 0x1930B3C))(this);
	}
	template <typename R = void> R set_StartedAt(int64_t value) {
		return ((R (*)(GuildQuestArena*, int64_t))(Il2CppBase() + 0x1930B44))(this, value);
	}
	template <typename R = int32_t> R get_Duration() {
		return ((R (*)(GuildQuestArena*))(Il2CppBase() + 0x1930B4C))(this);
	}
	template <typename R = void> R set_Duration(int32_t value) {
		return ((R (*)(GuildQuestArena*, int32_t))(Il2CppBase() + 0x1930B54))(this, value);
	}
	template <typename R = int64_t> R get_EndTime() {
		return ((R (*)(GuildQuestArena*))(Il2CppBase() + 0x1930B5C))(this);
	}
	template <typename R = void> R set_EndTime(int64_t value) {
		return ((R (*)(GuildQuestArena*, int64_t))(Il2CppBase() + 0x1930B64))(this, value);
	}
	template <typename R = int64_t> R get_ID() {
		return ((R (*)(GuildQuestArena*))(Il2CppBase() + 0x1930B6C))(this);
	}
	template <typename R = void> R set_ID(int64_t value) {
		return ((R (*)(GuildQuestArena*, int64_t))(Il2CppBase() + 0x1930B74))(this, value);
	}
	template <typename R = int32_t> R get_MaxProgress() {
		return ((R (*)(GuildQuestArena*))(Il2CppBase() + 0x1930B7C))(this);
	}
	template <typename R = void> R set_MaxProgress(int32_t value) {
		return ((R (*)(GuildQuestArena*, int32_t))(Il2CppBase() + 0x1930B84))(this, value);
	}
	template <typename R = int32_t> R get_BonusReward() {
		return ((R (*)(GuildQuestArena*))(Il2CppBase() + 0x1930B8C))(this);
	}
	template <typename R = void> R set_BonusReward(int32_t value) {
		return ((R (*)(GuildQuestArena*, int32_t))(Il2CppBase() + 0x1930B94))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildQuestArena*, Il2CppObject*))(Il2CppBase() + 0x1930B9C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildQuestArena* other) {
		return ((R (*)(GuildQuestArena*, ProtoModels::GuildQuestArena*))(Il2CppBase() + 0x1930C0C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildQuestArena*))(Il2CppBase() + 0x1930D38))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildQuestArena*))(Il2CppBase() + 0x1930EA4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildQuestArena*, uintptr_t))(Il2CppBase() + 0x1930F08))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildQuestArena*))(Il2CppBase() + 0x1931178))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildQuestArena* other) {
		return ((R (*)(GuildQuestArena*, ProtoModels::GuildQuestArena*))(Il2CppBase() + 0x193148C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildQuestArena*, uintptr_t))(Il2CppBase() + 0x193157C))(this, input);
	}

};

}
