#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PvpGroupInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PvpGroupInfo"));
	}

	template <typename T = MessageParser1PvpGroupInfo*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PvpIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& pvpID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ClansFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ClanInfoData*>*> static T& _repeated_clans_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1ClanInfoData*>*> T& clans_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& MembersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1UserInfoData*>*> static T& _repeated_members_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = RepeatedField1UserInfoData*>*> T& members_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& FriendsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FriendPairListType*> T& friends_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& FriendsCandidateFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FriendPairListType*> T& friendsCandidate_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& LockPeacePairsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FriendPairListType*> T& lockPeacePairs_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& PvpStartTimeUTCFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& pvpStartTimeUTC_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& PvpEndTimeUTCFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& pvpEndTimeUTC_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& EndSearchTimeUTCFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& endSearchTimeUTC_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& EstimatedSearchLongSecondFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& estimatedSearchLongSecond_() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& LengthRoundSecFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& lengthRoundSec_() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> static T& MaxSearchLongSecondFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& maxSearchLongSecond_() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& MaxProtectSecondFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& maxProtectSecond_() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> static T& ProtectTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1ClanTime*>*> static T& _repeated_protectTime_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = RepeatedField1ClanTime*>*> T& protectTime_() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> static T& IsFakeGroupFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isFakeGroup_() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> static T& RealSearchLongSecondFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Codecint64_t, int32_t>*> static T& _map_realSearchLongSecond_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = MapField2int64_t, int32_t>*> T& realSearchLongSecond_() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = MessageParser1PvpGroupInfo*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x11C0904))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x11C0968))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0A88))(this);
	}
	template <typename T = PvpGroupInfo*> T Clone() {
		return ((T (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0E28))(this);
	}
	template <typename T = int64_t> T get_PvpID() {
		return ((T (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0E84))(this);
	}
	template <typename T = void> T set_PvpID(int64_t value) {
		return ((T (*)(PvpGroupInfo*, int64_t))(Il2CppBase() + 0x11C0E8C))(this, value);
	}
	template <typename T = RepeatedField1ClanInfoData*>*> T get_Clans() {
		return ((T (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0E94))(this);
	}
	template <typename T = RepeatedField1UserInfoData*>*> T get_Members() {
		return ((T (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0E9C))(this);
	}
	template <typename T = FriendPairListType*> T get_Friends() {
		return ((T (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0EA4))(this);
	}
	template <typename T = void> T set_Friends(FriendPairListType* value) {
		return ((T (*)(PvpGroupInfo*, FriendPairListType*))(Il2CppBase() + 0x11C0EAC))(this, value);
	}
	template <typename T = FriendPairListType*> T get_FriendsCandidate() {
		return ((T (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0EB4))(this);
	}
	template <typename T = void> T set_FriendsCandidate(FriendPairListType* value) {
		return ((T (*)(PvpGroupInfo*, FriendPairListType*))(Il2CppBase() + 0x11C0EBC))(this, value);
	}
	template <typename T = FriendPairListType*> T get_LockPeacePairs() {
		return ((T (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0EC4))(this);
	}
	template <typename T = void> T set_LockPeacePairs(FriendPairListType* value) {
		return ((T (*)(PvpGroupInfo*, FriendPairListType*))(Il2CppBase() + 0x11C0ECC))(this, value);
	}
	template <typename T = int64_t> T get_PvpStartTimeUTC() {
		return ((T (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0ED4))(this);
	}
	template <typename T = void> T set_PvpStartTimeUTC(int64_t value) {
		return ((T (*)(PvpGroupInfo*, int64_t))(Il2CppBase() + 0x11C0EDC))(this, value);
	}
	template <typename T = int64_t> T get_PvpEndTimeUTC() {
		return ((T (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0EE4))(this);
	}
	template <typename T = void> T set_PvpEndTimeUTC(int64_t value) {
		return ((T (*)(PvpGroupInfo*, int64_t))(Il2CppBase() + 0x11C0EEC))(this, value);
	}
	template <typename T = int64_t> T get_EndSearchTimeUTC() {
		return ((T (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0EF4))(this);
	}
	template <typename T = void> T set_EndSearchTimeUTC(int64_t value) {
		return ((T (*)(PvpGroupInfo*, int64_t))(Il2CppBase() + 0x11C0EFC))(this, value);
	}
	template <typename T = int32_t> T get_EstimatedSearchLongSecond() {
		return ((T (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0F04))(this);
	}
	template <typename T = void> T set_EstimatedSearchLongSecond(int32_t value) {
		return ((T (*)(PvpGroupInfo*, int32_t))(Il2CppBase() + 0x11C0F0C))(this, value);
	}
	template <typename T = int32_t> T get_LengthRoundSec() {
		return ((T (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0F14))(this);
	}
	template <typename T = void> T set_LengthRoundSec(int32_t value) {
		return ((T (*)(PvpGroupInfo*, int32_t))(Il2CppBase() + 0x11C0F1C))(this, value);
	}
	template <typename T = int32_t> T get_MaxSearchLongSecond() {
		return ((T (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0F24))(this);
	}
	template <typename T = void> T set_MaxSearchLongSecond(int32_t value) {
		return ((T (*)(PvpGroupInfo*, int32_t))(Il2CppBase() + 0x11C0F2C))(this, value);
	}
	template <typename T = int32_t> T get_MaxProtectSecond() {
		return ((T (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0F34))(this);
	}
	template <typename T = void> T set_MaxProtectSecond(int32_t value) {
		return ((T (*)(PvpGroupInfo*, int32_t))(Il2CppBase() + 0x11C0F3C))(this, value);
	}
	template <typename T = RepeatedField1ClanTime*>*> T get_ProtectTime() {
		return ((T (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0F44))(this);
	}
	template <typename T = bool> T get_IsFakeGroup() {
		return ((T (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0F4C))(this);
	}
	template <typename T = void> T set_IsFakeGroup(bool value) {
		return ((T (*)(PvpGroupInfo*, bool))(Il2CppBase() + 0x11C0F54))(this, value);
	}
	template <typename T = MapField2int64_t, int32_t>*> T get_RealSearchLongSecond() {
		return ((T (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0F60))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(PvpGroupInfo*, Il2CppObject*))(Il2CppBase() + 0x11C0F68))(this, other);
	}
	template <typename T = bool> T Equals_1(PvpGroupInfo* other) {
		return ((T (*)(PvpGroupInfo*, PvpGroupInfo*))(Il2CppBase() + 0x11C0FD8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C11C4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C13B0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(PvpGroupInfo*, uintptr_t))(Il2CppBase() + 0x11C1414))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C17A4))(this);
	}
	template <typename T = void> T MergeFrom(PvpGroupInfo* other) {
		return ((T (*)(PvpGroupInfo*, PvpGroupInfo*))(Il2CppBase() + 0x11C1BD4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(PvpGroupInfo*, uintptr_t))(Il2CppBase() + 0x11C1E38))(this, input);
	}

};

}
