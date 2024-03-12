#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildInviteCreateResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildInviteCreateResponse"));
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
	template <typename T = int32_t> static T& GuildFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& guild_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& LockTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& lockTime_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B2D4A8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B2D50C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildInviteCreateResponse*))(Il2CppBase() + 0x1B2D62C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(GuildInviteCreateResponse*))(Il2CppBase() + 0x1B2D7AC))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(GuildInviteCreateResponse*))(Il2CppBase() + 0x1B2D808))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(GuildInviteCreateResponse*, int32_t))(Il2CppBase() + 0x1B2D810))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(GuildInviteCreateResponse*))(Il2CppBase() + 0x1B2D818))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(GuildInviteCreateResponse*, Il2CppString*))(Il2CppBase() + 0x1B2D820))(this, value);
	}
	template <typename T = uintptr_t> T get_Guild() {
		return ((T (*)(GuildInviteCreateResponse*))(Il2CppBase() + 0x1B2D8A0))(this);
	}
	template <typename T = void> T set_Guild(uintptr_t value) {
		return ((T (*)(GuildInviteCreateResponse*, uintptr_t))(Il2CppBase() + 0x1B2D8A8))(this, value);
	}
	template <typename T = int64_t> T get_LockTime() {
		return ((T (*)(GuildInviteCreateResponse*))(Il2CppBase() + 0x1B2D8B0))(this);
	}
	template <typename T = void> T set_LockTime(int64_t value) {
		return ((T (*)(GuildInviteCreateResponse*, int64_t))(Il2CppBase() + 0x1B2D8B8))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(GuildInviteCreateResponse*, uintptr_t))(Il2CppBase() + 0x1B2D8C0))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(GuildInviteCreateResponse*, uintptr_t))(Il2CppBase() + 0x1B2D930))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildInviteCreateResponse*))(Il2CppBase() + 0x1B2D9B4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildInviteCreateResponse*))(Il2CppBase() + 0x1B2DA60))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildInviteCreateResponse*, uintptr_t))(Il2CppBase() + 0x1B2DAC4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildInviteCreateResponse*))(Il2CppBase() + 0x1B2DBA8))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(GuildInviteCreateResponse*, uintptr_t))(Il2CppBase() + 0x1B2DCE8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildInviteCreateResponse*, uintptr_t))(Il2CppBase() + 0x1B2E128))(this, input);
	}

};

}
