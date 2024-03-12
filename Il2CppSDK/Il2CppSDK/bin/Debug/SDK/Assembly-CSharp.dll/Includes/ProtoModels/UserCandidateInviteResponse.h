#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserCandidateInviteResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserCandidateInviteResponse"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& PretendersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_pretenders_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& pretenders_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x24638C8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x246392C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserCandidateInviteResponse*))(Il2CppBase() + 0x2463A4C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(UserCandidateInviteResponse*))(Il2CppBase() + 0x2463BE0))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(UserCandidateInviteResponse*))(Il2CppBase() + 0x2463C3C))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(UserCandidateInviteResponse*, int32_t))(Il2CppBase() + 0x2463C44))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(UserCandidateInviteResponse*))(Il2CppBase() + 0x2463C4C))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(UserCandidateInviteResponse*, Il2CppString*))(Il2CppBase() + 0x2463C54))(this, value);
	}
	template <typename T = void*> T get_Pretenders() {
		return ((T (*)(UserCandidateInviteResponse*))(Il2CppBase() + 0x2463CD4))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(UserCandidateInviteResponse*, uintptr_t))(Il2CppBase() + 0x2463CDC))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(UserCandidateInviteResponse*, uintptr_t))(Il2CppBase() + 0x2463D4C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserCandidateInviteResponse*))(Il2CppBase() + 0x2463DFC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserCandidateInviteResponse*))(Il2CppBase() + 0x2463E84))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserCandidateInviteResponse*, uintptr_t))(Il2CppBase() + 0x2463EE8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserCandidateInviteResponse*))(Il2CppBase() + 0x2463FE8))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(UserCandidateInviteResponse*, uintptr_t))(Il2CppBase() + 0x2464118))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserCandidateInviteResponse*, uintptr_t))(Il2CppBase() + 0x24641B4))(this, input);
	}

};

}
