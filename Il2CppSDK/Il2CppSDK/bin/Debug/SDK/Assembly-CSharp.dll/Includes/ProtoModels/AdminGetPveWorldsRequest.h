#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AdminGetPveWorldsRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AdminGetPveWorldsRequest"));
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
		return ((T (*)(void *))(Il2CppBase() + 0x18B43F8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x18B445C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(AdminGetPveWorldsRequest*))(Il2CppBase() + 0x18B457C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(AdminGetPveWorldsRequest*))(Il2CppBase() + 0x18B4614))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(AdminGetPveWorldsRequest*))(Il2CppBase() + 0x18B4680))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(AdminGetPveWorldsRequest*, int64_t))(Il2CppBase() + 0x18B4688))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(AdminGetPveWorldsRequest*, uintptr_t))(Il2CppBase() + 0x18B4690))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(AdminGetPveWorldsRequest*, uintptr_t))(Il2CppBase() + 0x18B471C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdminGetPveWorldsRequest*))(Il2CppBase() + 0x18B474C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AdminGetPveWorldsRequest*))(Il2CppBase() + 0x18B478C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(AdminGetPveWorldsRequest*, uintptr_t))(Il2CppBase() + 0x18B47F0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(AdminGetPveWorldsRequest*))(Il2CppBase() + 0x18B4848))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(AdminGetPveWorldsRequest*, uintptr_t))(Il2CppBase() + 0x18B48C4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(AdminGetPveWorldsRequest*, uintptr_t))(Il2CppBase() + 0x18B48D8))(this, input);
	}

};

}
