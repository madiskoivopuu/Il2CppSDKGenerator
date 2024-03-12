#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class SendPushMessageRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "SendPushMessageRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TokensFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_tokens_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& tokens_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& MessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& message_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& TitleFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& title_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& LanguageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& language_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x13647A8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x136480C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(SendPushMessageRequest*))(Il2CppBase() + 0x136492C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(SendPushMessageRequest*))(Il2CppBase() + 0x1364AE4))(this);
	}
	template <typename T = void*> T get_Tokens() {
		return ((T (*)(SendPushMessageRequest*))(Il2CppBase() + 0x1364B40))(this);
	}
	template <typename T = Il2CppString*> T get_Message() {
		return ((T (*)(SendPushMessageRequest*))(Il2CppBase() + 0x1364B48))(this);
	}
	template <typename T = void> T set_Message(Il2CppString* value) {
		return ((T (*)(SendPushMessageRequest*, Il2CppString*))(Il2CppBase() + 0x1364B50))(this, value);
	}
	template <typename T = Il2CppString*> T get_Title() {
		return ((T (*)(SendPushMessageRequest*))(Il2CppBase() + 0x1364BD0))(this);
	}
	template <typename T = void> T set_Title(Il2CppString* value) {
		return ((T (*)(SendPushMessageRequest*, Il2CppString*))(Il2CppBase() + 0x1364BD8))(this, value);
	}
	template <typename T = int32_t> T get_Language() {
		return ((T (*)(SendPushMessageRequest*))(Il2CppBase() + 0x1364C58))(this);
	}
	template <typename T = void> T set_Language(int32_t value) {
		return ((T (*)(SendPushMessageRequest*, int32_t))(Il2CppBase() + 0x1364C60))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(SendPushMessageRequest*, uintptr_t))(Il2CppBase() + 0x1364C68))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(SendPushMessageRequest*, uintptr_t))(Il2CppBase() + 0x1364CD8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(SendPushMessageRequest*))(Il2CppBase() + 0x1364D98))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(SendPushMessageRequest*))(Il2CppBase() + 0x1364E40))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(SendPushMessageRequest*, uintptr_t))(Il2CppBase() + 0x1364EA4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(SendPushMessageRequest*))(Il2CppBase() + 0x1364FE8))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(SendPushMessageRequest*, uintptr_t))(Il2CppBase() + 0x136515C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(SendPushMessageRequest*, uintptr_t))(Il2CppBase() + 0x1365204))(this, input);
	}

};

}
