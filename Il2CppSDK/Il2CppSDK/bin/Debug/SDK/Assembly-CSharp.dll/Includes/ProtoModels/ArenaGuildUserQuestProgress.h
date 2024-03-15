#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaGuildUserQuestProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaGuildUserQuestProgress"));
	}

	 static MessageParser1ProtoModels::ArenaGuildUserQuestProgress*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaGuildUserQuestProgress*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& count_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& QuestIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& questID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::ArenaGuildUserQuestProgress*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaGuildUserQuestProgress*>* (*)(void *))(Il2CppBase() + 0x1E27C40))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E27CA4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaGuildUserQuestProgress*))(Il2CppBase() + 0x1E27DC4))(this);
	}
	template <typename R = ProtoModels::ArenaGuildUserQuestProgress*> R Clone() {
		return ((R (*)(ArenaGuildUserQuestProgress*))(Il2CppBase() + 0x1E27E6C))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaGuildUserQuestProgress*))(Il2CppBase() + 0x1E27EC8))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaGuildUserQuestProgress*, int64_t))(Il2CppBase() + 0x1E27ED0))(this, value);
	}
	template <typename R = int32_t> R get_Count() {
		return ((R (*)(ArenaGuildUserQuestProgress*))(Il2CppBase() + 0x1E27ED8))(this);
	}
	template <typename R = void> R set_Count(int32_t value) {
		return ((R (*)(ArenaGuildUserQuestProgress*, int32_t))(Il2CppBase() + 0x1E27EE0))(this, value);
	}
	template <typename R = int64_t> R get_QuestID() {
		return ((R (*)(ArenaGuildUserQuestProgress*))(Il2CppBase() + 0x1E27EE8))(this);
	}
	template <typename R = void> R set_QuestID(int64_t value) {
		return ((R (*)(ArenaGuildUserQuestProgress*, int64_t))(Il2CppBase() + 0x1E27EF0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaGuildUserQuestProgress*, Il2CppObject*))(Il2CppBase() + 0x1E27EF8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaGuildUserQuestProgress* other) {
		return ((R (*)(ArenaGuildUserQuestProgress*, ProtoModels::ArenaGuildUserQuestProgress*))(Il2CppBase() + 0x1E27FA4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaGuildUserQuestProgress*))(Il2CppBase() + 0x1E27FF4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaGuildUserQuestProgress*))(Il2CppBase() + 0x1E28080))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaGuildUserQuestProgress*, uintptr_t))(Il2CppBase() + 0x1E280E4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaGuildUserQuestProgress*))(Il2CppBase() + 0x1E28194))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaGuildUserQuestProgress* other) {
		return ((R (*)(ArenaGuildUserQuestProgress*, ProtoModels::ArenaGuildUserQuestProgress*))(Il2CppBase() + 0x1E2828C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaGuildUserQuestProgress*, uintptr_t))(Il2CppBase() + 0x1E282B8))(this, input);
	}

};

}
