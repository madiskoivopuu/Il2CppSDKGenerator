#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class MailIncomeRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "MailIncomeRequest"));
	}

	 static MessageParser1<ProtoModels::MailIncomeRequest*>*& _parser() {
		return *(MessageParser1<ProtoModels::MailIncomeRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& MailsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::Mail*>*& _repeated_mails_codec() {
		return *(FieldCodec1<ProtoModels::Mail*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::Mail*>*& mails_() {
		return *(RepeatedField1<ProtoModels::Mail*>**)((uintptr_t)this + 0x18);
	}

	 static MessageParser1<ProtoModels::MailIncomeRequest*>* get_Parser() {
		return ((MessageParser1<ProtoModels::MailIncomeRequest*>* (*)(void *))(Il2CppBase() + 0x125CBB8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x125CC1C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(MailIncomeRequest*))(Il2CppBase() + 0x125CD3C))(this);
	}
	template <typename R = ProtoModels::MailIncomeRequest*> R Clone() {
		return ((R (*)(MailIncomeRequest*))(Il2CppBase() + 0x125CE9C))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(MailIncomeRequest*))(Il2CppBase() + 0x125CEF8))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(MailIncomeRequest*, int64_t))(Il2CppBase() + 0x125CF00))(this, value);
	}
	 RepeatedField1<ProtoModels::Mail*>* get_Mails() {
		return ((RepeatedField1<ProtoModels::Mail*>* (*)(MailIncomeRequest*))(Il2CppBase() + 0x125CF08))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(MailIncomeRequest*, Il2CppObject*))(Il2CppBase() + 0x125CF10))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::MailIncomeRequest* other) {
		return ((R (*)(MailIncomeRequest*, ProtoModels::MailIncomeRequest*))(Il2CppBase() + 0x125CF80))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(MailIncomeRequest*))(Il2CppBase() + 0x125D01C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(MailIncomeRequest*))(Il2CppBase() + 0x125D084))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(MailIncomeRequest*, uintptr_t))(Il2CppBase() + 0x125D0E8))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(MailIncomeRequest*))(Il2CppBase() + 0x125D1B4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::MailIncomeRequest* other) {
		return ((R (*)(MailIncomeRequest*, ProtoModels::MailIncomeRequest*))(Il2CppBase() + 0x125D298))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(MailIncomeRequest*, uintptr_t))(Il2CppBase() + 0x125D31C))(this, input);
	}

};

}
