#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaWorldCreateResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaWorldCreateResponse"));
	}

	template <typename T = MessageParser1ArenaWorldCreateResponse*>*> static T& _parser() {
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
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& IsGlobalMapFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& isGlobalMap_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = MessageParser1ArenaWorldCreateResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A505A8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A5060C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaWorldCreateResponse*))(Il2CppBase() + 0x1A5072C))(this);
	}
	template <typename T = ArenaWorldCreateResponse*> T Clone() {
		return ((T (*)(ArenaWorldCreateResponse*))(Il2CppBase() + 0x1A5083C))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(ArenaWorldCreateResponse*))(Il2CppBase() + 0x1A50898))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(ArenaWorldCreateResponse*, int32_t))(Il2CppBase() + 0x1A508A0))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(ArenaWorldCreateResponse*))(Il2CppBase() + 0x1A508A8))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(ArenaWorldCreateResponse*, Il2CppString*))(Il2CppBase() + 0x1A508B0))(this, value);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(ArenaWorldCreateResponse*))(Il2CppBase() + 0x1A50930))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(ArenaWorldCreateResponse*, int64_t))(Il2CppBase() + 0x1A50938))(this, value);
	}
	template <typename T = bool> T get_IsGlobalMap() {
		return ((T (*)(ArenaWorldCreateResponse*))(Il2CppBase() + 0x1A50940))(this);
	}
	template <typename T = void> T set_IsGlobalMap(bool value) {
		return ((T (*)(ArenaWorldCreateResponse*, bool))(Il2CppBase() + 0x1A50948))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaWorldCreateResponse*))(Il2CppBase() + 0x1A50954))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaWorldCreateResponse*, int64_t))(Il2CppBase() + 0x1A5095C))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaWorldCreateResponse*, Il2CppObject*))(Il2CppBase() + 0x1A50964))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaWorldCreateResponse* other) {
		return ((T (*)(ArenaWorldCreateResponse*, ArenaWorldCreateResponse*))(Il2CppBase() + 0x1A509D4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaWorldCreateResponse*))(Il2CppBase() + 0x1A50A74))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaWorldCreateResponse*))(Il2CppBase() + 0x1A50B48))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaWorldCreateResponse*, uintptr_t))(Il2CppBase() + 0x1A50BAC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaWorldCreateResponse*))(Il2CppBase() + 0x1A50CBC))(this);
	}
	template <typename T = void> T MergeFrom(ArenaWorldCreateResponse* other) {
		return ((T (*)(ArenaWorldCreateResponse*, ArenaWorldCreateResponse*))(Il2CppBase() + 0x1A50E14))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaWorldCreateResponse*, uintptr_t))(Il2CppBase() + 0x1A50E84))(this, input);
	}

};

}
