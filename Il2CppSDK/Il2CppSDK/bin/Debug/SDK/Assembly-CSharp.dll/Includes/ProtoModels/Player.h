#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Player
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Player"));
	}

	template <typename T = MessageParser1Player*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& iD_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ClanIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& clanID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& LevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& level_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& CellIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& cellID_() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> static T& RegionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& region_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& IsOnlineFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isOnline_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& LastLoginFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& lastLogin_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& IconFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& icon_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& TourneyFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = PlayerTourney*> T& tourney_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& DistrictFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = PlayerDistrict*> T& district_() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& GuildIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& guildID_() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& GuildRoleFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = GuildRole*> T& guildRole_() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> static T& GuildCoinsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& guildCoins_() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> static T& WeeklyGuildPointsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& weeklyGuildPoints_() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> static T& PortalsPointsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& portalsPoints_() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> static T& SaviorPointsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& saviorPoints_() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> static T& LastOperationGuildTimeUnixFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& lastOperationGuildTimeUnix_() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> static T& LastOperationClanTimeUnixFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& lastOperationClanTimeUnix_() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> static T& GlobalTournamentPointsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& globalTournamentPoints_() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = MessageParser1Player*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1702584))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x17025E8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(Player*))(Il2CppBase() + 0x1702708))(this);
	}
	template <typename T = Player*> T Clone() {
		return ((T (*)(Player*))(Il2CppBase() + 0x1702900))(this);
	}
	template <typename T = int64_t> T get_ID() {
		return ((T (*)(Player*))(Il2CppBase() + 0x170295C))(this);
	}
	template <typename T = void> T set_ID(int64_t value) {
		return ((T (*)(Player*, int64_t))(Il2CppBase() + 0x1702964))(this, value);
	}
	template <typename T = int64_t> T get_ClanID() {
		return ((T (*)(Player*))(Il2CppBase() + 0x170296C))(this);
	}
	template <typename T = void> T set_ClanID(int64_t value) {
		return ((T (*)(Player*, int64_t))(Il2CppBase() + 0x1702974))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(Player*))(Il2CppBase() + 0x170297C))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(Player*, Il2CppString*))(Il2CppBase() + 0x1702984))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(Player*))(Il2CppBase() + 0x1702A04))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(Player*, int32_t))(Il2CppBase() + 0x1702A0C))(this, value);
	}
	template <typename T = int32_t> T get_CellID() {
		return ((T (*)(Player*))(Il2CppBase() + 0x1702A14))(this);
	}
	template <typename T = void> T set_CellID(int32_t value) {
		return ((T (*)(Player*, int32_t))(Il2CppBase() + 0x1702A1C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Region() {
		return ((T (*)(Player*))(Il2CppBase() + 0x1702A24))(this);
	}
	template <typename T = void> T set_Region(Il2CppString* value) {
		return ((T (*)(Player*, Il2CppString*))(Il2CppBase() + 0x1702A2C))(this, value);
	}
	template <typename T = bool> T get_IsOnline() {
		return ((T (*)(Player*))(Il2CppBase() + 0x1702AAC))(this);
	}
	template <typename T = void> T set_IsOnline(bool value) {
		return ((T (*)(Player*, bool))(Il2CppBase() + 0x1702AB4))(this, value);
	}
	template <typename T = int64_t> T get_LastLogin() {
		return ((T (*)(Player*))(Il2CppBase() + 0x1702AC0))(this);
	}
	template <typename T = void> T set_LastLogin(int64_t value) {
		return ((T (*)(Player*, int64_t))(Il2CppBase() + 0x1702AC8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Icon() {
		return ((T (*)(Player*))(Il2CppBase() + 0x1702AD0))(this);
	}
	template <typename T = void> T set_Icon(Il2CppString* value) {
		return ((T (*)(Player*, Il2CppString*))(Il2CppBase() + 0x1702AD8))(this, value);
	}
	template <typename T = PlayerTourney*> T get_Tourney() {
		return ((T (*)(Player*))(Il2CppBase() + 0x1702B58))(this);
	}
	template <typename T = void> T set_Tourney(PlayerTourney* value) {
		return ((T (*)(Player*, PlayerTourney*))(Il2CppBase() + 0x1702B60))(this, value);
	}
	template <typename T = PlayerDistrict*> T get_District() {
		return ((T (*)(Player*))(Il2CppBase() + 0x1702B68))(this);
	}
	template <typename T = void> T set_District(PlayerDistrict* value) {
		return ((T (*)(Player*, PlayerDistrict*))(Il2CppBase() + 0x1702B70))(this, value);
	}
	template <typename T = int64_t> T get_GuildID() {
		return ((T (*)(Player*))(Il2CppBase() + 0x1702B78))(this);
	}
	template <typename T = void> T set_GuildID(int64_t value) {
		return ((T (*)(Player*, int64_t))(Il2CppBase() + 0x1702B80))(this, value);
	}
	template <typename T = GuildRole*> T get_GuildRole() {
		return ((T (*)(Player*))(Il2CppBase() + 0x1702B88))(this);
	}
	template <typename T = void> T set_GuildRole(GuildRole* value) {
		return ((T (*)(Player*, GuildRole*))(Il2CppBase() + 0x1702B90))(this, value);
	}
	template <typename T = int32_t> T get_GuildCoins() {
		return ((T (*)(Player*))(Il2CppBase() + 0x1702B98))(this);
	}
	template <typename T = void> T set_GuildCoins(int32_t value) {
		return ((T (*)(Player*, int32_t))(Il2CppBase() + 0x1702BA0))(this, value);
	}
	template <typename T = int32_t> T get_WeeklyGuildPoints() {
		return ((T (*)(Player*))(Il2CppBase() + 0x1702BA8))(this);
	}
	template <typename T = void> T set_WeeklyGuildPoints(int32_t value) {
		return ((T (*)(Player*, int32_t))(Il2CppBase() + 0x1702BB0))(this, value);
	}
	template <typename T = int32_t> T get_PortalsPoints() {
		return ((T (*)(Player*))(Il2CppBase() + 0x1702BB8))(this);
	}
	template <typename T = void> T set_PortalsPoints(int32_t value) {
		return ((T (*)(Player*, int32_t))(Il2CppBase() + 0x1702BC0))(this, value);
	}
	template <typename T = int32_t> T get_SaviorPoints() {
		return ((T (*)(Player*))(Il2CppBase() + 0x1702BC8))(this);
	}
	template <typename T = void> T set_SaviorPoints(int32_t value) {
		return ((T (*)(Player*, int32_t))(Il2CppBase() + 0x1702BD0))(this, value);
	}
	template <typename T = int64_t> T get_LastOperationGuildTimeUnix() {
		return ((T (*)(Player*))(Il2CppBase() + 0x1702BD8))(this);
	}
	template <typename T = void> T set_LastOperationGuildTimeUnix(int64_t value) {
		return ((T (*)(Player*, int64_t))(Il2CppBase() + 0x1702BE0))(this, value);
	}
	template <typename T = int64_t> T get_LastOperationClanTimeUnix() {
		return ((T (*)(Player*))(Il2CppBase() + 0x1702BE8))(this);
	}
	template <typename T = void> T set_LastOperationClanTimeUnix(int64_t value) {
		return ((T (*)(Player*, int64_t))(Il2CppBase() + 0x1702BF0))(this, value);
	}
	template <typename T = int32_t> T get_GlobalTournamentPoints() {
		return ((T (*)(Player*))(Il2CppBase() + 0x1702BF8))(this);
	}
	template <typename T = void> T set_GlobalTournamentPoints(int32_t value) {
		return ((T (*)(Player*, int32_t))(Il2CppBase() + 0x1702C00))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(Player*, Il2CppObject*))(Il2CppBase() + 0x1702C08))(this, other);
	}
	template <typename T = bool> T Equals_1(Player* other) {
		return ((T (*)(Player*, Player*))(Il2CppBase() + 0x1702C78))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Player*))(Il2CppBase() + 0x1702E18))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Player*))(Il2CppBase() + 0x1703094))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(Player*, uintptr_t))(Il2CppBase() + 0x17030F8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(Player*))(Il2CppBase() + 0x17034C0))(this);
	}
	template <typename T = void> T MergeFrom(Player* other) {
		return ((T (*)(Player*, Player*))(Il2CppBase() + 0x17039AC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(Player*, uintptr_t))(Il2CppBase() + 0x1703BAC))(this, input);
	}

};

}
