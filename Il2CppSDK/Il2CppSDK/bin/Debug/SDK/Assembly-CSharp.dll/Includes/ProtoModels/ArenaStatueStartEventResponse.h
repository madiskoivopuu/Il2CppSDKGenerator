#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaStatueStartEventResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaStatueStartEventResponse"));
	}

	template <typename T = MessageParser1ArenaStatueStartEventResponse*>*> static T& _parser() {
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
	template <typename T = int32_t> static T& ClanIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& clanID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ResetTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& resetTime_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& EndTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& endTime_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = MessageParser1ArenaStatueStartEventResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x2713B3C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x2713BA0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaStatueStartEventResponse*))(Il2CppBase() + 0x2713CC0))(this);
	}
	template <typename T = ArenaStatueStartEventResponse*> T Clone() {
		return ((T (*)(ArenaStatueStartEventResponse*))(Il2CppBase() + 0x2713DD0))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(ArenaStatueStartEventResponse*))(Il2CppBase() + 0x2713E2C))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(ArenaStatueStartEventResponse*, int32_t))(Il2CppBase() + 0x2713E34))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(ArenaStatueStartEventResponse*))(Il2CppBase() + 0x2713E3C))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(ArenaStatueStartEventResponse*, Il2CppString*))(Il2CppBase() + 0x2713E44))(this, value);
	}
	template <typename T = int64_t> T get_ClanID() {
		return ((T (*)(ArenaStatueStartEventResponse*))(Il2CppBase() + 0x2713EC4))(this);
	}
	template <typename T = void> T set_ClanID(int64_t value) {
		return ((T (*)(ArenaStatueStartEventResponse*, int64_t))(Il2CppBase() + 0x2713ECC))(this, value);
	}
	template <typename T = int64_t> T get_ResetTime() {
		return ((T (*)(ArenaStatueStartEventResponse*))(Il2CppBase() + 0x2713ED4))(this);
	}
	template <typename T = void> T set_ResetTime(int64_t value) {
		return ((T (*)(ArenaStatueStartEventResponse*, int64_t))(Il2CppBase() + 0x2713EDC))(this, value);
	}
	template <typename T = int64_t> T get_EndTime() {
		return ((T (*)(ArenaStatueStartEventResponse*))(Il2CppBase() + 0x2713EE4))(this);
	}
	template <typename T = void> T set_EndTime(int64_t value) {
		return ((T (*)(ArenaStatueStartEventResponse*, int64_t))(Il2CppBase() + 0x2713EEC))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaStatueStartEventResponse*, Il2CppObject*))(Il2CppBase() + 0x2713EF4))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaStatueStartEventResponse* other) {
		return ((T (*)(ArenaStatueStartEventResponse*, ArenaStatueStartEventResponse*))(Il2CppBase() + 0x2713F64))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaStatueStartEventResponse*))(Il2CppBase() + 0x2713FF4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaStatueStartEventResponse*))(Il2CppBase() + 0x27140C0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaStatueStartEventResponse*, uintptr_t))(Il2CppBase() + 0x2714124))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaStatueStartEventResponse*))(Il2CppBase() + 0x2714234))(this);
	}
	template <typename T = void> T MergeFrom(ArenaStatueStartEventResponse* other) {
		return ((T (*)(ArenaStatueStartEventResponse*, ArenaStatueStartEventResponse*))(Il2CppBase() + 0x27143B0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaStatueStartEventResponse*, uintptr_t))(Il2CppBase() + 0x2714420))(this, input);
	}

};

}
