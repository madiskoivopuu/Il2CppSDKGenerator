#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GlobalGuildsCoord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GlobalGuildsCoord"));
	}

	 static MessageParser1ProtoModels::GlobalGuildsCoord*>*& _parser() {
		return *(MessageParser1ProtoModels::GlobalGuildsCoord*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& GuildsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::GlobalGuild*>*& _repeated_guilds_codec() {
		return *(FieldCodec1ProtoModels::GlobalGuild*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::GlobalGuild*>*& guilds_() {
		return *(RepeatedField1ProtoModels::GlobalGuild*>**)((uintptr_t)this + 0x10);
	}

	 static MessageParser1ProtoModels::GlobalGuildsCoord*>* get_Parser() {
		return ((MessageParser1ProtoModels::GlobalGuildsCoord*>* (*)(void *))(Il2CppBase() + 0x12D5598))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x12D55FC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GlobalGuildsCoord*))(Il2CppBase() + 0x12D571C))(this);
	}
	template <typename R = ProtoModels::GlobalGuildsCoord*> R Clone() {
		return ((R (*)(GlobalGuildsCoord*))(Il2CppBase() + 0x12D5874))(this);
	}
	 RepeatedField1ProtoModels::GlobalGuild*>* get_Guilds() {
		return ((RepeatedField1ProtoModels::GlobalGuild*>* (*)(GlobalGuildsCoord*))(Il2CppBase() + 0x12D58D0))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GlobalGuildsCoord*, Il2CppObject*))(Il2CppBase() + 0x12D58D8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GlobalGuildsCoord* other) {
		return ((R (*)(GlobalGuildsCoord*, ProtoModels::GlobalGuildsCoord*))(Il2CppBase() + 0x12D5948))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GlobalGuildsCoord*))(Il2CppBase() + 0x12D59D4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GlobalGuildsCoord*))(Il2CppBase() + 0x12D5A00))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GlobalGuildsCoord*, uintptr_t))(Il2CppBase() + 0x12D5A64))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GlobalGuildsCoord*))(Il2CppBase() + 0x12D5B04))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GlobalGuildsCoord* other) {
		return ((R (*)(GlobalGuildsCoord*, ProtoModels::GlobalGuildsCoord*))(Il2CppBase() + 0x12D5B94))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GlobalGuildsCoord*, uintptr_t))(Il2CppBase() + 0x12D5C0C))(this, input);
	}

};

}
