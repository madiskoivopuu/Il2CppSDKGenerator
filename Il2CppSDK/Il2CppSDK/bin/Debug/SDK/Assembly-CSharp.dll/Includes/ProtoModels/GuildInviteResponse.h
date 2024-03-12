#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildInviteResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildInviteResponse"));
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
	template <typename T = int32_t> static T& LockTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& lockTime_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B31628))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B3168C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildInviteResponse*))(Il2CppBase() + 0x1B317AC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(GuildInviteResponse*))(Il2CppBase() + 0x1B318AC))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(GuildInviteResponse*))(Il2CppBase() + 0x1B31908))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(GuildInviteResponse*, int32_t))(Il2CppBase() + 0x1B31910))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(GuildInviteResponse*))(Il2CppBase() + 0x1B31918))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(GuildInviteResponse*, Il2CppString*))(Il2CppBase() + 0x1B31920))(this, value);
	}
	template <typename T = int64_t> T get_LockTime() {
		return ((T (*)(GuildInviteResponse*))(Il2CppBase() + 0x1B319A0))(this);
	}
	template <typename T = void> T set_LockTime(int64_t value) {
		return ((T (*)(GuildInviteResponse*, int64_t))(Il2CppBase() + 0x1B319A8))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(GuildInviteResponse*, uintptr_t))(Il2CppBase() + 0x1B319B0))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(GuildInviteResponse*, uintptr_t))(Il2CppBase() + 0x1B31A20))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildInviteResponse*))(Il2CppBase() + 0x1B31A90))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildInviteResponse*))(Il2CppBase() + 0x1B31B24))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildInviteResponse*, uintptr_t))(Il2CppBase() + 0x1B31B88))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildInviteResponse*))(Il2CppBase() + 0x1B31C40))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(GuildInviteResponse*, uintptr_t))(Il2CppBase() + 0x1B31D44))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildInviteResponse*, uintptr_t))(Il2CppBase() + 0x1B31D9C))(this, input);
	}

};

}
