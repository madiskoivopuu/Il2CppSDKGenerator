#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaGetRatioBonusListResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaGetRatioBonusListResponse"));
	}

	template <typename T = MessageParser1ArenaGetRatioBonusListResponse*>*> static T& _parser() {
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
	template <typename T = int32_t> static T& BonusFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RatioAllTablesBonuses*> T& bonus_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1ArenaGetRatioBonusListResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E247F8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E2485C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaGetRatioBonusListResponse*))(Il2CppBase() + 0x1E2497C))(this);
	}
	template <typename T = ArenaGetRatioBonusListResponse*> T Clone() {
		return ((T (*)(ArenaGetRatioBonusListResponse*))(Il2CppBase() + 0x1E24A98))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(ArenaGetRatioBonusListResponse*))(Il2CppBase() + 0x1E24AF4))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(ArenaGetRatioBonusListResponse*, int32_t))(Il2CppBase() + 0x1E24AFC))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(ArenaGetRatioBonusListResponse*))(Il2CppBase() + 0x1E24B04))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(ArenaGetRatioBonusListResponse*, Il2CppString*))(Il2CppBase() + 0x1E24B0C))(this, value);
	}
	template <typename T = RatioAllTablesBonuses*> T get_Bonus() {
		return ((T (*)(ArenaGetRatioBonusListResponse*))(Il2CppBase() + 0x1E24B8C))(this);
	}
	template <typename T = void> T set_Bonus(RatioAllTablesBonuses* value) {
		return ((T (*)(ArenaGetRatioBonusListResponse*, RatioAllTablesBonuses*))(Il2CppBase() + 0x1E24B94))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaGetRatioBonusListResponse*, Il2CppObject*))(Il2CppBase() + 0x1E24B9C))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaGetRatioBonusListResponse* other) {
		return ((T (*)(ArenaGetRatioBonusListResponse*, ArenaGetRatioBonusListResponse*))(Il2CppBase() + 0x1E24C0C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaGetRatioBonusListResponse*))(Il2CppBase() + 0x1E24C80))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaGetRatioBonusListResponse*))(Il2CppBase() + 0x1E24D0C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaGetRatioBonusListResponse*, uintptr_t))(Il2CppBase() + 0x1E24D70))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaGetRatioBonusListResponse*))(Il2CppBase() + 0x1E24E28))(this);
	}
	template <typename T = void> T MergeFrom(ArenaGetRatioBonusListResponse* other) {
		return ((T (*)(ArenaGetRatioBonusListResponse*, ArenaGetRatioBonusListResponse*))(Il2CppBase() + 0x1E24F2C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaGetRatioBonusListResponse*, uintptr_t))(Il2CppBase() + 0x1E24FFC))(this, input);
	}

};

}
