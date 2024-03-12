#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class InvitablePlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "InvitablePlayer"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PretenderClanFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& pretenderClan_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& MessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& message_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& IDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& iD_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ExpiredFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& expired_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1241FC0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1242024))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(InvitablePlayer*))(Il2CppBase() + 0x1242144))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(InvitablePlayer*))(Il2CppBase() + 0x1242270))(this);
	}
	template <typename T = uintptr_t> T get_PretenderClan() {
		return ((T (*)(InvitablePlayer*))(Il2CppBase() + 0x12422CC))(this);
	}
	template <typename T = void> T set_PretenderClan(uintptr_t value) {
		return ((T (*)(InvitablePlayer*, uintptr_t))(Il2CppBase() + 0x12422D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Message() {
		return ((T (*)(InvitablePlayer*))(Il2CppBase() + 0x12422DC))(this);
	}
	template <typename T = void> T set_Message(Il2CppString* value) {
		return ((T (*)(InvitablePlayer*, Il2CppString*))(Il2CppBase() + 0x12422E4))(this, value);
	}
	template <typename T = int64_t> T get_ID() {
		return ((T (*)(InvitablePlayer*))(Il2CppBase() + 0x1242364))(this);
	}
	template <typename T = void> T set_ID(int64_t value) {
		return ((T (*)(InvitablePlayer*, int64_t))(Il2CppBase() + 0x124236C))(this, value);
	}
	template <typename T = int64_t> T get_Expired() {
		return ((T (*)(InvitablePlayer*))(Il2CppBase() + 0x1242374))(this);
	}
	template <typename T = void> T set_Expired(int64_t value) {
		return ((T (*)(InvitablePlayer*, int64_t))(Il2CppBase() + 0x124237C))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(InvitablePlayer*, uintptr_t))(Il2CppBase() + 0x1242384))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(InvitablePlayer*, uintptr_t))(Il2CppBase() + 0x12423F4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(InvitablePlayer*))(Il2CppBase() + 0x1242478))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(InvitablePlayer*))(Il2CppBase() + 0x1242520))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(InvitablePlayer*, uintptr_t))(Il2CppBase() + 0x1242584))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(InvitablePlayer*))(Il2CppBase() + 0x1242668))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(InvitablePlayer*, uintptr_t))(Il2CppBase() + 0x12427A8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(InvitablePlayer*, uintptr_t))(Il2CppBase() + 0x124287C))(this, input);
	}

};

}
