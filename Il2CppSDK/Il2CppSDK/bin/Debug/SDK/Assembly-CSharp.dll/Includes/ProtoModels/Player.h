#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Player
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Player"));
	}

	 static MessageParser1ProtoModels::Player*>*& _parser() {
		return *(MessageParser1ProtoModels::Player*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& iD_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ClanIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& clanID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& LevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& level_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& CellIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& cellID_() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = int32_t> static R& RegionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& region_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& IsOnlineFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isOnline_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& LastLoginFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& lastLogin_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& IconFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& icon_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& TourneyFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::PlayerTourney*> R& tourney_() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& DistrictFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::PlayerDistrict*> R& district_() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> static R& GuildIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& guildID_() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> static R& GuildRoleFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::GuildRole*> R& guildRole_() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> static R& GuildCoinsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& guildCoins_() {
		return *(R*)((uintptr_t)this + 0x6C);
	}
	template <typename R = int32_t> static R& WeeklyGuildPointsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& weeklyGuildPoints_() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = int32_t> static R& PortalsPointsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& portalsPoints_() {
		return *(R*)((uintptr_t)this + 0x74);
	}
	template <typename R = int32_t> static R& SaviorPointsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& saviorPoints_() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = int32_t> static R& LastOperationGuildTimeUnixFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& lastOperationGuildTimeUnix_() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = int32_t> static R& LastOperationClanTimeUnixFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& lastOperationClanTimeUnix_() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = int32_t> static R& GlobalTournamentPointsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& globalTournamentPoints_() {
		return *(R*)((uintptr_t)this + 0x90);
	}

	 static MessageParser1ProtoModels::Player*>* get_Parser() {
		return ((MessageParser1ProtoModels::Player*>* (*)(void *))(Il2CppBase() + 0x1702584))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x17025E8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(Player*))(Il2CppBase() + 0x1702708))(this);
	}
	template <typename R = ProtoModels::Player*> R Clone() {
		return ((R (*)(Player*))(Il2CppBase() + 0x1702900))(this);
	}
	template <typename R = int64_t> R get_ID() {
		return ((R (*)(Player*))(Il2CppBase() + 0x170295C))(this);
	}
	template <typename R = void> R set_ID(int64_t value) {
		return ((R (*)(Player*, int64_t))(Il2CppBase() + 0x1702964))(this, value);
	}
	template <typename R = int64_t> R get_ClanID() {
		return ((R (*)(Player*))(Il2CppBase() + 0x170296C))(this);
	}
	template <typename R = void> R set_ClanID(int64_t value) {
		return ((R (*)(Player*, int64_t))(Il2CppBase() + 0x1702974))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(Player*))(Il2CppBase() + 0x170297C))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(Player*, Il2CppString*))(Il2CppBase() + 0x1702984))(this, value);
	}
	template <typename R = int32_t> R get_Level() {
		return ((R (*)(Player*))(Il2CppBase() + 0x1702A04))(this);
	}
	template <typename R = void> R set_Level(int32_t value) {
		return ((R (*)(Player*, int32_t))(Il2CppBase() + 0x1702A0C))(this, value);
	}
	template <typename R = int32_t> R get_CellID() {
		return ((R (*)(Player*))(Il2CppBase() + 0x1702A14))(this);
	}
	template <typename R = void> R set_CellID(int32_t value) {
		return ((R (*)(Player*, int32_t))(Il2CppBase() + 0x1702A1C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Region() {
		return ((R (*)(Player*))(Il2CppBase() + 0x1702A24))(this);
	}
	template <typename R = void> R set_Region(Il2CppString* value) {
		return ((R (*)(Player*, Il2CppString*))(Il2CppBase() + 0x1702A2C))(this, value);
	}
	template <typename R = bool> R get_IsOnline() {
		return ((R (*)(Player*))(Il2CppBase() + 0x1702AAC))(this);
	}
	template <typename R = void> R set_IsOnline(bool value) {
		return ((R (*)(Player*, bool))(Il2CppBase() + 0x1702AB4))(this, value);
	}
	template <typename R = int64_t> R get_LastLogin() {
		return ((R (*)(Player*))(Il2CppBase() + 0x1702AC0))(this);
	}
	template <typename R = void> R set_LastLogin(int64_t value) {
		return ((R (*)(Player*, int64_t))(Il2CppBase() + 0x1702AC8))(this, value);
	}
	template <typename R = Il2CppString*> R get_Icon() {
		return ((R (*)(Player*))(Il2CppBase() + 0x1702AD0))(this);
	}
	template <typename R = void> R set_Icon(Il2CppString* value) {
		return ((R (*)(Player*, Il2CppString*))(Il2CppBase() + 0x1702AD8))(this, value);
	}
	template <typename R = ProtoModels::PlayerTourney*> R get_Tourney() {
		return ((R (*)(Player*))(Il2CppBase() + 0x1702B58))(this);
	}
	template <typename R = void> R set_Tourney(ProtoModels::PlayerTourney* value) {
		return ((R (*)(Player*, ProtoModels::PlayerTourney*))(Il2CppBase() + 0x1702B60))(this, value);
	}
	template <typename R = ProtoModels::PlayerDistrict*> R get_District() {
		return ((R (*)(Player*))(Il2CppBase() + 0x1702B68))(this);
	}
	template <typename R = void> R set_District(ProtoModels::PlayerDistrict* value) {
		return ((R (*)(Player*, ProtoModels::PlayerDistrict*))(Il2CppBase() + 0x1702B70))(this, value);
	}
	template <typename R = int64_t> R get_GuildID() {
		return ((R (*)(Player*))(Il2CppBase() + 0x1702B78))(this);
	}
	template <typename R = void> R set_GuildID(int64_t value) {
		return ((R (*)(Player*, int64_t))(Il2CppBase() + 0x1702B80))(this, value);
	}
	template <typename R = ProtoModels::GuildRole*> R get_GuildRole() {
		return ((R (*)(Player*))(Il2CppBase() + 0x1702B88))(this);
	}
	template <typename R = void> R set_GuildRole(ProtoModels::GuildRole* value) {
		return ((R (*)(Player*, ProtoModels::GuildRole*))(Il2CppBase() + 0x1702B90))(this, value);
	}
	template <typename R = int32_t> R get_GuildCoins() {
		return ((R (*)(Player*))(Il2CppBase() + 0x1702B98))(this);
	}
	template <typename R = void> R set_GuildCoins(int32_t value) {
		return ((R (*)(Player*, int32_t))(Il2CppBase() + 0x1702BA0))(this, value);
	}
	template <typename R = int32_t> R get_WeeklyGuildPoints() {
		return ((R (*)(Player*))(Il2CppBase() + 0x1702BA8))(this);
	}
	template <typename R = void> R set_WeeklyGuildPoints(int32_t value) {
		return ((R (*)(Player*, int32_t))(Il2CppBase() + 0x1702BB0))(this, value);
	}
	template <typename R = int32_t> R get_PortalsPoints() {
		return ((R (*)(Player*))(Il2CppBase() + 0x1702BB8))(this);
	}
	template <typename R = void> R set_PortalsPoints(int32_t value) {
		return ((R (*)(Player*, int32_t))(Il2CppBase() + 0x1702BC0))(this, value);
	}
	template <typename R = int32_t> R get_SaviorPoints() {
		return ((R (*)(Player*))(Il2CppBase() + 0x1702BC8))(this);
	}
	template <typename R = void> R set_SaviorPoints(int32_t value) {
		return ((R (*)(Player*, int32_t))(Il2CppBase() + 0x1702BD0))(this, value);
	}
	template <typename R = int64_t> R get_LastOperationGuildTimeUnix() {
		return ((R (*)(Player*))(Il2CppBase() + 0x1702BD8))(this);
	}
	template <typename R = void> R set_LastOperationGuildTimeUnix(int64_t value) {
		return ((R (*)(Player*, int64_t))(Il2CppBase() + 0x1702BE0))(this, value);
	}
	template <typename R = int64_t> R get_LastOperationClanTimeUnix() {
		return ((R (*)(Player*))(Il2CppBase() + 0x1702BE8))(this);
	}
	template <typename R = void> R set_LastOperationClanTimeUnix(int64_t value) {
		return ((R (*)(Player*, int64_t))(Il2CppBase() + 0x1702BF0))(this, value);
	}
	template <typename R = int32_t> R get_GlobalTournamentPoints() {
		return ((R (*)(Player*))(Il2CppBase() + 0x1702BF8))(this);
	}
	template <typename R = void> R set_GlobalTournamentPoints(int32_t value) {
		return ((R (*)(Player*, int32_t))(Il2CppBase() + 0x1702C00))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(Player*, Il2CppObject*))(Il2CppBase() + 0x1702C08))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::Player* other) {
		return ((R (*)(Player*, ProtoModels::Player*))(Il2CppBase() + 0x1702C78))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(Player*))(Il2CppBase() + 0x1702E18))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(Player*))(Il2CppBase() + 0x1703094))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(Player*, uintptr_t))(Il2CppBase() + 0x17030F8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(Player*))(Il2CppBase() + 0x17034C0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::Player* other) {
		return ((R (*)(Player*, ProtoModels::Player*))(Il2CppBase() + 0x17039AC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(Player*, uintptr_t))(Il2CppBase() + 0x1703BAC))(this, input);
	}

};

}
