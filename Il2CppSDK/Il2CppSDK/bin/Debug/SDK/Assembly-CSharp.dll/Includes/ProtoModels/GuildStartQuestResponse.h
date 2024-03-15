#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildStartQuestResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildStartQuestResponse"));
	}

	 static MessageParser1<ProtoModels::GuildStartQuestResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::GuildStartQuestResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& ActiveQuestFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::GuildQuestArena*> R& activeQuest_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::GuildStartQuestResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::GuildStartQuestResponse*>* (*)(void *))(Il2CppBase() + 0x19448DC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1944940))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildStartQuestResponse*))(Il2CppBase() + 0x1944A60))(this);
	}
	template <typename R = ProtoModels::GuildStartQuestResponse*> R Clone() {
		return ((R (*)(GuildStartQuestResponse*))(Il2CppBase() + 0x1944B80))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(GuildStartQuestResponse*))(Il2CppBase() + 0x1944BDC))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(GuildStartQuestResponse*, int32_t))(Il2CppBase() + 0x1944BE4))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(GuildStartQuestResponse*))(Il2CppBase() + 0x1944BEC))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(GuildStartQuestResponse*, Il2CppString*))(Il2CppBase() + 0x1944BF4))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(GuildStartQuestResponse*))(Il2CppBase() + 0x1944C74))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(GuildStartQuestResponse*, int64_t))(Il2CppBase() + 0x1944C7C))(this, value);
	}
	template <typename R = ProtoModels::GuildQuestArena*> R get_ActiveQuest() {
		return ((R (*)(GuildStartQuestResponse*))(Il2CppBase() + 0x1944C84))(this);
	}
	template <typename R = void> R set_ActiveQuest(ProtoModels::GuildQuestArena* value) {
		return ((R (*)(GuildStartQuestResponse*, ProtoModels::GuildQuestArena*))(Il2CppBase() + 0x1944C8C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildStartQuestResponse*, Il2CppObject*))(Il2CppBase() + 0x1944C94))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildStartQuestResponse* other) {
		return ((R (*)(GuildStartQuestResponse*, ProtoModels::GuildStartQuestResponse*))(Il2CppBase() + 0x1944D04))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildStartQuestResponse*))(Il2CppBase() + 0x1944D88))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildStartQuestResponse*))(Il2CppBase() + 0x1944E34))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildStartQuestResponse*, uintptr_t))(Il2CppBase() + 0x1944E98))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildStartQuestResponse*))(Il2CppBase() + 0x1944F7C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildStartQuestResponse* other) {
		return ((R (*)(GuildStartQuestResponse*, ProtoModels::GuildStartQuestResponse*))(Il2CppBase() + 0x19450BC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildStartQuestResponse*, uintptr_t))(Il2CppBase() + 0x1945190))(this, input);
	}

};

}
