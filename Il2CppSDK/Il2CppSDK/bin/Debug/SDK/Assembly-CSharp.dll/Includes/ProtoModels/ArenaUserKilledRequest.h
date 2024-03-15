#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserKilledRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserKilledRequest"));
	}

	 static MessageParser1ProtoModels::ArenaUserKilledRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaUserKilledRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ClanIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& clanID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& KillerUserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& killerUserID_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& KillerClanIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& killerClanID_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& UserDeadFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::DeathType*> R& userDead_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& LastDamagerFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& lastDamager_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& ExtendInfoFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& extendInfo_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& OnlyLoggingFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& onlyLogging_() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	 static MessageParser1ProtoModels::ArenaUserKilledRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaUserKilledRequest*>* (*)(void *))(Il2CppBase() + 0x285F578))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x285F5DC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285F6FC))(this);
	}
	template <typename R = ProtoModels::ArenaUserKilledRequest*> R Clone() {
		return ((R (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285F844))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285F8A0))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaUserKilledRequest*, int64_t))(Il2CppBase() + 0x285F8A8))(this, value);
	}
	template <typename R = int64_t> R get_ClanID() {
		return ((R (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285F8B0))(this);
	}
	template <typename R = void> R set_ClanID(int64_t value) {
		return ((R (*)(ArenaUserKilledRequest*, int64_t))(Il2CppBase() + 0x285F8B8))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285F8C0))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaUserKilledRequest*, int64_t))(Il2CppBase() + 0x285F8C8))(this, value);
	}
	template <typename R = int64_t> R get_KillerUserID() {
		return ((R (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285F8D0))(this);
	}
	template <typename R = void> R set_KillerUserID(int64_t value) {
		return ((R (*)(ArenaUserKilledRequest*, int64_t))(Il2CppBase() + 0x285F8D8))(this, value);
	}
	template <typename R = int64_t> R get_KillerClanID() {
		return ((R (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285F8E0))(this);
	}
	template <typename R = void> R set_KillerClanID(int64_t value) {
		return ((R (*)(ArenaUserKilledRequest*, int64_t))(Il2CppBase() + 0x285F8E8))(this, value);
	}
	template <typename R = ProtoModels::DeathType*> R get_UserDead() {
		return ((R (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285F8F0))(this);
	}
	template <typename R = void> R set_UserDead(ProtoModels::DeathType* value) {
		return ((R (*)(ArenaUserKilledRequest*, ProtoModels::DeathType*))(Il2CppBase() + 0x285F8F8))(this, value);
	}
	template <typename R = Il2CppString*> R get_LastDamager() {
		return ((R (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285F900))(this);
	}
	template <typename R = void> R set_LastDamager(Il2CppString* value) {
		return ((R (*)(ArenaUserKilledRequest*, Il2CppString*))(Il2CppBase() + 0x285F908))(this, value);
	}
	template <typename R = Il2CppString*> R get_ExtendInfo() {
		return ((R (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285F988))(this);
	}
	template <typename R = void> R set_ExtendInfo(Il2CppString* value) {
		return ((R (*)(ArenaUserKilledRequest*, Il2CppString*))(Il2CppBase() + 0x285F990))(this, value);
	}
	template <typename R = bool> R get_OnlyLogging() {
		return ((R (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285FA10))(this);
	}
	template <typename R = void> R set_OnlyLogging(bool value) {
		return ((R (*)(ArenaUserKilledRequest*, bool))(Il2CppBase() + 0x285FA18))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUserKilledRequest*, Il2CppObject*))(Il2CppBase() + 0x285FA24))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUserKilledRequest* other) {
		return ((R (*)(ArenaUserKilledRequest*, ProtoModels::ArenaUserKilledRequest*))(Il2CppBase() + 0x285FA94))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285FB74))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285FCBC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUserKilledRequest*, uintptr_t))(Il2CppBase() + 0x285FD20))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285FEE8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUserKilledRequest* other) {
		return ((R (*)(ArenaUserKilledRequest*, ProtoModels::ArenaUserKilledRequest*))(Il2CppBase() + 0x2860134))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUserKilledRequest*, uintptr_t))(Il2CppBase() + 0x28601E0))(this, input);
	}

};

}
