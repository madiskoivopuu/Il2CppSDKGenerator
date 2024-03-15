#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaLinkKefirResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaLinkKefirResponse"));
	}

	 static MessageParser1<ProtoModels::ArenaLinkKefirResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaLinkKefirResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& UsersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::LinkKefirList*> R& users_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& KefirIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& kefirID_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& SuccessFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& success_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& SendedBonusFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& sendedBonus_() {
		return *(R*)((uintptr_t)this + 0x39);
	}

	 static MessageParser1<ProtoModels::ArenaLinkKefirResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaLinkKefirResponse*>* (*)(void *))(Il2CppBase() + 0x1E2CC58))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E2CCBC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2CDDC))(this);
	}
	template <typename R = ProtoModels::ArenaLinkKefirResponse*> R Clone() {
		return ((R (*)(ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2CF34))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2CF90))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(ArenaLinkKefirResponse*, int32_t))(Il2CppBase() + 0x1E2CF98))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2CFA0))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(ArenaLinkKefirResponse*, Il2CppString*))(Il2CppBase() + 0x1E2CFA8))(this, value);
	}
	template <typename R = ProtoModels::LinkKefirList*> R get_Users() {
		return ((R (*)(ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2D028))(this);
	}
	template <typename R = void> R set_Users(ProtoModels::LinkKefirList* value) {
		return ((R (*)(ArenaLinkKefirResponse*, ProtoModels::LinkKefirList*))(Il2CppBase() + 0x1E2D030))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2D038))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaLinkKefirResponse*, int64_t))(Il2CppBase() + 0x1E2D040))(this, value);
	}
	template <typename R = Il2CppString*> R get_KefirID() {
		return ((R (*)(ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2D048))(this);
	}
	template <typename R = void> R set_KefirID(Il2CppString* value) {
		return ((R (*)(ArenaLinkKefirResponse*, Il2CppString*))(Il2CppBase() + 0x1E2D050))(this, value);
	}
	template <typename R = bool> R get_Success() {
		return ((R (*)(ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2D0D0))(this);
	}
	template <typename R = void> R set_Success(bool value) {
		return ((R (*)(ArenaLinkKefirResponse*, bool))(Il2CppBase() + 0x1E2D0D8))(this, value);
	}
	template <typename R = bool> R get_SendedBonus() {
		return ((R (*)(ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2D0E4))(this);
	}
	template <typename R = void> R set_SendedBonus(bool value) {
		return ((R (*)(ArenaLinkKefirResponse*, bool))(Il2CppBase() + 0x1E2D0EC))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaLinkKefirResponse*, Il2CppObject*))(Il2CppBase() + 0x1E2D0F8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaLinkKefirResponse* other) {
		return ((R (*)(ArenaLinkKefirResponse*, ProtoModels::ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2D168))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2D23C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2D34C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaLinkKefirResponse*, uintptr_t))(Il2CppBase() + 0x1E2D3B0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2D520))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaLinkKefirResponse* other) {
		return ((R (*)(ArenaLinkKefirResponse*, ProtoModels::ArenaLinkKefirResponse*))(Il2CppBase() + 0x1E2D6C8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaLinkKefirResponse*, uintptr_t))(Il2CppBase() + 0x1E2D7CC))(this, input);
	}

};

}
