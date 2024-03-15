#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ClanAvatarsType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ClanAvatarsType"));
	}

	 static MessageParser1<ProtoModels::ClanAvatarsType*>*& _parser() {
		return *(MessageParser1<ProtoModels::ClanAvatarsType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& UserNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& userName_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& MapSlotFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& mapSlot_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::ClanAvatarsType*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ClanAvatarsType*>* (*)(void *))(Il2CppBase() + 0x174A4F0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x174A554))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ClanAvatarsType*))(Il2CppBase() + 0x174A674))(this);
	}
	template <typename R = ProtoModels::ClanAvatarsType*> R Clone() {
		return ((R (*)(ClanAvatarsType*))(Il2CppBase() + 0x174A774))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(ClanAvatarsType*))(Il2CppBase() + 0x174A7D0))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(ClanAvatarsType*, int64_t))(Il2CppBase() + 0x174A7D8))(this, value);
	}
	template <typename R = Il2CppString*> R get_UserName() {
		return ((R (*)(ClanAvatarsType*))(Il2CppBase() + 0x174A7E0))(this);
	}
	template <typename R = void> R set_UserName(Il2CppString* value) {
		return ((R (*)(ClanAvatarsType*, Il2CppString*))(Il2CppBase() + 0x174A7E8))(this, value);
	}
	template <typename R = int64_t> R get_MapSlot() {
		return ((R (*)(ClanAvatarsType*))(Il2CppBase() + 0x174A868))(this);
	}
	template <typename R = void> R set_MapSlot(int64_t value) {
		return ((R (*)(ClanAvatarsType*, int64_t))(Il2CppBase() + 0x174A870))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ClanAvatarsType*, Il2CppObject*))(Il2CppBase() + 0x174A878))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ClanAvatarsType* other) {
		return ((R (*)(ClanAvatarsType*, ProtoModels::ClanAvatarsType*))(Il2CppBase() + 0x174A8E8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ClanAvatarsType*))(Il2CppBase() + 0x174A958))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ClanAvatarsType*))(Il2CppBase() + 0x174A9E8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ClanAvatarsType*, uintptr_t))(Il2CppBase() + 0x174AA4C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ClanAvatarsType*))(Il2CppBase() + 0x174AB04))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ClanAvatarsType* other) {
		return ((R (*)(ClanAvatarsType*, ProtoModels::ClanAvatarsType*))(Il2CppBase() + 0x174AC08))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ClanAvatarsType*, uintptr_t))(Il2CppBase() + 0x174AC60))(this, input);
	}

};

}
