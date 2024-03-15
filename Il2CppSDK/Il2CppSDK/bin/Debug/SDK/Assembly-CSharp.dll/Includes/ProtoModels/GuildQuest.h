#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildQuest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildQuest"));
	}

	 static MessageParser1<ProtoModels::GuildQuest*>*& _parser() {
		return *(MessageParser1<ProtoModels::GuildQuest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& MinGuildRankPointsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& minGuildRankPoints_() {
		return *(R*)((uintptr_t)this + 0x54);
	}
	template <typename R = int32_t> static R& MaxGuildRankPointsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& maxGuildRankPoints_() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> static R& PlayerRewardsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<int32_t>*& _repeated_playerRewards_codec() {
		return *(FieldCodec1<int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1<int32_t>*& playerRewards_() {
		return *(RepeatedField1<int32_t>**)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> static R& BonusRewardFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& bonusReward_() {
		return *(R*)((uintptr_t)this + 0x68);
	}

	 static MessageParser1<ProtoModels::GuildQuest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::GuildQuest*>* (*)(void *))(Il2CppBase() + 0x1B3CB74))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1B3CBD8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildQuest*))(Il2CppBase() + 0x1B3CCF8))(this);
	}
	template <typename R = ProtoModels::GuildQuest*> R Clone() {
		return ((R (*)(GuildQuest*))(Il2CppBase() + 0x1B3CF68))(this);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(GuildQuest*))(Il2CppBase() + 0x1B3CFC4))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(GuildQuest*, Il2CppString*))(Il2CppBase() + 0x1B3CFCC))(this, value);
	}
	template <typename R = int64_t> R get_GuildID() {
		return ((R (*)(GuildQuest*))(Il2CppBase() + 0x1B3D04C))(this);
	}
	template <typename R = void> R set_GuildID(int64_t value) {
		return ((R (*)(GuildQuest*, int64_t))(Il2CppBase() + 0x1B3D054))(this, value);
	}
	template <typename R = int32_t> R get_ProgressPoints() {
		return ((R (*)(GuildQuest*))(Il2CppBase() + 0x1B3D05C))(this);
	}
	template <typename R = void> R set_ProgressPoints(int32_t value) {
		return ((R (*)(GuildQuest*, int32_t))(Il2CppBase() + 0x1B3D064))(this, value);
	}
	template <typename R = ProtoModels::GuildQuestState> R get_State() {
		return ((R (*)(GuildQuest*))(Il2CppBase() + 0x1B3D06C))(this);
	}
	template <typename R = void> R set_State(ProtoModels::GuildQuestState value) {
		return ((R (*)(GuildQuest*, ProtoModels::GuildQuestState))(Il2CppBase() + 0x1B3D074))(this, value);
	}
	 MapField2<int64_t, ProtoModels::QuestPlayer*>* get_Players() {
		return ((MapField2<int64_t, ProtoModels::QuestPlayer*>* (*)(GuildQuest*))(Il2CppBase() + 0x1B3D07C))(this);
	}
	template <typename R = int64_t> R get_StartedAt() {
		return ((R (*)(GuildQuest*))(Il2CppBase() + 0x1B3D084))(this);
	}
	template <typename R = void> R set_StartedAt(int64_t value) {
		return ((R (*)(GuildQuest*, int64_t))(Il2CppBase() + 0x1B3D08C))(this, value);
	}
	template <typename R = int32_t> R get_Duration() {
		return ((R (*)(GuildQuest*))(Il2CppBase() + 0x1B3D094))(this);
	}
	template <typename R = void> R set_Duration(int32_t value) {
		return ((R (*)(GuildQuest*, int32_t))(Il2CppBase() + 0x1B3D09C))(this, value);
	}
	template <typename R = int64_t> R get_EndTime() {
		return ((R (*)(GuildQuest*))(Il2CppBase() + 0x1B3D0A4))(this);
	}
	template <typename R = void> R set_EndTime(int64_t value) {
		return ((R (*)(GuildQuest*, int64_t))(Il2CppBase() + 0x1B3D0AC))(this, value);
	}
	template <typename R = int64_t> R get_ID() {
		return ((R (*)(GuildQuest*))(Il2CppBase() + 0x1B3D0B4))(this);
	}
	template <typename R = void> R set_ID(int64_t value) {
		return ((R (*)(GuildQuest*, int64_t))(Il2CppBase() + 0x1B3D0BC))(this, value);
	}
	template <typename R = int32_t> R get_MaxProgress() {
		return ((R (*)(GuildQuest*))(Il2CppBase() + 0x1B3D0C4))(this);
	}
	template <typename R = void> R set_MaxProgress(int32_t value) {
		return ((R (*)(GuildQuest*, int32_t))(Il2CppBase() + 0x1B3D0CC))(this, value);
	}
	template <typename R = int32_t> R get_MinGuildRankPoints() {
		return ((R (*)(GuildQuest*))(Il2CppBase() + 0x1B3D0D4))(this);
	}
	template <typename R = void> R set_MinGuildRankPoints(int32_t value) {
		return ((R (*)(GuildQuest*, int32_t))(Il2CppBase() + 0x1B3D0DC))(this, value);
	}
	template <typename R = int32_t> R get_MaxGuildRankPoints() {
		return ((R (*)(GuildQuest*))(Il2CppBase() + 0x1B3D0E4))(this);
	}
	template <typename R = void> R set_MaxGuildRankPoints(int32_t value) {
		return ((R (*)(GuildQuest*, int32_t))(Il2CppBase() + 0x1B3D0EC))(this, value);
	}
	 RepeatedField1<int32_t>* get_PlayerRewards() {
		return ((RepeatedField1<int32_t>* (*)(GuildQuest*))(Il2CppBase() + 0x1B3D0F4))(this);
	}
	template <typename R = int32_t> R get_BonusReward() {
		return ((R (*)(GuildQuest*))(Il2CppBase() + 0x1B3D0FC))(this);
	}
	template <typename R = void> R set_BonusReward(int32_t value) {
		return ((R (*)(GuildQuest*, int32_t))(Il2CppBase() + 0x1B3D104))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildQuest*, Il2CppObject*))(Il2CppBase() + 0x1B3D10C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildQuest* other) {
		return ((R (*)(GuildQuest*, ProtoModels::GuildQuest*))(Il2CppBase() + 0x1B3D17C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildQuest*))(Il2CppBase() + 0x1B3D2F4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildQuest*))(Il2CppBase() + 0x1B3D4B0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildQuest*, uintptr_t))(Il2CppBase() + 0x1B3D514))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildQuest*))(Il2CppBase() + 0x1B3D82C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildQuest* other) {
		return ((R (*)(GuildQuest*, ProtoModels::GuildQuest*))(Il2CppBase() + 0x1B3DC08))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildQuest*, uintptr_t))(Il2CppBase() + 0x1B3DD38))(this, input);
	}

};

}
