#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildUpdateRatingRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildUpdateRatingRequest"));
	}

	 static MessageParser1<ProtoModels::GuildUpdateRatingRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::GuildUpdateRatingRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& CountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& count_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& GuildQuestIdFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& guildQuestId_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::GuildUpdateRatingRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::GuildUpdateRatingRequest*>* (*)(void *))(Il2CppBase() + 0x1946310))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1946374))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildUpdateRatingRequest*))(Il2CppBase() + 0x1946494))(this);
	}
	template <typename R = ProtoModels::GuildUpdateRatingRequest*> R Clone() {
		return ((R (*)(GuildUpdateRatingRequest*))(Il2CppBase() + 0x1946544))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(GuildUpdateRatingRequest*))(Il2CppBase() + 0x19465A0))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(GuildUpdateRatingRequest*, int64_t))(Il2CppBase() + 0x19465A8))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(GuildUpdateRatingRequest*))(Il2CppBase() + 0x19465B0))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(GuildUpdateRatingRequest*, int64_t))(Il2CppBase() + 0x19465B8))(this, value);
	}
	template <typename R = int32_t> R get_Count() {
		return ((R (*)(GuildUpdateRatingRequest*))(Il2CppBase() + 0x19465C0))(this);
	}
	template <typename R = void> R set_Count(int32_t value) {
		return ((R (*)(GuildUpdateRatingRequest*, int32_t))(Il2CppBase() + 0x19465C8))(this, value);
	}
	template <typename R = int64_t> R get_GuildQuestId() {
		return ((R (*)(GuildUpdateRatingRequest*))(Il2CppBase() + 0x19465D0))(this);
	}
	template <typename R = void> R set_GuildQuestId(int64_t value) {
		return ((R (*)(GuildUpdateRatingRequest*, int64_t))(Il2CppBase() + 0x19465D8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildUpdateRatingRequest*, Il2CppObject*))(Il2CppBase() + 0x19465E0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildUpdateRatingRequest* other) {
		return ((R (*)(GuildUpdateRatingRequest*, ProtoModels::GuildUpdateRatingRequest*))(Il2CppBase() + 0x1946650))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildUpdateRatingRequest*))(Il2CppBase() + 0x19466B0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildUpdateRatingRequest*))(Il2CppBase() + 0x1946758))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildUpdateRatingRequest*, uintptr_t))(Il2CppBase() + 0x19467BC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildUpdateRatingRequest*))(Il2CppBase() + 0x1946898))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildUpdateRatingRequest* other) {
		return ((R (*)(GuildUpdateRatingRequest*, ProtoModels::GuildUpdateRatingRequest*))(Il2CppBase() + 0x19469CC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildUpdateRatingRequest*, uintptr_t))(Il2CppBase() + 0x1946A04))(this, input);
	}

};

}
