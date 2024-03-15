#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildData"));
	}

	 static MessageParser1ProtoModels::GuildData*>*& _parser() {
		return *(MessageParser1ProtoModels::GuildData*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UsersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::GuildUser*>*& _repeated_users_codec() {
		return *(FieldCodec1ProtoModels::GuildUser*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::GuildUser*>*& users_() {
		return *(RepeatedField1ProtoModels::GuildUser*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& QuestsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static CodecIl2CppString*, ProtoModels::GuildQuest*>*& _map_quests_codec() {
		return *(CodecIl2CppString*, ProtoModels::GuildQuest*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 MapField2Il2CppString*, ProtoModels::GuildQuest*>*& quests_() {
		return *(MapField2Il2CppString*, ProtoModels::GuildQuest*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& LastStartedQuestFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& lastStartedQuest_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& QuestIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& questID_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& KilledBossesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1Il2CppString*>*& _repeated_killedBosses_codec() {
		return *(FieldCodec1Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 RepeatedField1Il2CppString*>*& killedBosses_() {
		return *(RepeatedField1Il2CppString*>**)((uintptr_t)this + 0x30);
	}

	 static MessageParser1ProtoModels::GuildData*>* get_Parser() {
		return ((MessageParser1ProtoModels::GuildData*>* (*)(void *))(Il2CppBase() + 0x12ECF8C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x12ECFF0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildData*))(Il2CppBase() + 0x12ED110))(this);
	}
	template <typename R = ProtoModels::GuildData*> R Clone() {
		return ((R (*)(GuildData*))(Il2CppBase() + 0x12ED37C))(this);
	}
	 RepeatedField1ProtoModels::GuildUser*>* get_Users() {
		return ((RepeatedField1ProtoModels::GuildUser*>* (*)(GuildData*))(Il2CppBase() + 0x12ED3D8))(this);
	}
	 MapField2Il2CppString*, ProtoModels::GuildQuest*>* get_Quests() {
		return ((MapField2Il2CppString*, ProtoModels::GuildQuest*>* (*)(GuildData*))(Il2CppBase() + 0x12ED3E0))(this);
	}
	template <typename R = int64_t> R get_LastStartedQuest() {
		return ((R (*)(GuildData*))(Il2CppBase() + 0x12ED3E8))(this);
	}
	template <typename R = void> R set_LastStartedQuest(int64_t value) {
		return ((R (*)(GuildData*, int64_t))(Il2CppBase() + 0x12ED3F0))(this, value);
	}
	template <typename R = int32_t> R get_QuestID() {
		return ((R (*)(GuildData*))(Il2CppBase() + 0x12ED3F8))(this);
	}
	template <typename R = void> R set_QuestID(int32_t value) {
		return ((R (*)(GuildData*, int32_t))(Il2CppBase() + 0x12ED400))(this, value);
	}
	 RepeatedField1Il2CppString*>* get_KilledBosses() {
		return ((RepeatedField1Il2CppString*>* (*)(GuildData*))(Il2CppBase() + 0x12ED408))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildData*, Il2CppObject*))(Il2CppBase() + 0x12ED410))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildData* other) {
		return ((R (*)(GuildData*, ProtoModels::GuildData*))(Il2CppBase() + 0x12ED480))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildData*))(Il2CppBase() + 0x12ED584))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildData*))(Il2CppBase() + 0x12ED63C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildData*, uintptr_t))(Il2CppBase() + 0x12ED6A0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildData*))(Il2CppBase() + 0x12ED81C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildData* other) {
		return ((R (*)(GuildData*, ProtoModels::GuildData*))(Il2CppBase() + 0x12ED9C8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildData*, uintptr_t))(Il2CppBase() + 0x12EDAA8))(this, input);
	}

};

}
