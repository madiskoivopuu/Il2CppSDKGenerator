#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildData"));
	}

	template <typename T = MessageParser1GuildData*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UsersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1GuildUser*>*> static T& _repeated_users_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1GuildUser*>*> T& users_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& QuestsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = CodecIl2CppString*, GuildQuest*>*> static T& _map_quests_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = MapField2Il2CppString*, GuildQuest*>*> T& quests_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& LastStartedQuestFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& lastStartedQuest_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& QuestIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& questID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& KilledBossesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1Il2CppString*>*> static T& _repeated_killedBosses_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = RepeatedField1Il2CppString*>*> T& killedBosses_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = MessageParser1GuildData*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x12ECF8C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x12ECFF0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildData*))(Il2CppBase() + 0x12ED110))(this);
	}
	template <typename T = GuildData*> T Clone() {
		return ((T (*)(GuildData*))(Il2CppBase() + 0x12ED37C))(this);
	}
	template <typename T = RepeatedField1GuildUser*>*> T get_Users() {
		return ((T (*)(GuildData*))(Il2CppBase() + 0x12ED3D8))(this);
	}
	template <typename T = MapField2Il2CppString*, GuildQuest*>*> T get_Quests() {
		return ((T (*)(GuildData*))(Il2CppBase() + 0x12ED3E0))(this);
	}
	template <typename T = int64_t> T get_LastStartedQuest() {
		return ((T (*)(GuildData*))(Il2CppBase() + 0x12ED3E8))(this);
	}
	template <typename T = void> T set_LastStartedQuest(int64_t value) {
		return ((T (*)(GuildData*, int64_t))(Il2CppBase() + 0x12ED3F0))(this, value);
	}
	template <typename T = int32_t> T get_QuestID() {
		return ((T (*)(GuildData*))(Il2CppBase() + 0x12ED3F8))(this);
	}
	template <typename T = void> T set_QuestID(int32_t value) {
		return ((T (*)(GuildData*, int32_t))(Il2CppBase() + 0x12ED400))(this, value);
	}
	template <typename T = RepeatedField1Il2CppString*>*> T get_KilledBosses() {
		return ((T (*)(GuildData*))(Il2CppBase() + 0x12ED408))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(GuildData*, Il2CppObject*))(Il2CppBase() + 0x12ED410))(this, other);
	}
	template <typename T = bool> T Equals_1(GuildData* other) {
		return ((T (*)(GuildData*, GuildData*))(Il2CppBase() + 0x12ED480))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildData*))(Il2CppBase() + 0x12ED584))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildData*))(Il2CppBase() + 0x12ED63C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildData*, uintptr_t))(Il2CppBase() + 0x12ED6A0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildData*))(Il2CppBase() + 0x12ED81C))(this);
	}
	template <typename T = void> T MergeFrom(GuildData* other) {
		return ((T (*)(GuildData*, GuildData*))(Il2CppBase() + 0x12ED9C8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildData*, uintptr_t))(Il2CppBase() + 0x12EDAA8))(this, input);
	}

};

}
