#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaAcceptUserResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaAcceptUserResponse"));
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
	template <typename T = int32_t> static T& CoinsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& coins_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& Dev2DevIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& dev2DevID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x189B59C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x189B600))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaAcceptUserResponse*))(Il2CppBase() + 0x189B720))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaAcceptUserResponse*))(Il2CppBase() + 0x189B85C))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(ArenaAcceptUserResponse*))(Il2CppBase() + 0x189B8B8))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(ArenaAcceptUserResponse*, int32_t))(Il2CppBase() + 0x189B8C0))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(ArenaAcceptUserResponse*))(Il2CppBase() + 0x189B8C8))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(ArenaAcceptUserResponse*, Il2CppString*))(Il2CppBase() + 0x189B8D0))(this, value);
	}
	template <typename T = uintptr_t> T get_Coins() {
		return ((T (*)(ArenaAcceptUserResponse*))(Il2CppBase() + 0x189B950))(this);
	}
	template <typename T = void> T set_Coins(uintptr_t value) {
		return ((T (*)(ArenaAcceptUserResponse*, uintptr_t))(Il2CppBase() + 0x189B958))(this, value);
	}
	template <typename T = Il2CppString*> T get_Dev2DevID() {
		return ((T (*)(ArenaAcceptUserResponse*))(Il2CppBase() + 0x189B960))(this);
	}
	template <typename T = void> T set_Dev2DevID(Il2CppString* value) {
		return ((T (*)(ArenaAcceptUserResponse*, Il2CppString*))(Il2CppBase() + 0x189B968))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaAcceptUserResponse*, uintptr_t))(Il2CppBase() + 0x189B9E8))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaAcceptUserResponse*, uintptr_t))(Il2CppBase() + 0x189BA58))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaAcceptUserResponse*))(Il2CppBase() + 0x189BAE4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaAcceptUserResponse*))(Il2CppBase() + 0x189BB90))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaAcceptUserResponse*, uintptr_t))(Il2CppBase() + 0x189BBF4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaAcceptUserResponse*))(Il2CppBase() + 0x189BCE0))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaAcceptUserResponse*, uintptr_t))(Il2CppBase() + 0x189BE28))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaAcceptUserResponse*, uintptr_t))(Il2CppBase() + 0x189BF14))(this, input);
	}

};

}
