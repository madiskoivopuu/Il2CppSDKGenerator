#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GetUserFCMTokenResponce
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GetUserFCMTokenResponce"));
	}

	 static MessageParser1ProtoModels::GetUserFCMTokenResponce*>*& _parser() {
		return *(MessageParser1ProtoModels::GetUserFCMTokenResponce*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& TokensFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1Il2CppString*>*& _repeated_tokens_codec() {
		return *(FieldCodec1Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1Il2CppString*>*& tokens_() {
		return *(RepeatedField1Il2CppString*>**)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::GetUserFCMTokenResponce*>* get_Parser() {
		return ((MessageParser1ProtoModels::GetUserFCMTokenResponce*>* (*)(void *))(Il2CppBase() + 0x17717B4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1771818))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GetUserFCMTokenResponce*))(Il2CppBase() + 0x1771938))(this);
	}
	template <typename R = ProtoModels::GetUserFCMTokenResponce*> R Clone() {
		return ((R (*)(GetUserFCMTokenResponce*))(Il2CppBase() + 0x1771ACC))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(GetUserFCMTokenResponce*))(Il2CppBase() + 0x1771B28))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(GetUserFCMTokenResponce*, int32_t))(Il2CppBase() + 0x1771B30))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(GetUserFCMTokenResponce*))(Il2CppBase() + 0x1771B38))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(GetUserFCMTokenResponce*, Il2CppString*))(Il2CppBase() + 0x1771B40))(this, value);
	}
	 RepeatedField1Il2CppString*>* get_Tokens() {
		return ((RepeatedField1Il2CppString*>* (*)(GetUserFCMTokenResponce*))(Il2CppBase() + 0x1771BC0))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GetUserFCMTokenResponce*, Il2CppObject*))(Il2CppBase() + 0x1771BC8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GetUserFCMTokenResponce* other) {
		return ((R (*)(GetUserFCMTokenResponce*, ProtoModels::GetUserFCMTokenResponce*))(Il2CppBase() + 0x1771C38))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GetUserFCMTokenResponce*))(Il2CppBase() + 0x1771CE8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GetUserFCMTokenResponce*))(Il2CppBase() + 0x1771D70))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GetUserFCMTokenResponce*, uintptr_t))(Il2CppBase() + 0x1771DD4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GetUserFCMTokenResponce*))(Il2CppBase() + 0x1771EE4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GetUserFCMTokenResponce* other) {
		return ((R (*)(GetUserFCMTokenResponce*, ProtoModels::GetUserFCMTokenResponce*))(Il2CppBase() + 0x1772014))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GetUserFCMTokenResponce*, uintptr_t))(Il2CppBase() + 0x17720B0))(this, input);
	}

};

}
