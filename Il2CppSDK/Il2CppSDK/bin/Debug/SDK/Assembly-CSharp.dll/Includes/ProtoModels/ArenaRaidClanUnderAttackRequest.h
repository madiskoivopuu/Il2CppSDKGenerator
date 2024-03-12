#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaRaidClanUnderAttackRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaRaidClanUnderAttackRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& TimeStampEstimatedEndRaidFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& timeStampEstimatedEndRaid_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& TimeStampShieldEndFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& timeStampShieldEnd_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A693FC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A69460))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaRaidClanUnderAttackRequest*))(Il2CppBase() + 0x1A69580))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaRaidClanUnderAttackRequest*))(Il2CppBase() + 0x1A69628))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaRaidClanUnderAttackRequest*))(Il2CppBase() + 0x1A69684))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaRaidClanUnderAttackRequest*, int64_t))(Il2CppBase() + 0x1A6968C))(this, value);
	}
	template <typename T = int64_t> T get_TimeStampEstimatedEndRaid() {
		return ((T (*)(ArenaRaidClanUnderAttackRequest*))(Il2CppBase() + 0x1A69694))(this);
	}
	template <typename T = void> T set_TimeStampEstimatedEndRaid(int64_t value) {
		return ((T (*)(ArenaRaidClanUnderAttackRequest*, int64_t))(Il2CppBase() + 0x1A6969C))(this, value);
	}
	template <typename T = int64_t> T get_TimeStampShieldEnd() {
		return ((T (*)(ArenaRaidClanUnderAttackRequest*))(Il2CppBase() + 0x1A696A4))(this);
	}
	template <typename T = void> T set_TimeStampShieldEnd(int64_t value) {
		return ((T (*)(ArenaRaidClanUnderAttackRequest*, int64_t))(Il2CppBase() + 0x1A696AC))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaRaidClanUnderAttackRequest*, uintptr_t))(Il2CppBase() + 0x1A696B4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaRaidClanUnderAttackRequest*, uintptr_t))(Il2CppBase() + 0x1A69760))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaRaidClanUnderAttackRequest*))(Il2CppBase() + 0x1A697B0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaRaidClanUnderAttackRequest*))(Il2CppBase() + 0x1A69838))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaRaidClanUnderAttackRequest*, uintptr_t))(Il2CppBase() + 0x1A6989C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaRaidClanUnderAttackRequest*))(Il2CppBase() + 0x1A6994C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaRaidClanUnderAttackRequest*, uintptr_t))(Il2CppBase() + 0x1A69A44))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaRaidClanUnderAttackRequest*, uintptr_t))(Il2CppBase() + 0x1A69A70))(this, input);
	}

};

}
