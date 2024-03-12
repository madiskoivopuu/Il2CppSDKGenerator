#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Dev2DevRequests
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Dev2DevRequests"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& RequestsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_requests_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& requests_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xEC0C44))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xEC0CA8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(Dev2DevRequests*))(Il2CppBase() + 0xEC0DC8))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(Dev2DevRequests*))(Il2CppBase() + 0xEC0F20))(this);
	}
	template <typename T = void*> T get_Requests() {
		return ((T (*)(Dev2DevRequests*))(Il2CppBase() + 0xEC0F7C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Dev2DevRequests*, uintptr_t))(Il2CppBase() + 0xEC0F84))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(Dev2DevRequests*, uintptr_t))(Il2CppBase() + 0xEC0FF4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Dev2DevRequests*))(Il2CppBase() + 0xEC1080))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Dev2DevRequests*))(Il2CppBase() + 0xEC10AC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(Dev2DevRequests*, uintptr_t))(Il2CppBase() + 0xEC1110))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(Dev2DevRequests*))(Il2CppBase() + 0xEC11B0))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(Dev2DevRequests*, uintptr_t))(Il2CppBase() + 0xEC1240))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(Dev2DevRequests*, uintptr_t))(Il2CppBase() + 0xEC12B8))(this, input);
	}

};

}
