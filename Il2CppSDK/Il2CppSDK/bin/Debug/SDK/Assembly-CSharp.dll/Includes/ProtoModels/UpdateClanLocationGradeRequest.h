#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UpdateClanLocationGradeRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UpdateClanLocationGradeRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& WorldIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& worldID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& LocationNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& locationName_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& ValueFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& value_() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x153BC24))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x153BC88))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UpdateClanLocationGradeRequest*))(Il2CppBase() + 0x153BDA8))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(UpdateClanLocationGradeRequest*))(Il2CppBase() + 0x153BEB8))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(UpdateClanLocationGradeRequest*))(Il2CppBase() + 0x153BF14))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(UpdateClanLocationGradeRequest*, int64_t))(Il2CppBase() + 0x153BF1C))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(UpdateClanLocationGradeRequest*))(Il2CppBase() + 0x153BF24))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(UpdateClanLocationGradeRequest*, int64_t))(Il2CppBase() + 0x153BF2C))(this, value);
	}
	template <typename T = int64_t> T get_WorldID() {
		return ((T (*)(UpdateClanLocationGradeRequest*))(Il2CppBase() + 0x153BF34))(this);
	}
	template <typename T = void> T set_WorldID(int64_t value) {
		return ((T (*)(UpdateClanLocationGradeRequest*, int64_t))(Il2CppBase() + 0x153BF3C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LocationName() {
		return ((T (*)(UpdateClanLocationGradeRequest*))(Il2CppBase() + 0x153BF44))(this);
	}
	template <typename T = void> T set_LocationName(Il2CppString* value) {
		return ((T (*)(UpdateClanLocationGradeRequest*, Il2CppString*))(Il2CppBase() + 0x153BF4C))(this, value);
	}
	template <typename T = int32_t> T get_Value() {
		return ((T (*)(UpdateClanLocationGradeRequest*))(Il2CppBase() + 0x153BFCC))(this);
	}
	template <typename T = void> T set_Value(int32_t value) {
		return ((T (*)(UpdateClanLocationGradeRequest*, int32_t))(Il2CppBase() + 0x153BFD4))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(UpdateClanLocationGradeRequest*, uintptr_t))(Il2CppBase() + 0x153BFDC))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(UpdateClanLocationGradeRequest*, uintptr_t))(Il2CppBase() + 0x153C04C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UpdateClanLocationGradeRequest*))(Il2CppBase() + 0x153C0DC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UpdateClanLocationGradeRequest*))(Il2CppBase() + 0x153C1A8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UpdateClanLocationGradeRequest*, uintptr_t))(Il2CppBase() + 0x153C20C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UpdateClanLocationGradeRequest*))(Il2CppBase() + 0x153C31C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(UpdateClanLocationGradeRequest*, uintptr_t))(Il2CppBase() + 0x153C498))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UpdateClanLocationGradeRequest*, uintptr_t))(Il2CppBase() + 0x153C508))(this, input);
	}

};

}
