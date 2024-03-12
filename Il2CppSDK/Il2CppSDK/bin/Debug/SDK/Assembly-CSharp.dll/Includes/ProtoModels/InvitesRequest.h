#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class InvitesRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "InvitesRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1248334))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1248398))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(InvitesRequest*))(Il2CppBase() + 0x12484B8))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(InvitesRequest*))(Il2CppBase() + 0x1248558))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(InvitesRequest*))(Il2CppBase() + 0x12485B4))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(InvitesRequest*, int64_t))(Il2CppBase() + 0x12485BC))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(InvitesRequest*))(Il2CppBase() + 0x12485C4))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(InvitesRequest*, int64_t))(Il2CppBase() + 0x12485CC))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(InvitesRequest*, uintptr_t))(Il2CppBase() + 0x12485D4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(InvitesRequest*, uintptr_t))(Il2CppBase() + 0x1248670))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(InvitesRequest*))(Il2CppBase() + 0x12486B0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(InvitesRequest*))(Il2CppBase() + 0x124871C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(InvitesRequest*, uintptr_t))(Il2CppBase() + 0x1248780))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(InvitesRequest*))(Il2CppBase() + 0x1248804))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(InvitesRequest*, uintptr_t))(Il2CppBase() + 0x12488B8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(InvitesRequest*, uintptr_t))(Il2CppBase() + 0x12488D8))(this, input);
	}

};

}
