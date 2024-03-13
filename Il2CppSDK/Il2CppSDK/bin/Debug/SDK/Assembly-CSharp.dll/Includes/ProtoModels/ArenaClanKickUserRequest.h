#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaClanKickUserRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaClanKickUserRequest"));
	}

	template <typename T = MessageParser1ArenaClanKickUserRequest*>*> static T& _parser() {
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
	template <typename T = int32_t> static T& KickUserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& kickUserID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1ArenaClanKickUserRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A1C468))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A1C4CC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaClanKickUserRequest*))(Il2CppBase() + 0x1A1C5EC))(this);
	}
	template <typename T = ArenaClanKickUserRequest*> T Clone() {
		return ((T (*)(ArenaClanKickUserRequest*))(Il2CppBase() + 0x1A1C694))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaClanKickUserRequest*))(Il2CppBase() + 0x1A1C6F0))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaClanKickUserRequest*, int64_t))(Il2CppBase() + 0x1A1C6F8))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaClanKickUserRequest*))(Il2CppBase() + 0x1A1C700))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaClanKickUserRequest*, int64_t))(Il2CppBase() + 0x1A1C708))(this, value);
	}
	template <typename T = int64_t> T get_KickUserID() {
		return ((T (*)(ArenaClanKickUserRequest*))(Il2CppBase() + 0x1A1C710))(this);
	}
	template <typename T = void> T set_KickUserID(int64_t value) {
		return ((T (*)(ArenaClanKickUserRequest*, int64_t))(Il2CppBase() + 0x1A1C718))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaClanKickUserRequest*, Il2CppObject*))(Il2CppBase() + 0x1A1C720))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaClanKickUserRequest* other) {
		return ((T (*)(ArenaClanKickUserRequest*, ArenaClanKickUserRequest*))(Il2CppBase() + 0x1A1C7CC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaClanKickUserRequest*))(Il2CppBase() + 0x1A1C81C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaClanKickUserRequest*))(Il2CppBase() + 0x1A1C8A4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaClanKickUserRequest*, uintptr_t))(Il2CppBase() + 0x1A1C908))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaClanKickUserRequest*))(Il2CppBase() + 0x1A1C9B8))(this);
	}
	template <typename T = void> T MergeFrom(ArenaClanKickUserRequest* other) {
		return ((T (*)(ArenaClanKickUserRequest*, ArenaClanKickUserRequest*))(Il2CppBase() + 0x1A1CAB0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaClanKickUserRequest*, uintptr_t))(Il2CppBase() + 0x1A1CADC))(this, input);
	}

};

}
