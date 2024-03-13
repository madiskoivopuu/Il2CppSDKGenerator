#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildResetQuestRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildResetQuestRequest"));
	}

	template <typename T = MessageParser1GuildResetQuestRequest*>*> static T& _parser() {
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

	template <typename T = MessageParser1GuildResetQuestRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1940BC8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1940C2C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildResetQuestRequest*))(Il2CppBase() + 0x1940D4C))(this);
	}
	template <typename T = GuildResetQuestRequest*> T Clone() {
		return ((T (*)(GuildResetQuestRequest*))(Il2CppBase() + 0x1940DEC))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(GuildResetQuestRequest*))(Il2CppBase() + 0x1940E48))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(GuildResetQuestRequest*, int64_t))(Il2CppBase() + 0x1940E50))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(GuildResetQuestRequest*))(Il2CppBase() + 0x1940E58))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(GuildResetQuestRequest*, int64_t))(Il2CppBase() + 0x1940E60))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(GuildResetQuestRequest*, Il2CppObject*))(Il2CppBase() + 0x1940E68))(this, other);
	}
	template <typename T = bool> T Equals_1(GuildResetQuestRequest* other) {
		return ((T (*)(GuildResetQuestRequest*, GuildResetQuestRequest*))(Il2CppBase() + 0x1940F04))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildResetQuestRequest*))(Il2CppBase() + 0x1940F44))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildResetQuestRequest*))(Il2CppBase() + 0x1940FB0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildResetQuestRequest*, uintptr_t))(Il2CppBase() + 0x1941014))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildResetQuestRequest*))(Il2CppBase() + 0x1941098))(this);
	}
	template <typename T = void> T MergeFrom(GuildResetQuestRequest* other) {
		return ((T (*)(GuildResetQuestRequest*, GuildResetQuestRequest*))(Il2CppBase() + 0x194114C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildResetQuestRequest*, uintptr_t))(Il2CppBase() + 0x194116C))(this, input);
	}

};

}
