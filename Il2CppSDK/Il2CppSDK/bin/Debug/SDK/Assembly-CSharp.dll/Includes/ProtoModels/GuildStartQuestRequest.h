#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildStartQuestRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildStartQuestRequest"));
	}

	 static MessageParser1<ProtoModels::GuildStartQuestRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::GuildStartQuestRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& QuestNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& questName_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& MaxProgressFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& maxProgress_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& DurationFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& duration_() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = int32_t> static R& MinGuildRankPointsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& minGuildRankPoints_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& MaxGuildRankPointsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& maxGuildRankPoints_() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = int32_t> static R& PlayerRewardsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<int32_t>*& _repeated_playerRewards_codec() {
		return *(FieldCodec1<int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<int32_t>*& playerRewards_() {
		return *(RepeatedField1<int32_t>**)((uintptr_t)this + 0x38);
	}

	 static MessageParser1<ProtoModels::GuildStartQuestRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::GuildStartQuestRequest*>* (*)(void *))(Il2CppBase() + 0x194393C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x19439A0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1943AC0))(this);
	}
	template <typename R = ProtoModels::GuildStartQuestRequest*> R Clone() {
		return ((R (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1943C7C))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1943CD8))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(GuildStartQuestRequest*, int64_t))(Il2CppBase() + 0x1943CE0))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1943CE8))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(GuildStartQuestRequest*, int64_t))(Il2CppBase() + 0x1943CF0))(this, value);
	}
	template <typename R = Il2CppString*> R get_QuestName() {
		return ((R (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1943CF8))(this);
	}
	template <typename R = void> R set_QuestName(Il2CppString* value) {
		return ((R (*)(GuildStartQuestRequest*, Il2CppString*))(Il2CppBase() + 0x1943D00))(this, value);
	}
	template <typename R = int32_t> R get_MaxProgress() {
		return ((R (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1943D80))(this);
	}
	template <typename R = void> R set_MaxProgress(int32_t value) {
		return ((R (*)(GuildStartQuestRequest*, int32_t))(Il2CppBase() + 0x1943D88))(this, value);
	}
	template <typename R = int32_t> R get_Duration() {
		return ((R (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1943D90))(this);
	}
	template <typename R = void> R set_Duration(int32_t value) {
		return ((R (*)(GuildStartQuestRequest*, int32_t))(Il2CppBase() + 0x1943D98))(this, value);
	}
	template <typename R = int32_t> R get_MinGuildRankPoints() {
		return ((R (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1943DA0))(this);
	}
	template <typename R = void> R set_MinGuildRankPoints(int32_t value) {
		return ((R (*)(GuildStartQuestRequest*, int32_t))(Il2CppBase() + 0x1943DA8))(this, value);
	}
	template <typename R = int32_t> R get_MaxGuildRankPoints() {
		return ((R (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1943DB0))(this);
	}
	template <typename R = void> R set_MaxGuildRankPoints(int32_t value) {
		return ((R (*)(GuildStartQuestRequest*, int32_t))(Il2CppBase() + 0x1943DB8))(this, value);
	}
	 RepeatedField1<int32_t>* get_PlayerRewards() {
		return ((RepeatedField1<int32_t>* (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1943DC0))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildStartQuestRequest*, Il2CppObject*))(Il2CppBase() + 0x1943DC8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildStartQuestRequest* other) {
		return ((R (*)(GuildStartQuestRequest*, ProtoModels::GuildStartQuestRequest*))(Il2CppBase() + 0x1943E38))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1943F38))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1944050))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildStartQuestRequest*, uintptr_t))(Il2CppBase() + 0x19440B4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1944290))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildStartQuestRequest* other) {
		return ((R (*)(GuildStartQuestRequest*, ProtoModels::GuildStartQuestRequest*))(Il2CppBase() + 0x19444EC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildStartQuestRequest*, uintptr_t))(Il2CppBase() + 0x19445C4))(this, input);
	}

};

}
