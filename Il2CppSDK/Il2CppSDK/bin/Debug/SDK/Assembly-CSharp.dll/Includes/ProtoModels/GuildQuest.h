#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildQuest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildQuest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& GuildIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& guildID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ProgressPointsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& progressPoints_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& StateFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& state_() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> static T& PlayersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _map_players_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& players_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& StartedAtFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& startedAt_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& DurationFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& duration_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& EndTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& endTime_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& IDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& iD_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& MaxProgressFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& maxProgress_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& MinGuildRankPointsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& minGuildRankPoints_() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> static T& MaxGuildRankPointsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& maxGuildRankPoints_() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& PlayerRewardsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_playerRewards_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> T& playerRewards_() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& BonusRewardFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& bonusReward_() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B3CB74))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B3CBD8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildQuest*))(Il2CppBase() + 0x1B3CCF8))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(GuildQuest*))(Il2CppBase() + 0x1B3CF68))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(GuildQuest*))(Il2CppBase() + 0x1B3CFC4))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(GuildQuest*, Il2CppString*))(Il2CppBase() + 0x1B3CFCC))(this, value);
	}
	template <typename T = int64_t> T get_GuildID() {
		return ((T (*)(GuildQuest*))(Il2CppBase() + 0x1B3D04C))(this);
	}
	template <typename T = void> T set_GuildID(int64_t value) {
		return ((T (*)(GuildQuest*, int64_t))(Il2CppBase() + 0x1B3D054))(this, value);
	}
	template <typename T = int32_t> T get_ProgressPoints() {
		return ((T (*)(GuildQuest*))(Il2CppBase() + 0x1B3D05C))(this);
	}
	template <typename T = void> T set_ProgressPoints(int32_t value) {
		return ((T (*)(GuildQuest*, int32_t))(Il2CppBase() + 0x1B3D064))(this, value);
	}
	template <typename T = uintptr_t> T get_State() {
		return ((T (*)(GuildQuest*))(Il2CppBase() + 0x1B3D06C))(this);
	}
	template <typename T = void> T set_State(uintptr_t value) {
		return ((T (*)(GuildQuest*, uintptr_t))(Il2CppBase() + 0x1B3D074))(this, value);
	}
	template <typename T = void*> T get_Players() {
		return ((T (*)(GuildQuest*))(Il2CppBase() + 0x1B3D07C))(this);
	}
	template <typename T = int64_t> T get_StartedAt() {
		return ((T (*)(GuildQuest*))(Il2CppBase() + 0x1B3D084))(this);
	}
	template <typename T = void> T set_StartedAt(int64_t value) {
		return ((T (*)(GuildQuest*, int64_t))(Il2CppBase() + 0x1B3D08C))(this, value);
	}
	template <typename T = int32_t> T get_Duration() {
		return ((T (*)(GuildQuest*))(Il2CppBase() + 0x1B3D094))(this);
	}
	template <typename T = void> T set_Duration(int32_t value) {
		return ((T (*)(GuildQuest*, int32_t))(Il2CppBase() + 0x1B3D09C))(this, value);
	}
	template <typename T = int64_t> T get_EndTime() {
		return ((T (*)(GuildQuest*))(Il2CppBase() + 0x1B3D0A4))(this);
	}
	template <typename T = void> T set_EndTime(int64_t value) {
		return ((T (*)(GuildQuest*, int64_t))(Il2CppBase() + 0x1B3D0AC))(this, value);
	}
	template <typename T = int64_t> T get_ID() {
		return ((T (*)(GuildQuest*))(Il2CppBase() + 0x1B3D0B4))(this);
	}
	template <typename T = void> T set_ID(int64_t value) {
		return ((T (*)(GuildQuest*, int64_t))(Il2CppBase() + 0x1B3D0BC))(this, value);
	}
	template <typename T = int32_t> T get_MaxProgress() {
		return ((T (*)(GuildQuest*))(Il2CppBase() + 0x1B3D0C4))(this);
	}
	template <typename T = void> T set_MaxProgress(int32_t value) {
		return ((T (*)(GuildQuest*, int32_t))(Il2CppBase() + 0x1B3D0CC))(this, value);
	}
	template <typename T = int32_t> T get_MinGuildRankPoints() {
		return ((T (*)(GuildQuest*))(Il2CppBase() + 0x1B3D0D4))(this);
	}
	template <typename T = void> T set_MinGuildRankPoints(int32_t value) {
		return ((T (*)(GuildQuest*, int32_t))(Il2CppBase() + 0x1B3D0DC))(this, value);
	}
	template <typename T = int32_t> T get_MaxGuildRankPoints() {
		return ((T (*)(GuildQuest*))(Il2CppBase() + 0x1B3D0E4))(this);
	}
	template <typename T = void> T set_MaxGuildRankPoints(int32_t value) {
		return ((T (*)(GuildQuest*, int32_t))(Il2CppBase() + 0x1B3D0EC))(this, value);
	}
	template <typename T = void*> T get_PlayerRewards() {
		return ((T (*)(GuildQuest*))(Il2CppBase() + 0x1B3D0F4))(this);
	}
	template <typename T = int32_t> T get_BonusReward() {
		return ((T (*)(GuildQuest*))(Il2CppBase() + 0x1B3D0FC))(this);
	}
	template <typename T = void> T set_BonusReward(int32_t value) {
		return ((T (*)(GuildQuest*, int32_t))(Il2CppBase() + 0x1B3D104))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(GuildQuest*, uintptr_t))(Il2CppBase() + 0x1B3D10C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(GuildQuest*, uintptr_t))(Il2CppBase() + 0x1B3D17C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildQuest*))(Il2CppBase() + 0x1B3D2F4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildQuest*))(Il2CppBase() + 0x1B3D4B0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildQuest*, uintptr_t))(Il2CppBase() + 0x1B3D514))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildQuest*))(Il2CppBase() + 0x1B3D82C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(GuildQuest*, uintptr_t))(Il2CppBase() + 0x1B3DC08))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildQuest*, uintptr_t))(Il2CppBase() + 0x1B3DD38))(this, input);
	}

};

}
