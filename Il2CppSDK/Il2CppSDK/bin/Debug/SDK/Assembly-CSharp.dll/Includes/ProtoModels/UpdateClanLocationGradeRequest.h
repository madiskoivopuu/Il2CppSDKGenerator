#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UpdateClanLocationGradeRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UpdateClanLocationGradeRequest"));
	}

	 static MessageParser1ProtoModels::UpdateClanLocationGradeRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::UpdateClanLocationGradeRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& WorldIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& worldID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& LocationNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& locationName_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& ValueFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& value_() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	 static MessageParser1ProtoModels::UpdateClanLocationGradeRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::UpdateClanLocationGradeRequest*>* (*)(void *))(Il2CppBase() + 0x153BC24))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x153BC88))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UpdateClanLocationGradeRequest*))(Il2CppBase() + 0x153BDA8))(this);
	}
	template <typename R = ProtoModels::UpdateClanLocationGradeRequest*> R Clone() {
		return ((R (*)(UpdateClanLocationGradeRequest*))(Il2CppBase() + 0x153BEB8))(this);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(UpdateClanLocationGradeRequest*))(Il2CppBase() + 0x153BF14))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(UpdateClanLocationGradeRequest*, int64_t))(Il2CppBase() + 0x153BF1C))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(UpdateClanLocationGradeRequest*))(Il2CppBase() + 0x153BF24))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(UpdateClanLocationGradeRequest*, int64_t))(Il2CppBase() + 0x153BF2C))(this, value);
	}
	template <typename R = int64_t> R get_WorldID() {
		return ((R (*)(UpdateClanLocationGradeRequest*))(Il2CppBase() + 0x153BF34))(this);
	}
	template <typename R = void> R set_WorldID(int64_t value) {
		return ((R (*)(UpdateClanLocationGradeRequest*, int64_t))(Il2CppBase() + 0x153BF3C))(this, value);
	}
	template <typename R = Il2CppString*> R get_LocationName() {
		return ((R (*)(UpdateClanLocationGradeRequest*))(Il2CppBase() + 0x153BF44))(this);
	}
	template <typename R = void> R set_LocationName(Il2CppString* value) {
		return ((R (*)(UpdateClanLocationGradeRequest*, Il2CppString*))(Il2CppBase() + 0x153BF4C))(this, value);
	}
	template <typename R = int32_t> R get_Value() {
		return ((R (*)(UpdateClanLocationGradeRequest*))(Il2CppBase() + 0x153BFCC))(this);
	}
	template <typename R = void> R set_Value(int32_t value) {
		return ((R (*)(UpdateClanLocationGradeRequest*, int32_t))(Il2CppBase() + 0x153BFD4))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UpdateClanLocationGradeRequest*, Il2CppObject*))(Il2CppBase() + 0x153BFDC))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UpdateClanLocationGradeRequest* other) {
		return ((R (*)(UpdateClanLocationGradeRequest*, ProtoModels::UpdateClanLocationGradeRequest*))(Il2CppBase() + 0x153C04C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UpdateClanLocationGradeRequest*))(Il2CppBase() + 0x153C0DC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UpdateClanLocationGradeRequest*))(Il2CppBase() + 0x153C1A8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UpdateClanLocationGradeRequest*, uintptr_t))(Il2CppBase() + 0x153C20C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UpdateClanLocationGradeRequest*))(Il2CppBase() + 0x153C31C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UpdateClanLocationGradeRequest* other) {
		return ((R (*)(UpdateClanLocationGradeRequest*, ProtoModels::UpdateClanLocationGradeRequest*))(Il2CppBase() + 0x153C498))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UpdateClanLocationGradeRequest*, uintptr_t))(Il2CppBase() + 0x153C508))(this, input);
	}

};

}
