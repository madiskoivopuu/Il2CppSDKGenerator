#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildsRating
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildsRating"));
	}

	 static MessageParser1<ProtoModels::GuildsRating*>*& _parser() {
		return *(MessageParser1<ProtoModels::GuildsRating*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& GlobalGuildsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::GlobalGuild*>*& _repeated_globalGuilds_codec() {
		return *(FieldCodec1<ProtoModels::GlobalGuild*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::GlobalGuild*>*& globalGuilds_() {
		return *(RepeatedField1<ProtoModels::GlobalGuild*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& LocalGuildsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::GuildMessageType*>*& _repeated_localGuilds_codec() {
		return *(FieldCodec1<ProtoModels::GuildMessageType*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1<ProtoModels::GuildMessageType*>*& localGuilds_() {
		return *(RepeatedField1<ProtoModels::GuildMessageType*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& GlobalPrevGuildsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::GlobalGuild*>*& _repeated_globalPrevGuilds_codec() {
		return *(FieldCodec1<ProtoModels::GlobalGuild*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 RepeatedField1<ProtoModels::GlobalGuild*>*& globalPrevGuilds_() {
		return *(RepeatedField1<ProtoModels::GlobalGuild*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& LocalPrevGuildsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::GlobalGuild*>*& _repeated_localPrevGuilds_codec() {
		return *(FieldCodec1<ProtoModels::GlobalGuild*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 RepeatedField1<ProtoModels::GlobalGuild*>*& localPrevGuilds_() {
		return *(RepeatedField1<ProtoModels::GlobalGuild*>**)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::GuildsRating*>* get_Parser() {
		return ((MessageParser1<ProtoModels::GuildsRating*>* (*)(void *))(Il2CppBase() + 0x14473B4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1447418))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildsRating*))(Il2CppBase() + 0x1447538))(this);
	}
	template <typename R = ProtoModels::GuildsRating*> R Clone() {
		return ((R (*)(GuildsRating*))(Il2CppBase() + 0x14477A0))(this);
	}
	 RepeatedField1<ProtoModels::GlobalGuild*>* get_GlobalGuilds() {
		return ((RepeatedField1<ProtoModels::GlobalGuild*>* (*)(GuildsRating*))(Il2CppBase() + 0x14477FC))(this);
	}
	 RepeatedField1<ProtoModels::GuildMessageType*>* get_LocalGuilds() {
		return ((RepeatedField1<ProtoModels::GuildMessageType*>* (*)(GuildsRating*))(Il2CppBase() + 0x1447804))(this);
	}
	 RepeatedField1<ProtoModels::GlobalGuild*>* get_GlobalPrevGuilds() {
		return ((RepeatedField1<ProtoModels::GlobalGuild*>* (*)(GuildsRating*))(Il2CppBase() + 0x144780C))(this);
	}
	 RepeatedField1<ProtoModels::GlobalGuild*>* get_LocalPrevGuilds() {
		return ((RepeatedField1<ProtoModels::GlobalGuild*>* (*)(GuildsRating*))(Il2CppBase() + 0x1447814))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildsRating*, Il2CppObject*))(Il2CppBase() + 0x144781C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildsRating* other) {
		return ((R (*)(GuildsRating*, ProtoModels::GuildsRating*))(Il2CppBase() + 0x144788C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildsRating*))(Il2CppBase() + 0x1447974))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildsRating*))(Il2CppBase() + 0x1447A14))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildsRating*, uintptr_t))(Il2CppBase() + 0x1447A78))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildsRating*))(Il2CppBase() + 0x1447B94))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildsRating* other) {
		return ((R (*)(GuildsRating*, ProtoModels::GuildsRating*))(Il2CppBase() + 0x1447CC4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildsRating*, uintptr_t))(Il2CppBase() + 0x1447D8C))(this, input);
	}

};

}
