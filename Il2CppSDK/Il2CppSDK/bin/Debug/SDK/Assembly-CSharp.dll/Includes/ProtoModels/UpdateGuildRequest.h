#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UpdateGuildRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UpdateGuildRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& GuildFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& guild_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& PriceFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& price_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x153D6BC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x153D720))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UpdateGuildRequest*))(Il2CppBase() + 0x153D840))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(UpdateGuildRequest*))(Il2CppBase() + 0x153D92C))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(UpdateGuildRequest*))(Il2CppBase() + 0x153D988))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(UpdateGuildRequest*, int64_t))(Il2CppBase() + 0x153D990))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(UpdateGuildRequest*))(Il2CppBase() + 0x153D998))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(UpdateGuildRequest*, int64_t))(Il2CppBase() + 0x153D9A0))(this, value);
	}
	template <typename T = uintptr_t> T get_Guild() {
		return ((T (*)(UpdateGuildRequest*))(Il2CppBase() + 0x153D9A8))(this);
	}
	template <typename T = void> T set_Guild(uintptr_t value) {
		return ((T (*)(UpdateGuildRequest*, uintptr_t))(Il2CppBase() + 0x153D9B0))(this, value);
	}
	template <typename T = uintptr_t> T get_Price() {
		return ((T (*)(UpdateGuildRequest*))(Il2CppBase() + 0x153D9B8))(this);
	}
	template <typename T = void> T set_Price(uintptr_t value) {
		return ((T (*)(UpdateGuildRequest*, uintptr_t))(Il2CppBase() + 0x153D9C0))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(UpdateGuildRequest*, uintptr_t))(Il2CppBase() + 0x153D9C8))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(UpdateGuildRequest*, uintptr_t))(Il2CppBase() + 0x153DA38))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UpdateGuildRequest*))(Il2CppBase() + 0x153DABC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UpdateGuildRequest*))(Il2CppBase() + 0x153DB58))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UpdateGuildRequest*, uintptr_t))(Il2CppBase() + 0x153DBBC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UpdateGuildRequest*))(Il2CppBase() + 0x153DC98))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(UpdateGuildRequest*, uintptr_t))(Il2CppBase() + 0x153DDCC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UpdateGuildRequest*, uintptr_t))(Il2CppBase() + 0x153DEF0))(this, input);
	}

};

}
