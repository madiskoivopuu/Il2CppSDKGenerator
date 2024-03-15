#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildResetBossLocationRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildResetBossLocationRequest"));
	}

	 static MessageParser1<ProtoModels::GuildResetBossLocationRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::GuildResetBossLocationRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& GuildIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& guildID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& PveTagFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& pveTag_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::GuildResetBossLocationRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::GuildResetBossLocationRequest*>* (*)(void *))(Il2CppBase() + 0x19401E0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1940244))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildResetBossLocationRequest*))(Il2CppBase() + 0x1940364))(this);
	}
	template <typename R = ProtoModels::GuildResetBossLocationRequest*> R Clone() {
		return ((R (*)(GuildResetBossLocationRequest*))(Il2CppBase() + 0x1940468))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(GuildResetBossLocationRequest*))(Il2CppBase() + 0x19404C4))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(GuildResetBossLocationRequest*, int64_t))(Il2CppBase() + 0x19404CC))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(GuildResetBossLocationRequest*))(Il2CppBase() + 0x19404D4))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(GuildResetBossLocationRequest*, int64_t))(Il2CppBase() + 0x19404DC))(this, value);
	}
	template <typename R = int64_t> R get_GuildID() {
		return ((R (*)(GuildResetBossLocationRequest*))(Il2CppBase() + 0x19404E4))(this);
	}
	template <typename R = void> R set_GuildID(int64_t value) {
		return ((R (*)(GuildResetBossLocationRequest*, int64_t))(Il2CppBase() + 0x19404EC))(this, value);
	}
	template <typename R = Il2CppString*> R get_PveTag() {
		return ((R (*)(GuildResetBossLocationRequest*))(Il2CppBase() + 0x19404F4))(this);
	}
	template <typename R = void> R set_PveTag(Il2CppString* value) {
		return ((R (*)(GuildResetBossLocationRequest*, Il2CppString*))(Il2CppBase() + 0x19404FC))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildResetBossLocationRequest*, Il2CppObject*))(Il2CppBase() + 0x194057C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildResetBossLocationRequest* other) {
		return ((R (*)(GuildResetBossLocationRequest*, ProtoModels::GuildResetBossLocationRequest*))(Il2CppBase() + 0x19405EC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildResetBossLocationRequest*))(Il2CppBase() + 0x1940660))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildResetBossLocationRequest*))(Il2CppBase() + 0x194070C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildResetBossLocationRequest*, uintptr_t))(Il2CppBase() + 0x1940770))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildResetBossLocationRequest*))(Il2CppBase() + 0x1940854))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildResetBossLocationRequest* other) {
		return ((R (*)(GuildResetBossLocationRequest*, ProtoModels::GuildResetBossLocationRequest*))(Il2CppBase() + 0x1940994))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildResetBossLocationRequest*, uintptr_t))(Il2CppBase() + 0x19409E0))(this, input);
	}

};

}
