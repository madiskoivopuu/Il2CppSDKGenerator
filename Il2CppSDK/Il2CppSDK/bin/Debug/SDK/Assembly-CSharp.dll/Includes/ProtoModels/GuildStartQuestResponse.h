#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildStartQuestResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildStartQuestResponse"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ActiveQuestFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& activeQuest_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x19448DC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1944940))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildStartQuestResponse*))(Il2CppBase() + 0x1944A60))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(GuildStartQuestResponse*))(Il2CppBase() + 0x1944B80))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(GuildStartQuestResponse*))(Il2CppBase() + 0x1944BDC))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(GuildStartQuestResponse*, int32_t))(Il2CppBase() + 0x1944BE4))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(GuildStartQuestResponse*))(Il2CppBase() + 0x1944BEC))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(GuildStartQuestResponse*, Il2CppString*))(Il2CppBase() + 0x1944BF4))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(GuildStartQuestResponse*))(Il2CppBase() + 0x1944C74))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(GuildStartQuestResponse*, int64_t))(Il2CppBase() + 0x1944C7C))(this, value);
	}
	template <typename T = uintptr_t> T get_ActiveQuest() {
		return ((T (*)(GuildStartQuestResponse*))(Il2CppBase() + 0x1944C84))(this);
	}
	template <typename T = void> T set_ActiveQuest(uintptr_t value) {
		return ((T (*)(GuildStartQuestResponse*, uintptr_t))(Il2CppBase() + 0x1944C8C))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(GuildStartQuestResponse*, uintptr_t))(Il2CppBase() + 0x1944C94))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(GuildStartQuestResponse*, uintptr_t))(Il2CppBase() + 0x1944D04))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildStartQuestResponse*))(Il2CppBase() + 0x1944D88))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildStartQuestResponse*))(Il2CppBase() + 0x1944E34))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildStartQuestResponse*, uintptr_t))(Il2CppBase() + 0x1944E98))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildStartQuestResponse*))(Il2CppBase() + 0x1944F7C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(GuildStartQuestResponse*, uintptr_t))(Il2CppBase() + 0x19450BC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildStartQuestResponse*, uintptr_t))(Il2CppBase() + 0x1945190))(this, input);
	}

};

}
