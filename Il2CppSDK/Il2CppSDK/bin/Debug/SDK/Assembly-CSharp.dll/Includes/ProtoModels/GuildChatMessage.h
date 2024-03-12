#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildChatMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildChatMessage"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& GuildIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& guildID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& TimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& time_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& TypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& type_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& DataFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _map_data_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& data_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x12E8A50))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x12E8AB4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildChatMessage*))(Il2CppBase() + 0x12E8BD4))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(GuildChatMessage*))(Il2CppBase() + 0x12E8D44))(this);
	}
	template <typename T = int64_t> T get_GuildID() {
		return ((T (*)(GuildChatMessage*))(Il2CppBase() + 0x12E8DA0))(this);
	}
	template <typename T = void> T set_GuildID(int64_t value) {
		return ((T (*)(GuildChatMessage*, int64_t))(Il2CppBase() + 0x12E8DA8))(this, value);
	}
	template <typename T = int64_t> T get_Time() {
		return ((T (*)(GuildChatMessage*))(Il2CppBase() + 0x12E8DB0))(this);
	}
	template <typename T = void> T set_Time(int64_t value) {
		return ((T (*)(GuildChatMessage*, int64_t))(Il2CppBase() + 0x12E8DB8))(this, value);
	}
	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(GuildChatMessage*))(Il2CppBase() + 0x12E8DC0))(this);
	}
	template <typename T = void> T set_Type(uintptr_t value) {
		return ((T (*)(GuildChatMessage*, uintptr_t))(Il2CppBase() + 0x12E8DC8))(this, value);
	}
	template <typename T = void*> T get_Data() {
		return ((T (*)(GuildChatMessage*))(Il2CppBase() + 0x12E8DD0))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(GuildChatMessage*, uintptr_t))(Il2CppBase() + 0x12E8DD8))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(GuildChatMessage*, uintptr_t))(Il2CppBase() + 0x12E8E48))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildChatMessage*))(Il2CppBase() + 0x12E8F04))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildChatMessage*))(Il2CppBase() + 0x12E8FA8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildChatMessage*, uintptr_t))(Il2CppBase() + 0x12E900C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildChatMessage*))(Il2CppBase() + 0x12E9130))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(GuildChatMessage*, uintptr_t))(Il2CppBase() + 0x12E9294))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildChatMessage*, uintptr_t))(Il2CppBase() + 0x12E9330))(this, input);
	}

};

}
