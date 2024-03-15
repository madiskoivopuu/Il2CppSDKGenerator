#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class HelloUserToCoordinatorResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "HelloUserToCoordinatorResponse"));
	}

	 static MessageParser1ProtoModels::HelloUserToCoordinatorResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::HelloUserToCoordinatorResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ArenaAddressFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& arenaAddress_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& UdpPortFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& udpPort_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& WorldStatusFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::WorldStatusType*> R& worldStatus_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& SessionIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& sessionID_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& ProtocolFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaClientProtocolType*> R& protocol_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& ResourcesTypeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::WorldResourcesType*> R& resourcesType_() {
		return *(R*)((uintptr_t)this + 0x4C);
	}

	 static MessageParser1ProtoModels::HelloUserToCoordinatorResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::HelloUserToCoordinatorResponse*>* (*)(void *))(Il2CppBase() + 0x128C6BC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x128C720))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128C840))(this);
	}
	template <typename R = ProtoModels::HelloUserToCoordinatorResponse*> R Clone() {
		return ((R (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128C988))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128C9E4))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(HelloUserToCoordinatorResponse*, int32_t))(Il2CppBase() + 0x128C9EC))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128C9F4))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(HelloUserToCoordinatorResponse*, Il2CppString*))(Il2CppBase() + 0x128C9FC))(this, value);
	}
	template <typename R = Il2CppString*> R get_ArenaAddress() {
		return ((R (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128CA7C))(this);
	}
	template <typename R = void> R set_ArenaAddress(Il2CppString* value) {
		return ((R (*)(HelloUserToCoordinatorResponse*, Il2CppString*))(Il2CppBase() + 0x128CA84))(this, value);
	}
	template <typename R = int32_t> R get_UdpPort() {
		return ((R (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128CB04))(this);
	}
	template <typename R = void> R set_UdpPort(int32_t value) {
		return ((R (*)(HelloUserToCoordinatorResponse*, int32_t))(Il2CppBase() + 0x128CB0C))(this, value);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128CB14))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(HelloUserToCoordinatorResponse*, int64_t))(Il2CppBase() + 0x128CB1C))(this, value);
	}
	template <typename R = ProtoModels::WorldStatusType*> R get_WorldStatus() {
		return ((R (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128CB24))(this);
	}
	template <typename R = void> R set_WorldStatus(ProtoModels::WorldStatusType* value) {
		return ((R (*)(HelloUserToCoordinatorResponse*, ProtoModels::WorldStatusType*))(Il2CppBase() + 0x128CB2C))(this, value);
	}
	template <typename R = int64_t> R get_SessionID() {
		return ((R (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128CB34))(this);
	}
	template <typename R = void> R set_SessionID(int64_t value) {
		return ((R (*)(HelloUserToCoordinatorResponse*, int64_t))(Il2CppBase() + 0x128CB3C))(this, value);
	}
	template <typename R = ProtoModels::ArenaClientProtocolType*> R get_Protocol() {
		return ((R (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128CB44))(this);
	}
	template <typename R = void> R set_Protocol(ProtoModels::ArenaClientProtocolType* value) {
		return ((R (*)(HelloUserToCoordinatorResponse*, ProtoModels::ArenaClientProtocolType*))(Il2CppBase() + 0x128CB4C))(this, value);
	}
	template <typename R = ProtoModels::WorldResourcesType*> R get_ResourcesType() {
		return ((R (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128CB54))(this);
	}
	template <typename R = void> R set_ResourcesType(ProtoModels::WorldResourcesType* value) {
		return ((R (*)(HelloUserToCoordinatorResponse*, ProtoModels::WorldResourcesType*))(Il2CppBase() + 0x128CB5C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(HelloUserToCoordinatorResponse*, Il2CppObject*))(Il2CppBase() + 0x128CB64))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::HelloUserToCoordinatorResponse* other) {
		return ((R (*)(HelloUserToCoordinatorResponse*, ProtoModels::HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128CBD4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128CCA8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128CDEC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(HelloUserToCoordinatorResponse*, uintptr_t))(Il2CppBase() + 0x128CE50))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128D018))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::HelloUserToCoordinatorResponse* other) {
		return ((R (*)(HelloUserToCoordinatorResponse*, ProtoModels::HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128D28C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(HelloUserToCoordinatorResponse*, uintptr_t))(Il2CppBase() + 0x128D338))(this, input);
	}

};

}
