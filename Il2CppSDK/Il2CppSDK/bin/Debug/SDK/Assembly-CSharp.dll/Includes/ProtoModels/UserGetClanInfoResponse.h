#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserGetClanInfoResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserGetClanInfoResponse"));
	}

	template <typename T = MessageParser1UserGetClanInfoResponse*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UsersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1UserGetUserInfo*>*> static T& _repeated_users_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1UserGetUserInfo*>*> T& users_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& LeaderUserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& leaderUserID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ClanIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& clanID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& InClanFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& inClan_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& PvpWindowFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& pvpWindow_() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> static T& PvpGroupIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& pvpGroupID_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& PvpEndTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& pvpEndTime_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& LanguageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& language_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& EnemyFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1EnemyInfo*>*> static T& _repeated_enemy_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = RepeatedField1EnemyInfo*>*> T& enemy_() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& IsLockFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isLock_() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& ExtendClanInfoFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ExtendClanInfoType*> T& extendClanInfo_() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& MarkDeleteTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& markDeleteTime_() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> static T& LockOperationBuilderTimeUnixFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& lockOperationBuilderTimeUnix_() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> static T& LockOperationClanTimeUnixFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& lockOperationClanTimeUnix_() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> static T& LockOperationDiplomacyTimeUnixFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& lockOperationDiplomacyTimeUnix_() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> static T& LastRaidEndTimeUnixFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& lastRaidEndTimeUnix_() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> static T& LockTimeOperationFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& lockTimeOperation_() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = MessageParser1UserGetClanInfoResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2466B7C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2466BE0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x2466D00))(this);
	}
	template <typename T = UserGetClanInfoResponse*> T Clone() {
		return ((T (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x2466FB0))(this);
	}
	template <typename T = RepeatedField1UserGetUserInfo*>*> T get_Users() {
		return ((T (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x246700C))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x2467014))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(UserGetClanInfoResponse*, Il2CppString*))(Il2CppBase() + 0x246701C))(this, value);
	}
	template <typename T = int64_t> T get_LeaderUserID() {
		return ((T (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x246709C))(this);
	}
	template <typename T = void> T set_LeaderUserID(int64_t value) {
		return ((T (*)(UserGetClanInfoResponse*, int64_t))(Il2CppBase() + 0x24670A4))(this, value);
	}
	template <typename T = int64_t> T get_ClanID() {
		return ((T (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x24670AC))(this);
	}
	template <typename T = void> T set_ClanID(int64_t value) {
		return ((T (*)(UserGetClanInfoResponse*, int64_t))(Il2CppBase() + 0x24670B4))(this, value);
	}
	template <typename T = bool> T get_InClan() {
		return ((T (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x24670BC))(this);
	}
	template <typename T = void> T set_InClan(bool value) {
		return ((T (*)(UserGetClanInfoResponse*, bool))(Il2CppBase() + 0x24670C4))(this, value);
	}
	template <typename T = int32_t> T get_PvpWindow() {
		return ((T (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x24670D0))(this);
	}
	template <typename T = void> T set_PvpWindow(int32_t value) {
		return ((T (*)(UserGetClanInfoResponse*, int32_t))(Il2CppBase() + 0x24670D8))(this, value);
	}
	template <typename T = int64_t> T get_PvpGroupID() {
		return ((T (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x24670E0))(this);
	}
	template <typename T = void> T set_PvpGroupID(int64_t value) {
		return ((T (*)(UserGetClanInfoResponse*, int64_t))(Il2CppBase() + 0x24670E8))(this, value);
	}
	template <typename T = int64_t> T get_PvpEndTime() {
		return ((T (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x24670F0))(this);
	}
	template <typename T = void> T set_PvpEndTime(int64_t value) {
		return ((T (*)(UserGetClanInfoResponse*, int64_t))(Il2CppBase() + 0x24670F8))(this, value);
	}
	template <typename T = int32_t> T get_Language() {
		return ((T (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x2467100))(this);
	}
	template <typename T = void> T set_Language(int32_t value) {
		return ((T (*)(UserGetClanInfoResponse*, int32_t))(Il2CppBase() + 0x2467108))(this, value);
	}
	template <typename T = RepeatedField1EnemyInfo*>*> T get_Enemy() {
		return ((T (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x2467110))(this);
	}
	template <typename T = bool> T get_IsLock() {
		return ((T (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x2467118))(this);
	}
	template <typename T = void> T set_IsLock(bool value) {
		return ((T (*)(UserGetClanInfoResponse*, bool))(Il2CppBase() + 0x2467120))(this, value);
	}
	template <typename T = ExtendClanInfoType*> T get_ExtendClanInfo() {
		return ((T (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x246712C))(this);
	}
	template <typename T = void> T set_ExtendClanInfo(ExtendClanInfoType* value) {
		return ((T (*)(UserGetClanInfoResponse*, ExtendClanInfoType*))(Il2CppBase() + 0x2467134))(this, value);
	}
	template <typename T = int64_t> T get_MarkDeleteTime() {
		return ((T (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x246713C))(this);
	}
	template <typename T = void> T set_MarkDeleteTime(int64_t value) {
		return ((T (*)(UserGetClanInfoResponse*, int64_t))(Il2CppBase() + 0x2467144))(this, value);
	}
	template <typename T = int64_t> T get_LockOperationBuilderTimeUnix() {
		return ((T (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x246714C))(this);
	}
	template <typename T = void> T set_LockOperationBuilderTimeUnix(int64_t value) {
		return ((T (*)(UserGetClanInfoResponse*, int64_t))(Il2CppBase() + 0x2467154))(this, value);
	}
	template <typename T = int64_t> T get_LockOperationClanTimeUnix() {
		return ((T (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x246715C))(this);
	}
	template <typename T = void> T set_LockOperationClanTimeUnix(int64_t value) {
		return ((T (*)(UserGetClanInfoResponse*, int64_t))(Il2CppBase() + 0x2467164))(this, value);
	}
	template <typename T = int64_t> T get_LockOperationDiplomacyTimeUnix() {
		return ((T (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x246716C))(this);
	}
	template <typename T = void> T set_LockOperationDiplomacyTimeUnix(int64_t value) {
		return ((T (*)(UserGetClanInfoResponse*, int64_t))(Il2CppBase() + 0x2467174))(this, value);
	}
	template <typename T = int64_t> T get_LastRaidEndTimeUnix() {
		return ((T (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x246717C))(this);
	}
	template <typename T = void> T set_LastRaidEndTimeUnix(int64_t value) {
		return ((T (*)(UserGetClanInfoResponse*, int64_t))(Il2CppBase() + 0x2467184))(this, value);
	}
	template <typename T = int64_t> T get_LockTimeOperation() {
		return ((T (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x246718C))(this);
	}
	template <typename T = void> T set_LockTimeOperation(int64_t value) {
		return ((T (*)(UserGetClanInfoResponse*, int64_t))(Il2CppBase() + 0x2467194))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(UserGetClanInfoResponse*, Il2CppObject*))(Il2CppBase() + 0x246719C))(this, other);
	}
	template <typename T = bool> T Equals_1(UserGetClanInfoResponse* other) {
		return ((T (*)(UserGetClanInfoResponse*, UserGetClanInfoResponse*))(Il2CppBase() + 0x246720C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x24673E8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x246761C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserGetClanInfoResponse*, uintptr_t))(Il2CppBase() + 0x2467680))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserGetClanInfoResponse*))(Il2CppBase() + 0x2467A58))(this);
	}
	template <typename T = void> T MergeFrom(UserGetClanInfoResponse* other) {
		return ((T (*)(UserGetClanInfoResponse*, UserGetClanInfoResponse*))(Il2CppBase() + 0x2467ED0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserGetClanInfoResponse*, uintptr_t))(Il2CppBase() + 0x2468084))(this, input);
	}

};

}
