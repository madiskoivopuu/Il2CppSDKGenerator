#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PvpGroupInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PvpGroupInfo"));
	}

	 static MessageParser1<ProtoModels::PvpGroupInfo*>*& _parser() {
		return *(MessageParser1<ProtoModels::PvpGroupInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& PvpIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& pvpID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ClansFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::ClanInfoData*>*& _repeated_clans_codec() {
		return *(FieldCodec1<ProtoModels::ClanInfoData*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::ClanInfoData*>*& clans_() {
		return *(RepeatedField1<ProtoModels::ClanInfoData*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& MembersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::UserInfoData*>*& _repeated_members_codec() {
		return *(FieldCodec1<ProtoModels::UserInfoData*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1<ProtoModels::UserInfoData*>*& members_() {
		return *(RepeatedField1<ProtoModels::UserInfoData*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& FriendsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::FriendPairListType*> R& friends_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& FriendsCandidateFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::FriendPairListType*> R& friendsCandidate_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& LockPeacePairsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::FriendPairListType*> R& lockPeacePairs_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& PvpStartTimeUTCFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& pvpStartTimeUTC_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& PvpEndTimeUTCFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& pvpEndTimeUTC_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& EndSearchTimeUTCFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& endSearchTimeUTC_() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& EstimatedSearchLongSecondFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& estimatedSearchLongSecond_() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> static R& LengthRoundSecFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& lengthRoundSec_() {
		return *(R*)((uintptr_t)this + 0x5C);
	}
	template <typename R = int32_t> static R& MaxSearchLongSecondFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& maxSearchLongSecond_() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> static R& MaxProtectSecondFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& maxProtectSecond_() {
		return *(R*)((uintptr_t)this + 0x64);
	}
	template <typename R = int32_t> static R& ProtectTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::ClanTime*>*& _repeated_protectTime_codec() {
		return *(FieldCodec1<ProtoModels::ClanTime*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 RepeatedField1<ProtoModels::ClanTime*>*& protectTime_() {
		return *(RepeatedField1<ProtoModels::ClanTime*>**)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> static R& IsFakeGroupFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isFakeGroup_() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = int32_t> static R& RealSearchLongSecondFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codec<int64_t, int32_t>*& _map_realSearchLongSecond_codec() {
		return *(Codec<int64_t, int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 MapField2<int64_t, int32_t>*& realSearchLongSecond_() {
		return *(MapField2<int64_t, int32_t>**)((uintptr_t)this + 0x78);
	}

	 static MessageParser1<ProtoModels::PvpGroupInfo*>* get_Parser() {
		return ((MessageParser1<ProtoModels::PvpGroupInfo*>* (*)(void *))(Il2CppBase() + 0x11C0904))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x11C0968))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0A88))(this);
	}
	template <typename R = ProtoModels::PvpGroupInfo*> R Clone() {
		return ((R (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0E28))(this);
	}
	template <typename R = int64_t> R get_PvpID() {
		return ((R (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0E84))(this);
	}
	template <typename R = void> R set_PvpID(int64_t value) {
		return ((R (*)(PvpGroupInfo*, int64_t))(Il2CppBase() + 0x11C0E8C))(this, value);
	}
	 RepeatedField1<ProtoModels::ClanInfoData*>* get_Clans() {
		return ((RepeatedField1<ProtoModels::ClanInfoData*>* (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0E94))(this);
	}
	 RepeatedField1<ProtoModels::UserInfoData*>* get_Members() {
		return ((RepeatedField1<ProtoModels::UserInfoData*>* (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0E9C))(this);
	}
	template <typename R = ProtoModels::FriendPairListType*> R get_Friends() {
		return ((R (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0EA4))(this);
	}
	template <typename R = void> R set_Friends(ProtoModels::FriendPairListType* value) {
		return ((R (*)(PvpGroupInfo*, ProtoModels::FriendPairListType*))(Il2CppBase() + 0x11C0EAC))(this, value);
	}
	template <typename R = ProtoModels::FriendPairListType*> R get_FriendsCandidate() {
		return ((R (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0EB4))(this);
	}
	template <typename R = void> R set_FriendsCandidate(ProtoModels::FriendPairListType* value) {
		return ((R (*)(PvpGroupInfo*, ProtoModels::FriendPairListType*))(Il2CppBase() + 0x11C0EBC))(this, value);
	}
	template <typename R = ProtoModels::FriendPairListType*> R get_LockPeacePairs() {
		return ((R (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0EC4))(this);
	}
	template <typename R = void> R set_LockPeacePairs(ProtoModels::FriendPairListType* value) {
		return ((R (*)(PvpGroupInfo*, ProtoModels::FriendPairListType*))(Il2CppBase() + 0x11C0ECC))(this, value);
	}
	template <typename R = int64_t> R get_PvpStartTimeUTC() {
		return ((R (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0ED4))(this);
	}
	template <typename R = void> R set_PvpStartTimeUTC(int64_t value) {
		return ((R (*)(PvpGroupInfo*, int64_t))(Il2CppBase() + 0x11C0EDC))(this, value);
	}
	template <typename R = int64_t> R get_PvpEndTimeUTC() {
		return ((R (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0EE4))(this);
	}
	template <typename R = void> R set_PvpEndTimeUTC(int64_t value) {
		return ((R (*)(PvpGroupInfo*, int64_t))(Il2CppBase() + 0x11C0EEC))(this, value);
	}
	template <typename R = int64_t> R get_EndSearchTimeUTC() {
		return ((R (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0EF4))(this);
	}
	template <typename R = void> R set_EndSearchTimeUTC(int64_t value) {
		return ((R (*)(PvpGroupInfo*, int64_t))(Il2CppBase() + 0x11C0EFC))(this, value);
	}
	template <typename R = int32_t> R get_EstimatedSearchLongSecond() {
		return ((R (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0F04))(this);
	}
	template <typename R = void> R set_EstimatedSearchLongSecond(int32_t value) {
		return ((R (*)(PvpGroupInfo*, int32_t))(Il2CppBase() + 0x11C0F0C))(this, value);
	}
	template <typename R = int32_t> R get_LengthRoundSec() {
		return ((R (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0F14))(this);
	}
	template <typename R = void> R set_LengthRoundSec(int32_t value) {
		return ((R (*)(PvpGroupInfo*, int32_t))(Il2CppBase() + 0x11C0F1C))(this, value);
	}
	template <typename R = int32_t> R get_MaxSearchLongSecond() {
		return ((R (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0F24))(this);
	}
	template <typename R = void> R set_MaxSearchLongSecond(int32_t value) {
		return ((R (*)(PvpGroupInfo*, int32_t))(Il2CppBase() + 0x11C0F2C))(this, value);
	}
	template <typename R = int32_t> R get_MaxProtectSecond() {
		return ((R (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0F34))(this);
	}
	template <typename R = void> R set_MaxProtectSecond(int32_t value) {
		return ((R (*)(PvpGroupInfo*, int32_t))(Il2CppBase() + 0x11C0F3C))(this, value);
	}
	 RepeatedField1<ProtoModels::ClanTime*>* get_ProtectTime() {
		return ((RepeatedField1<ProtoModels::ClanTime*>* (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0F44))(this);
	}
	template <typename R = bool> R get_IsFakeGroup() {
		return ((R (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0F4C))(this);
	}
	template <typename R = void> R set_IsFakeGroup(bool value) {
		return ((R (*)(PvpGroupInfo*, bool))(Il2CppBase() + 0x11C0F54))(this, value);
	}
	 MapField2<int64_t, int32_t>* get_RealSearchLongSecond() {
		return ((MapField2<int64_t, int32_t>* (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C0F60))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(PvpGroupInfo*, Il2CppObject*))(Il2CppBase() + 0x11C0F68))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::PvpGroupInfo* other) {
		return ((R (*)(PvpGroupInfo*, ProtoModels::PvpGroupInfo*))(Il2CppBase() + 0x11C0FD8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C11C4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C13B0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(PvpGroupInfo*, uintptr_t))(Il2CppBase() + 0x11C1414))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(PvpGroupInfo*))(Il2CppBase() + 0x11C17A4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::PvpGroupInfo* other) {
		return ((R (*)(PvpGroupInfo*, ProtoModels::PvpGroupInfo*))(Il2CppBase() + 0x11C1BD4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(PvpGroupInfo*, uintptr_t))(Il2CppBase() + 0x11C1E38))(this, input);
	}

};

}
