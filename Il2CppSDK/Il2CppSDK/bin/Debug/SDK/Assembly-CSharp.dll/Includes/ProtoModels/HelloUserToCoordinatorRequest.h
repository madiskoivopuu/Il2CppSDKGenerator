#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class HelloUserToCoordinatorRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "HelloUserToCoordinatorRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x128BF78))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x128BFDC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(HelloUserToCoordinatorRequest*))(Il2CppBase() + 0x128C0FC))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(HelloUserToCoordinatorRequest*))(Il2CppBase() + 0x128C19C))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(HelloUserToCoordinatorRequest*))(Il2CppBase() + 0x128C1F8))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(HelloUserToCoordinatorRequest*, int64_t))(Il2CppBase() + 0x128C200))(this, value);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(HelloUserToCoordinatorRequest*))(Il2CppBase() + 0x128C208))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(HelloUserToCoordinatorRequest*, int64_t))(Il2CppBase() + 0x128C210))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(HelloUserToCoordinatorRequest*, uintptr_t))(Il2CppBase() + 0x128C218))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(HelloUserToCoordinatorRequest*, uintptr_t))(Il2CppBase() + 0x128C2B4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(HelloUserToCoordinatorRequest*))(Il2CppBase() + 0x128C2F4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(HelloUserToCoordinatorRequest*))(Il2CppBase() + 0x128C360))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(HelloUserToCoordinatorRequest*, uintptr_t))(Il2CppBase() + 0x128C3C4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(HelloUserToCoordinatorRequest*))(Il2CppBase() + 0x128C448))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(HelloUserToCoordinatorRequest*, uintptr_t))(Il2CppBase() + 0x128C4FC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(HelloUserToCoordinatorRequest*, uintptr_t))(Il2CppBase() + 0x128C51C))(this, input);
	}

};

}
