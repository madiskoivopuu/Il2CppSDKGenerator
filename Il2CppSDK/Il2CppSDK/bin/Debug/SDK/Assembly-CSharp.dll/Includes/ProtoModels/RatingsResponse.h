#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class RatingsResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "RatingsResponse"));
	}

	 static MessageParser1ProtoModels::RatingsResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::RatingsResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& GuildFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::GuildsRating*> R& guild_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& GlobalTourneyFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::GlobalTourney*> R& globalTourney_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::RatingsResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::RatingsResponse*>* (*)(void *))(Il2CppBase() + 0x171B95C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x171B9C0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(RatingsResponse*))(Il2CppBase() + 0x171BAE0))(this);
	}
	template <typename R = ProtoModels::RatingsResponse*> R Clone() {
		return ((R (*)(RatingsResponse*))(Il2CppBase() + 0x171BC24))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(RatingsResponse*))(Il2CppBase() + 0x171BC80))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(RatingsResponse*, int32_t))(Il2CppBase() + 0x171BC88))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(RatingsResponse*))(Il2CppBase() + 0x171BC90))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(RatingsResponse*, Il2CppString*))(Il2CppBase() + 0x171BC98))(this, value);
	}
	template <typename R = ProtoModels::GuildsRating*> R get_Guild() {
		return ((R (*)(RatingsResponse*))(Il2CppBase() + 0x171BD18))(this);
	}
	template <typename R = void> R set_Guild(ProtoModels::GuildsRating* value) {
		return ((R (*)(RatingsResponse*, ProtoModels::GuildsRating*))(Il2CppBase() + 0x171BD20))(this, value);
	}
	template <typename R = ProtoModels::GlobalTourney*> R get_GlobalTourney() {
		return ((R (*)(RatingsResponse*))(Il2CppBase() + 0x171BD28))(this);
	}
	template <typename R = void> R set_GlobalTourney(ProtoModels::GlobalTourney* value) {
		return ((R (*)(RatingsResponse*, ProtoModels::GlobalTourney*))(Il2CppBase() + 0x171BD30))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(RatingsResponse*, Il2CppObject*))(Il2CppBase() + 0x171BD38))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::RatingsResponse* other) {
		return ((R (*)(RatingsResponse*, ProtoModels::RatingsResponse*))(Il2CppBase() + 0x171BDA8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(RatingsResponse*))(Il2CppBase() + 0x171BE30))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(RatingsResponse*))(Il2CppBase() + 0x171BED4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(RatingsResponse*, uintptr_t))(Il2CppBase() + 0x171BF38))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(RatingsResponse*))(Il2CppBase() + 0x171C01C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::RatingsResponse* other) {
		return ((R (*)(RatingsResponse*, ProtoModels::RatingsResponse*))(Il2CppBase() + 0x171C15C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(RatingsResponse*, uintptr_t))(Il2CppBase() + 0x171C28C))(this, input);
	}

};

}
