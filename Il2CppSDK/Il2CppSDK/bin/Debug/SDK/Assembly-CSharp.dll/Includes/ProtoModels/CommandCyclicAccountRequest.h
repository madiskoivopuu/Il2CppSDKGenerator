#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CommandCyclicAccountRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CommandCyclicAccountRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CmdFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& cmd_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& DeviceIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& deviceID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& GameCenterIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& gameCenterID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& HuaweyIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& huaweyID_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& FirebaseIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& firebaseID_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& GoogleIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& googleID_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xE27708))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xE2776C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE2788C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE27A14))(this);
	}
	template <typename T = uintptr_t> T get_Cmd() {
		return ((T (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE27A70))(this);
	}
	template <typename T = void> T set_Cmd(uintptr_t value) {
		return ((T (*)(CommandCyclicAccountRequest*, uintptr_t))(Il2CppBase() + 0xE27A78))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE27A80))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(CommandCyclicAccountRequest*, int64_t))(Il2CppBase() + 0xE27A88))(this, value);
	}
	template <typename T = Il2CppString*> T get_DeviceID() {
		return ((T (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE27A90))(this);
	}
	template <typename T = void> T set_DeviceID(Il2CppString* value) {
		return ((T (*)(CommandCyclicAccountRequest*, Il2CppString*))(Il2CppBase() + 0xE27A98))(this, value);
	}
	template <typename T = Il2CppString*> T get_GameCenterID() {
		return ((T (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE27B18))(this);
	}
	template <typename T = void> T set_GameCenterID(Il2CppString* value) {
		return ((T (*)(CommandCyclicAccountRequest*, Il2CppString*))(Il2CppBase() + 0xE27B20))(this, value);
	}
	template <typename T = Il2CppString*> T get_HuaweyID() {
		return ((T (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE27BA0))(this);
	}
	template <typename T = void> T set_HuaweyID(Il2CppString* value) {
		return ((T (*)(CommandCyclicAccountRequest*, Il2CppString*))(Il2CppBase() + 0xE27BA8))(this, value);
	}
	template <typename T = Il2CppString*> T get_FirebaseID() {
		return ((T (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE27C28))(this);
	}
	template <typename T = void> T set_FirebaseID(Il2CppString* value) {
		return ((T (*)(CommandCyclicAccountRequest*, Il2CppString*))(Il2CppBase() + 0xE27C30))(this, value);
	}
	template <typename T = Il2CppString*> T get_GoogleID() {
		return ((T (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE27CB0))(this);
	}
	template <typename T = void> T set_GoogleID(Il2CppString* value) {
		return ((T (*)(CommandCyclicAccountRequest*, Il2CppString*))(Il2CppBase() + 0xE27CB8))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE27D38))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(CommandCyclicAccountRequest*, int64_t))(Il2CppBase() + 0xE27D40))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(CommandCyclicAccountRequest*, uintptr_t))(Il2CppBase() + 0xE27D48))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(CommandCyclicAccountRequest*, uintptr_t))(Il2CppBase() + 0xE27DB8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE27E88))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE27FB8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(CommandCyclicAccountRequest*, uintptr_t))(Il2CppBase() + 0xE2801C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(CommandCyclicAccountRequest*))(Il2CppBase() + 0xE281D0))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(CommandCyclicAccountRequest*, uintptr_t))(Il2CppBase() + 0xE28420))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(CommandCyclicAccountRequest*, uintptr_t))(Il2CppBase() + 0xE284E4))(this, input);
	}

};

}
