#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UserRound
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UserRound"));
	}

	template <typename T = MessageParser1UserRound*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& RoundFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& round_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& TargetClanIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& targetClanID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1UserRound*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2477550))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x24775B4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UserRound*))(Il2CppBase() + 0x24776D4))(this);
	}
	template <typename T = UserRound*> T Clone() {
		return ((T (*)(UserRound*))(Il2CppBase() + 0x247777C))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(UserRound*))(Il2CppBase() + 0x24777D8))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(UserRound*, int64_t))(Il2CppBase() + 0x24777E0))(this, value);
	}
	template <typename T = int64_t> T get_Round() {
		return ((T (*)(UserRound*))(Il2CppBase() + 0x24777E8))(this);
	}
	template <typename T = void> T set_Round(int64_t value) {
		return ((T (*)(UserRound*, int64_t))(Il2CppBase() + 0x24777F0))(this, value);
	}
	template <typename T = int64_t> T get_TargetClanID() {
		return ((T (*)(UserRound*))(Il2CppBase() + 0x24777F8))(this);
	}
	template <typename T = void> T set_TargetClanID(int64_t value) {
		return ((T (*)(UserRound*, int64_t))(Il2CppBase() + 0x2477800))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(UserRound*, Il2CppObject*))(Il2CppBase() + 0x2477808))(this, other);
	}
	template <typename T = bool> T Equals_1(UserRound* other) {
		return ((T (*)(UserRound*, UserRound*))(Il2CppBase() + 0x24778B4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UserRound*))(Il2CppBase() + 0x2477904))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UserRound*))(Il2CppBase() + 0x247798C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UserRound*, uintptr_t))(Il2CppBase() + 0x24779F0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UserRound*))(Il2CppBase() + 0x2477AA0))(this);
	}
	template <typename T = void> T MergeFrom(UserRound* other) {
		return ((T (*)(UserRound*, UserRound*))(Il2CppBase() + 0x2477B98))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UserRound*, uintptr_t))(Il2CppBase() + 0x2477BC4))(this, input);
	}

};

}
