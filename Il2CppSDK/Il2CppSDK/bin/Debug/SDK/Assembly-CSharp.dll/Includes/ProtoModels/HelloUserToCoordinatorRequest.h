#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class HelloUserToCoordinatorRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "HelloUserToCoordinatorRequest"));
	}

	 static MessageParser1ProtoModels::HelloUserToCoordinatorRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::HelloUserToCoordinatorRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::HelloUserToCoordinatorRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::HelloUserToCoordinatorRequest*>* (*)(void *))(Il2CppBase() + 0x128BF78))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x128BFDC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(HelloUserToCoordinatorRequest*))(Il2CppBase() + 0x128C0FC))(this);
	}
	template <typename R = ProtoModels::HelloUserToCoordinatorRequest*> R Clone() {
		return ((R (*)(HelloUserToCoordinatorRequest*))(Il2CppBase() + 0x128C19C))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(HelloUserToCoordinatorRequest*))(Il2CppBase() + 0x128C1F8))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(HelloUserToCoordinatorRequest*, int64_t))(Il2CppBase() + 0x128C200))(this, value);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(HelloUserToCoordinatorRequest*))(Il2CppBase() + 0x128C208))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(HelloUserToCoordinatorRequest*, int64_t))(Il2CppBase() + 0x128C210))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(HelloUserToCoordinatorRequest*, Il2CppObject*))(Il2CppBase() + 0x128C218))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::HelloUserToCoordinatorRequest* other) {
		return ((R (*)(HelloUserToCoordinatorRequest*, ProtoModels::HelloUserToCoordinatorRequest*))(Il2CppBase() + 0x128C2B4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(HelloUserToCoordinatorRequest*))(Il2CppBase() + 0x128C2F4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(HelloUserToCoordinatorRequest*))(Il2CppBase() + 0x128C360))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(HelloUserToCoordinatorRequest*, uintptr_t))(Il2CppBase() + 0x128C3C4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(HelloUserToCoordinatorRequest*))(Il2CppBase() + 0x128C448))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::HelloUserToCoordinatorRequest* other) {
		return ((R (*)(HelloUserToCoordinatorRequest*, ProtoModels::HelloUserToCoordinatorRequest*))(Il2CppBase() + 0x128C4FC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(HelloUserToCoordinatorRequest*, uintptr_t))(Il2CppBase() + 0x128C51C))(this, input);
	}

};

}