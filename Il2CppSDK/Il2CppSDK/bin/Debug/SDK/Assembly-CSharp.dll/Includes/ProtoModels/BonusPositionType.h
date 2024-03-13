#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class BonusPositionType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "BonusPositionType"));
	}

	template <typename T = MessageParser1BonusPositionType*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PositionsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1int32_t>*> static T& _repeated_positions_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1int32_t>*> T& positions_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = MessageParser1BonusPositionType*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x16C70F8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x16C715C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(BonusPositionType*))(Il2CppBase() + 0x16C727C))(this);
	}
	template <typename T = BonusPositionType*> T Clone() {
		return ((T (*)(BonusPositionType*))(Il2CppBase() + 0x16C73D4))(this);
	}
	template <typename T = RepeatedField1int32_t>*> T get_Positions() {
		return ((T (*)(BonusPositionType*))(Il2CppBase() + 0x16C7430))(this);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(BonusPositionType*, Il2CppObject*))(Il2CppBase() + 0x16C7438))(this, other);
	}
	template <typename T = bool> T Equals_1(BonusPositionType* other) {
		return ((T (*)(BonusPositionType*, BonusPositionType*))(Il2CppBase() + 0x16C74A8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(BonusPositionType*))(Il2CppBase() + 0x16C7534))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(BonusPositionType*))(Il2CppBase() + 0x16C7560))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(BonusPositionType*, uintptr_t))(Il2CppBase() + 0x16C75C4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(BonusPositionType*))(Il2CppBase() + 0x16C7664))(this);
	}
	template <typename T = void> T MergeFrom(BonusPositionType* other) {
		return ((T (*)(BonusPositionType*, BonusPositionType*))(Il2CppBase() + 0x16C76F4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(BonusPositionType*, uintptr_t))(Il2CppBase() + 0x16C776C))(this, input);
	}

};

}
