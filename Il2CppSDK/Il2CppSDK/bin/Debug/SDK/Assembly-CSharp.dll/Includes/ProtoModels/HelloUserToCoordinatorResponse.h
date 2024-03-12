#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class HelloUserToCoordinatorResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "HelloUserToCoordinatorResponse"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& ArenaAddressFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& arenaAddress_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& UdpPortFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& udpPort_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& WorldStatusFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& worldStatus_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& SessionIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& sessionID_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& ProtocolFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& protocol_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& ResourcesTypeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& resourcesType_() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x128C6BC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x128C720))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128C840))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128C988))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128C9E4))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(HelloUserToCoordinatorResponse*, int32_t))(Il2CppBase() + 0x128C9EC))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128C9F4))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(HelloUserToCoordinatorResponse*, Il2CppString*))(Il2CppBase() + 0x128C9FC))(this, value);
	}
	template <typename T = Il2CppString*> T get_ArenaAddress() {
		return ((T (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128CA7C))(this);
	}
	template <typename T = void> T set_ArenaAddress(Il2CppString* value) {
		return ((T (*)(HelloUserToCoordinatorResponse*, Il2CppString*))(Il2CppBase() + 0x128CA84))(this, value);
	}
	template <typename T = int32_t> T get_UdpPort() {
		return ((T (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128CB04))(this);
	}
	template <typename T = void> T set_UdpPort(int32_t value) {
		return ((T (*)(HelloUserToCoordinatorResponse*, int32_t))(Il2CppBase() + 0x128CB0C))(this, value);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128CB14))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(HelloUserToCoordinatorResponse*, int64_t))(Il2CppBase() + 0x128CB1C))(this, value);
	}
	template <typename T = uintptr_t> T get_WorldStatus() {
		return ((T (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128CB24))(this);
	}
	template <typename T = void> T set_WorldStatus(uintptr_t value) {
		return ((T (*)(HelloUserToCoordinatorResponse*, uintptr_t))(Il2CppBase() + 0x128CB2C))(this, value);
	}
	template <typename T = int64_t> T get_SessionID() {
		return ((T (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128CB34))(this);
	}
	template <typename T = void> T set_SessionID(int64_t value) {
		return ((T (*)(HelloUserToCoordinatorResponse*, int64_t))(Il2CppBase() + 0x128CB3C))(this, value);
	}
	template <typename T = uintptr_t> T get_Protocol() {
		return ((T (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128CB44))(this);
	}
	template <typename T = void> T set_Protocol(uintptr_t value) {
		return ((T (*)(HelloUserToCoordinatorResponse*, uintptr_t))(Il2CppBase() + 0x128CB4C))(this, value);
	}
	template <typename T = uintptr_t> T get_ResourcesType() {
		return ((T (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128CB54))(this);
	}
	template <typename T = void> T set_ResourcesType(uintptr_t value) {
		return ((T (*)(HelloUserToCoordinatorResponse*, uintptr_t))(Il2CppBase() + 0x128CB5C))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(HelloUserToCoordinatorResponse*, uintptr_t))(Il2CppBase() + 0x128CB64))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(HelloUserToCoordinatorResponse*, uintptr_t))(Il2CppBase() + 0x128CBD4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128CCA8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128CDEC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(HelloUserToCoordinatorResponse*, uintptr_t))(Il2CppBase() + 0x128CE50))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(HelloUserToCoordinatorResponse*))(Il2CppBase() + 0x128D018))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(HelloUserToCoordinatorResponse*, uintptr_t))(Il2CppBase() + 0x128D28C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(HelloUserToCoordinatorResponse*, uintptr_t))(Il2CppBase() + 0x128D338))(this, input);
	}

};

}
