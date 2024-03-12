#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserProcessInviteRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserProcessInviteRequest"));
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
	template <typename T = int32_t> static T& InviteIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& inviteID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& AcceptFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& accept_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2862128))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x286218C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUserProcessInviteRequest*))(Il2CppBase() + 0x28622AC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaUserProcessInviteRequest*))(Il2CppBase() + 0x286235C))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaUserProcessInviteRequest*))(Il2CppBase() + 0x28623B8))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaUserProcessInviteRequest*, int64_t))(Il2CppBase() + 0x28623C0))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaUserProcessInviteRequest*))(Il2CppBase() + 0x28623C8))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaUserProcessInviteRequest*, int64_t))(Il2CppBase() + 0x28623D0))(this, value);
	}
	template <typename T = int64_t> T get_InviteID() {
		return ((T (*)(ArenaUserProcessInviteRequest*))(Il2CppBase() + 0x28623D8))(this);
	}
	template <typename T = void> T set_InviteID(int64_t value) {
		return ((T (*)(ArenaUserProcessInviteRequest*, int64_t))(Il2CppBase() + 0x28623E0))(this, value);
	}
	template <typename T = bool> T get_Accept() {
		return ((T (*)(ArenaUserProcessInviteRequest*))(Il2CppBase() + 0x28623E8))(this);
	}
	template <typename T = void> T set_Accept(bool value) {
		return ((T (*)(ArenaUserProcessInviteRequest*, bool))(Il2CppBase() + 0x28623F0))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaUserProcessInviteRequest*, uintptr_t))(Il2CppBase() + 0x28623FC))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaUserProcessInviteRequest*, uintptr_t))(Il2CppBase() + 0x286246C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUserProcessInviteRequest*))(Il2CppBase() + 0x28624D8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUserProcessInviteRequest*))(Il2CppBase() + 0x2862584))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUserProcessInviteRequest*, uintptr_t))(Il2CppBase() + 0x28625E8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUserProcessInviteRequest*))(Il2CppBase() + 0x28626C4))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaUserProcessInviteRequest*, uintptr_t))(Il2CppBase() + 0x28627D0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUserProcessInviteRequest*, uintptr_t))(Il2CppBase() + 0x2862808))(this, input);
	}

};

}
