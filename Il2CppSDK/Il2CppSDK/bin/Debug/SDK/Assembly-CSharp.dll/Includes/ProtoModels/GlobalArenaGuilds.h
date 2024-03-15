#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GlobalArenaGuilds
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GlobalArenaGuilds"));
	}

	 static MessageParser1ProtoModels::GlobalArenaGuilds*>*& _parser() {
		return *(MessageParser1ProtoModels::GlobalArenaGuilds*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& UpdateFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& update_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& GlobalPrevGuildsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::GlobalGuild*>*& _repeated_globalPrevGuilds_codec() {
		return *(FieldCodec1ProtoModels::GlobalGuild*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1ProtoModels::GlobalGuild*>*& globalPrevGuilds_() {
		return *(RepeatedField1ProtoModels::GlobalGuild*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& LocalPrevGuildsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::GlobalGuild*>*& _repeated_localPrevGuilds_codec() {
		return *(FieldCodec1ProtoModels::GlobalGuild*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 RepeatedField1ProtoModels::GlobalGuild*>*& localPrevGuilds_() {
		return *(RepeatedField1ProtoModels::GlobalGuild*>**)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::GlobalArenaGuilds*>* get_Parser() {
		return ((MessageParser1ProtoModels::GlobalArenaGuilds*>* (*)(void *))(Il2CppBase() + 0x17726F8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x177275C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GlobalArenaGuilds*))(Il2CppBase() + 0x177287C))(this);
	}
	template <typename R = ProtoModels::GlobalArenaGuilds*> R Clone() {
		return ((R (*)(GlobalArenaGuilds*))(Il2CppBase() + 0x1772A70))(this);
	}
	 RepeatedField1ProtoModels::GlobalGuild*>* get_Guilds() {
		return ((RepeatedField1ProtoModels::GlobalGuild*>* (*)(GlobalArenaGuilds*))(Il2CppBase() + 0x1772ACC))(this);
	}
	template <typename R = bool> R get_Update() {
		return ((R (*)(GlobalArenaGuilds*))(Il2CppBase() + 0x1772AD4))(this);
	}
	template <typename R = void> R set_Update(bool value) {
		return ((R (*)(GlobalArenaGuilds*, bool))(Il2CppBase() + 0x1772ADC))(this, value);
	}
	 RepeatedField1ProtoModels::GlobalGuild*>* get_GlobalPrevGuilds() {
		return ((RepeatedField1ProtoModels::GlobalGuild*>* (*)(GlobalArenaGuilds*))(Il2CppBase() + 0x1772AE8))(this);
	}
	 RepeatedField1ProtoModels::GlobalGuild*>* get_LocalPrevGuilds() {
		return ((RepeatedField1ProtoModels::GlobalGuild*>* (*)(GlobalArenaGuilds*))(Il2CppBase() + 0x1772AF0))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GlobalArenaGuilds*, Il2CppObject*))(Il2CppBase() + 0x1772AF8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GlobalArenaGuilds* other) {
		return ((R (*)(GlobalArenaGuilds*, ProtoModels::GlobalArenaGuilds*))(Il2CppBase() + 0x1772B68))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GlobalArenaGuilds*))(Il2CppBase() + 0x1772C44))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GlobalArenaGuilds*))(Il2CppBase() + 0x1772CDC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GlobalArenaGuilds*, uintptr_t))(Il2CppBase() + 0x1772D40))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GlobalArenaGuilds*))(Il2CppBase() + 0x1772E70))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GlobalArenaGuilds* other) {
		return ((R (*)(GlobalArenaGuilds*, ProtoModels::GlobalArenaGuilds*))(Il2CppBase() + 0x1772F88))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GlobalArenaGuilds*, uintptr_t))(Il2CppBase() + 0x1773034))(this, input);
	}

};

}
