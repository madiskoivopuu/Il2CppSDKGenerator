#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CreateGuildRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CreateGuildRequest"));
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
		return ((T (*)(void *))(Il2CppBase() + 0x1BCA30C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BCA370))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(CreateGuildRequest*))(Il2CppBase() + 0x1BCA490))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(CreateGuildRequest*))(Il2CppBase() + 0x1BCA5D4))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(CreateGuildRequest*))(Il2CppBase() + 0x1BCA630))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(CreateGuildRequest*, int64_t))(Il2CppBase() + 0x1BCA638))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(CreateGuildRequest*))(Il2CppBase() + 0x1BCA640))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(CreateGuildRequest*, int64_t))(Il2CppBase() + 0x1BCA648))(this, value);
	}
	template <typename T = uintptr_t> T get_Guild() {
		return ((T (*)(CreateGuildRequest*))(Il2CppBase() + 0x1BCA650))(this);
	}
	template <typename T = void> T set_Guild(uintptr_t value) {
		return ((T (*)(CreateGuildRequest*, uintptr_t))(Il2CppBase() + 0x1BCA658))(this, value);
	}
	template <typename T = uintptr_t> T get_Price() {
		return ((T (*)(CreateGuildRequest*))(Il2CppBase() + 0x1BCA660))(this);
	}
	template <typename T = void> T set_Price(uintptr_t value) {
		return ((T (*)(CreateGuildRequest*, uintptr_t))(Il2CppBase() + 0x1BCA668))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(CreateGuildRequest*, uintptr_t))(Il2CppBase() + 0x1BCA670))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(CreateGuildRequest*, uintptr_t))(Il2CppBase() + 0x1BCA6E0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CreateGuildRequest*))(Il2CppBase() + 0x1BCA764))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CreateGuildRequest*))(Il2CppBase() + 0x1BCA800))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(CreateGuildRequest*, uintptr_t))(Il2CppBase() + 0x1BCA864))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(CreateGuildRequest*))(Il2CppBase() + 0x1BCA940))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(CreateGuildRequest*, uintptr_t))(Il2CppBase() + 0x1BCAA74))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(CreateGuildRequest*, uintptr_t))(Il2CppBase() + 0x1BCAC8C))(this, input);
	}

};

}
