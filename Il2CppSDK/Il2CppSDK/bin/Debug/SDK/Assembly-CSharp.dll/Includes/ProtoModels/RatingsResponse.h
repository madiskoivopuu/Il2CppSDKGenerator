#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class RatingsResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "RatingsResponse"));
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
	template <typename T = int32_t> static T& GlobalTourneyFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& globalTourney_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x171B95C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x171B9C0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(RatingsResponse*))(Il2CppBase() + 0x171BAE0))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(RatingsResponse*))(Il2CppBase() + 0x171BC24))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(RatingsResponse*))(Il2CppBase() + 0x171BC80))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(RatingsResponse*, int32_t))(Il2CppBase() + 0x171BC88))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(RatingsResponse*))(Il2CppBase() + 0x171BC90))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(RatingsResponse*, Il2CppString*))(Il2CppBase() + 0x171BC98))(this, value);
	}
	template <typename T = uintptr_t> T get_Guild() {
		return ((T (*)(RatingsResponse*))(Il2CppBase() + 0x171BD18))(this);
	}
	template <typename T = void> T set_Guild(uintptr_t value) {
		return ((T (*)(RatingsResponse*, uintptr_t))(Il2CppBase() + 0x171BD20))(this, value);
	}
	template <typename T = uintptr_t> T get_GlobalTourney() {
		return ((T (*)(RatingsResponse*))(Il2CppBase() + 0x171BD28))(this);
	}
	template <typename T = void> T set_GlobalTourney(uintptr_t value) {
		return ((T (*)(RatingsResponse*, uintptr_t))(Il2CppBase() + 0x171BD30))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(RatingsResponse*, uintptr_t))(Il2CppBase() + 0x171BD38))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(RatingsResponse*, uintptr_t))(Il2CppBase() + 0x171BDA8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(RatingsResponse*))(Il2CppBase() + 0x171BE30))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(RatingsResponse*))(Il2CppBase() + 0x171BED4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(RatingsResponse*, uintptr_t))(Il2CppBase() + 0x171BF38))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(RatingsResponse*))(Il2CppBase() + 0x171C01C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(RatingsResponse*, uintptr_t))(Il2CppBase() + 0x171C15C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(RatingsResponse*, uintptr_t))(Il2CppBase() + 0x171C28C))(this, input);
	}

};

}
