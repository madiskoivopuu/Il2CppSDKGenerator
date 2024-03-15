#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoTools {

class OperationResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoTools", "OperationResult"));
	}

	 static MessageParser1ProtoTools::OperationResult*>*& _parser() {
		return *(MessageParser1ProtoTools::OperationResult*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& OkFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& ok_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoTools::ErrorCodes*> R& code_() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	 static MessageParser1ProtoTools::OperationResult*>* get_Parser() {
		return ((MessageParser1ProtoTools::OperationResult*>* (*)(void *))(Il2CppBase() + 0x11E40AC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x11E4110))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(OperationResult*))(Il2CppBase() + 0x11E4230))(this);
	}
	template <typename R = ProtoTools::OperationResult*> R Clone() {
		return ((R (*)(OperationResult*))(Il2CppBase() + 0x11E42D0))(this);
	}
	template <typename R = bool> R get_Ok() {
		return ((R (*)(OperationResult*))(Il2CppBase() + 0x11E432C))(this);
	}
	template <typename R = void> R set_Ok(bool value) {
		return ((R (*)(OperationResult*, bool))(Il2CppBase() + 0x11E4334))(this, value);
	}
	template <typename R = ProtoTools::ErrorCodes*> R get_Code() {
		return ((R (*)(OperationResult*))(Il2CppBase() + 0x11E4340))(this);
	}
	template <typename R = void> R set_Code(ProtoTools::ErrorCodes* value) {
		return ((R (*)(OperationResult*, ProtoTools::ErrorCodes*))(Il2CppBase() + 0x11E4348))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(OperationResult*, Il2CppObject*))(Il2CppBase() + 0x11E4350))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoTools::OperationResult* other) {
		return ((R (*)(OperationResult*, ProtoTools::OperationResult*))(Il2CppBase() + 0x11E43FC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(OperationResult*))(Il2CppBase() + 0x11E444C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(OperationResult*))(Il2CppBase() + 0x11E44B8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(OperationResult*, uintptr_t))(Il2CppBase() + 0x11E451C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(OperationResult*))(Il2CppBase() + 0x11E45A0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoTools::OperationResult* other) {
		return ((R (*)(OperationResult*, ProtoTools::OperationResult*))(Il2CppBase() + 0x11E462C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(OperationResult*, uintptr_t))(Il2CppBase() + 0x11E464C))(this, input);
	}

};

}
