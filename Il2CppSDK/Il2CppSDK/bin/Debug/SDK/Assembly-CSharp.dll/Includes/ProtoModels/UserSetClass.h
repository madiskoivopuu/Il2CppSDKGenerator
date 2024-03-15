#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserSetClass
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserSetClass"));
	}

	 static MessageParser1ProtoModels::UserSetClass*>*& _parser() {
		return *(MessageParser1ProtoModels::UserSetClass*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ClassFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& class_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::UserSetClass*>* get_Parser() {
		return ((MessageParser1ProtoModels::UserSetClass*>* (*)(void *))(Il2CppBase() + 0x15B95E0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x15B9644))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserSetClass*))(Il2CppBase() + 0x15B9764))(this);
	}
	template <typename R = ProtoModels::UserSetClass*> R Clone() {
		return ((R (*)(UserSetClass*))(Il2CppBase() + 0x15B9860))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(UserSetClass*))(Il2CppBase() + 0x15B98BC))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(UserSetClass*, int64_t))(Il2CppBase() + 0x15B98C4))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(UserSetClass*))(Il2CppBase() + 0x15B98CC))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(UserSetClass*, int64_t))(Il2CppBase() + 0x15B98D4))(this, value);
	}
	template <typename R = Il2CppString*> R get_Class() {
		return ((R (*)(UserSetClass*))(Il2CppBase() + 0x15B98DC))(this);
	}
	template <typename R = void> R set_Class(Il2CppString* value) {
		return ((R (*)(UserSetClass*, Il2CppString*))(Il2CppBase() + 0x15B98E4))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserSetClass*, Il2CppObject*))(Il2CppBase() + 0x15B9964))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserSetClass* other) {
		return ((R (*)(UserSetClass*, ProtoModels::UserSetClass*))(Il2CppBase() + 0x15B99D4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserSetClass*))(Il2CppBase() + 0x15B9A38))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserSetClass*))(Il2CppBase() + 0x15B9AC8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserSetClass*, uintptr_t))(Il2CppBase() + 0x15B9B2C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserSetClass*))(Il2CppBase() + 0x15B9BE4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserSetClass* other) {
		return ((R (*)(UserSetClass*, ProtoModels::UserSetClass*))(Il2CppBase() + 0x15B9CE8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserSetClass*, uintptr_t))(Il2CppBase() + 0x15B9D28))(this, input);
	}

};

}
