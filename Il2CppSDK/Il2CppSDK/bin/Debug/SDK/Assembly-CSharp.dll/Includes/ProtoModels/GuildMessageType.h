#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildMessageType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildMessageType"));
	}

	 static MessageParser1<ProtoModels::GuildMessageType*>*& _parser() {
		return *(MessageParser1<ProtoModels::GuildMessageType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& iD_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& LeaderIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& leaderID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& DescriptionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& description_() {
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
	template <typename R = int32_t> static R& TypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::GuildType> R& type_() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = int32_t> static R& RankPointsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& rankPoints_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& SizeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& size_() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = int32_t> static R& PlayersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::Player*>*& _repeated_players_codec() {
		return *(FieldCodec1<ProtoModels::Player*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::Player*>*& players_() {
		return *(RepeatedField1<ProtoModels::Player*>**)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& InvitesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::GuildInvite*>*& _repeated_invites_codec() {
		return *(FieldCodec1<ProtoModels::GuildInvite*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1<ProtoModels::GuildInvite*>*& invites_() {
		return *(RepeatedField1<ProtoModels::GuildInvite*>**)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& QuestsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::GuildQuestArena*>*& _repeated_quests_codec() {
		return *(FieldCodec1<ProtoModels::GuildQuestArena*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 RepeatedField1<ProtoModels::GuildQuestArena*>*& quests_() {
		return *(RepeatedField1<ProtoModels::GuildQuestArena*>**)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> static R& MessageOfTheDayTypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& messageOfTheDayType_() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> static R& MessageOfTheDayTextFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& messageOfTheDayText_() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> static R& PrevWeekRankPointsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& prevWeekRankPoints_() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = int32_t> static R& KilledBossesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<Il2CppString*>*& _repeated_killedBosses_codec() {
		return *(FieldCodec1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 RepeatedField1<Il2CppString*>*& killedBosses_() {
		return *(RepeatedField1<Il2CppString*>**)((uintptr_t)this + 0x78);
	}

	 static MessageParser1<ProtoModels::GuildMessageType*>* get_Parser() {
		return ((MessageParser1<ProtoModels::GuildMessageType*>* (*)(void *))(Il2CppBase() + 0x1B39500))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1B39564))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildMessageType*))(Il2CppBase() + 0x1B39684))(this);
	}
	template <typename R = ProtoModels::GuildMessageType*> R Clone() {
		return ((R (*)(GuildMessageType*))(Il2CppBase() + 0x1B2D750))(this);
	}
	template <typename R = int64_t> R get_ID() {
		return ((R (*)(GuildMessageType*))(Il2CppBase() + 0x1B39878))(this);
	}
	template <typename R = void> R set_ID(int64_t value) {
		return ((R (*)(GuildMessageType*, int64_t))(Il2CppBase() + 0x1B39880))(this, value);
	}
	template <typename R = int64_t> R get_LeaderID() {
		return ((R (*)(GuildMessageType*))(Il2CppBase() + 0x1B39888))(this);
	}
	template <typename R = void> R set_LeaderID(int64_t value) {
		return ((R (*)(GuildMessageType*, int64_t))(Il2CppBase() + 0x1B39890))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(GuildMessageType*))(Il2CppBase() + 0x1B39898))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(GuildMessageType*, Il2CppString*))(Il2CppBase() + 0x1B398A0))(this, value);
	}
	template <typename R = Il2CppString*> R get_Description() {
		return ((R (*)(GuildMessageType*))(Il2CppBase() + 0x1B39920))(this);
	}
	template <typename R = void> R set_Description(Il2CppString* value) {
		return ((R (*)(GuildMessageType*, Il2CppString*))(Il2CppBase() + 0x1B39928))(this, value);
	}
	template <typename R = Il2CppString*> R get_Tag() {
		return ((R (*)(GuildMessageType*))(Il2CppBase() + 0x1B399A8))(this);
	}
	template <typename R = void> R set_Tag(Il2CppString* value) {
		return ((R (*)(GuildMessageType*, Il2CppString*))(Il2CppBase() + 0x1B399B0))(this, value);
	}
	template <typename R = int32_t> R get_Language() {
		return ((R (*)(GuildMessageType*))(Il2CppBase() + 0x1B39A30))(this);
	}
	template <typename R = void> R set_Language(int32_t value) {
		return ((R (*)(GuildMessageType*, int32_t))(Il2CppBase() + 0x1B39A38))(this, value);
	}
	template <typename R = ProtoModels::GuildType> R get_Type() {
		return ((R (*)(GuildMessageType*))(Il2CppBase() + 0x1B39A40))(this);
	}
	template <typename R = void> R set_Type(ProtoModels::GuildType value) {
		return ((R (*)(GuildMessageType*, ProtoModels::GuildType))(Il2CppBase() + 0x1B39A48))(this, value);
	}
	template <typename R = int32_t> R get_RankPoints() {
		return ((R (*)(GuildMessageType*))(Il2CppBase() + 0x1B39A50))(this);
	}
	template <typename R = void> R set_RankPoints(int32_t value) {
		return ((R (*)(GuildMessageType*, int32_t))(Il2CppBase() + 0x1B39A58))(this, value);
	}
	template <typename R = int32_t> R get_Size() {
		return ((R (*)(GuildMessageType*))(Il2CppBase() + 0x1B39A60))(this);
	}
	template <typename R = void> R set_Size(int32_t value) {
		return ((R (*)(GuildMessageType*, int32_t))(Il2CppBase() + 0x1B39A68))(this, value);
	}
	 RepeatedField1<ProtoModels::Player*>* get_Players() {
		return ((RepeatedField1<ProtoModels::Player*>* (*)(GuildMessageType*))(Il2CppBase() + 0x1B39A70))(this);
	}
	 RepeatedField1<ProtoModels::GuildInvite*>* get_Invites() {
		return ((RepeatedField1<ProtoModels::GuildInvite*>* (*)(GuildMessageType*))(Il2CppBase() + 0x1B39A78))(this);
	}
	 RepeatedField1<ProtoModels::GuildQuestArena*>* get_Quests() {
		return ((RepeatedField1<ProtoModels::GuildQuestArena*>* (*)(GuildMessageType*))(Il2CppBase() + 0x1B39A80))(this);
	}
	template <typename R = int32_t> R get_MessageOfTheDayType() {
		return ((R (*)(GuildMessageType*))(Il2CppBase() + 0x1B39A88))(this);
	}
	template <typename R = void> R set_MessageOfTheDayType(int32_t value) {
		return ((R (*)(GuildMessageType*, int32_t))(Il2CppBase() + 0x1B39A90))(this, value);
	}
	template <typename R = Il2CppString*> R get_MessageOfTheDayText() {
		return ((R (*)(GuildMessageType*))(Il2CppBase() + 0x1B39A98))(this);
	}
	template <typename R = void> R set_MessageOfTheDayText(Il2CppString* value) {
		return ((R (*)(GuildMessageType*, Il2CppString*))(Il2CppBase() + 0x1B39AA0))(this, value);
	}
	template <typename R = int32_t> R get_PrevWeekRankPoints() {
		return ((R (*)(GuildMessageType*))(Il2CppBase() + 0x1B39B20))(this);
	}
	template <typename R = void> R set_PrevWeekRankPoints(int32_t value) {
		return ((R (*)(GuildMessageType*, int32_t))(Il2CppBase() + 0x1B39B28))(this, value);
	}
	 RepeatedField1<Il2CppString*>* get_KilledBosses() {
		return ((RepeatedField1<Il2CppString*>* (*)(GuildMessageType*))(Il2CppBase() + 0x1B39B30))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildMessageType*, Il2CppObject*))(Il2CppBase() + 0x1B39B38))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildMessageType* other) {
		return ((R (*)(GuildMessageType*, ProtoModels::GuildMessageType*))(Il2CppBase() + 0x1B39BA8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildMessageType*))(Il2CppBase() + 0x1B39D88))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildMessageType*))(Il2CppBase() + 0x1B39F90))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildMessageType*, uintptr_t))(Il2CppBase() + 0x1B39FF4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildMessageType*))(Il2CppBase() + 0x1B3A37C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildMessageType* other) {
		return ((R (*)(GuildMessageType*, ProtoModels::GuildMessageType*))(Il2CppBase() + 0x1B2DF78))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildMessageType*, uintptr_t))(Il2CppBase() + 0x1B3A7E0))(this, input);
	}

};

}
