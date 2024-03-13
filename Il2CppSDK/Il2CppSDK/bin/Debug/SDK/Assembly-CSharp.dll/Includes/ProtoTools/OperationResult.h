#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoTools {

class OperationResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoTools", "OperationResult"));
	}

	template <typename T = MessageParser1OperationResult*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& OkFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& ok_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ErrorCodes*> T& code_() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = MessageParser1OperationResult*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x11E40AC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x11E4110))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(OperationResult*))(Il2CppBase() + 0x11E4230))(this);
	}
	template <typename T = OperationResult*> T Clone() {
		return ((T (*)(OperationResult*))(Il2CppBase() + 0x11E42D0))(this);
	}
	template <typename T = bool> T get_Ok() {
		return ((T (*)(OperationResult*))(Il2CppBase() + 0x11E432C))(this);
	}
	template <typename T = void> T set_Ok(bool value) {
		return ((T (*)(OperationResult*, bool))(Il2CppBase() + 0x11E4334))(this, value);
	}
	template <typename T = ErrorCodes*> T get_Code() {
		return ((T (*)(OperationResult*))(Il2CppBase() + 0x11E4340))(this);
	}
	template <typename T = void> T set_Code(ErrorCodes* value) {
		return ((T (*)(OperationResult*, ErrorCodes*))(Il2CppBase() + 0x11E4348))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(OperationResult*, Il2CppObject*))(Il2CppBase() + 0x11E4350))(this, other);
	}
	template <typename T = bool> T Equals_1(OperationResult* other) {
		return ((T (*)(OperationResult*, OperationResult*))(Il2CppBase() + 0x11E43FC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(OperationResult*))(Il2CppBase() + 0x11E444C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(OperationResult*))(Il2CppBase() + 0x11E44B8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(OperationResult*, uintptr_t))(Il2CppBase() + 0x11E451C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(OperationResult*))(Il2CppBase() + 0x11E45A0))(this);
	}
	template <typename T = void> T MergeFrom(OperationResult* other) {
		return ((T (*)(OperationResult*, OperationResult*))(Il2CppBase() + 0x11E462C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(OperationResult*, uintptr_t))(Il2CppBase() + 0x11E464C))(this, input);
	}

};

}
