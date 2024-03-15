#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaPreAddAccountRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaPreAddAccountRequest"));
	}

	 static MessageParser1ProtoModels::ArenaPreAddAccountRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaPreAddAccountRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& IsGlobalMapFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isGlobalMap_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& PvpFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::PvpGroup*> R& pvp_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& TourneyFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::Tourney*> R& tourney_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& GuildFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::GuildMessageType*>*& _repeated_guild_codec() {
		return *(FieldCodec1ProtoModels::GuildMessageType*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::GuildMessageType*>*& guild_() {
		return *(RepeatedField1ProtoModels::GuildMessageType*>**)((uintptr_t)this + 0x38);
	}

	 static MessageParser1ProtoModels::ArenaPreAddAccountRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaPreAddAccountRequest*>* (*)(void *))(Il2CppBase() + 0x1E301B4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E30218))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaPreAddAccountRequest*))(Il2CppBase() + 0x1E30338))(this);
	}
	template <typename R = ProtoModels::ArenaPreAddAccountRequest*> R Clone() {
		return ((R (*)(ArenaPreAddAccountRequest*))(Il2CppBase() + 0x1E304F8))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaPreAddAccountRequest*))(Il2CppBase() + 0x1E30554))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaPreAddAccountRequest*, int64_t))(Il2CppBase() + 0x1E3055C))(this, value);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(ArenaPreAddAccountRequest*))(Il2CppBase() + 0x1E30564))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(ArenaPreAddAccountRequest*, int64_t))(Il2CppBase() + 0x1E3056C))(this, value);
	}
	template <typename R = bool> R get_IsGlobalMap() {
		return ((R (*)(ArenaPreAddAccountRequest*))(Il2CppBase() + 0x1E30574))(this);
	}
	template <typename R = void> R set_IsGlobalMap(bool value) {
		return ((R (*)(ArenaPreAddAccountRequest*, bool))(Il2CppBase() + 0x1E3057C))(this, value);
	}
	template <typename R = ProtoModels::PvpGroup*> R get_Pvp() {
		return ((R (*)(ArenaPreAddAccountRequest*))(Il2CppBase() + 0x1E30588))(this);
	}
	template <typename R = void> R set_Pvp(ProtoModels::PvpGroup* value) {
		return ((R (*)(ArenaPreAddAccountRequest*, ProtoModels::PvpGroup*))(Il2CppBase() + 0x1E30590))(this, value);
	}
	template <typename R = ProtoModels::Tourney*> R get_Tourney() {
		return ((R (*)(ArenaPreAddAccountRequest*))(Il2CppBase() + 0x1E30598))(this);
	}
	template <typename R = void> R set_Tourney(ProtoModels::Tourney* value) {
		return ((R (*)(ArenaPreAddAccountRequest*, ProtoModels::Tourney*))(Il2CppBase() + 0x1E305A0))(this, value);
	}
	 RepeatedField1ProtoModels::GuildMessageType*>* get_Guild() {
		return ((RepeatedField1ProtoModels::GuildMessageType*>* (*)(ArenaPreAddAccountRequest*))(Il2CppBase() + 0x1E305A8))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaPreAddAccountRequest*, Il2CppObject*))(Il2CppBase() + 0x1E305B0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaPreAddAccountRequest* other) {
		return ((R (*)(ArenaPreAddAccountRequest*, ProtoModels::ArenaPreAddAccountRequest*))(Il2CppBase() + 0x1E30620))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaPreAddAccountRequest*))(Il2CppBase() + 0x1E30714))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaPreAddAccountRequest*))(Il2CppBase() + 0x1E307EC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaPreAddAccountRequest*, uintptr_t))(Il2CppBase() + 0x1E30850))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaPreAddAccountRequest*))(Il2CppBase() + 0x1E309CC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaPreAddAccountRequest* other) {
		return ((R (*)(ArenaPreAddAccountRequest*, ProtoModels::ArenaPreAddAccountRequest*))(Il2CppBase() + 0x1E30B7C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaPreAddAccountRequest*, uintptr_t))(Il2CppBase() + 0x1E30CD8))(this, input);
	}

};

}
