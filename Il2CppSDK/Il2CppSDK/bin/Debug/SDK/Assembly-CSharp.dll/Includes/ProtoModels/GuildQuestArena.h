#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildQuestArena
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildQuestArena"));
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
	template <typename T = int32_t> static T& BonusRewardFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& bonusReward_() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x19306C0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1930724))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildQuestArena*))(Il2CppBase() + 0x1930844))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(GuildQuestArena*))(Il2CppBase() + 0x1930A20))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(GuildQuestArena*))(Il2CppBase() + 0x1930A7C))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(GuildQuestArena*, Il2CppString*))(Il2CppBase() + 0x1930A84))(this, value);
	}
	template <typename T = int64_t> T get_GuildID() {
		return ((T (*)(GuildQuestArena*))(Il2CppBase() + 0x1930B04))(this);
	}
	template <typename T = void> T set_GuildID(int64_t value) {
		return ((T (*)(GuildQuestArena*, int64_t))(Il2CppBase() + 0x1930B0C))(this, value);
	}
	template <typename T = int32_t> T get_ProgressPoints() {
		return ((T (*)(GuildQuestArena*))(Il2CppBase() + 0x1930B14))(this);
	}
	template <typename T = void> T set_ProgressPoints(int32_t value) {
		return ((T (*)(GuildQuestArena*, int32_t))(Il2CppBase() + 0x1930B1C))(this, value);
	}
	template <typename T = uintptr_t> T get_State() {
		return ((T (*)(GuildQuestArena*))(Il2CppBase() + 0x1930B24))(this);
	}
	template <typename T = void> T set_State(uintptr_t value) {
		return ((T (*)(GuildQuestArena*, uintptr_t))(Il2CppBase() + 0x1930B2C))(this, value);
	}
	template <typename T = void*> T get_Players() {
		return ((T (*)(GuildQuestArena*))(Il2CppBase() + 0x1930B34))(this);
	}
	template <typename T = int64_t> T get_StartedAt() {
		return ((T (*)(GuildQuestArena*))(Il2CppBase() + 0x1930B3C))(this);
	}
	template <typename T = void> T set_StartedAt(int64_t value) {
		return ((T (*)(GuildQuestArena*, int64_t))(Il2CppBase() + 0x1930B44))(this, value);
	}
	template <typename T = int32_t> T get_Duration() {
		return ((T (*)(GuildQuestArena*))(Il2CppBase() + 0x1930B4C))(this);
	}
	template <typename T = void> T set_Duration(int32_t value) {
		return ((T (*)(GuildQuestArena*, int32_t))(Il2CppBase() + 0x1930B54))(this, value);
	}
	template <typename T = int64_t> T get_EndTime() {
		return ((T (*)(GuildQuestArena*))(Il2CppBase() + 0x1930B5C))(this);
	}
	template <typename T = void> T set_EndTime(int64_t value) {
		return ((T (*)(GuildQuestArena*, int64_t))(Il2CppBase() + 0x1930B64))(this, value);
	}
	template <typename T = int64_t> T get_ID() {
		return ((T (*)(GuildQuestArena*))(Il2CppBase() + 0x1930B6C))(this);
	}
	template <typename T = void> T set_ID(int64_t value) {
		return ((T (*)(GuildQuestArena*, int64_t))(Il2CppBase() + 0x1930B74))(this, value);
	}
	template <typename T = int32_t> T get_MaxProgress() {
		return ((T (*)(GuildQuestArena*))(Il2CppBase() + 0x1930B7C))(this);
	}
	template <typename T = void> T set_MaxProgress(int32_t value) {
		return ((T (*)(GuildQuestArena*, int32_t))(Il2CppBase() + 0x1930B84))(this, value);
	}
	template <typename T = int32_t> T get_BonusReward() {
		return ((T (*)(GuildQuestArena*))(Il2CppBase() + 0x1930B8C))(this);
	}
	template <typename T = void> T set_BonusReward(int32_t value) {
		return ((T (*)(GuildQuestArena*, int32_t))(Il2CppBase() + 0x1930B94))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(GuildQuestArena*, uintptr_t))(Il2CppBase() + 0x1930B9C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(GuildQuestArena*, uintptr_t))(Il2CppBase() + 0x1930C0C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildQuestArena*))(Il2CppBase() + 0x1930D38))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildQuestArena*))(Il2CppBase() + 0x1930EA4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildQuestArena*, uintptr_t))(Il2CppBase() + 0x1930F08))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildQuestArena*))(Il2CppBase() + 0x1931178))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(GuildQuestArena*, uintptr_t))(Il2CppBase() + 0x193148C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildQuestArena*, uintptr_t))(Il2CppBase() + 0x193157C))(this, input);
	}

};

}
