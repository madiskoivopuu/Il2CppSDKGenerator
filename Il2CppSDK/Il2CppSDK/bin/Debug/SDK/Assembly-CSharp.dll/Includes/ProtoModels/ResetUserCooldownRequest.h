#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ResetUserCooldownRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ResetUserCooldownRequest"));
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

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x119A7D8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x119A83C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ResetUserCooldownRequest*))(Il2CppBase() + 0x119A95C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ResetUserCooldownRequest*))(Il2CppBase() + 0x119A9FC))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ResetUserCooldownRequest*))(Il2CppBase() + 0x119AA58))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ResetUserCooldownRequest*, int64_t))(Il2CppBase() + 0x119AA60))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ResetUserCooldownRequest*))(Il2CppBase() + 0x119AA68))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ResetUserCooldownRequest*, int64_t))(Il2CppBase() + 0x119AA70))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ResetUserCooldownRequest*, uintptr_t))(Il2CppBase() + 0x119AA78))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ResetUserCooldownRequest*, uintptr_t))(Il2CppBase() + 0x119AB14))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ResetUserCooldownRequest*))(Il2CppBase() + 0x119AB54))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ResetUserCooldownRequest*))(Il2CppBase() + 0x119ABC0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ResetUserCooldownRequest*, uintptr_t))(Il2CppBase() + 0x119AC24))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ResetUserCooldownRequest*))(Il2CppBase() + 0x119ACA8))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ResetUserCooldownRequest*, uintptr_t))(Il2CppBase() + 0x119AD5C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ResetUserCooldownRequest*, uintptr_t))(Il2CppBase() + 0x119AD7C))(this, input);
	}

};

}
