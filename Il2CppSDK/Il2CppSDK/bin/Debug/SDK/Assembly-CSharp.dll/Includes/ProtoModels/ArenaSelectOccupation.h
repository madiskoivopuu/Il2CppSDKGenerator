#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaSelectOccupation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaSelectOccupation"));
	}

	 static MessageParser1ProtoModels::ArenaSelectOccupation*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaSelectOccupation*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& OccupationIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& occupationID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::ArenaSelectOccupation*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaSelectOccupation*>* (*)(void *))(Il2CppBase() + 0x271073C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x27107A0))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaSelectOccupation*))(Il2CppBase() + 0x27108C0))(this);
	}
	template <typename R = ProtoModels::ArenaSelectOccupation*> R Clone() {
		return ((R (*)(ArenaSelectOccupation*))(Il2CppBase() + 0x2710968))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ArenaSelectOccupation*))(Il2CppBase() + 0x27109C4))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ArenaSelectOccupation*, int64_t))(Il2CppBase() + 0x27109CC))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(ArenaSelectOccupation*))(Il2CppBase() + 0x27109D4))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(ArenaSelectOccupation*, int64_t))(Il2CppBase() + 0x27109DC))(this, value);
	}
	template <typename R = int32_t> R get_OccupationID() {
		return ((R (*)(ArenaSelectOccupation*))(Il2CppBase() + 0x27109E4))(this);
	}
	template <typename R = void> R set_OccupationID(int32_t value) {
		return ((R (*)(ArenaSelectOccupation*, int32_t))(Il2CppBase() + 0x27109EC))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaSelectOccupation*, Il2CppObject*))(Il2CppBase() + 0x27109F4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaSelectOccupation* other) {
		return ((R (*)(ArenaSelectOccupation*, ProtoModels::ArenaSelectOccupation*))(Il2CppBase() + 0x2710AA0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaSelectOccupation*))(Il2CppBase() + 0x2710AF0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaSelectOccupation*))(Il2CppBase() + 0x2710B7C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaSelectOccupation*, uintptr_t))(Il2CppBase() + 0x2710BE0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaSelectOccupation*))(Il2CppBase() + 0x2710C90))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaSelectOccupation* other) {
		return ((R (*)(ArenaSelectOccupation*, ProtoModels::ArenaSelectOccupation*))(Il2CppBase() + 0x2710D88))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaSelectOccupation*, uintptr_t))(Il2CppBase() + 0x2710DB4))(this, input);
	}

};

}
