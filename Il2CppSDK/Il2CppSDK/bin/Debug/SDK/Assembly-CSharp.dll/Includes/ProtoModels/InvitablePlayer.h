#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class InvitablePlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "InvitablePlayer"));
	}

	 static MessageParser1ProtoModels::InvitablePlayer*>*& _parser() {
		return *(MessageParser1ProtoModels::InvitablePlayer*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& PretenderClanFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::Clan*> R& pretenderClan_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& MessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& message_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& IDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& iD_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ExpiredFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& expired_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::InvitablePlayer*>* get_Parser() {
		return ((MessageParser1ProtoModels::InvitablePlayer*>* (*)(void *))(Il2CppBase() + 0x1241FC0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1242024))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(InvitablePlayer*))(Il2CppBase() + 0x1242144))(this);
	}
	template <typename R = ProtoModels::InvitablePlayer*> R Clone() {
		return ((R (*)(InvitablePlayer*))(Il2CppBase() + 0x1242270))(this);
	}
	template <typename R = ProtoModels::Clan*> R get_PretenderClan() {
		return ((R (*)(InvitablePlayer*))(Il2CppBase() + 0x12422CC))(this);
	}
	template <typename R = void> R set_PretenderClan(ProtoModels::Clan* value) {
		return ((R (*)(InvitablePlayer*, ProtoModels::Clan*))(Il2CppBase() + 0x12422D4))(this, value);
	}
	template <typename R = Il2CppString*> R get_Message() {
		return ((R (*)(InvitablePlayer*))(Il2CppBase() + 0x12422DC))(this);
	}
	template <typename R = void> R set_Message(Il2CppString* value) {
		return ((R (*)(InvitablePlayer*, Il2CppString*))(Il2CppBase() + 0x12422E4))(this, value);
	}
	template <typename R = int64_t> R get_ID() {
		return ((R (*)(InvitablePlayer*))(Il2CppBase() + 0x1242364))(this);
	}
	template <typename R = void> R set_ID(int64_t value) {
		return ((R (*)(InvitablePlayer*, int64_t))(Il2CppBase() + 0x124236C))(this, value);
	}
	template <typename R = int64_t> R get_Expired() {
		return ((R (*)(InvitablePlayer*))(Il2CppBase() + 0x1242374))(this);
	}
	template <typename R = void> R set_Expired(int64_t value) {
		return ((R (*)(InvitablePlayer*, int64_t))(Il2CppBase() + 0x124237C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(InvitablePlayer*, Il2CppObject*))(Il2CppBase() + 0x1242384))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::InvitablePlayer* other) {
		return ((R (*)(InvitablePlayer*, ProtoModels::InvitablePlayer*))(Il2CppBase() + 0x12423F4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(InvitablePlayer*))(Il2CppBase() + 0x1242478))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(InvitablePlayer*))(Il2CppBase() + 0x1242520))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(InvitablePlayer*, uintptr_t))(Il2CppBase() + 0x1242584))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(InvitablePlayer*))(Il2CppBase() + 0x1242668))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::InvitablePlayer* other) {
		return ((R (*)(InvitablePlayer*, ProtoModels::InvitablePlayer*))(Il2CppBase() + 0x12427A8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(InvitablePlayer*, uintptr_t))(Il2CppBase() + 0x124287C))(this, input);
	}

};

}
