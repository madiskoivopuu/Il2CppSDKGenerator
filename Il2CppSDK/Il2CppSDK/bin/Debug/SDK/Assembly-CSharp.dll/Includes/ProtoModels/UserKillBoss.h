#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserKillBoss
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserKillBoss"));
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
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& BossNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& bossName_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x246E00C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x246E070))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserKillBoss*))(Il2CppBase() + 0x246E190))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(UserKillBoss*))(Il2CppBase() + 0x246E298))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(UserKillBoss*))(Il2CppBase() + 0x246E2F4))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(UserKillBoss*, int64_t))(Il2CppBase() + 0x246E2FC))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(UserKillBoss*))(Il2CppBase() + 0x246E304))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(UserKillBoss*, int64_t))(Il2CppBase() + 0x246E30C))(this, value);
	}
	template <typename T = Il2CppString*> T get_BossName() {
		return ((T (*)(UserKillBoss*))(Il2CppBase() + 0x246E314))(this);
	}
	template <typename T = void> T set_BossName(Il2CppString* value) {
		return ((T (*)(UserKillBoss*, Il2CppString*))(Il2CppBase() + 0x246E31C))(this, value);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(UserKillBoss*))(Il2CppBase() + 0x246E39C))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(UserKillBoss*, int64_t))(Il2CppBase() + 0x246E3A4))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(UserKillBoss*, uintptr_t))(Il2CppBase() + 0x246E3AC))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(UserKillBoss*, uintptr_t))(Il2CppBase() + 0x246E41C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserKillBoss*))(Il2CppBase() + 0x246E49C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserKillBoss*))(Il2CppBase() + 0x246E548))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserKillBoss*, uintptr_t))(Il2CppBase() + 0x246E5AC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserKillBoss*))(Il2CppBase() + 0x246E690))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(UserKillBoss*, uintptr_t))(Il2CppBase() + 0x246E7D0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserKillBoss*, uintptr_t))(Il2CppBase() + 0x246E834))(this, input);
	}

};

}
