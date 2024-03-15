#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildResetQuestRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildResetQuestRequest"));
	}

	 static MessageParser1<ProtoModels::GuildResetQuestRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::GuildResetQuestRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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

	 static MessageParser1<ProtoModels::GuildResetQuestRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::GuildResetQuestRequest*>* (*)(void *))(Il2CppBase() + 0x1940BC8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1940C2C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildResetQuestRequest*))(Il2CppBase() + 0x1940D4C))(this);
	}
	template <typename R = ProtoModels::GuildResetQuestRequest*> R Clone() {
		return ((R (*)(GuildResetQuestRequest*))(Il2CppBase() + 0x1940DEC))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(GuildResetQuestRequest*))(Il2CppBase() + 0x1940E48))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(GuildResetQuestRequest*, int64_t))(Il2CppBase() + 0x1940E50))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(GuildResetQuestRequest*))(Il2CppBase() + 0x1940E58))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(GuildResetQuestRequest*, int64_t))(Il2CppBase() + 0x1940E60))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildResetQuestRequest*, Il2CppObject*))(Il2CppBase() + 0x1940E68))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildResetQuestRequest* other) {
		return ((R (*)(GuildResetQuestRequest*, ProtoModels::GuildResetQuestRequest*))(Il2CppBase() + 0x1940F04))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildResetQuestRequest*))(Il2CppBase() + 0x1940F44))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildResetQuestRequest*))(Il2CppBase() + 0x1940FB0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildResetQuestRequest*, uintptr_t))(Il2CppBase() + 0x1941014))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildResetQuestRequest*))(Il2CppBase() + 0x1941098))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildResetQuestRequest* other) {
		return ((R (*)(GuildResetQuestRequest*, ProtoModels::GuildResetQuestRequest*))(Il2CppBase() + 0x194114C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildResetQuestRequest*, uintptr_t))(Il2CppBase() + 0x194116C))(this, input);
	}

};

}
