#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GetUserFCMTokenResponce
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GetUserFCMTokenResponce"));
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
	template <typename T = int32_t> static T& TokensFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_tokens_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& tokens_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x17717B4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1771818))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GetUserFCMTokenResponce*))(Il2CppBase() + 0x1771938))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(GetUserFCMTokenResponce*))(Il2CppBase() + 0x1771ACC))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(GetUserFCMTokenResponce*))(Il2CppBase() + 0x1771B28))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(GetUserFCMTokenResponce*, int32_t))(Il2CppBase() + 0x1771B30))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(GetUserFCMTokenResponce*))(Il2CppBase() + 0x1771B38))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(GetUserFCMTokenResponce*, Il2CppString*))(Il2CppBase() + 0x1771B40))(this, value);
	}
	template <typename T = void*> T get_Tokens() {
		return ((T (*)(GetUserFCMTokenResponce*))(Il2CppBase() + 0x1771BC0))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(GetUserFCMTokenResponce*, uintptr_t))(Il2CppBase() + 0x1771BC8))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(GetUserFCMTokenResponce*, uintptr_t))(Il2CppBase() + 0x1771C38))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GetUserFCMTokenResponce*))(Il2CppBase() + 0x1771CE8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GetUserFCMTokenResponce*))(Il2CppBase() + 0x1771D70))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GetUserFCMTokenResponce*, uintptr_t))(Il2CppBase() + 0x1771DD4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GetUserFCMTokenResponce*))(Il2CppBase() + 0x1771EE4))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(GetUserFCMTokenResponce*, uintptr_t))(Il2CppBase() + 0x1772014))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GetUserFCMTokenResponce*, uintptr_t))(Il2CppBase() + 0x17720B0))(this, input);
	}

};

}
