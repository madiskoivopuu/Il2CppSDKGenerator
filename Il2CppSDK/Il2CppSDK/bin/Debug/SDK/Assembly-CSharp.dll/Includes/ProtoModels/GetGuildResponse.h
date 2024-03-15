#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GetGuildResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GetGuildResponse"));
	}

	 static MessageParser1<ProtoModels::GetGuildResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::GetGuildResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& GuildsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::GuildMessageType*>*& _repeated_guilds_codec() {
		return *(FieldCodec1<ProtoModels::GuildMessageType*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::GuildMessageType*>*& guilds_() {
		return *(RepeatedField1<ProtoModels::GuildMessageType*>**)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::GetGuildResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::GetGuildResponse*>* (*)(void *))(Il2CppBase() + 0x1770590))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x17705F4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GetGuildResponse*))(Il2CppBase() + 0x1770714))(this);
	}
	template <typename R = ProtoModels::GetGuildResponse*> R Clone() {
		return ((R (*)(GetGuildResponse*))(Il2CppBase() + 0x1770874))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(GetGuildResponse*))(Il2CppBase() + 0x17708D0))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(GetGuildResponse*, int32_t))(Il2CppBase() + 0x17708D8))(this, value);
	}
	 RepeatedField1<ProtoModels::GuildMessageType*>* get_Guilds() {
		return ((RepeatedField1<ProtoModels::GuildMessageType*>* (*)(GetGuildResponse*))(Il2CppBase() + 0x17708E0))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GetGuildResponse*, Il2CppObject*))(Il2CppBase() + 0x17708E8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GetGuildResponse* other) {
		return ((R (*)(GetGuildResponse*, ProtoModels::GetGuildResponse*))(Il2CppBase() + 0x1770958))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GetGuildResponse*))(Il2CppBase() + 0x17709F4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GetGuildResponse*))(Il2CppBase() + 0x1770A5C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GetGuildResponse*, uintptr_t))(Il2CppBase() + 0x1770AC0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GetGuildResponse*))(Il2CppBase() + 0x1770B8C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GetGuildResponse* other) {
		return ((R (*)(GetGuildResponse*, ProtoModels::GetGuildResponse*))(Il2CppBase() + 0x1770C70))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GetGuildResponse*, uintptr_t))(Il2CppBase() + 0x1770CF4))(this, input);
	}

};

}
