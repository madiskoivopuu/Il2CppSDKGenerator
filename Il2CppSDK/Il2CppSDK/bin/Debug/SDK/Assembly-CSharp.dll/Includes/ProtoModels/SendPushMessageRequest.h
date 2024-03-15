#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class SendPushMessageRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "SendPushMessageRequest"));
	}

	 static MessageParser1ProtoModels::SendPushMessageRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::SendPushMessageRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& TokensFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1Il2CppString*>*& _repeated_tokens_codec() {
		return *(FieldCodec1Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1Il2CppString*>*& tokens_() {
		return *(RepeatedField1Il2CppString*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& MessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& message_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& TitleFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& title_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& LanguageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& language_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1ProtoModels::SendPushMessageRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::SendPushMessageRequest*>* (*)(void *))(Il2CppBase() + 0x13647A8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x136480C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(SendPushMessageRequest*))(Il2CppBase() + 0x136492C))(this);
	}
	template <typename R = ProtoModels::SendPushMessageRequest*> R Clone() {
		return ((R (*)(SendPushMessageRequest*))(Il2CppBase() + 0x1364AE4))(this);
	}
	 RepeatedField1Il2CppString*>* get_Tokens() {
		return ((RepeatedField1Il2CppString*>* (*)(SendPushMessageRequest*))(Il2CppBase() + 0x1364B40))(this);
	}
	template <typename R = Il2CppString*> R get_Message() {
		return ((R (*)(SendPushMessageRequest*))(Il2CppBase() + 0x1364B48))(this);
	}
	template <typename R = void> R set_Message(Il2CppString* value) {
		return ((R (*)(SendPushMessageRequest*, Il2CppString*))(Il2CppBase() + 0x1364B50))(this, value);
	}
	template <typename R = Il2CppString*> R get_Title() {
		return ((R (*)(SendPushMessageRequest*))(Il2CppBase() + 0x1364BD0))(this);
	}
	template <typename R = void> R set_Title(Il2CppString* value) {
		return ((R (*)(SendPushMessageRequest*, Il2CppString*))(Il2CppBase() + 0x1364BD8))(this, value);
	}
	template <typename R = int32_t> R get_Language() {
		return ((R (*)(SendPushMessageRequest*))(Il2CppBase() + 0x1364C58))(this);
	}
	template <typename R = void> R set_Language(int32_t value) {
		return ((R (*)(SendPushMessageRequest*, int32_t))(Il2CppBase() + 0x1364C60))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(SendPushMessageRequest*, Il2CppObject*))(Il2CppBase() + 0x1364C68))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::SendPushMessageRequest* other) {
		return ((R (*)(SendPushMessageRequest*, ProtoModels::SendPushMessageRequest*))(Il2CppBase() + 0x1364CD8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(SendPushMessageRequest*))(Il2CppBase() + 0x1364D98))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(SendPushMessageRequest*))(Il2CppBase() + 0x1364E40))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(SendPushMessageRequest*, uintptr_t))(Il2CppBase() + 0x1364EA4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(SendPushMessageRequest*))(Il2CppBase() + 0x1364FE8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::SendPushMessageRequest* other) {
		return ((R (*)(SendPushMessageRequest*, ProtoModels::SendPushMessageRequest*))(Il2CppBase() + 0x136515C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(SendPushMessageRequest*, uintptr_t))(Il2CppBase() + 0x1365204))(this, input);
	}

};

}
