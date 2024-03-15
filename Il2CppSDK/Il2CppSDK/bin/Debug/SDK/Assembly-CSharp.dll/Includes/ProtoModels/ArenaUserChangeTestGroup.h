#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaUserChangeTestGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaUserChangeTestGroup"));
	}

	 static MessageParser1<ProtoModels::ArenaUserChangeTestGroup*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaUserChangeTestGroup*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& TestGroupFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& testGroup_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::ArenaUserChangeTestGroup*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaUserChangeTestGroup*>* (*)(void *))(Il2CppBase() + 0x2859CA8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x2859D0C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaUserChangeTestGroup*))(Il2CppBase() + 0x2859E2C))(this);
	}
	template <typename R = ProtoModels::ArenaUserChangeTestGroup*> R Clone() {
		return ((R (*)(ArenaUserChangeTestGroup*))(Il2CppBase() + 0x2859ED4))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaUserChangeTestGroup*))(Il2CppBase() + 0x2859F30))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaUserChangeTestGroup*, int64_t))(Il2CppBase() + 0x2859F38))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaUserChangeTestGroup*))(Il2CppBase() + 0x2859F40))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaUserChangeTestGroup*, int64_t))(Il2CppBase() + 0x2859F48))(this, value);
	}
	template <typename R = int32_t> R get_TestGroup() {
		return ((R (*)(ArenaUserChangeTestGroup*))(Il2CppBase() + 0x2859F50))(this);
	}
	template <typename R = void> R set_TestGroup(int32_t value) {
		return ((R (*)(ArenaUserChangeTestGroup*, int32_t))(Il2CppBase() + 0x2859F58))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaUserChangeTestGroup*, Il2CppObject*))(Il2CppBase() + 0x2859F60))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaUserChangeTestGroup* other) {
		return ((R (*)(ArenaUserChangeTestGroup*, ProtoModels::ArenaUserChangeTestGroup*))(Il2CppBase() + 0x285A00C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaUserChangeTestGroup*))(Il2CppBase() + 0x285A05C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaUserChangeTestGroup*))(Il2CppBase() + 0x285A0E8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaUserChangeTestGroup*, uintptr_t))(Il2CppBase() + 0x285A14C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaUserChangeTestGroup*))(Il2CppBase() + 0x285A1FC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaUserChangeTestGroup* other) {
		return ((R (*)(ArenaUserChangeTestGroup*, ProtoModels::ArenaUserChangeTestGroup*))(Il2CppBase() + 0x285A2F4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaUserChangeTestGroup*, uintptr_t))(Il2CppBase() + 0x285A320))(this, input);
	}

};

}
