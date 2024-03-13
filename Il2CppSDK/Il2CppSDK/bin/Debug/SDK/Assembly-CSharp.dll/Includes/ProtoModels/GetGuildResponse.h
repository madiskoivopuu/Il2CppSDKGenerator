#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GetGuildResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GetGuildResponse"));
	}

	template <typename T = MessageParser1GetGuildResponse*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& GuildsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1GuildMessageType*>*> static T& _repeated_guilds_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1GuildMessageType*>*> T& guilds_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1GetGuildResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1770590))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x17705F4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GetGuildResponse*))(Il2CppBase() + 0x1770714))(this);
	}
	template <typename T = GetGuildResponse*> T Clone() {
		return ((T (*)(GetGuildResponse*))(Il2CppBase() + 0x1770874))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(GetGuildResponse*))(Il2CppBase() + 0x17708D0))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(GetGuildResponse*, int32_t))(Il2CppBase() + 0x17708D8))(this, value);
	}
	template <typename T = RepeatedField1GuildMessageType*>*> T get_Guilds() {
		return ((T (*)(GetGuildResponse*))(Il2CppBase() + 0x17708E0))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(GetGuildResponse*, Il2CppObject*))(Il2CppBase() + 0x17708E8))(this, other);
	}
	template <typename T = bool> T Equals_1(GetGuildResponse* other) {
		return ((T (*)(GetGuildResponse*, GetGuildResponse*))(Il2CppBase() + 0x1770958))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GetGuildResponse*))(Il2CppBase() + 0x17709F4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GetGuildResponse*))(Il2CppBase() + 0x1770A5C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GetGuildResponse*, uintptr_t))(Il2CppBase() + 0x1770AC0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GetGuildResponse*))(Il2CppBase() + 0x1770B8C))(this);
	}
	template <typename T = void> T MergeFrom(GetGuildResponse* other) {
		return ((T (*)(GetGuildResponse*, GetGuildResponse*))(Il2CppBase() + 0x1770C70))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GetGuildResponse*, uintptr_t))(Il2CppBase() + 0x1770CF4))(this, input);
	}

};

}
