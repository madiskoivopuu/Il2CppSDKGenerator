#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CommandCyclicAccountToCyclicRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CommandCyclicAccountToCyclicRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& RequestFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& request_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& MasterAccountInfoFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& masterAccountInfo_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xE2876C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xE287D0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(CommandCyclicAccountToCyclicRequest*))(Il2CppBase() + 0xE288F0))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(CommandCyclicAccountToCyclicRequest*))(Il2CppBase() + 0xE289CC))(this);
	}
	template <typename T = uintptr_t> T get_Request() {
		return ((T (*)(CommandCyclicAccountToCyclicRequest*))(Il2CppBase() + 0xE28A28))(this);
	}
	template <typename T = void> T set_Request(uintptr_t value) {
		return ((T (*)(CommandCyclicAccountToCyclicRequest*, uintptr_t))(Il2CppBase() + 0xE28A30))(this, value);
	}
	template <typename T = uintptr_t> T get_MasterAccountInfo() {
		return ((T (*)(CommandCyclicAccountToCyclicRequest*))(Il2CppBase() + 0xE28A38))(this);
	}
	template <typename T = void> T set_MasterAccountInfo(uintptr_t value) {
		return ((T (*)(CommandCyclicAccountToCyclicRequest*, uintptr_t))(Il2CppBase() + 0xE28A40))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(CommandCyclicAccountToCyclicRequest*, uintptr_t))(Il2CppBase() + 0xE28A48))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(CommandCyclicAccountToCyclicRequest*, uintptr_t))(Il2CppBase() + 0xE28AB8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CommandCyclicAccountToCyclicRequest*))(Il2CppBase() + 0xE28B1C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CommandCyclicAccountToCyclicRequest*))(Il2CppBase() + 0xE28B74))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(CommandCyclicAccountToCyclicRequest*, uintptr_t))(Il2CppBase() + 0xE28BD8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(CommandCyclicAccountToCyclicRequest*))(Il2CppBase() + 0xE28C5C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(CommandCyclicAccountToCyclicRequest*, uintptr_t))(Il2CppBase() + 0xE28D10))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(CommandCyclicAccountToCyclicRequest*, uintptr_t))(Il2CppBase() + 0xE28E14))(this, input);
	}

};

}
