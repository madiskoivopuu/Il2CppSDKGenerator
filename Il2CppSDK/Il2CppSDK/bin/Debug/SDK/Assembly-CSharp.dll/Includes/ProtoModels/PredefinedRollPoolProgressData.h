#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PredefinedRollPoolProgressData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PredefinedRollPoolProgressData"));
	}

	template <typename T = MessageParser1PredefinedRollPoolProgressData*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ProductPositionsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = FieldCodec1int32_t>*> static T& _repeated_productPositions_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = RepeatedField1int32_t>*> T& productPositions_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& PositionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& position_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1PredefinedRollPoolProgressData*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x16DDA0C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x16DDA70))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(PredefinedRollPoolProgressData*))(Il2CppBase() + 0x16DDB90))(this);
	}
	template <typename T = PredefinedRollPoolProgressData*> T Clone() {
		return ((T (*)(PredefinedRollPoolProgressData*))(Il2CppBase() + 0x16DDCF4))(this);
	}
	template <typename T = RepeatedField1int32_t>*> T get_ProductPositions() {
		return ((T (*)(PredefinedRollPoolProgressData*))(Il2CppBase() + 0x16DDD50))(this);
	}
	template <typename T = int32_t> T get_Position() {
		return ((T (*)(PredefinedRollPoolProgressData*))(Il2CppBase() + 0x16DDD58))(this);
	}
	template <typename T = void> T set_Position(int32_t value) {
		return ((T (*)(PredefinedRollPoolProgressData*, int32_t))(Il2CppBase() + 0x16DDD60))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(PredefinedRollPoolProgressData*, Il2CppObject*))(Il2CppBase() + 0x16DDD68))(this, other);
	}
	template <typename T = bool> T Equals_1(PredefinedRollPoolProgressData* other) {
		return ((T (*)(PredefinedRollPoolProgressData*, PredefinedRollPoolProgressData*))(Il2CppBase() + 0x16DDDD8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PredefinedRollPoolProgressData*))(Il2CppBase() + 0x16DDE70))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PredefinedRollPoolProgressData*))(Il2CppBase() + 0x16DDECC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(PredefinedRollPoolProgressData*, uintptr_t))(Il2CppBase() + 0x16DDF30))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(PredefinedRollPoolProgressData*))(Il2CppBase() + 0x16DE00C))(this);
	}
	template <typename T = void> T MergeFrom(PredefinedRollPoolProgressData* other) {
		return ((T (*)(PredefinedRollPoolProgressData*, PredefinedRollPoolProgressData*))(Il2CppBase() + 0x16DE0F8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(PredefinedRollPoolProgressData*, uintptr_t))(Il2CppBase() + 0x16DE170))(this, input);
	}

};

}
