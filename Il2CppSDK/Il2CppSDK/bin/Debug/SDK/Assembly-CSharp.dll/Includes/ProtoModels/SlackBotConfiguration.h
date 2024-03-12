#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class SlackBotConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "SlackBotConfiguration"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UrlFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& url_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ChannelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& channel_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x14837A8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x148380C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(SlackBotConfiguration*))(Il2CppBase() + 0x148392C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(SlackBotConfiguration*))(Il2CppBase() + 0x1483A38))(this);
	}
	template <typename T = Il2CppString*> T get_Url() {
		return ((T (*)(SlackBotConfiguration*))(Il2CppBase() + 0x1483A94))(this);
	}
	template <typename T = void> T set_Url(Il2CppString* value) {
		return ((T (*)(SlackBotConfiguration*, Il2CppString*))(Il2CppBase() + 0x1483A9C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Channel() {
		return ((T (*)(SlackBotConfiguration*))(Il2CppBase() + 0x1483B1C))(this);
	}
	template <typename T = void> T set_Channel(Il2CppString* value) {
		return ((T (*)(SlackBotConfiguration*, Il2CppString*))(Il2CppBase() + 0x1483B24))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(SlackBotConfiguration*, uintptr_t))(Il2CppBase() + 0x1483BA4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(SlackBotConfiguration*, uintptr_t))(Il2CppBase() + 0x1483C14))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(SlackBotConfiguration*))(Il2CppBase() + 0x1483C7C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(SlackBotConfiguration*))(Il2CppBase() + 0x1483CE8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(SlackBotConfiguration*, uintptr_t))(Il2CppBase() + 0x1483D4C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(SlackBotConfiguration*))(Il2CppBase() + 0x1483DE0))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(SlackBotConfiguration*, uintptr_t))(Il2CppBase() + 0x1483EB0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(SlackBotConfiguration*, uintptr_t))(Il2CppBase() + 0x1483F10))(this, input);
	}

};

}
