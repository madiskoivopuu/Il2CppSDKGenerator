#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CreateClanRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CreateClanRequest"));
	}

	template <typename T = MessageParser1CreateClanRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1CreateClanRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x134BFC8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x134C02C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(CreateClanRequest*))(Il2CppBase() + 0x134C14C))(this);
	}
	template <typename T = CreateClanRequest*> T Clone() {
		return ((T (*)(CreateClanRequest*))(Il2CppBase() + 0x134C1EC))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(CreateClanRequest*))(Il2CppBase() + 0x134C248))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(CreateClanRequest*, int64_t))(Il2CppBase() + 0x134C250))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(CreateClanRequest*))(Il2CppBase() + 0x134C258))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(CreateClanRequest*, int64_t))(Il2CppBase() + 0x134C260))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(CreateClanRequest*, Il2CppObject*))(Il2CppBase() + 0x134C268))(this, other);
	}
	template <typename T = bool> T Equals_1(CreateClanRequest* other) {
		return ((T (*)(CreateClanRequest*, CreateClanRequest*))(Il2CppBase() + 0x134C304))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CreateClanRequest*))(Il2CppBase() + 0x134C344))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CreateClanRequest*))(Il2CppBase() + 0x134C3B0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(CreateClanRequest*, uintptr_t))(Il2CppBase() + 0x134C414))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(CreateClanRequest*))(Il2CppBase() + 0x134C498))(this);
	}
	template <typename T = void> T MergeFrom(CreateClanRequest* other) {
		return ((T (*)(CreateClanRequest*, CreateClanRequest*))(Il2CppBase() + 0x134C54C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(CreateClanRequest*, uintptr_t))(Il2CppBase() + 0x134C56C))(this, input);
	}

};

}
