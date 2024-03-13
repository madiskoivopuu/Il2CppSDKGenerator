#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaLinkKefirResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaLinkKefirResponse"));
	}

	template <typename T = MessageParser1ArenaLinkKefirResponse*>*> static T& _parser() {
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
	template <typename T = int32_t> static T& UsersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = LinkKefirList*> T& users_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& KefirIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& kefirID_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& SuccessFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& success_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& SendedBonusFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& sendedBonus_() {
		return *(T*)((uintptr_t)this + 0x39);
	}

	template <typename T = MessageParser1ArenaLinkKefirResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E2CC58))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E2CCBC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2CDDC))(this);
	}
	template <typename T = ArenaLinkKefirResponse*> T Clone() {
		return ((T (*)(ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2CF34))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2CF90))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(ArenaLinkKefirResponse*, int32_t))(Il2CppBase() + 0x1E2CF98))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2CFA0))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(ArenaLinkKefirResponse*, Il2CppString*))(Il2CppBase() + 0x1E2CFA8))(this, value);
	}
	template <typename T = LinkKefirList*> T get_Users() {
		return ((T (*)(ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2D028))(this);
	}
	template <typename T = void> T set_Users(LinkKefirList* value) {
		return ((T (*)(ArenaLinkKefirResponse*, LinkKefirList*))(Il2CppBase() + 0x1E2D030))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2D038))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaLinkKefirResponse*, int64_t))(Il2CppBase() + 0x1E2D040))(this, value);
	}
	template <typename T = Il2CppString*> T get_KefirID() {
		return ((T (*)(ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2D048))(this);
	}
	template <typename T = void> T set_KefirID(Il2CppString* value) {
		return ((T (*)(ArenaLinkKefirResponse*, Il2CppString*))(Il2CppBase() + 0x1E2D050))(this, value);
	}
	template <typename T = bool> T get_Success() {
		return ((T (*)(ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2D0D0))(this);
	}
	template <typename T = void> T set_Success(bool value) {
		return ((T (*)(ArenaLinkKefirResponse*, bool))(Il2CppBase() + 0x1E2D0D8))(this, value);
	}
	template <typename T = bool> T get_SendedBonus() {
		return ((T (*)(ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2D0E4))(this);
	}
	template <typename T = void> T set_SendedBonus(bool value) {
		return ((T (*)(ArenaLinkKefirResponse*, bool))(Il2CppBase() + 0x1E2D0EC))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaLinkKefirResponse*, Il2CppObject*))(Il2CppBase() + 0x1E2D0F8))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaLinkKefirResponse* other) {
		return ((T (*)(ArenaLinkKefirResponse*, ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2D168))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2D23C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2D34C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaLinkKefirResponse*, uintptr_t))(Il2CppBase() + 0x1E2D3B0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2D520))(this);
	}
	template <typename T = void> T MergeFrom(ArenaLinkKefirResponse* other) {
		return ((T (*)(ArenaLinkKefirResponse*, ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2D6C8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaLinkKefirResponse*, uintptr_t))(Il2CppBase() + 0x1E2D7CC))(this, input);
	}

};

}
