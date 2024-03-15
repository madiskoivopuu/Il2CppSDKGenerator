#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildCheatQuestFailRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildCheatQuestFailRequest"));
	}

	 static MessageParser1<ProtoModels::GuildCheatQuestFailRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::GuildCheatQuestFailRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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

	 static MessageParser1<ProtoModels::GuildCheatQuestFailRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::GuildCheatQuestFailRequest*>* (*)(void *))(Il2CppBase() + 0x12E961C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x12E9680))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildCheatQuestFailRequest*))(Il2CppBase() + 0x12E97A0))(this);
	}
	template <typename R = ProtoModels::GuildCheatQuestFailRequest*> R Clone() {
		return ((R (*)(GuildCheatQuestFailRequest*))(Il2CppBase() + 0x12E9840))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(GuildCheatQuestFailRequest*))(Il2CppBase() + 0x12E989C))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(GuildCheatQuestFailRequest*, int64_t))(Il2CppBase() + 0x12E98A4))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(GuildCheatQuestFailRequest*))(Il2CppBase() + 0x12E98AC))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(GuildCheatQuestFailRequest*, int64_t))(Il2CppBase() + 0x12E98B4))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildCheatQuestFailRequest*, Il2CppObject*))(Il2CppBase() + 0x12E98BC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildCheatQuestFailRequest* other) {
		return ((R (*)(GuildCheatQuestFailRequest*, ProtoModels::GuildCheatQuestFailRequest*))(Il2CppBase() + 0x12E9958))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildCheatQuestFailRequest*))(Il2CppBase() + 0x12E9998))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildCheatQuestFailRequest*))(Il2CppBase() + 0x12E9A04))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildCheatQuestFailRequest*, uintptr_t))(Il2CppBase() + 0x12E9A68))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildCheatQuestFailRequest*))(Il2CppBase() + 0x12E9AEC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildCheatQuestFailRequest* other) {
		return ((R (*)(GuildCheatQuestFailRequest*, ProtoModels::GuildCheatQuestFailRequest*))(Il2CppBase() + 0x12E9BA0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildCheatQuestFailRequest*, uintptr_t))(Il2CppBase() + 0x12E9BC0))(this, input);
	}

};

}
