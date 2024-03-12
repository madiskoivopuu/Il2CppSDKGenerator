#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserOfflineFromArenaRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserOfflineFromArenaRequest"));
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
		return ((T (*)(void *))(Il2CppBase() + 0x246FD24))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x246FD88))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserOfflineFromArenaRequest*))(Il2CppBase() + 0x246FEA8))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(UserOfflineFromArenaRequest*))(Il2CppBase() + 0x246FF48))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(UserOfflineFromArenaRequest*))(Il2CppBase() + 0x246FFA4))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(UserOfflineFromArenaRequest*, int64_t))(Il2CppBase() + 0x246FFAC))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(UserOfflineFromArenaRequest*))(Il2CppBase() + 0x246FFB4))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(UserOfflineFromArenaRequest*, int64_t))(Il2CppBase() + 0x246FFBC))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(UserOfflineFromArenaRequest*, uintptr_t))(Il2CppBase() + 0x246FFC4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(UserOfflineFromArenaRequest*, uintptr_t))(Il2CppBase() + 0x2470060))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserOfflineFromArenaRequest*))(Il2CppBase() + 0x24700A0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserOfflineFromArenaRequest*))(Il2CppBase() + 0x247010C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserOfflineFromArenaRequest*, uintptr_t))(Il2CppBase() + 0x2470170))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserOfflineFromArenaRequest*))(Il2CppBase() + 0x24701F4))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(UserOfflineFromArenaRequest*, uintptr_t))(Il2CppBase() + 0x24702A8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserOfflineFromArenaRequest*, uintptr_t))(Il2CppBase() + 0x24702C8))(this, input);
	}

};

}
