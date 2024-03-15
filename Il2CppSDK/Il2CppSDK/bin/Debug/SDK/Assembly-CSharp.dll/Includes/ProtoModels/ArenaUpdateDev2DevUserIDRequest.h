#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUpdateDev2DevUserIDRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUpdateDev2DevUserIDRequest"));
	}

	 static MessageParser1ProtoModels::ArenaUpdateDev2DevUserIDRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaUpdateDev2DevUserIDRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& Dev2DevIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& dev2DevID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::ArenaUpdateDev2DevUserIDRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaUpdateDev2DevUserIDRequest*>* (*)(void *))(Il2CppBase() + 0xF53370))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xF533D4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUpdateDev2DevUserIDRequest*))(Il2CppBase() + 0xF534F4))(this);
	}
	template <typename R = ProtoModels::ArenaUpdateDev2DevUserIDRequest*> R Clone() {
		return ((R (*)(ArenaUpdateDev2DevUserIDRequest*))(Il2CppBase() + 0xF535F4))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaUpdateDev2DevUserIDRequest*))(Il2CppBase() + 0xF53650))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaUpdateDev2DevUserIDRequest*, int64_t))(Il2CppBase() + 0xF53658))(this, value);
	}
	template <typename R = Il2CppString*> R get_Dev2DevID() {
		return ((R (*)(ArenaUpdateDev2DevUserIDRequest*))(Il2CppBase() + 0xF53660))(this);
	}
	template <typename R = void> R set_Dev2DevID(Il2CppString* value) {
		return ((R (*)(ArenaUpdateDev2DevUserIDRequest*, Il2CppString*))(Il2CppBase() + 0xF53668))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaUpdateDev2DevUserIDRequest*))(Il2CppBase() + 0xF536E8))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaUpdateDev2DevUserIDRequest*, int64_t))(Il2CppBase() + 0xF536F0))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUpdateDev2DevUserIDRequest*, Il2CppObject*))(Il2CppBase() + 0xF536F8))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUpdateDev2DevUserIDRequest* other) {
		return ((R (*)(ArenaUpdateDev2DevUserIDRequest*, ProtoModels::ArenaUpdateDev2DevUserIDRequest*))(Il2CppBase() + 0xF53768))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUpdateDev2DevUserIDRequest*))(Il2CppBase() + 0xF537D8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUpdateDev2DevUserIDRequest*))(Il2CppBase() + 0xF53868))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUpdateDev2DevUserIDRequest*, uintptr_t))(Il2CppBase() + 0xF538CC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUpdateDev2DevUserIDRequest*))(Il2CppBase() + 0xF53984))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUpdateDev2DevUserIDRequest* other) {
		return ((R (*)(ArenaUpdateDev2DevUserIDRequest*, ProtoModels::ArenaUpdateDev2DevUserIDRequest*))(Il2CppBase() + 0xF53A88))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUpdateDev2DevUserIDRequest*, uintptr_t))(Il2CppBase() + 0xF53AE0))(this, input);
	}

};

}
