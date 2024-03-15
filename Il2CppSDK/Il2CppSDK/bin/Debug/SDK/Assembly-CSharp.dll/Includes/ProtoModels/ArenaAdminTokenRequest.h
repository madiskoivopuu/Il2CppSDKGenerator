#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaAdminTokenRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaAdminTokenRequest"));
	}

	 static MessageParser1ProtoModels::ArenaAdminTokenRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaAdminTokenRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& TokenFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& token_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::ArenaAdminTokenRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaAdminTokenRequest*>* (*)(void *))(Il2CppBase() + 0x1A14360))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A143C4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaAdminTokenRequest*))(Il2CppBase() + 0x1A144E4))(this);
	}
	template <typename R = ProtoModels::ArenaAdminTokenRequest*> R Clone() {
		return ((R (*)(ArenaAdminTokenRequest*))(Il2CppBase() + 0x1A14638))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaAdminTokenRequest*))(Il2CppBase() + 0x1A14694))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaAdminTokenRequest*, int64_t))(Il2CppBase() + 0x1A1469C))(this, value);
	}
	template <typename R = uintptr_t> R get_Token() {
		return ((R (*)(ArenaAdminTokenRequest*))(Il2CppBase() + 0x1A146A4))(this);
	}
	template <typename R = void> R set_Token(uintptr_t value) {
		return ((R (*)(ArenaAdminTokenRequest*, uintptr_t))(Il2CppBase() + 0x1A146AC))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaAdminTokenRequest*, Il2CppObject*))(Il2CppBase() + 0x1A1472C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaAdminTokenRequest* other) {
		return ((R (*)(ArenaAdminTokenRequest*, ProtoModels::ArenaAdminTokenRequest*))(Il2CppBase() + 0x1A1479C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaAdminTokenRequest*))(Il2CppBase() + 0x1A14850))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaAdminTokenRequest*))(Il2CppBase() + 0x1A148D0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaAdminTokenRequest*, uintptr_t))(Il2CppBase() + 0x1A14934))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaAdminTokenRequest*))(Il2CppBase() + 0x1A149C4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaAdminTokenRequest* other) {
		return ((R (*)(ArenaAdminTokenRequest*, ProtoModels::ArenaAdminTokenRequest*))(Il2CppBase() + 0x1A14A8C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaAdminTokenRequest*, uintptr_t))(Il2CppBase() + 0x1A14AE8))(this, input);
	}

};

}
