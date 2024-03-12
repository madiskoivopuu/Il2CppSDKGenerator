#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUpdateUserStoreRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUpdateUserStoreRequest"));
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
	template <typename T = int32_t> static T& CategoryFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& category_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xF570E4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xF57148))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaUpdateUserStoreRequest*))(Il2CppBase() + 0xF57268))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaUpdateUserStoreRequest*))(Il2CppBase() + 0xF57364))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaUpdateUserStoreRequest*))(Il2CppBase() + 0xF573C0))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaUpdateUserStoreRequest*, int64_t))(Il2CppBase() + 0xF573C8))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaUpdateUserStoreRequest*))(Il2CppBase() + 0xF573D0))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaUpdateUserStoreRequest*, int64_t))(Il2CppBase() + 0xF573D8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Category() {
		return ((T (*)(ArenaUpdateUserStoreRequest*))(Il2CppBase() + 0xF573E0))(this);
	}
	template <typename T = void> T set_Category(Il2CppString* value) {
		return ((T (*)(ArenaUpdateUserStoreRequest*, Il2CppString*))(Il2CppBase() + 0xF573E8))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaUpdateUserStoreRequest*, uintptr_t))(Il2CppBase() + 0xF57468))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaUpdateUserStoreRequest*, uintptr_t))(Il2CppBase() + 0xF574D8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaUpdateUserStoreRequest*))(Il2CppBase() + 0xF5753C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaUpdateUserStoreRequest*))(Il2CppBase() + 0xF575CC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaUpdateUserStoreRequest*, uintptr_t))(Il2CppBase() + 0xF57630))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaUpdateUserStoreRequest*))(Il2CppBase() + 0xF576E8))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaUpdateUserStoreRequest*, uintptr_t))(Il2CppBase() + 0xF577EC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaUpdateUserStoreRequest*, uintptr_t))(Il2CppBase() + 0xF5782C))(this, input);
	}

};

}
