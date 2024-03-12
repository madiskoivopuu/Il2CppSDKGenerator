#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetPvpRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetPvpRequest"));
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

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B564C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B56B0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AdminGetPvpRequest*))(Il2CppBase() + 0x18B57D0))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(AdminGetPvpRequest*))(Il2CppBase() + 0x18B5868))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(AdminGetPvpRequest*))(Il2CppBase() + 0x18B58D4))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(AdminGetPvpRequest*, int64_t))(Il2CppBase() + 0x18B58DC))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(AdminGetPvpRequest*, uintptr_t))(Il2CppBase() + 0x18B58E4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(AdminGetPvpRequest*, uintptr_t))(Il2CppBase() + 0x18B5970))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdminGetPvpRequest*))(Il2CppBase() + 0x18B59A0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AdminGetPvpRequest*))(Il2CppBase() + 0x18B59E0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AdminGetPvpRequest*, uintptr_t))(Il2CppBase() + 0x18B5A44))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AdminGetPvpRequest*))(Il2CppBase() + 0x18B5A9C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(AdminGetPvpRequest*, uintptr_t))(Il2CppBase() + 0x18B5B18))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AdminGetPvpRequest*, uintptr_t))(Il2CppBase() + 0x18B5B2C))(this, input);
	}

};

}
