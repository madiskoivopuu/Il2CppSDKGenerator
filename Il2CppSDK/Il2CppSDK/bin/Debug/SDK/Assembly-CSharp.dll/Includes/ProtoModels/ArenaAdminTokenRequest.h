#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaAdminTokenRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaAdminTokenRequest"));
	}

	template <typename T = MessageParser1ArenaAdminTokenRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& TokenFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& token_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1ArenaAdminTokenRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A14360))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A143C4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaAdminTokenRequest*))(Il2CppBase() + 0x1A144E4))(this);
	}
	template <typename T = ArenaAdminTokenRequest*> T Clone() {
		return ((T (*)(ArenaAdminTokenRequest*))(Il2CppBase() + 0x1A14638))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaAdminTokenRequest*))(Il2CppBase() + 0x1A14694))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaAdminTokenRequest*, int64_t))(Il2CppBase() + 0x1A1469C))(this, value);
	}
	template <typename T = uintptr_t> T get_Token() {
		return ((T (*)(ArenaAdminTokenRequest*))(Il2CppBase() + 0x1A146A4))(this);
	}
	template <typename T = void> T set_Token(uintptr_t value) {
		return ((T (*)(ArenaAdminTokenRequest*, uintptr_t))(Il2CppBase() + 0x1A146AC))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaAdminTokenRequest*, Il2CppObject*))(Il2CppBase() + 0x1A1472C))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaAdminTokenRequest* other) {
		return ((T (*)(ArenaAdminTokenRequest*, ArenaAdminTokenRequest*))(Il2CppBase() + 0x1A1479C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaAdminTokenRequest*))(Il2CppBase() + 0x1A14850))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaAdminTokenRequest*))(Il2CppBase() + 0x1A148D0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaAdminTokenRequest*, uintptr_t))(Il2CppBase() + 0x1A14934))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaAdminTokenRequest*))(Il2CppBase() + 0x1A149C4))(this);
	}
	template <typename T = void> T MergeFrom(ArenaAdminTokenRequest* other) {
		return ((T (*)(ArenaAdminTokenRequest*, ArenaAdminTokenRequest*))(Il2CppBase() + 0x1A14A8C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaAdminTokenRequest*, uintptr_t))(Il2CppBase() + 0x1A14AE8))(this, input);
	}

};

}
