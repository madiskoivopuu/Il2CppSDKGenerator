#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class DiplomaciesResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "DiplomaciesResponse"));
	}

	template <typename T = MessageParser1DiplomaciesResponse*>*> static T& _parser() {
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
	template <typename T = int32_t> static T& PvpIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& pvpID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& DiplomaciesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1Diplomacy*>*> static T& _repeated_diplomacies_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1Diplomacy*>*> T& diplomacies_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1DiplomaciesResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x12FA71C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x12FA780))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(DiplomaciesResponse*))(Il2CppBase() + 0x12FA8A0))(this);
	}
	template <typename T = DiplomaciesResponse*> T Clone() {
		return ((T (*)(DiplomaciesResponse*))(Il2CppBase() + 0x12FAA3C))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(DiplomaciesResponse*))(Il2CppBase() + 0x12FAA98))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(DiplomaciesResponse*, int32_t))(Il2CppBase() + 0x12FAAA0))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(DiplomaciesResponse*))(Il2CppBase() + 0x12FAAA8))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(DiplomaciesResponse*, Il2CppString*))(Il2CppBase() + 0x12FAAB0))(this, value);
	}
	template <typename T = int64_t> T get_PvpID() {
		return ((T (*)(DiplomaciesResponse*))(Il2CppBase() + 0x12FAB30))(this);
	}
	template <typename T = void> T set_PvpID(int64_t value) {
		return ((T (*)(DiplomaciesResponse*, int64_t))(Il2CppBase() + 0x12FAB38))(this, value);
	}
	template <typename T = RepeatedField1Diplomacy*>*> T get_Diplomacies() {
		return ((T (*)(DiplomaciesResponse*))(Il2CppBase() + 0x12FAB40))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(DiplomaciesResponse*, Il2CppObject*))(Il2CppBase() + 0x12FAB48))(this, other);
	}
	template <typename T = bool> T Equals_1(DiplomaciesResponse* other) {
		return ((T (*)(DiplomaciesResponse*, DiplomaciesResponse*))(Il2CppBase() + 0x12FABB8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(DiplomaciesResponse*))(Il2CppBase() + 0x12FAC78))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DiplomaciesResponse*))(Il2CppBase() + 0x12FAD20))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(DiplomaciesResponse*, uintptr_t))(Il2CppBase() + 0x12FAD84))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(DiplomaciesResponse*))(Il2CppBase() + 0x12FAEB0))(this);
	}
	template <typename T = void> T MergeFrom(DiplomaciesResponse* other) {
		return ((T (*)(DiplomaciesResponse*, DiplomaciesResponse*))(Il2CppBase() + 0x12FB01C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(DiplomaciesResponse*, uintptr_t))(Il2CppBase() + 0x12FB0C4))(this, input);
	}

};

}
