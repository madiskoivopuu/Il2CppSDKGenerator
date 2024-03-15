#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PredefinedRollPoolProgressData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PredefinedRollPoolProgressData"));
	}

	 static MessageParser1ProtoModels::PredefinedRollPoolProgressData*>*& _parser() {
		return *(MessageParser1ProtoModels::PredefinedRollPoolProgressData*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ProductPositionsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1int32_t>*& _repeated_productPositions_codec() {
		return *(FieldCodec1int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1int32_t>*& productPositions_() {
		return *(RepeatedField1int32_t>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& PositionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& position_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::PredefinedRollPoolProgressData*>* get_Parser() {
		return ((MessageParser1ProtoModels::PredefinedRollPoolProgressData*>* (*)(void *))(Il2CppBase() + 0x16DDA0C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x16DDA70))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(PredefinedRollPoolProgressData*))(Il2CppBase() + 0x16DDB90))(this);
	}
	template <typename R = ProtoModels::PredefinedRollPoolProgressData*> R Clone() {
		return ((R (*)(PredefinedRollPoolProgressData*))(Il2CppBase() + 0x16DDCF4))(this);
	}
	 RepeatedField1int32_t>* get_ProductPositions() {
		return ((RepeatedField1int32_t>* (*)(PredefinedRollPoolProgressData*))(Il2CppBase() + 0x16DDD50))(this);
	}
	template <typename R = int32_t> R get_Position() {
		return ((R (*)(PredefinedRollPoolProgressData*))(Il2CppBase() + 0x16DDD58))(this);
	}
	template <typename R = void> R set_Position(int32_t value) {
		return ((R (*)(PredefinedRollPoolProgressData*, int32_t))(Il2CppBase() + 0x16DDD60))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(PredefinedRollPoolProgressData*, Il2CppObject*))(Il2CppBase() + 0x16DDD68))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::PredefinedRollPoolProgressData* other) {
		return ((R (*)(PredefinedRollPoolProgressData*, ProtoModels::PredefinedRollPoolProgressData*))(Il2CppBase() + 0x16DDDD8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PredefinedRollPoolProgressData*))(Il2CppBase() + 0x16DDE70))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PredefinedRollPoolProgressData*))(Il2CppBase() + 0x16DDECC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(PredefinedRollPoolProgressData*, uintptr_t))(Il2CppBase() + 0x16DDF30))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(PredefinedRollPoolProgressData*))(Il2CppBase() + 0x16DE00C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::PredefinedRollPoolProgressData* other) {
		return ((R (*)(PredefinedRollPoolProgressData*, ProtoModels::PredefinedRollPoolProgressData*))(Il2CppBase() + 0x16DE0F8))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(PredefinedRollPoolProgressData*, uintptr_t))(Il2CppBase() + 0x16DE170))(this, input);
	}

};

}
