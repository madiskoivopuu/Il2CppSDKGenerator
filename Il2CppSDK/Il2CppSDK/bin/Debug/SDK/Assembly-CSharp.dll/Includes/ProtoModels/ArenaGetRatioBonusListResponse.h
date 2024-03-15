#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaGetRatioBonusListResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaGetRatioBonusListResponse"));
	}

	 static MessageParser1ProtoModels::ArenaGetRatioBonusListResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaGetRatioBonusListResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& BonusFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::RatioAllTablesBonuses*> R& bonus_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::ArenaGetRatioBonusListResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaGetRatioBonusListResponse*>* (*)(void *))(Il2CppBase() + 0x1E247F8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E2485C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaGetRatioBonusListResponse*))(Il2CppBase() + 0x1E2497C))(this);
	}
	template <typename R = ProtoModels::ArenaGetRatioBonusListResponse*> R Clone() {
		return ((R (*)(ArenaGetRatioBonusListResponse*))(Il2CppBase() + 0x1E24A98))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(ArenaGetRatioBonusListResponse*))(Il2CppBase() + 0x1E24AF4))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(ArenaGetRatioBonusListResponse*, int32_t))(Il2CppBase() + 0x1E24AFC))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(ArenaGetRatioBonusListResponse*))(Il2CppBase() + 0x1E24B04))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(ArenaGetRatioBonusListResponse*, Il2CppString*))(Il2CppBase() + 0x1E24B0C))(this, value);
	}
	template <typename R = ProtoModels::RatioAllTablesBonuses*> R get_Bonus() {
		return ((R (*)(ArenaGetRatioBonusListResponse*))(Il2CppBase() + 0x1E24B8C))(this);
	}
	template <typename R = void> R set_Bonus(ProtoModels::RatioAllTablesBonuses* value) {
		return ((R (*)(ArenaGetRatioBonusListResponse*, ProtoModels::RatioAllTablesBonuses*))(Il2CppBase() + 0x1E24B94))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaGetRatioBonusListResponse*, Il2CppObject*))(Il2CppBase() + 0x1E24B9C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaGetRatioBonusListResponse* other) {
		return ((R (*)(ArenaGetRatioBonusListResponse*, ProtoModels::ArenaGetRatioBonusListResponse*))(Il2CppBase() + 0x1E24C0C))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaGetRatioBonusListResponse*))(Il2CppBase() + 0x1E24C80))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaGetRatioBonusListResponse*))(Il2CppBase() + 0x1E24D0C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaGetRatioBonusListResponse*, uintptr_t))(Il2CppBase() + 0x1E24D70))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaGetRatioBonusListResponse*))(Il2CppBase() + 0x1E24E28))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaGetRatioBonusListResponse* other) {
		return ((R (*)(ArenaGetRatioBonusListResponse*, ProtoModels::ArenaGetRatioBonusListResponse*))(Il2CppBase() + 0x1E24F2C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaGetRatioBonusListResponse*, uintptr_t))(Il2CppBase() + 0x1E24FFC))(this, input);
	}

};

}
