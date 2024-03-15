#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class BonusPositionType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "BonusPositionType"));
	}

	 static MessageParser1<ProtoModels::BonusPositionType*>*& _parser() {
		return *(MessageParser1<ProtoModels::BonusPositionType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& PositionsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<int32_t>*& _repeated_positions_codec() {
		return *(FieldCodec1<int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<int32_t>*& positions_() {
		return *(RepeatedField1<int32_t>**)((uintptr_t)this + 0x10);
	}

	 static MessageParser1<ProtoModels::BonusPositionType*>* get_Parser() {
		return ((MessageParser1<ProtoModels::BonusPositionType*>* (*)(void *))(Il2CppBase() + 0x16C70F8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x16C715C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(BonusPositionType*))(Il2CppBase() + 0x16C727C))(this);
	}
	template <typename R = ProtoModels::BonusPositionType*> R Clone() {
		return ((R (*)(BonusPositionType*))(Il2CppBase() + 0x16C73D4))(this);
	}
	 RepeatedField1<int32_t>* get_Positions() {
		return ((RepeatedField1<int32_t>* (*)(BonusPositionType*))(Il2CppBase() + 0x16C7430))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(BonusPositionType*, Il2CppObject*))(Il2CppBase() + 0x16C7438))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::BonusPositionType* other) {
		return ((R (*)(BonusPositionType*, ProtoModels::BonusPositionType*))(Il2CppBase() + 0x16C74A8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(BonusPositionType*))(Il2CppBase() + 0x16C7534))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(BonusPositionType*))(Il2CppBase() + 0x16C7560))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(BonusPositionType*, uintptr_t))(Il2CppBase() + 0x16C75C4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(BonusPositionType*))(Il2CppBase() + 0x16C7664))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::BonusPositionType* other) {
		return ((R (*)(BonusPositionType*, ProtoModels::BonusPositionType*))(Il2CppBase() + 0x16C76F4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(BonusPositionType*, uintptr_t))(Il2CppBase() + 0x16C776C))(this, input);
	}

};

}
