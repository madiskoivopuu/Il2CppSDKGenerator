#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaGuildUserQuestProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaGuildUserQuestProgress"));
	}

	template <typename T = MessageParser1ArenaGuildUserQuestProgress*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& count_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& QuestIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& questID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1ArenaGuildUserQuestProgress*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E27C40))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E27CA4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaGuildUserQuestProgress*))(Il2CppBase() + 0x1E27DC4))(this);
	}
	template <typename T = ArenaGuildUserQuestProgress*> T Clone() {
		return ((T (*)(ArenaGuildUserQuestProgress*))(Il2CppBase() + 0x1E27E6C))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaGuildUserQuestProgress*))(Il2CppBase() + 0x1E27EC8))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaGuildUserQuestProgress*, int64_t))(Il2CppBase() + 0x1E27ED0))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(ArenaGuildUserQuestProgress*))(Il2CppBase() + 0x1E27ED8))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(ArenaGuildUserQuestProgress*, int32_t))(Il2CppBase() + 0x1E27EE0))(this, value);
	}
	template <typename T = int64_t> T get_QuestID() {
		return ((T (*)(ArenaGuildUserQuestProgress*))(Il2CppBase() + 0x1E27EE8))(this);
	}
	template <typename T = void> T set_QuestID(int64_t value) {
		return ((T (*)(ArenaGuildUserQuestProgress*, int64_t))(Il2CppBase() + 0x1E27EF0))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaGuildUserQuestProgress*, Il2CppObject*))(Il2CppBase() + 0x1E27EF8))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaGuildUserQuestProgress* other) {
		return ((T (*)(ArenaGuildUserQuestProgress*, ArenaGuildUserQuestProgress*))(Il2CppBase() + 0x1E27FA4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaGuildUserQuestProgress*))(Il2CppBase() + 0x1E27FF4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaGuildUserQuestProgress*))(Il2CppBase() + 0x1E28080))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaGuildUserQuestProgress*, uintptr_t))(Il2CppBase() + 0x1E280E4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaGuildUserQuestProgress*))(Il2CppBase() + 0x1E28194))(this);
	}
	template <typename T = void> T MergeFrom(ArenaGuildUserQuestProgress* other) {
		return ((T (*)(ArenaGuildUserQuestProgress*, ArenaGuildUserQuestProgress*))(Il2CppBase() + 0x1E2828C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaGuildUserQuestProgress*, uintptr_t))(Il2CppBase() + 0x1E282B8))(this, input);
	}

};

}
