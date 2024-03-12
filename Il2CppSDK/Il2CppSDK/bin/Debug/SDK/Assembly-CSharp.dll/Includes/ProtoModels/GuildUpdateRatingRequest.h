#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildUpdateRatingRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildUpdateRatingRequest"));
	}

	template <typename T = void*> static T& _parser() {
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
	template <typename T = int32_t> static T& CountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& count_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& GuildQuestIdFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& guildQuestId_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1946310))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1946374))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildUpdateRatingRequest*))(Il2CppBase() + 0x1946494))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(GuildUpdateRatingRequest*))(Il2CppBase() + 0x1946544))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(GuildUpdateRatingRequest*))(Il2CppBase() + 0x19465A0))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(GuildUpdateRatingRequest*, int64_t))(Il2CppBase() + 0x19465A8))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(GuildUpdateRatingRequest*))(Il2CppBase() + 0x19465B0))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(GuildUpdateRatingRequest*, int64_t))(Il2CppBase() + 0x19465B8))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(GuildUpdateRatingRequest*))(Il2CppBase() + 0x19465C0))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(GuildUpdateRatingRequest*, int32_t))(Il2CppBase() + 0x19465C8))(this, value);
	}
	template <typename T = int64_t> T get_GuildQuestId() {
		return ((T (*)(GuildUpdateRatingRequest*))(Il2CppBase() + 0x19465D0))(this);
	}
	template <typename T = void> T set_GuildQuestId(int64_t value) {
		return ((T (*)(GuildUpdateRatingRequest*, int64_t))(Il2CppBase() + 0x19465D8))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(GuildUpdateRatingRequest*, uintptr_t))(Il2CppBase() + 0x19465E0))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(GuildUpdateRatingRequest*, uintptr_t))(Il2CppBase() + 0x1946650))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildUpdateRatingRequest*))(Il2CppBase() + 0x19466B0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildUpdateRatingRequest*))(Il2CppBase() + 0x1946758))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildUpdateRatingRequest*, uintptr_t))(Il2CppBase() + 0x19467BC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildUpdateRatingRequest*))(Il2CppBase() + 0x1946898))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(GuildUpdateRatingRequest*, uintptr_t))(Il2CppBase() + 0x19469CC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildUpdateRatingRequest*, uintptr_t))(Il2CppBase() + 0x1946A04))(this, input);
	}

};

}
