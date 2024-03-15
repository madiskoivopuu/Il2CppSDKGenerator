#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaRenameClanRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaRenameClanRequest"));
	}

	 static MessageParser1ProtoModels::ArenaRenameClanRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaRenameClanRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::ArenaRenameClanRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaRenameClanRequest*>* (*)(void *))(Il2CppBase() + 0x1A95024))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1A95088))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaRenameClanRequest*))(Il2CppBase() + 0x1A951A8))(this);
	}
	template <typename R = ProtoModels::ArenaRenameClanRequest*> R Clone() {
		return ((R (*)(ArenaRenameClanRequest*))(Il2CppBase() + 0x1A952A8))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaRenameClanRequest*))(Il2CppBase() + 0x1A95304))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaRenameClanRequest*, int64_t))(Il2CppBase() + 0x1A9530C))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(ArenaRenameClanRequest*))(Il2CppBase() + 0x1A95314))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(ArenaRenameClanRequest*, Il2CppString*))(Il2CppBase() + 0x1A9531C))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaRenameClanRequest*))(Il2CppBase() + 0x1A9539C))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaRenameClanRequest*, int64_t))(Il2CppBase() + 0x1A953A4))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaRenameClanRequest*, Il2CppObject*))(Il2CppBase() + 0x1A953AC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaRenameClanRequest* other) {
		return ((R (*)(ArenaRenameClanRequest*, ProtoModels::ArenaRenameClanRequest*))(Il2CppBase() + 0x1A9541C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaRenameClanRequest*))(Il2CppBase() + 0x1A9548C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaRenameClanRequest*))(Il2CppBase() + 0x1A9551C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaRenameClanRequest*, uintptr_t))(Il2CppBase() + 0x1A95580))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaRenameClanRequest*))(Il2CppBase() + 0x1A95638))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaRenameClanRequest* other) {
		return ((R (*)(ArenaRenameClanRequest*, ProtoModels::ArenaRenameClanRequest*))(Il2CppBase() + 0x1A9573C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaRenameClanRequest*, uintptr_t))(Il2CppBase() + 0x1A95794))(this, input);
	}

};

}
