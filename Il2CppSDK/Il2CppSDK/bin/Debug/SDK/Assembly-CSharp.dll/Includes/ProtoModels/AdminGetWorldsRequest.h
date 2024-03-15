#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetWorldsRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetWorldsRequest"));
	}

	 static MessageParser1ProtoModels::AdminGetWorldsRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::AdminGetWorldsRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& IsWorldFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isWorld_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::AdminGetWorldsRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::AdminGetWorldsRequest*>* (*)(void *))(Il2CppBase() + 0x18BAA1C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x18BAA80))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(AdminGetWorldsRequest*))(Il2CppBase() + 0x18BABA0))(this);
	}
	template <typename R = ProtoModels::AdminGetWorldsRequest*> R Clone() {
		return ((R (*)(AdminGetWorldsRequest*))(Il2CppBase() + 0x18BAC40))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(AdminGetWorldsRequest*))(Il2CppBase() + 0x18BAC9C))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(AdminGetWorldsRequest*, int64_t))(Il2CppBase() + 0x18BACA4))(this, value);
	}
	template <typename R = bool> R get_IsWorld() {
		return ((R (*)(AdminGetWorldsRequest*))(Il2CppBase() + 0x18BACAC))(this);
	}
	template <typename R = void> R set_IsWorld(bool value) {
		return ((R (*)(AdminGetWorldsRequest*, bool))(Il2CppBase() + 0x18BACB4))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(AdminGetWorldsRequest*, Il2CppObject*))(Il2CppBase() + 0x18BACC0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::AdminGetWorldsRequest* other) {
		return ((R (*)(AdminGetWorldsRequest*, ProtoModels::AdminGetWorldsRequest*))(Il2CppBase() + 0x18BAD68))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(AdminGetWorldsRequest*))(Il2CppBase() + 0x18BADB4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AdminGetWorldsRequest*))(Il2CppBase() + 0x18BAE28))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(AdminGetWorldsRequest*, uintptr_t))(Il2CppBase() + 0x18BAE8C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(AdminGetWorldsRequest*))(Il2CppBase() + 0x18BAF10))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::AdminGetWorldsRequest* other) {
		return ((R (*)(AdminGetWorldsRequest*, ProtoModels::AdminGetWorldsRequest*))(Il2CppBase() + 0x18BAF9C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(AdminGetWorldsRequest*, uintptr_t))(Il2CppBase() + 0x18BAFBC))(this, input);
	}

};

}
