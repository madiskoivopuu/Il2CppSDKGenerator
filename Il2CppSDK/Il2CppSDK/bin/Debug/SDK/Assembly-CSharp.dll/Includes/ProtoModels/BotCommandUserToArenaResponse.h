#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class BotCommandUserToArenaResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "BotCommandUserToArenaResponse"));
	}

	template <typename T = void*> static T& _parser() {
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
	template <typename T = int32_t> static T& SessionIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& sessionID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& InGlobalMapFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& inGlobalMap_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& ConnectedFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& connected_() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = int32_t> static T& OnlineFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& online_() {
		return *(T*)((uintptr_t)this + 0x32);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x16D1E7C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x16D1EE0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D2000))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D2120))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D217C))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(BotCommandUserToArenaResponse*, int32_t))(Il2CppBase() + 0x16D2184))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D218C))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(BotCommandUserToArenaResponse*, Il2CppString*))(Il2CppBase() + 0x16D2194))(this, value);
	}
	template <typename T = int64_t> T get_SessionID() {
		return ((T (*)(BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D2214))(this);
	}
	template <typename T = void> T set_SessionID(int64_t value) {
		return ((T (*)(BotCommandUserToArenaResponse*, int64_t))(Il2CppBase() + 0x16D221C))(this, value);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D2224))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(BotCommandUserToArenaResponse*, int64_t))(Il2CppBase() + 0x16D222C))(this, value);
	}
	template <typename T = bool> T get_InGlobalMap() {
		return ((T (*)(BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D2234))(this);
	}
	template <typename T = void> T set_InGlobalMap(bool value) {
		return ((T (*)(BotCommandUserToArenaResponse*, bool))(Il2CppBase() + 0x16D223C))(this, value);
	}
	template <typename T = bool> T get_Connected() {
		return ((T (*)(BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D2248))(this);
	}
	template <typename T = void> T set_Connected(bool value) {
		return ((T (*)(BotCommandUserToArenaResponse*, bool))(Il2CppBase() + 0x16D2250))(this, value);
	}
	template <typename T = bool> T get_Online() {
		return ((T (*)(BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D225C))(this);
	}
	template <typename T = void> T set_Online(bool value) {
		return ((T (*)(BotCommandUserToArenaResponse*, bool))(Il2CppBase() + 0x16D2264))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(BotCommandUserToArenaResponse*, uintptr_t))(Il2CppBase() + 0x16D2270))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(BotCommandUserToArenaResponse*, uintptr_t))(Il2CppBase() + 0x16D22E0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D23BC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D24D0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(BotCommandUserToArenaResponse*, uintptr_t))(Il2CppBase() + 0x16D2534))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(BotCommandUserToArenaResponse*))(Il2CppBase() + 0x16D269C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(BotCommandUserToArenaResponse*, uintptr_t))(Il2CppBase() + 0x16D2810))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(BotCommandUserToArenaResponse*, uintptr_t))(Il2CppBase() + 0x16D2898))(this, input);
	}

};

}
