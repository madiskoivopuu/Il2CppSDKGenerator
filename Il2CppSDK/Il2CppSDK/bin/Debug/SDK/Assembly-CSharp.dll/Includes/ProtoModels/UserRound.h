#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserRound
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserRound"));
	}

	 static MessageParser1<ProtoModels::UserRound*>*& _parser() {
		return *(MessageParser1<ProtoModels::UserRound*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& RoundFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& round_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& TargetClanIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& targetClanID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::UserRound*>* get_Parser() {
		return ((MessageParser1<ProtoModels::UserRound*>* (*)(void *))(Il2CppBase() + 0x2477550))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x24775B4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UserRound*))(Il2CppBase() + 0x24776D4))(this);
	}
	template <typename R = ProtoModels::UserRound*> R Clone() {
		return ((R (*)(UserRound*))(Il2CppBase() + 0x247777C))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(UserRound*))(Il2CppBase() + 0x24777D8))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(UserRound*, int64_t))(Il2CppBase() + 0x24777E0))(this, value);
	}
	template <typename R = int64_t> R get_Round() {
		return ((R (*)(UserRound*))(Il2CppBase() + 0x24777E8))(this);
	}
	template <typename R = void> R set_Round(int64_t value) {
		return ((R (*)(UserRound*, int64_t))(Il2CppBase() + 0x24777F0))(this, value);
	}
	template <typename R = int64_t> R get_TargetClanID() {
		return ((R (*)(UserRound*))(Il2CppBase() + 0x24777F8))(this);
	}
	template <typename R = void> R set_TargetClanID(int64_t value) {
		return ((R (*)(UserRound*, int64_t))(Il2CppBase() + 0x2477800))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UserRound*, Il2CppObject*))(Il2CppBase() + 0x2477808))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UserRound* other) {
		return ((R (*)(UserRound*, ProtoModels::UserRound*))(Il2CppBase() + 0x24778B4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UserRound*))(Il2CppBase() + 0x2477904))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UserRound*))(Il2CppBase() + 0x247798C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UserRound*, uintptr_t))(Il2CppBase() + 0x24779F0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UserRound*))(Il2CppBase() + 0x2477AA0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UserRound* other) {
		return ((R (*)(UserRound*, ProtoModels::UserRound*))(Il2CppBase() + 0x2477B98))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UserRound*, uintptr_t))(Il2CppBase() + 0x2477BC4))(this, input);
	}

};

}
