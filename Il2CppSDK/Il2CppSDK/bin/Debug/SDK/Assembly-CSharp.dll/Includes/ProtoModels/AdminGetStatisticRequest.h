#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetStatisticRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetStatisticRequest"));
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
		return ((T (*)(void *))(Il2CppBase() + 0x18B68A0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B6904))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AdminGetStatisticRequest*))(Il2CppBase() + 0x18B6A24))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(AdminGetStatisticRequest*))(Il2CppBase() + 0x18B6ABC))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(AdminGetStatisticRequest*))(Il2CppBase() + 0x18B6B28))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(AdminGetStatisticRequest*, int64_t))(Il2CppBase() + 0x18B6B30))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(AdminGetStatisticRequest*, uintptr_t))(Il2CppBase() + 0x18B6B38))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(AdminGetStatisticRequest*, uintptr_t))(Il2CppBase() + 0x18B6BC4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdminGetStatisticRequest*))(Il2CppBase() + 0x18B6BF4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AdminGetStatisticRequest*))(Il2CppBase() + 0x18B6C34))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AdminGetStatisticRequest*, uintptr_t))(Il2CppBase() + 0x18B6C98))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AdminGetStatisticRequest*))(Il2CppBase() + 0x18B6CF0))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(AdminGetStatisticRequest*, uintptr_t))(Il2CppBase() + 0x18B6D6C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AdminGetStatisticRequest*, uintptr_t))(Il2CppBase() + 0x18B6D80))(this, input);
	}

};

}
