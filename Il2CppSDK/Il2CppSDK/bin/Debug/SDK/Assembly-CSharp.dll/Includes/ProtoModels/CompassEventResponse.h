#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CompassEventResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CompassEventResponse"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& MessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& message_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xE2C5B4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xE2C618))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(CompassEventResponse*))(Il2CppBase() + 0xE2C738))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(CompassEventResponse*))(Il2CppBase() + 0xE2C84C))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(CompassEventResponse*))(Il2CppBase() + 0xE2C8A8))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(CompassEventResponse*, int32_t))(Il2CppBase() + 0xE2C8B0))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(CompassEventResponse*))(Il2CppBase() + 0xE2C8B8))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(CompassEventResponse*, Il2CppString*))(Il2CppBase() + 0xE2C8C0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Message() {
		return ((T (*)(CompassEventResponse*))(Il2CppBase() + 0xE2C940))(this);
	}
	template <typename T = void> T set_Message(Il2CppString* value) {
		return ((T (*)(CompassEventResponse*, Il2CppString*))(Il2CppBase() + 0xE2C948))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(CompassEventResponse*, uintptr_t))(Il2CppBase() + 0xE2C9C8))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(CompassEventResponse*, uintptr_t))(Il2CppBase() + 0xE2CA38))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CompassEventResponse*))(Il2CppBase() + 0xE2CAB0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CompassEventResponse*))(Il2CppBase() + 0xE2CB44))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(CompassEventResponse*, uintptr_t))(Il2CppBase() + 0xE2CBA8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(CompassEventResponse*))(Il2CppBase() + 0xE2CC68))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(CompassEventResponse*, uintptr_t))(Il2CppBase() + 0xE2CD74))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(CompassEventResponse*, uintptr_t))(Il2CppBase() + 0xE2CDE0))(this, input);
	}

};

}
