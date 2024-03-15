#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GlobalGuild
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GlobalGuild"));
	}

	 static MessageParser1ProtoModels::GlobalGuild*>*& _parser() {
		return *(MessageParser1ProtoModels::GlobalGuild*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& iD_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& GuildIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& guildID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& LeaderFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::Player*> R& leader_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& TagFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& tag_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& LanguageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& language_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& RankPointsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& rankPoints_() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = int32_t> static R& MemberCountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& memberCount_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& RegionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& region_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& MainRegionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& mainRegion_() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& TypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::GuildType*> R& type_() {
		return *(R*)((uintptr_t)this + 0x54);
	}
	template <typename R = int32_t> static R& PrevWeekRankPointsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& prevWeekRankPoints_() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> static R& DescriptionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& description_() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> static R& MessageOfTheDayTypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& messageOfTheDayType_() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> static R& MessageOfTheDayTextFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& messageOfTheDayText_() {
		return *(R*)((uintptr_t)this + 0x70);
	}

	 static MessageParser1ProtoModels::GlobalGuild*>* get_Parser() {
		return ((MessageParser1ProtoModels::GlobalGuild*>* (*)(void *))(Il2CppBase() + 0x17750AC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1775110))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GlobalGuild*))(Il2CppBase() + 0x1775230))(this);
	}
	template <typename R = ProtoModels::GlobalGuild*> R Clone() {
		return ((R (*)(GlobalGuild*))(Il2CppBase() + 0x177540C))(this);
	}
	template <typename R = int64_t> R get_ID() {
		return ((R (*)(GlobalGuild*))(Il2CppBase() + 0x1775468))(this);
	}
	template <typename R = void> R set_ID(int64_t value) {
		return ((R (*)(GlobalGuild*, int64_t))(Il2CppBase() + 0x1775470))(this, value);
	}
	template <typename R = int64_t> R get_GuildID() {
		return ((R (*)(GlobalGuild*))(Il2CppBase() + 0x1775478))(this);
	}
	template <typename R = void> R set_GuildID(int64_t value) {
		return ((R (*)(GlobalGuild*, int64_t))(Il2CppBase() + 0x1775480))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(GlobalGuild*))(Il2CppBase() + 0x1775488))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(GlobalGuild*, Il2CppString*))(Il2CppBase() + 0x1775490))(this, value);
	}
	template <typename R = ProtoModels::Player*> R get_Leader() {
		return ((R (*)(GlobalGuild*))(Il2CppBase() + 0x1775510))(this);
	}
	template <typename R = void> R set_Leader(ProtoModels::Player* value) {
		return ((R (*)(GlobalGuild*, ProtoModels::Player*))(Il2CppBase() + 0x1775518))(this, value);
	}
	template <typename R = Il2CppString*> R get_Tag() {
		return ((R (*)(GlobalGuild*))(Il2CppBase() + 0x1775520))(this);
	}
	template <typename R = void> R set_Tag(Il2CppString* value) {
		return ((R (*)(GlobalGuild*, Il2CppString*))(Il2CppBase() + 0x1775528))(this, value);
	}
	template <typename R = int32_t> R get_Language() {
		return ((R (*)(GlobalGuild*))(Il2CppBase() + 0x17755A8))(this);
	}
	template <typename R = void> R set_Language(int32_t value) {
		return ((R (*)(GlobalGuild*, int32_t))(Il2CppBase() + 0x17755B0))(this, value);
	}
	template <typename R = int32_t> R get_RankPoints() {
		return ((R (*)(GlobalGuild*))(Il2CppBase() + 0x17755B8))(this);
	}
	template <typename R = void> R set_RankPoints(int32_t value) {
		return ((R (*)(GlobalGuild*, int32_t))(Il2CppBase() + 0x17755C0))(this, value);
	}
	template <typename R = int32_t> R get_MemberCount() {
		return ((R (*)(GlobalGuild*))(Il2CppBase() + 0x17755C8))(this);
	}
	template <typename R = void> R set_MemberCount(int32_t value) {
		return ((R (*)(GlobalGuild*, int32_t))(Il2CppBase() + 0x17755D0))(this, value);
	}
	template <typename R = Il2CppString*> R get_Region() {
		return ((R (*)(GlobalGuild*))(Il2CppBase() + 0x17755D8))(this);
	}
	template <typename R = void> R set_Region(Il2CppString* value) {
		return ((R (*)(GlobalGuild*, Il2CppString*))(Il2CppBase() + 0x17755E0))(this, value);
	}
	template <typename R = bool> R get_MainRegion() {
		return ((R (*)(GlobalGuild*))(Il2CppBase() + 0x1775660))(this);
	}
	template <typename R = void> R set_MainRegion(bool value) {
		return ((R (*)(GlobalGuild*, bool))(Il2CppBase() + 0x1775668))(this, value);
	}
	template <typename R = ProtoModels::GuildType*> R get_Type() {
		return ((R (*)(GlobalGuild*))(Il2CppBase() + 0x1775674))(this);
	}
	template <typename R = void> R set_Type(ProtoModels::GuildType* value) {
		return ((R (*)(GlobalGuild*, ProtoModels::GuildType*))(Il2CppBase() + 0x177567C))(this, value);
	}
	template <typename R = int32_t> R get_PrevWeekRankPoints() {
		return ((R (*)(GlobalGuild*))(Il2CppBase() + 0x1775684))(this);
	}
	template <typename R = void> R set_PrevWeekRankPoints(int32_t value) {
		return ((R (*)(GlobalGuild*, int32_t))(Il2CppBase() + 0x177568C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Description() {
		return ((R (*)(GlobalGuild*))(Il2CppBase() + 0x1775694))(this);
	}
	template <typename R = void> R set_Description(Il2CppString* value) {
		return ((R (*)(GlobalGuild*, Il2CppString*))(Il2CppBase() + 0x177569C))(this, value);
	}
	template <typename R = int32_t> R get_MessageOfTheDayType() {
		return ((R (*)(GlobalGuild*))(Il2CppBase() + 0x177571C))(this);
	}
	template <typename R = void> R set_MessageOfTheDayType(int32_t value) {
		return ((R (*)(GlobalGuild*, int32_t))(Il2CppBase() + 0x1775724))(this, value);
	}
	template <typename R = Il2CppString*> R get_MessageOfTheDayText() {
		return ((R (*)(GlobalGuild*))(Il2CppBase() + 0x177572C))(this);
	}
	template <typename R = void> R set_MessageOfTheDayText(Il2CppString* value) {
		return ((R (*)(GlobalGuild*, Il2CppString*))(Il2CppBase() + 0x1775734))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GlobalGuild*, Il2CppObject*))(Il2CppBase() + 0x17757B4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GlobalGuild* other) {
		return ((R (*)(GlobalGuild*, ProtoModels::GlobalGuild*))(Il2CppBase() + 0x1775824))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GlobalGuild*))(Il2CppBase() + 0x177597C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GlobalGuild*))(Il2CppBase() + 0x1775B78))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GlobalGuild*, uintptr_t))(Il2CppBase() + 0x1775BDC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GlobalGuild*))(Il2CppBase() + 0x1775ED0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GlobalGuild* other) {
		return ((R (*)(GlobalGuild*, ProtoModels::GlobalGuild*))(Il2CppBase() + 0x17762A0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GlobalGuild*, uintptr_t))(Il2CppBase() + 0x1776434))(this, input);
	}

};

}
