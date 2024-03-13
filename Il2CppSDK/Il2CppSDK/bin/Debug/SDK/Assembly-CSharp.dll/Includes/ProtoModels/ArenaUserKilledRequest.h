#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserKilledRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserKilledRequest"));
	}

	template <typename T = MessageParser1ArenaUserKilledRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ClanIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& clanID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& KillerUserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& killerUserID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& KillerClanIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& killerClanID_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& UserDeadFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DeathType*> T& userDead_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& LastDamagerFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& lastDamager_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& ExtendInfoFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& extendInfo_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& OnlyLoggingFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& onlyLogging_() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = MessageParser1ArenaUserKilledRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x285F578))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x285F5DC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285F6FC))(this);
	}
	template <typename T = ArenaUserKilledRequest*> T Clone() {
		return ((T (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285F844))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285F8A0))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaUserKilledRequest*, int64_t))(Il2CppBase() + 0x285F8A8))(this, value);
	}
	template <typename T = int64_t> T get_ClanID() {
		return ((T (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285F8B0))(this);
	}
	template <typename T = void> T set_ClanID(int64_t value) {
		return ((T (*)(ArenaUserKilledRequest*, int64_t))(Il2CppBase() + 0x285F8B8))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285F8C0))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaUserKilledRequest*, int64_t))(Il2CppBase() + 0x285F8C8))(this, value);
	}
	template <typename T = int64_t> T get_KillerUserID() {
		return ((T (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285F8D0))(this);
	}
	template <typename T = void> T set_KillerUserID(int64_t value) {
		return ((T (*)(ArenaUserKilledRequest*, int64_t))(Il2CppBase() + 0x285F8D8))(this, value);
	}
	template <typename T = int64_t> T get_KillerClanID() {
		return ((T (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285F8E0))(this);
	}
	template <typename T = void> T set_KillerClanID(int64_t value) {
		return ((T (*)(ArenaUserKilledRequest*, int64_t))(Il2CppBase() + 0x285F8E8))(this, value);
	}
	template <typename T = DeathType*> T get_UserDead() {
		return ((T (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285F8F0))(this);
	}
	template <typename T = void> T set_UserDead(DeathType* value) {
		return ((T (*)(ArenaUserKilledRequest*, DeathType*))(Il2CppBase() + 0x285F8F8))(this, value);
	}
	template <typename T = Il2CppString*> T get_LastDamager() {
		return ((T (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285F900))(this);
	}
	template <typename T = void> T set_LastDamager(Il2CppString* value) {
		return ((T (*)(ArenaUserKilledRequest*, Il2CppString*))(Il2CppBase() + 0x285F908))(this, value);
	}
	template <typename T = Il2CppString*> T get_ExtendInfo() {
		return ((T (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285F988))(this);
	}
	template <typename T = void> T set_ExtendInfo(Il2CppString* value) {
		return ((T (*)(ArenaUserKilledRequest*, Il2CppString*))(Il2CppBase() + 0x285F990))(this, value);
	}
	template <typename T = bool> T get_OnlyLogging() {
		return ((T (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285FA10))(this);
	}
	template <typename T = void> T set_OnlyLogging(bool value) {
		return ((T (*)(ArenaUserKilledRequest*, bool))(Il2CppBase() + 0x285FA18))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaUserKilledRequest*, Il2CppObject*))(Il2CppBase() + 0x285FA24))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaUserKilledRequest* other) {
		return ((T (*)(ArenaUserKilledRequest*, ArenaUserKilledRequest*))(Il2CppBase() + 0x285FA94))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285FB74))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285FCBC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUserKilledRequest*, uintptr_t))(Il2CppBase() + 0x285FD20))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUserKilledRequest*))(Il2CppBase() + 0x285FEE8))(this);
	}
	template <typename T = void> T MergeFrom(ArenaUserKilledRequest* other) {
		return ((T (*)(ArenaUserKilledRequest*, ArenaUserKilledRequest*))(Il2CppBase() + 0x2860134))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUserKilledRequest*, uintptr_t))(Il2CppBase() + 0x28601E0))(this, input);
	}

};

}
