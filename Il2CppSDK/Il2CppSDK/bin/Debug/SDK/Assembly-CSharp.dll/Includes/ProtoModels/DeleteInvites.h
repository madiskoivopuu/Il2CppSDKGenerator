#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class DeleteInvites
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "DeleteInvites"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& InviteIDsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_inviteIDs_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& inviteIDs_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xEB8E38))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xEB8E9C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(DeleteInvites*))(Il2CppBase() + 0xEB8FBC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(DeleteInvites*))(Il2CppBase() + 0xEB9114))(this);
	}
	template <typename T = void*> T get_InviteIDs() {
		return ((T (*)(DeleteInvites*))(Il2CppBase() + 0xEB9170))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(DeleteInvites*, uintptr_t))(Il2CppBase() + 0xEB9178))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(DeleteInvites*, uintptr_t))(Il2CppBase() + 0xEB91E8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(DeleteInvites*))(Il2CppBase() + 0xEB9274))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DeleteInvites*))(Il2CppBase() + 0xEB92A0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(DeleteInvites*, uintptr_t))(Il2CppBase() + 0xEB9304))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(DeleteInvites*))(Il2CppBase() + 0xEB93A4))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(DeleteInvites*, uintptr_t))(Il2CppBase() + 0xEB9434))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(DeleteInvites*, uintptr_t))(Il2CppBase() + 0xEB94AC))(this, input);
	}

};

}
