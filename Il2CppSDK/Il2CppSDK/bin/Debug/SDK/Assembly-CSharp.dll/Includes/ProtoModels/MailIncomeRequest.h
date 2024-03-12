#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class MailIncomeRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "MailIncomeRequest"));
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
	template <typename T = int32_t> static T& MailsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_mails_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& mails_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x125CBB8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x125CC1C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(MailIncomeRequest*))(Il2CppBase() + 0x125CD3C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(MailIncomeRequest*))(Il2CppBase() + 0x125CE9C))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(MailIncomeRequest*))(Il2CppBase() + 0x125CEF8))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(MailIncomeRequest*, int64_t))(Il2CppBase() + 0x125CF00))(this, value);
	}
	template <typename T = void*> T get_Mails() {
		return ((T (*)(MailIncomeRequest*))(Il2CppBase() + 0x125CF08))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(MailIncomeRequest*, uintptr_t))(Il2CppBase() + 0x125CF10))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(MailIncomeRequest*, uintptr_t))(Il2CppBase() + 0x125CF80))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(MailIncomeRequest*))(Il2CppBase() + 0x125D01C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MailIncomeRequest*))(Il2CppBase() + 0x125D084))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(MailIncomeRequest*, uintptr_t))(Il2CppBase() + 0x125D0E8))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(MailIncomeRequest*))(Il2CppBase() + 0x125D1B4))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(MailIncomeRequest*, uintptr_t))(Il2CppBase() + 0x125D298))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(MailIncomeRequest*, uintptr_t))(Il2CppBase() + 0x125D31C))(this, input);
	}

};

}
