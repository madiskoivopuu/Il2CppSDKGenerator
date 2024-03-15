#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class SlackBotConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "SlackBotConfiguration"));
	}

	 static MessageParser1ProtoModels::SlackBotConfiguration*>*& _parser() {
		return *(MessageParser1ProtoModels::SlackBotConfiguration*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UrlFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& url_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ChannelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& channel_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::SlackBotConfiguration*>* get_Parser() {
		return ((MessageParser1ProtoModels::SlackBotConfiguration*>* (*)(void *))(Il2CppBase() + 0x14837A8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x148380C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(SlackBotConfiguration*))(Il2CppBase() + 0x148392C))(this);
	}
	template <typename R = ProtoModels::SlackBotConfiguration*> R Clone() {
		return ((R (*)(SlackBotConfiguration*))(Il2CppBase() + 0x1483A38))(this);
	}
	template <typename R = Il2CppString*> R get_Url() {
		return ((R (*)(SlackBotConfiguration*))(Il2CppBase() + 0x1483A94))(this);
	}
	template <typename R = void> R set_Url(Il2CppString* value) {
		return ((R (*)(SlackBotConfiguration*, Il2CppString*))(Il2CppBase() + 0x1483A9C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Channel() {
		return ((R (*)(SlackBotConfiguration*))(Il2CppBase() + 0x1483B1C))(this);
	}
	template <typename R = void> R set_Channel(Il2CppString* value) {
		return ((R (*)(SlackBotConfiguration*, Il2CppString*))(Il2CppBase() + 0x1483B24))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(SlackBotConfiguration*, Il2CppObject*))(Il2CppBase() + 0x1483BA4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::SlackBotConfiguration* other) {
		return ((R (*)(SlackBotConfiguration*, ProtoModels::SlackBotConfiguration*))(Il2CppBase() + 0x1483C14))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(SlackBotConfiguration*))(Il2CppBase() + 0x1483C7C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(SlackBotConfiguration*))(Il2CppBase() + 0x1483CE8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(SlackBotConfiguration*, uintptr_t))(Il2CppBase() + 0x1483D4C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(SlackBotConfiguration*))(Il2CppBase() + 0x1483DE0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::SlackBotConfiguration* other) {
		return ((R (*)(SlackBotConfiguration*, ProtoModels::SlackBotConfiguration*))(Il2CppBase() + 0x1483EB0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(SlackBotConfiguration*, uintptr_t))(Il2CppBase() + 0x1483F10))(this, input);
	}

};

}
