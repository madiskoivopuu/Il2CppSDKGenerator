#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildMessageType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildMessageType"));
	}

	template <typename T = MessageParser1GuildMessageType*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& iD_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& LeaderIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& leaderID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& DescriptionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& description_() {
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
	template <typename T = int32_t> static T& TypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = GuildType*> T& type_() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> static T& RankPointsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& rankPoints_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& SizeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& size_() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> static T& PlayersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1Player*>*> static T& _repeated_players_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1Player*>*> T& players_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& InvitesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1GuildInvite*>*> static T& _repeated_invites_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = RepeatedField1GuildInvite*>*> T& invites_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& QuestsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1GuildQuestArena*>*> static T& _repeated_quests_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = RepeatedField1GuildQuestArena*>*> T& quests_() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& MessageOfTheDayTypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& messageOfTheDayType_() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& MessageOfTheDayTextFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& messageOfTheDayText_() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> static T& PrevWeekRankPointsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& prevWeekRankPoints_() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> static T& KilledBossesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1Il2CppString*>*> static T& _repeated_killedBosses_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = RepeatedField1Il2CppString*>*> T& killedBosses_() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = MessageParser1GuildMessageType*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B39500))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B39564))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildMessageType*))(Il2CppBase() + 0x1B39684))(this);
	}
	template <typename T = GuildMessageType*> T Clone() {
		return ((T (*)(GuildMessageType*))(Il2CppBase() + 0x1B2D750))(this);
	}
	template <typename T = int64_t> T get_ID() {
		return ((T (*)(GuildMessageType*))(Il2CppBase() + 0x1B39878))(this);
	}
	template <typename T = void> T set_ID(int64_t value) {
		return ((T (*)(GuildMessageType*, int64_t))(Il2CppBase() + 0x1B39880))(this, value);
	}
	template <typename T = int64_t> T get_LeaderID() {
		return ((T (*)(GuildMessageType*))(Il2CppBase() + 0x1B39888))(this);
	}
	template <typename T = void> T set_LeaderID(int64_t value) {
		return ((T (*)(GuildMessageType*, int64_t))(Il2CppBase() + 0x1B39890))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(GuildMessageType*))(Il2CppBase() + 0x1B39898))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(GuildMessageType*, Il2CppString*))(Il2CppBase() + 0x1B398A0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(GuildMessageType*))(Il2CppBase() + 0x1B39920))(this);
	}
	template <typename T = void> T set_Description(Il2CppString* value) {
		return ((T (*)(GuildMessageType*, Il2CppString*))(Il2CppBase() + 0x1B39928))(this, value);
	}
	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(GuildMessageType*))(Il2CppBase() + 0x1B399A8))(this);
	}
	template <typename T = void> T set_Tag(Il2CppString* value) {
		return ((T (*)(GuildMessageType*, Il2CppString*))(Il2CppBase() + 0x1B399B0))(this, value);
	}
	template <typename T = int32_t> T get_Language() {
		return ((T (*)(GuildMessageType*))(Il2CppBase() + 0x1B39A30))(this);
	}
	template <typename T = void> T set_Language(int32_t value) {
		return ((T (*)(GuildMessageType*, int32_t))(Il2CppBase() + 0x1B39A38))(this, value);
	}
	template <typename T = GuildType*> T get_Type() {
		return ((T (*)(GuildMessageType*))(Il2CppBase() + 0x1B39A40))(this);
	}
	template <typename T = void> T set_Type(GuildType* value) {
		return ((T (*)(GuildMessageType*, GuildType*))(Il2CppBase() + 0x1B39A48))(this, value);
	}
	template <typename T = int32_t> T get_RankPoints() {
		return ((T (*)(GuildMessageType*))(Il2CppBase() + 0x1B39A50))(this);
	}
	template <typename T = void> T set_RankPoints(int32_t value) {
		return ((T (*)(GuildMessageType*, int32_t))(Il2CppBase() + 0x1B39A58))(this, value);
	}
	template <typename T = int32_t> T get_Size() {
		return ((T (*)(GuildMessageType*))(Il2CppBase() + 0x1B39A60))(this);
	}
	template <typename T = void> T set_Size(int32_t value) {
		return ((T (*)(GuildMessageType*, int32_t))(Il2CppBase() + 0x1B39A68))(this, value);
	}
	template <typename T = RepeatedField1Player*>*> T get_Players() {
		return ((T (*)(GuildMessageType*))(Il2CppBase() + 0x1B39A70))(this);
	}
	template <typename T = RepeatedField1GuildInvite*>*> T get_Invites() {
		return ((T (*)(GuildMessageType*))(Il2CppBase() + 0x1B39A78))(this);
	}
	template <typename T = RepeatedField1GuildQuestArena*>*> T get_Quests() {
		return ((T (*)(GuildMessageType*))(Il2CppBase() + 0x1B39A80))(this);
	}
	template <typename T = int32_t> T get_MessageOfTheDayType() {
		return ((T (*)(GuildMessageType*))(Il2CppBase() + 0x1B39A88))(this);
	}
	template <typename T = void> T set_MessageOfTheDayType(int32_t value) {
		return ((T (*)(GuildMessageType*, int32_t))(Il2CppBase() + 0x1B39A90))(this, value);
	}
	template <typename T = Il2CppString*> T get_MessageOfTheDayText() {
		return ((T (*)(GuildMessageType*))(Il2CppBase() + 0x1B39A98))(this);
	}
	template <typename T = void> T set_MessageOfTheDayText(Il2CppString* value) {
		return ((T (*)(GuildMessageType*, Il2CppString*))(Il2CppBase() + 0x1B39AA0))(this, value);
	}
	template <typename T = int32_t> T get_PrevWeekRankPoints() {
		return ((T (*)(GuildMessageType*))(Il2CppBase() + 0x1B39B20))(this);
	}
	template <typename T = void> T set_PrevWeekRankPoints(int32_t value) {
		return ((T (*)(GuildMessageType*, int32_t))(Il2CppBase() + 0x1B39B28))(this, value);
	}
	template <typename T = RepeatedField1Il2CppString*>*> T get_KilledBosses() {
		return ((T (*)(GuildMessageType*))(Il2CppBase() + 0x1B39B30))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(GuildMessageType*, Il2CppObject*))(Il2CppBase() + 0x1B39B38))(this, other);
	}
	template <typename T = bool> T Equals_1(GuildMessageType* other) {
		return ((T (*)(GuildMessageType*, GuildMessageType*))(Il2CppBase() + 0x1B39BA8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildMessageType*))(Il2CppBase() + 0x1B39D88))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildMessageType*))(Il2CppBase() + 0x1B39F90))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildMessageType*, uintptr_t))(Il2CppBase() + 0x1B39FF4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildMessageType*))(Il2CppBase() + 0x1B3A37C))(this);
	}
	template <typename T = void> T MergeFrom(GuildMessageType* other) {
		return ((T (*)(GuildMessageType*, GuildMessageType*))(Il2CppBase() + 0x1B2DF78))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildMessageType*, uintptr_t))(Il2CppBase() + 0x1B3A7E0))(this, input);
	}

};

}
