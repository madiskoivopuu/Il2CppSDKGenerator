#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUpdateUserStoreRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUpdateUserStoreRequest"));
	}

	 static MessageParser1ProtoModels::ArenaUpdateUserStoreRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaUpdateUserStoreRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& CategoryFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& category_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::ArenaUpdateUserStoreRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaUpdateUserStoreRequest*>* (*)(void *))(Il2CppBase() + 0xF570E4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xF57148))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUpdateUserStoreRequest*))(Il2CppBase() + 0xF57268))(this);
	}
	template <typename R = ProtoModels::ArenaUpdateUserStoreRequest*> R Clone() {
		return ((R (*)(ArenaUpdateUserStoreRequest*))(Il2CppBase() + 0xF57364))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaUpdateUserStoreRequest*))(Il2CppBase() + 0xF573C0))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaUpdateUserStoreRequest*, int64_t))(Il2CppBase() + 0xF573C8))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaUpdateUserStoreRequest*))(Il2CppBase() + 0xF573D0))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaUpdateUserStoreRequest*, int64_t))(Il2CppBase() + 0xF573D8))(this, value);
	}
	template <typename R = Il2CppString*> R get_Category() {
		return ((R (*)(ArenaUpdateUserStoreRequest*))(Il2CppBase() + 0xF573E0))(this);
	}
	template <typename R = void> R set_Category(Il2CppString* value) {
		return ((R (*)(ArenaUpdateUserStoreRequest*, Il2CppString*))(Il2CppBase() + 0xF573E8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUpdateUserStoreRequest*, Il2CppObject*))(Il2CppBase() + 0xF57468))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUpdateUserStoreRequest* other) {
		return ((R (*)(ArenaUpdateUserStoreRequest*, ProtoModels::ArenaUpdateUserStoreRequest*))(Il2CppBase() + 0xF574D8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUpdateUserStoreRequest*))(Il2CppBase() + 0xF5753C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUpdateUserStoreRequest*))(Il2CppBase() + 0xF575CC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUpdateUserStoreRequest*, uintptr_t))(Il2CppBase() + 0xF57630))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUpdateUserStoreRequest*))(Il2CppBase() + 0xF576E8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUpdateUserStoreRequest* other) {
		return ((R (*)(ArenaUpdateUserStoreRequest*, ProtoModels::ArenaUpdateUserStoreRequest*))(Il2CppBase() + 0xF577EC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUpdateUserStoreRequest*, uintptr_t))(Il2CppBase() + 0xF5782C))(this, input);
	}

};

}
