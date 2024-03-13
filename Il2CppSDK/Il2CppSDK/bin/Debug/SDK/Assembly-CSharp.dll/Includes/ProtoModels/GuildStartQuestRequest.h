#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildStartQuestRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildStartQuestRequest"));
	}

	template <typename T = MessageParser1GuildStartQuestRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& QuestNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& questName_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& MaxProgressFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& maxProgress_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& DurationFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& duration_() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> static T& MinGuildRankPointsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& minGuildRankPoints_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& MaxGuildRankPointsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& maxGuildRankPoints_() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> static T& PlayerRewardsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1int32_t>*> static T& _repeated_playerRewards_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1int32_t>*> T& playerRewards_() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = MessageParser1GuildStartQuestRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x194393C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x19439A0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1943AC0))(this);
	}
	template <typename T = GuildStartQuestRequest*> T Clone() {
		return ((T (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1943C7C))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1943CD8))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(GuildStartQuestRequest*, int64_t))(Il2CppBase() + 0x1943CE0))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1943CE8))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(GuildStartQuestRequest*, int64_t))(Il2CppBase() + 0x1943CF0))(this, value);
	}
	template <typename T = Il2CppString*> T get_QuestName() {
		return ((T (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1943CF8))(this);
	}
	template <typename T = void> T set_QuestName(Il2CppString* value) {
		return ((T (*)(GuildStartQuestRequest*, Il2CppString*))(Il2CppBase() + 0x1943D00))(this, value);
	}
	template <typename T = int32_t> T get_MaxProgress() {
		return ((T (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1943D80))(this);
	}
	template <typename T = void> T set_MaxProgress(int32_t value) {
		return ((T (*)(GuildStartQuestRequest*, int32_t))(Il2CppBase() + 0x1943D88))(this, value);
	}
	template <typename T = int32_t> T get_Duration() {
		return ((T (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1943D90))(this);
	}
	template <typename T = void> T set_Duration(int32_t value) {
		return ((T (*)(GuildStartQuestRequest*, int32_t))(Il2CppBase() + 0x1943D98))(this, value);
	}
	template <typename T = int32_t> T get_MinGuildRankPoints() {
		return ((T (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1943DA0))(this);
	}
	template <typename T = void> T set_MinGuildRankPoints(int32_t value) {
		return ((T (*)(GuildStartQuestRequest*, int32_t))(Il2CppBase() + 0x1943DA8))(this, value);
	}
	template <typename T = int32_t> T get_MaxGuildRankPoints() {
		return ((T (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1943DB0))(this);
	}
	template <typename T = void> T set_MaxGuildRankPoints(int32_t value) {
		return ((T (*)(GuildStartQuestRequest*, int32_t))(Il2CppBase() + 0x1943DB8))(this, value);
	}
	template <typename T = RepeatedField1int32_t>*> T get_PlayerRewards() {
		return ((T (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1943DC0))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(GuildStartQuestRequest*, Il2CppObject*))(Il2CppBase() + 0x1943DC8))(this, other);
	}
	template <typename T = bool> T Equals_1(GuildStartQuestRequest* other) {
		return ((T (*)(GuildStartQuestRequest*, GuildStartQuestRequest*))(Il2CppBase() + 0x1943E38))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1943F38))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1944050))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildStartQuestRequest*, uintptr_t))(Il2CppBase() + 0x19440B4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildStartQuestRequest*))(Il2CppBase() + 0x1944290))(this);
	}
	template <typename T = void> T MergeFrom(GuildStartQuestRequest* other) {
		return ((T (*)(GuildStartQuestRequest*, GuildStartQuestRequest*))(Il2CppBase() + 0x19444EC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildStartQuestRequest*, uintptr_t))(Il2CppBase() + 0x19445C4))(this, input);
	}

};

}
