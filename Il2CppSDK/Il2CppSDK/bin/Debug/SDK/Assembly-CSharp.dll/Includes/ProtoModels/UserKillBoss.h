#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserKillBoss
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserKillBoss"));
	}

	 static MessageParser1ProtoModels::UserKillBoss*>*& _parser() {
		return *(MessageParser1ProtoModels::UserKillBoss*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& BossNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& bossName_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::UserKillBoss*>* get_Parser() {
		return ((MessageParser1ProtoModels::UserKillBoss*>* (*)(void *))(Il2CppBase() + 0x246E00C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x246E070))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserKillBoss*))(Il2CppBase() + 0x246E190))(this);
	}
	template <typename R = ProtoModels::UserKillBoss*> R Clone() {
		return ((R (*)(UserKillBoss*))(Il2CppBase() + 0x246E298))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(UserKillBoss*))(Il2CppBase() + 0x246E2F4))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(UserKillBoss*, int64_t))(Il2CppBase() + 0x246E2FC))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(UserKillBoss*))(Il2CppBase() + 0x246E304))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(UserKillBoss*, int64_t))(Il2CppBase() + 0x246E30C))(this, value);
	}
	template <typename R = Il2CppString*> R get_BossName() {
		return ((R (*)(UserKillBoss*))(Il2CppBase() + 0x246E314))(this);
	}
	template <typename R = void> R set_BossName(Il2CppString* value) {
		return ((R (*)(UserKillBoss*, Il2CppString*))(Il2CppBase() + 0x246E31C))(this, value);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(UserKillBoss*))(Il2CppBase() + 0x246E39C))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(UserKillBoss*, int64_t))(Il2CppBase() + 0x246E3A4))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserKillBoss*, Il2CppObject*))(Il2CppBase() + 0x246E3AC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserKillBoss* other) {
		return ((R (*)(UserKillBoss*, ProtoModels::UserKillBoss*))(Il2CppBase() + 0x246E41C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserKillBoss*))(Il2CppBase() + 0x246E49C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserKillBoss*))(Il2CppBase() + 0x246E548))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserKillBoss*, uintptr_t))(Il2CppBase() + 0x246E5AC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserKillBoss*))(Il2CppBase() + 0x246E690))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserKillBoss* other) {
		return ((R (*)(UserKillBoss*, ProtoModels::UserKillBoss*))(Il2CppBase() + 0x246E7D0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserKillBoss*, uintptr_t))(Il2CppBase() + 0x246E834))(this, input);
	}

};

}
