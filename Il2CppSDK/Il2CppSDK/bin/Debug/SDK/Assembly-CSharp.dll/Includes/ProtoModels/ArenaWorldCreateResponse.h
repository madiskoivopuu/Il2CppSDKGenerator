#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaWorldCreateResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaWorldCreateResponse"));
	}

	 static MessageParser1<ProtoModels::ArenaWorldCreateResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaWorldCreateResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& IsGlobalMapFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& isGlobalMap_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 static MessageParser1<ProtoModels::ArenaWorldCreateResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaWorldCreateResponse*>* (*)(void *))(Il2CppBase() + 0x1A505A8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A5060C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaWorldCreateResponse*))(Il2CppBase() + 0x1A5072C))(this);
	}
	template <typename R = ProtoModels::ArenaWorldCreateResponse*> R Clone() {
		return ((R (*)(ArenaWorldCreateResponse*))(Il2CppBase() + 0x1A5083C))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(ArenaWorldCreateResponse*))(Il2CppBase() + 0x1A50898))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(ArenaWorldCreateResponse*, int32_t))(Il2CppBase() + 0x1A508A0))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(ArenaWorldCreateResponse*))(Il2CppBase() + 0x1A508A8))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(ArenaWorldCreateResponse*, Il2CppString*))(Il2CppBase() + 0x1A508B0))(this, value);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(ArenaWorldCreateResponse*))(Il2CppBase() + 0x1A50930))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(ArenaWorldCreateResponse*, int64_t))(Il2CppBase() + 0x1A50938))(this, value);
	}
	template <typename R = bool> R get_IsGlobalMap() {
		return ((R (*)(ArenaWorldCreateResponse*))(Il2CppBase() + 0x1A50940))(this);
	}
	template <typename R = void> R set_IsGlobalMap(bool value) {
		return ((R (*)(ArenaWorldCreateResponse*, bool))(Il2CppBase() + 0x1A50948))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaWorldCreateResponse*))(Il2CppBase() + 0x1A50954))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaWorldCreateResponse*, int64_t))(Il2CppBase() + 0x1A5095C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaWorldCreateResponse*, Il2CppObject*))(Il2CppBase() + 0x1A50964))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaWorldCreateResponse* other) {
		return ((R (*)(ArenaWorldCreateResponse*, ProtoModels::ArenaWorldCreateResponse*))(Il2CppBase() + 0x1A509D4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaWorldCreateResponse*))(Il2CppBase() + 0x1A50A74))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaWorldCreateResponse*))(Il2CppBase() + 0x1A50B48))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaWorldCreateResponse*, uintptr_t))(Il2CppBase() + 0x1A50BAC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaWorldCreateResponse*))(Il2CppBase() + 0x1A50CBC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaWorldCreateResponse* other) {
		return ((R (*)(ArenaWorldCreateResponse*, ProtoModels::ArenaWorldCreateResponse*))(Il2CppBase() + 0x1A50E14))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaWorldCreateResponse*, uintptr_t))(Il2CppBase() + 0x1A50E84))(this, input);
	}

};

}
