#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserGetClanInfoResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserGetClanInfoResponse"));
	}

	 static MessageParser1ProtoModels::UserGetClanInfoResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::UserGetClanInfoResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UsersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::UserGetUserInfo*>*& _repeated_users_codec() {
		return *(FieldCodec1ProtoModels::UserGetUserInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::UserGetUserInfo*>*& users_() {
		return *(RepeatedField1ProtoModels::UserGetUserInfo*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& LeaderUserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& leaderUserID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ClanIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& clanID_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& InClanFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& inClan_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& PvpWindowFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& pvpWindow_() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = int32_t> static R& PvpGroupIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& pvpGroupID_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& PvpEndTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& pvpEndTime_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& LanguageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& language_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& EnemyFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::EnemyInfo*>*& _repeated_enemy_codec() {
		return *(FieldCodec1ProtoModels::EnemyInfo*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1ProtoModels::EnemyInfo*>*& enemy_() {
		return *(RepeatedField1ProtoModels::EnemyInfo*>**)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> static R& IsLockFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isLock_() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> static R& ExtendClanInfoFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ExtendClanInfoType*> R& extendClanInfo_() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = int32_t> static R& MarkDeleteTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& markDeleteTime_() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> static R& LockOperationBuilderTimeUnixFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& lockOperationBuilderTimeUnix_() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = int32_t> static R& LockOperationClanTimeUnixFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& lockOperationClanTimeUnix_() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = int32_t> static R& LockOperationDiplomacyTimeUnixFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& lockOperationDiplomacyTimeUnix_() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = int32_t> static R& LastRaidEndTimeUnixFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& lastRaidEndTimeUnix_() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = int32_t> static R& LockTimeOperationFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& lockTimeOperation_() {
		return *(R*)((uintptr_t)this + 0x90);
	}

	 static MessageParser1ProtoModels::UserGetClanInfoResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::UserGetClanInfoResponse*>* (*)(void *))(Il2CppBase() + 0x2466B7C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x2466BE0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x2466D00))(this);
	}
	template <typename R = ProtoModels::UserGetClanInfoResponse*> R Clone() {
		return ((R (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x2466FB0))(this);
	}
	 RepeatedField1ProtoModels::UserGetUserInfo*>* get_Users() {
		return ((RepeatedField1ProtoModels::UserGetUserInfo*>* (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x246700C))(this);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x2467014))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(UserGetClanInfoResponse*, Il2CppString*))(Il2CppBase() + 0x246701C))(this, value);
	}
	template <typename R = int64_t> R get_LeaderUserID() {
		return ((R (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x246709C))(this);
	}
	template <typename R = void> R set_LeaderUserID(int64_t value) {
		return ((R (*)(UserGetClanInfoResponse*, int64_t))(Il2CppBase() + 0x24670A4))(this, value);
	}
	template <typename R = int64_t> R get_ClanID() {
		return ((R (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x24670AC))(this);
	}
	template <typename R = void> R set_ClanID(int64_t value) {
		return ((R (*)(UserGetClanInfoResponse*, int64_t))(Il2CppBase() + 0x24670B4))(this, value);
	}
	template <typename R = bool> R get_InClan() {
		return ((R (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x24670BC))(this);
	}
	template <typename R = void> R set_InClan(bool value) {
		return ((R (*)(UserGetClanInfoResponse*, bool))(Il2CppBase() + 0x24670C4))(this, value);
	}
	template <typename R = int32_t> R get_PvpWindow() {
		return ((R (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x24670D0))(this);
	}
	template <typename R = void> R set_PvpWindow(int32_t value) {
		return ((R (*)(UserGetClanInfoResponse*, int32_t))(Il2CppBase() + 0x24670D8))(this, value);
	}
	template <typename R = int64_t> R get_PvpGroupID() {
		return ((R (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x24670E0))(this);
	}
	template <typename R = void> R set_PvpGroupID(int64_t value) {
		return ((R (*)(UserGetClanInfoResponse*, int64_t))(Il2CppBase() + 0x24670E8))(this, value);
	}
	template <typename R = int64_t> R get_PvpEndTime() {
		return ((R (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x24670F0))(this);
	}
	template <typename R = void> R set_PvpEndTime(int64_t value) {
		return ((R (*)(UserGetClanInfoResponse*, int64_t))(Il2CppBase() + 0x24670F8))(this, value);
	}
	template <typename R = int32_t> R get_Language() {
		return ((R (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x2467100))(this);
	}
	template <typename R = void> R set_Language(int32_t value) {
		return ((R (*)(UserGetClanInfoResponse*, int32_t))(Il2CppBase() + 0x2467108))(this, value);
	}
	 RepeatedField1ProtoModels::EnemyInfo*>* get_Enemy() {
		return ((RepeatedField1ProtoModels::EnemyInfo*>* (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x2467110))(this);
	}
	template <typename R = bool> R get_IsLock() {
		return ((R (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x2467118))(this);
	}
	template <typename R = void> R set_IsLock(bool value) {
		return ((R (*)(UserGetClanInfoResponse*, bool))(Il2CppBase() + 0x2467120))(this, value);
	}
	template <typename R = ProtoModels::ExtendClanInfoType*> R get_ExtendClanInfo() {
		return ((R (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x246712C))(this);
	}
	template <typename R = void> R set_ExtendClanInfo(ProtoModels::ExtendClanInfoType* value) {
		return ((R (*)(UserGetClanInfoResponse*, ProtoModels::ExtendClanInfoType*))(Il2CppBase() + 0x2467134))(this, value);
	}
	template <typename R = int64_t> R get_MarkDeleteTime() {
		return ((R (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x246713C))(this);
	}
	template <typename R = void> R set_MarkDeleteTime(int64_t value) {
		return ((R (*)(UserGetClanInfoResponse*, int64_t))(Il2CppBase() + 0x2467144))(this, value);
	}
	template <typename R = int64_t> R get_LockOperationBuilderTimeUnix() {
		return ((R (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x246714C))(this);
	}
	template <typename R = void> R set_LockOperationBuilderTimeUnix(int64_t value) {
		return ((R (*)(UserGetClanInfoResponse*, int64_t))(Il2CppBase() + 0x2467154))(this, value);
	}
	template <typename R = int64_t> R get_LockOperationClanTimeUnix() {
		return ((R (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x246715C))(this);
	}
	template <typename R = void> R set_LockOperationClanTimeUnix(int64_t value) {
		return ((R (*)(UserGetClanInfoResponse*, int64_t))(Il2CppBase() + 0x2467164))(this, value);
	}
	template <typename R = int64_t> R get_LockOperationDiplomacyTimeUnix() {
		return ((R (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x246716C))(this);
	}
	template <typename R = void> R set_LockOperationDiplomacyTimeUnix(int64_t value) {
		return ((R (*)(UserGetClanInfoResponse*, int64_t))(Il2CppBase() + 0x2467174))(this, value);
	}
	template <typename R = int64_t> R get_LastRaidEndTimeUnix() {
		return ((R (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x246717C))(this);
	}
	template <typename R = void> R set_LastRaidEndTimeUnix(int64_t value) {
		return ((R (*)(UserGetClanInfoResponse*, int64_t))(Il2CppBase() + 0x2467184))(this, value);
	}
	template <typename R = int64_t> R get_LockTimeOperation() {
		return ((R (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x246718C))(this);
	}
	template <typename R = void> R set_LockTimeOperation(int64_t value) {
		return ((R (*)(UserGetClanInfoResponse*, int64_t))(Il2CppBase() + 0x2467194))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserGetClanInfoResponse*, Il2CppObject*))(Il2CppBase() + 0x246719C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserGetClanInfoResponse* other) {
		return ((R (*)(UserGetClanInfoResponse*, ProtoModels::UserGetClanInfoResponse*))(Il2CppBase() + 0x246720C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x24673E8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x246761C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserGetClanInfoResponse*, uintptr_t))(Il2CppBase() + 0x2467680))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x2467A58))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserGetClanInfoResponse* other) {
		return ((R (*)(UserGetClanInfoResponse*, ProtoModels::UserGetClanInfoResponse*))(Il2CppBase() + 0x2467ED0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserGetClanInfoResponse*, uintptr_t))(Il2CppBase() + 0x2468084))(this, input);
	}

};

}
