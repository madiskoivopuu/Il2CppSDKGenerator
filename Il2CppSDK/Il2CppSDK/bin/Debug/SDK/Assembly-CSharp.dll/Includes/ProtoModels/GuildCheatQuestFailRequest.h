#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildCheatQuestFailRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildCheatQuestFailRequest"));
	}

	template <typename T = MessageParser1GuildCheatQuestFailRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1GuildCheatQuestFailRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x12E961C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x12E9680))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildCheatQuestFailRequest*))(Il2CppBase() + 0x12E97A0))(this);
	}
	template <typename T = GuildCheatQuestFailRequest*> T Clone() {
		return ((T (*)(GuildCheatQuestFailRequest*))(Il2CppBase() + 0x12E9840))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(GuildCheatQuestFailRequest*))(Il2CppBase() + 0x12E989C))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(GuildCheatQuestFailRequest*, int64_t))(Il2CppBase() + 0x12E98A4))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(GuildCheatQuestFailRequest*))(Il2CppBase() + 0x12E98AC))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(GuildCheatQuestFailRequest*, int64_t))(Il2CppBase() + 0x12E98B4))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(GuildCheatQuestFailRequest*, Il2CppObject*))(Il2CppBase() + 0x12E98BC))(this, other);
	}
	template <typename T = bool> T Equals_1(GuildCheatQuestFailRequest* other) {
		return ((T (*)(GuildCheatQuestFailRequest*, GuildCheatQuestFailRequest*))(Il2CppBase() + 0x12E9958))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildCheatQuestFailRequest*))(Il2CppBase() + 0x12E9998))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildCheatQuestFailRequest*))(Il2CppBase() + 0x12E9A04))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildCheatQuestFailRequest*, uintptr_t))(Il2CppBase() + 0x12E9A68))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildCheatQuestFailRequest*))(Il2CppBase() + 0x12E9AEC))(this);
	}
	template <typename T = void> T MergeFrom(GuildCheatQuestFailRequest* other) {
		return ((T (*)(GuildCheatQuestFailRequest*, GuildCheatQuestFailRequest*))(Il2CppBase() + 0x12E9BA0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildCheatQuestFailRequest*, uintptr_t))(Il2CppBase() + 0x12E9BC0))(this, input);
	}

};

}
