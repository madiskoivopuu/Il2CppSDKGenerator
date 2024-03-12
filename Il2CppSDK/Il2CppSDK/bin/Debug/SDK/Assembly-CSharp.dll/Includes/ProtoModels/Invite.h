#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Invite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Invite"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& iD_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& FromUserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& fromUserID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ToUserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& toUserID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& CellIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& cellID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& MessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& message_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& ExpiredFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& expired_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& ClansFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_clans_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& clans_() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1242AD8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1242B3C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(Invite*))(Il2CppBase() + 0x1242C5C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(Invite*))(Il2CppBase() + 0x1242E10))(this);
	}
	template <typename T = int64_t> T get_ID() {
		return ((T (*)(Invite*))(Il2CppBase() + 0x1242E6C))(this);
	}
	template <typename T = void> T set_ID(int64_t value) {
		return ((T (*)(Invite*, int64_t))(Il2CppBase() + 0x1242E74))(this, value);
	}
	template <typename T = int64_t> T get_FromUserID() {
		return ((T (*)(Invite*))(Il2CppBase() + 0x1242E7C))(this);
	}
	template <typename T = void> T set_FromUserID(int64_t value) {
		return ((T (*)(Invite*, int64_t))(Il2CppBase() + 0x1242E84))(this, value);
	}
	template <typename T = int64_t> T get_ToUserID() {
		return ((T (*)(Invite*))(Il2CppBase() + 0x1242E8C))(this);
	}
	template <typename T = void> T set_ToUserID(int64_t value) {
		return ((T (*)(Invite*, int64_t))(Il2CppBase() + 0x1242E94))(this, value);
	}
	template <typename T = int32_t> T get_CellID() {
		return ((T (*)(Invite*))(Il2CppBase() + 0x1242E9C))(this);
	}
	template <typename T = void> T set_CellID(int32_t value) {
		return ((T (*)(Invite*, int32_t))(Il2CppBase() + 0x1242EA4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Message() {
		return ((T (*)(Invite*))(Il2CppBase() + 0x1242EAC))(this);
	}
	template <typename T = void> T set_Message(Il2CppString* value) {
		return ((T (*)(Invite*, Il2CppString*))(Il2CppBase() + 0x1242EB4))(this, value);
	}
	template <typename T = int64_t> T get_Expired() {
		return ((T (*)(Invite*))(Il2CppBase() + 0x1242F34))(this);
	}
	template <typename T = void> T set_Expired(int64_t value) {
		return ((T (*)(Invite*, int64_t))(Il2CppBase() + 0x1242F3C))(this, value);
	}
	template <typename T = void*> T get_Clans() {
		return ((T (*)(Invite*))(Il2CppBase() + 0x1242F44))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Invite*, uintptr_t))(Il2CppBase() + 0x1242F4C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(Invite*, uintptr_t))(Il2CppBase() + 0x1242FBC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Invite*))(Il2CppBase() + 0x12430AC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Invite*))(Il2CppBase() + 0x12431A8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(Invite*, uintptr_t))(Il2CppBase() + 0x124320C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(Invite*))(Il2CppBase() + 0x12433BC))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(Invite*, uintptr_t))(Il2CppBase() + 0x12435DC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(Invite*, uintptr_t))(Il2CppBase() + 0x12436A8))(this, input);
	}

};

}
