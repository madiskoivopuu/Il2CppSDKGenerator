#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaRaidClanUnderAttackRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaRaidClanUnderAttackRequest"));
	}

	 static MessageParser1ProtoModels::ArenaRaidClanUnderAttackRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaRaidClanUnderAttackRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& TimeStampEstimatedEndRaidFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& timeStampEstimatedEndRaid_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& TimeStampShieldEndFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& timeStampShieldEnd_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::ArenaRaidClanUnderAttackRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaRaidClanUnderAttackRequest*>* (*)(void *))(Il2CppBase() + 0x1A693FC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A69460))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaRaidClanUnderAttackRequest*))(Il2CppBase() + 0x1A69580))(this);
	}
	template <typename R = ProtoModels::ArenaRaidClanUnderAttackRequest*> R Clone() {
		return ((R (*)(ArenaRaidClanUnderAttackRequest*))(Il2CppBase() + 0x1A69628))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaRaidClanUnderAttackRequest*))(Il2CppBase() + 0x1A69684))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaRaidClanUnderAttackRequest*, int64_t))(Il2CppBase() + 0x1A6968C))(this, value);
	}
	template <typename R = int64_t> R get_TimeStampEstimatedEndRaid() {
		return ((R (*)(ArenaRaidClanUnderAttackRequest*))(Il2CppBase() + 0x1A69694))(this);
	}
	template <typename R = void> R set_TimeStampEstimatedEndRaid(int64_t value) {
		return ((R (*)(ArenaRaidClanUnderAttackRequest*, int64_t))(Il2CppBase() + 0x1A6969C))(this, value);
	}
	template <typename R = int64_t> R get_TimeStampShieldEnd() {
		return ((R (*)(ArenaRaidClanUnderAttackRequest*))(Il2CppBase() + 0x1A696A4))(this);
	}
	template <typename R = void> R set_TimeStampShieldEnd(int64_t value) {
		return ((R (*)(ArenaRaidClanUnderAttackRequest*, int64_t))(Il2CppBase() + 0x1A696AC))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaRaidClanUnderAttackRequest*, Il2CppObject*))(Il2CppBase() + 0x1A696B4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaRaidClanUnderAttackRequest* other) {
		return ((R (*)(ArenaRaidClanUnderAttackRequest*, ProtoModels::ArenaRaidClanUnderAttackRequest*))(Il2CppBase() + 0x1A69760))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaRaidClanUnderAttackRequest*))(Il2CppBase() + 0x1A697B0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaRaidClanUnderAttackRequest*))(Il2CppBase() + 0x1A69838))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaRaidClanUnderAttackRequest*, uintptr_t))(Il2CppBase() + 0x1A6989C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaRaidClanUnderAttackRequest*))(Il2CppBase() + 0x1A6994C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaRaidClanUnderAttackRequest* other) {
		return ((R (*)(ArenaRaidClanUnderAttackRequest*, ProtoModels::ArenaRaidClanUnderAttackRequest*))(Il2CppBase() + 0x1A69A44))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaRaidClanUnderAttackRequest*, uintptr_t))(Il2CppBase() + 0x1A69A70))(this, input);
	}

};

}
