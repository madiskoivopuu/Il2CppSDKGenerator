#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetWorldsRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetWorldsRequest"));
	}

	template <typename T = MessageParser1AdminGetWorldsRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& IsWorldFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isWorld_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1AdminGetWorldsRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x18BAA1C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x18BAA80))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AdminGetWorldsRequest*))(Il2CppBase() + 0x18BABA0))(this);
	}
	template <typename T = AdminGetWorldsRequest*> T Clone() {
		return ((T (*)(AdminGetWorldsRequest*))(Il2CppBase() + 0x18BAC40))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(AdminGetWorldsRequest*))(Il2CppBase() + 0x18BAC9C))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(AdminGetWorldsRequest*, int64_t))(Il2CppBase() + 0x18BACA4))(this, value);
	}
	template <typename T = bool> T get_IsWorld() {
		return ((T (*)(AdminGetWorldsRequest*))(Il2CppBase() + 0x18BACAC))(this);
	}
	template <typename T = void> T set_IsWorld(bool value) {
		return ((T (*)(AdminGetWorldsRequest*, bool))(Il2CppBase() + 0x18BACB4))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(AdminGetWorldsRequest*, Il2CppObject*))(Il2CppBase() + 0x18BACC0))(this, other);
	}
	template <typename T = bool> T Equals_1(AdminGetWorldsRequest* other) {
		return ((T (*)(AdminGetWorldsRequest*, AdminGetWorldsRequest*))(Il2CppBase() + 0x18BAD68))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdminGetWorldsRequest*))(Il2CppBase() + 0x18BADB4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AdminGetWorldsRequest*))(Il2CppBase() + 0x18BAE28))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AdminGetWorldsRequest*, uintptr_t))(Il2CppBase() + 0x18BAE8C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AdminGetWorldsRequest*))(Il2CppBase() + 0x18BAF10))(this);
	}
	template <typename T = void> T MergeFrom(AdminGetWorldsRequest* other) {
		return ((T (*)(AdminGetWorldsRequest*, AdminGetWorldsRequest*))(Il2CppBase() + 0x18BAF9C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AdminGetWorldsRequest*, uintptr_t))(Il2CppBase() + 0x18BAFBC))(this, input);
	}

};

}
