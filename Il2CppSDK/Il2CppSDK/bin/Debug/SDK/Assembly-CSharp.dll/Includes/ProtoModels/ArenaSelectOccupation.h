#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaSelectOccupation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaSelectOccupation"));
	}

	template <typename T = MessageParser1ArenaSelectOccupation*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& OccupationIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& occupationID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1ArenaSelectOccupation*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x271073C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x27107A0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaSelectOccupation*))(Il2CppBase() + 0x27108C0))(this);
	}
	template <typename T = ArenaSelectOccupation*> T Clone() {
		return ((T (*)(ArenaSelectOccupation*))(Il2CppBase() + 0x2710968))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(ArenaSelectOccupation*))(Il2CppBase() + 0x27109C4))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(ArenaSelectOccupation*, int64_t))(Il2CppBase() + 0x27109CC))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaSelectOccupation*))(Il2CppBase() + 0x27109D4))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaSelectOccupation*, int64_t))(Il2CppBase() + 0x27109DC))(this, value);
	}
	template <typename T = int32_t> T get_OccupationID() {
		return ((T (*)(ArenaSelectOccupation*))(Il2CppBase() + 0x27109E4))(this);
	}
	template <typename T = void> T set_OccupationID(int32_t value) {
		return ((T (*)(ArenaSelectOccupation*, int32_t))(Il2CppBase() + 0x27109EC))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaSelectOccupation*, Il2CppObject*))(Il2CppBase() + 0x27109F4))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaSelectOccupation* other) {
		return ((T (*)(ArenaSelectOccupation*, ArenaSelectOccupation*))(Il2CppBase() + 0x2710AA0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaSelectOccupation*))(Il2CppBase() + 0x2710AF0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaSelectOccupation*))(Il2CppBase() + 0x2710B7C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaSelectOccupation*, uintptr_t))(Il2CppBase() + 0x2710BE0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaSelectOccupation*))(Il2CppBase() + 0x2710C90))(this);
	}
	template <typename T = void> T MergeFrom(ArenaSelectOccupation* other) {
		return ((T (*)(ArenaSelectOccupation*, ArenaSelectOccupation*))(Il2CppBase() + 0x2710D88))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaSelectOccupation*, uintptr_t))(Il2CppBase() + 0x2710DB4))(this, input);
	}

};

}
