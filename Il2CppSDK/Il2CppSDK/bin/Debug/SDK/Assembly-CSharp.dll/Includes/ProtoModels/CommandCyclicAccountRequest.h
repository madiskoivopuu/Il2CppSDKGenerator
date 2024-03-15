#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CommandCyclicAccountRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CommandCyclicAccountRequest"));
	}

	 static MessageParser1ProtoModels::CommandCyclicAccountRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::CommandCyclicAccountRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CmdFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::CommandCyclicAccountType*> R& cmd_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& DeviceIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& deviceID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& GameCenterIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& gameCenterID_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& HuaweyIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& huaweyID_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& FirebaseIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& firebaseID_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& GoogleIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& googleID_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	 static MessageParser1ProtoModels::CommandCyclicAccountRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::CommandCyclicAccountRequest*>* (*)(void *))(Il2CppBase() + 0xE27708))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xE2776C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE2788C))(this);
	}
	template <typename R = ProtoModels::CommandCyclicAccountRequest*> R Clone() {
		return ((R (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE27A14))(this);
	}
	template <typename R = ProtoModels::CommandCyclicAccountType*> R get_Cmd() {
		return ((R (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE27A70))(this);
	}
	template <typename R = void> R set_Cmd(ProtoModels::CommandCyclicAccountType* value) {
		return ((R (*)(CommandCyclicAccountRequest*, ProtoModels::CommandCyclicAccountType*))(Il2CppBase() + 0xE27A78))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE27A80))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(CommandCyclicAccountRequest*, int64_t))(Il2CppBase() + 0xE27A88))(this, value);
	}
	template <typename R = Il2CppString*> R get_DeviceID() {
		return ((R (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE27A90))(this);
	}
	template <typename R = void> R set_DeviceID(Il2CppString* value) {
		return ((R (*)(CommandCyclicAccountRequest*, Il2CppString*))(Il2CppBase() + 0xE27A98))(this, value);
	}
	template <typename R = Il2CppString*> R get_GameCenterID() {
		return ((R (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE27B18))(this);
	}
	template <typename R = void> R set_GameCenterID(Il2CppString* value) {
		return ((R (*)(CommandCyclicAccountRequest*, Il2CppString*))(Il2CppBase() + 0xE27B20))(this, value);
	}
	template <typename R = Il2CppString*> R get_HuaweyID() {
		return ((R (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE27BA0))(this);
	}
	template <typename R = void> R set_HuaweyID(Il2CppString* value) {
		return ((R (*)(CommandCyclicAccountRequest*, Il2CppString*))(Il2CppBase() + 0xE27BA8))(this, value);
	}
	template <typename R = Il2CppString*> R get_FirebaseID() {
		return ((R (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE27C28))(this);
	}
	template <typename R = void> R set_FirebaseID(Il2CppString* value) {
		return ((R (*)(CommandCyclicAccountRequest*, Il2CppString*))(Il2CppBase() + 0xE27C30))(this, value);
	}
	template <typename R = Il2CppString*> R get_GoogleID() {
		return ((R (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE27CB0))(this);
	}
	template <typename R = void> R set_GoogleID(Il2CppString* value) {
		return ((R (*)(CommandCyclicAccountRequest*, Il2CppString*))(Il2CppBase() + 0xE27CB8))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE27D38))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(CommandCyclicAccountRequest*, int64_t))(Il2CppBase() + 0xE27D40))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(CommandCyclicAccountRequest*, Il2CppObject*))(Il2CppBase() + 0xE27D48))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::CommandCyclicAccountRequest* other) {
		return ((R (*)(CommandCyclicAccountRequest*, ProtoModels::CommandCyclicAccountRequest*))(Il2CppBase() + 0xE27DB8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE27E88))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE27FB8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(CommandCyclicAccountRequest*, uintptr_t))(Il2CppBase() + 0xE2801C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE281D0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::CommandCyclicAccountRequest* other) {
		return ((R (*)(CommandCyclicAccountRequest*, ProtoModels::CommandCyclicAccountRequest*))(Il2CppBase() + 0xE28420))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(CommandCyclicAccountRequest*, uintptr_t))(Il2CppBase() + 0xE284E4))(this, input);
	}

};

}
