#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildsRating
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildsRating"));
	}

	template <typename T = MessageParser1GuildsRating*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& GlobalGuildsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1GlobalGuild*>*> static T& _repeated_globalGuilds_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1GlobalGuild*>*> T& globalGuilds_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& LocalGuildsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1GuildMessageType*>*> static T& _repeated_localGuilds_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = RepeatedField1GuildMessageType*>*> T& localGuilds_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& GlobalPrevGuildsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1GlobalGuild*>*> static T& _repeated_globalPrevGuilds_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = RepeatedField1GlobalGuild*>*> T& globalPrevGuilds_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& LocalPrevGuildsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1GlobalGuild*>*> static T& _repeated_localPrevGuilds_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = RepeatedField1GlobalGuild*>*> T& localPrevGuilds_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1GuildsRating*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x14473B4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1447418))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildsRating*))(Il2CppBase() + 0x1447538))(this);
	}
	template <typename T = GuildsRating*> T Clone() {
		return ((T (*)(GuildsRating*))(Il2CppBase() + 0x14477A0))(this);
	}
	template <typename T = RepeatedField1GlobalGuild*>*> T get_GlobalGuilds() {
		return ((T (*)(GuildsRating*))(Il2CppBase() + 0x14477FC))(this);
	}
	template <typename T = RepeatedField1GuildMessageType*>*> T get_LocalGuilds() {
		return ((T (*)(GuildsRating*))(Il2CppBase() + 0x1447804))(this);
	}
	template <typename T = RepeatedField1GlobalGuild*>*> T get_GlobalPrevGuilds() {
		return ((T (*)(GuildsRating*))(Il2CppBase() + 0x144780C))(this);
	}
	template <typename T = RepeatedField1GlobalGuild*>*> T get_LocalPrevGuilds() {
		return ((T (*)(GuildsRating*))(Il2CppBase() + 0x1447814))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(GuildsRating*, Il2CppObject*))(Il2CppBase() + 0x144781C))(this, other);
	}
	template <typename T = bool> T Equals_1(GuildsRating* other) {
		return ((T (*)(GuildsRating*, GuildsRating*))(Il2CppBase() + 0x144788C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildsRating*))(Il2CppBase() + 0x1447974))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildsRating*))(Il2CppBase() + 0x1447A14))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildsRating*, uintptr_t))(Il2CppBase() + 0x1447A78))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildsRating*))(Il2CppBase() + 0x1447B94))(this);
	}
	template <typename T = void> T MergeFrom(GuildsRating* other) {
		return ((T (*)(GuildsRating*, GuildsRating*))(Il2CppBase() + 0x1447CC4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildsRating*, uintptr_t))(Il2CppBase() + 0x1447D8C))(this, input);
	}

};

}
