#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GlobalGuild
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GlobalGuild"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& iD_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& GuildIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& guildID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& LeaderFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& leader_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& TagFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& tag_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& LanguageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& language_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& RankPointsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& rankPoints_() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> static T& MemberCountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& memberCount_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& RegionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& region_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& MainRegionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& mainRegion_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& TypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& type_() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> static T& PrevWeekRankPointsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& prevWeekRankPoints_() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& DescriptionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& description_() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& MessageOfTheDayTypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& messageOfTheDayType_() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> static T& MessageOfTheDayTextFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& messageOfTheDayText_() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x17750AC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1775110))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GlobalGuild*))(Il2CppBase() + 0x1775230))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(GlobalGuild*))(Il2CppBase() + 0x177540C))(this);
	}
	template <typename T = int64_t> T get_ID() {
		return ((T (*)(GlobalGuild*))(Il2CppBase() + 0x1775468))(this);
	}
	template <typename T = void> T set_ID(int64_t value) {
		return ((T (*)(GlobalGuild*, int64_t))(Il2CppBase() + 0x1775470))(this, value);
	}
	template <typename T = int64_t> T get_GuildID() {
		return ((T (*)(GlobalGuild*))(Il2CppBase() + 0x1775478))(this);
	}
	template <typename T = void> T set_GuildID(int64_t value) {
		return ((T (*)(GlobalGuild*, int64_t))(Il2CppBase() + 0x1775480))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(GlobalGuild*))(Il2CppBase() + 0x1775488))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(GlobalGuild*, Il2CppString*))(Il2CppBase() + 0x1775490))(this, value);
	}
	template <typename T = uintptr_t> T get_Leader() {
		return ((T (*)(GlobalGuild*))(Il2CppBase() + 0x1775510))(this);
	}
	template <typename T = void> T set_Leader(uintptr_t value) {
		return ((T (*)(GlobalGuild*, uintptr_t))(Il2CppBase() + 0x1775518))(this, value);
	}
	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(GlobalGuild*))(Il2CppBase() + 0x1775520))(this);
	}
	template <typename T = void> T set_Tag(Il2CppString* value) {
		return ((T (*)(GlobalGuild*, Il2CppString*))(Il2CppBase() + 0x1775528))(this, value);
	}
	template <typename T = int32_t> T get_Language() {
		return ((T (*)(GlobalGuild*))(Il2CppBase() + 0x17755A8))(this);
	}
	template <typename T = void> T set_Language(int32_t value) {
		return ((T (*)(GlobalGuild*, int32_t))(Il2CppBase() + 0x17755B0))(this, value);
	}
	template <typename T = int32_t> T get_RankPoints() {
		return ((T (*)(GlobalGuild*))(Il2CppBase() + 0x17755B8))(this);
	}
	template <typename T = void> T set_RankPoints(int32_t value) {
		return ((T (*)(GlobalGuild*, int32_t))(Il2CppBase() + 0x17755C0))(this, value);
	}
	template <typename T = int32_t> T get_MemberCount() {
		return ((T (*)(GlobalGuild*))(Il2CppBase() + 0x17755C8))(this);
	}
	template <typename T = void> T set_MemberCount(int32_t value) {
		return ((T (*)(GlobalGuild*, int32_t))(Il2CppBase() + 0x17755D0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Region() {
		return ((T (*)(GlobalGuild*))(Il2CppBase() + 0x17755D8))(this);
	}
	template <typename T = void> T set_Region(Il2CppString* value) {
		return ((T (*)(GlobalGuild*, Il2CppString*))(Il2CppBase() + 0x17755E0))(this, value);
	}
	template <typename T = bool> T get_MainRegion() {
		return ((T (*)(GlobalGuild*))(Il2CppBase() + 0x1775660))(this);
	}
	template <typename T = void> T set_MainRegion(bool value) {
		return ((T (*)(GlobalGuild*, bool))(Il2CppBase() + 0x1775668))(this, value);
	}
	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(GlobalGuild*))(Il2CppBase() + 0x1775674))(this);
	}
	template <typename T = void> T set_Type(uintptr_t value) {
		return ((T (*)(GlobalGuild*, uintptr_t))(Il2CppBase() + 0x177567C))(this, value);
	}
	template <typename T = int32_t> T get_PrevWeekRankPoints() {
		return ((T (*)(GlobalGuild*))(Il2CppBase() + 0x1775684))(this);
	}
	template <typename T = void> T set_PrevWeekRankPoints(int32_t value) {
		return ((T (*)(GlobalGuild*, int32_t))(Il2CppBase() + 0x177568C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(GlobalGuild*))(Il2CppBase() + 0x1775694))(this);
	}
	template <typename T = void> T set_Description(Il2CppString* value) {
		return ((T (*)(GlobalGuild*, Il2CppString*))(Il2CppBase() + 0x177569C))(this, value);
	}
	template <typename T = int32_t> T get_MessageOfTheDayType() {
		return ((T (*)(GlobalGuild*))(Il2CppBase() + 0x177571C))(this);
	}
	template <typename T = void> T set_MessageOfTheDayType(int32_t value) {
		return ((T (*)(GlobalGuild*, int32_t))(Il2CppBase() + 0x1775724))(this, value);
	}
	template <typename T = Il2CppString*> T get_MessageOfTheDayText() {
		return ((T (*)(GlobalGuild*))(Il2CppBase() + 0x177572C))(this);
	}
	template <typename T = void> T set_MessageOfTheDayText(Il2CppString* value) {
		return ((T (*)(GlobalGuild*, Il2CppString*))(Il2CppBase() + 0x1775734))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(GlobalGuild*, uintptr_t))(Il2CppBase() + 0x17757B4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(GlobalGuild*, uintptr_t))(Il2CppBase() + 0x1775824))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GlobalGuild*))(Il2CppBase() + 0x177597C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GlobalGuild*))(Il2CppBase() + 0x1775B78))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GlobalGuild*, uintptr_t))(Il2CppBase() + 0x1775BDC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GlobalGuild*))(Il2CppBase() + 0x1775ED0))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(GlobalGuild*, uintptr_t))(Il2CppBase() + 0x17762A0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GlobalGuild*, uintptr_t))(Il2CppBase() + 0x1776434))(this, input);
	}

};

}
