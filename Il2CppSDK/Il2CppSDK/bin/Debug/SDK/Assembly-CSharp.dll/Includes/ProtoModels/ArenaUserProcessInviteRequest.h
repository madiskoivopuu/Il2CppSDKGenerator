#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserProcessInviteRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserProcessInviteRequest"));
	}

	 static MessageParser1ProtoModels::ArenaUserProcessInviteRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaUserProcessInviteRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& InviteIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& inviteID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& AcceptFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& accept_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::ArenaUserProcessInviteRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaUserProcessInviteRequest*>* (*)(void *))(Il2CppBase() + 0x2862128))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x286218C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUserProcessInviteRequest*))(Il2CppBase() + 0x28622AC))(this);
	}
	template <typename R = ProtoModels::ArenaUserProcessInviteRequest*> R Clone() {
		return ((R (*)(ArenaUserProcessInviteRequest*))(Il2CppBase() + 0x286235C))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaUserProcessInviteRequest*))(Il2CppBase() + 0x28623B8))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaUserProcessInviteRequest*, int64_t))(Il2CppBase() + 0x28623C0))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaUserProcessInviteRequest*))(Il2CppBase() + 0x28623C8))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaUserProcessInviteRequest*, int64_t))(Il2CppBase() + 0x28623D0))(this, value);
	}
	template <typename R = int64_t> R get_InviteID() {
		return ((R (*)(ArenaUserProcessInviteRequest*))(Il2CppBase() + 0x28623D8))(this);
	}
	template <typename R = void> R set_InviteID(int64_t value) {
		return ((R (*)(ArenaUserProcessInviteRequest*, int64_t))(Il2CppBase() + 0x28623E0))(this, value);
	}
	template <typename R = bool> R get_Accept() {
		return ((R (*)(ArenaUserProcessInviteRequest*))(Il2CppBase() + 0x28623E8))(this);
	}
	template <typename R = void> R set_Accept(bool value) {
		return ((R (*)(ArenaUserProcessInviteRequest*, bool))(Il2CppBase() + 0x28623F0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUserProcessInviteRequest*, Il2CppObject*))(Il2CppBase() + 0x28623FC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUserProcessInviteRequest* other) {
		return ((R (*)(ArenaUserProcessInviteRequest*, ProtoModels::ArenaUserProcessInviteRequest*))(Il2CppBase() + 0x286246C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUserProcessInviteRequest*))(Il2CppBase() + 0x28624D8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUserProcessInviteRequest*))(Il2CppBase() + 0x2862584))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUserProcessInviteRequest*, uintptr_t))(Il2CppBase() + 0x28625E8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUserProcessInviteRequest*))(Il2CppBase() + 0x28626C4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUserProcessInviteRequest* other) {
		return ((R (*)(ArenaUserProcessInviteRequest*, ProtoModels::ArenaUserProcessInviteRequest*))(Il2CppBase() + 0x28627D0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUserProcessInviteRequest*, uintptr_t))(Il2CppBase() + 0x2862808))(this, input);
	}

};

}
