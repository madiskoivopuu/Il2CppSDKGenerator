#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CommandCyclicAccountToCyclicRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CommandCyclicAccountToCyclicRequest"));
	}

	 static MessageParser1<ProtoModels::CommandCyclicAccountToCyclicRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::CommandCyclicAccountToCyclicRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& RequestFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::CommandCyclicAccountRequest*> R& request_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& MasterAccountInfoFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::MasterAccountInfoType*> R& masterAccountInfo_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::CommandCyclicAccountToCyclicRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::CommandCyclicAccountToCyclicRequest*>* (*)(void *))(Il2CppBase() + 0xE2876C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xE287D0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(CommandCyclicAccountToCyclicRequest*))(Il2CppBase() + 0xE288F0))(this);
	}
	template <typename R = ProtoModels::CommandCyclicAccountToCyclicRequest*> R Clone() {
		return ((R (*)(CommandCyclicAccountToCyclicRequest*))(Il2CppBase() + 0xE289CC))(this);
	}
	template <typename R = ProtoModels::CommandCyclicAccountRequest*> R get_Request() {
		return ((R (*)(CommandCyclicAccountToCyclicRequest*))(Il2CppBase() + 0xE28A28))(this);
	}
	template <typename R = void> R set_Request(ProtoModels::CommandCyclicAccountRequest* value) {
		return ((R (*)(CommandCyclicAccountToCyclicRequest*, ProtoModels::CommandCyclicAccountRequest*))(Il2CppBase() + 0xE28A30))(this, value);
	}
	template <typename R = ProtoModels::MasterAccountInfoType*> R get_MasterAccountInfo() {
		return ((R (*)(CommandCyclicAccountToCyclicRequest*))(Il2CppBase() + 0xE28A38))(this);
	}
	template <typename R = void> R set_MasterAccountInfo(ProtoModels::MasterAccountInfoType* value) {
		return ((R (*)(CommandCyclicAccountToCyclicRequest*, ProtoModels::MasterAccountInfoType*))(Il2CppBase() + 0xE28A40))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(CommandCyclicAccountToCyclicRequest*, Il2CppObject*))(Il2CppBase() + 0xE28A48))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::CommandCyclicAccountToCyclicRequest* other) {
		return ((R (*)(CommandCyclicAccountToCyclicRequest*, ProtoModels::CommandCyclicAccountToCyclicRequest*))(Il2CppBase() + 0xE28AB8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(CommandCyclicAccountToCyclicRequest*))(Il2CppBase() + 0xE28B1C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(CommandCyclicAccountToCyclicRequest*))(Il2CppBase() + 0xE28B74))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(CommandCyclicAccountToCyclicRequest*, uintptr_t))(Il2CppBase() + 0xE28BD8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(CommandCyclicAccountToCyclicRequest*))(Il2CppBase() + 0xE28C5C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::CommandCyclicAccountToCyclicRequest* other) {
		return ((R (*)(CommandCyclicAccountToCyclicRequest*, ProtoModels::CommandCyclicAccountToCyclicRequest*))(Il2CppBase() + 0xE28D10))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(CommandCyclicAccountToCyclicRequest*, uintptr_t))(Il2CppBase() + 0xE28E14))(this, input);
	}

};

}
