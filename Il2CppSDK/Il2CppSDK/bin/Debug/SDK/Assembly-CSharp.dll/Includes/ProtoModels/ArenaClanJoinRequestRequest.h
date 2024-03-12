#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaClanJoinRequestRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaClanJoinRequestRequest"));
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
	template <typename T = int32_t> static T& TextFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& text_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& JoinFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& join_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A1BA64))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A1BAC8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaClanJoinRequestRequest*))(Il2CppBase() + 0x1A1BBE8))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaClanJoinRequestRequest*))(Il2CppBase() + 0x1A1BCF0))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaClanJoinRequestRequest*))(Il2CppBase() + 0x1A1BD4C))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaClanJoinRequestRequest*, int64_t))(Il2CppBase() + 0x1A1BD54))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaClanJoinRequestRequest*))(Il2CppBase() + 0x1A1BD5C))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaClanJoinRequestRequest*, int64_t))(Il2CppBase() + 0x1A1BD64))(this, value);
	}
	template <typename T = Il2CppString*> T get_Text() {
		return ((T (*)(ArenaClanJoinRequestRequest*))(Il2CppBase() + 0x1A1BD6C))(this);
	}
	template <typename T = void> T set_Text(Il2CppString* value) {
		return ((T (*)(ArenaClanJoinRequestRequest*, Il2CppString*))(Il2CppBase() + 0x1A1BD74))(this, value);
	}
	template <typename T = bool> T get_Join() {
		return ((T (*)(ArenaClanJoinRequestRequest*))(Il2CppBase() + 0x1A1BDF4))(this);
	}
	template <typename T = void> T set_Join(bool value) {
		return ((T (*)(ArenaClanJoinRequestRequest*, bool))(Il2CppBase() + 0x1A1BDFC))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaClanJoinRequestRequest*, uintptr_t))(Il2CppBase() + 0x1A1BE08))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaClanJoinRequestRequest*, uintptr_t))(Il2CppBase() + 0x1A1BE78))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaClanJoinRequestRequest*))(Il2CppBase() + 0x1A1BF04))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaClanJoinRequestRequest*))(Il2CppBase() + 0x1A1BFB8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaClanJoinRequestRequest*, uintptr_t))(Il2CppBase() + 0x1A1C01C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaClanJoinRequestRequest*))(Il2CppBase() + 0x1A1C100))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaClanJoinRequestRequest*, uintptr_t))(Il2CppBase() + 0x1A1C218))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaClanJoinRequestRequest*, uintptr_t))(Il2CppBase() + 0x1A1C27C))(this, input);
	}

};

}
