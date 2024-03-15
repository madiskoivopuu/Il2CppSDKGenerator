#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PredefinedRollPoolProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PredefinedRollPoolProgress"));
	}

	 static MessageParser1<ProtoModels::PredefinedRollPoolProgress*>*& _parser() {
		return *(MessageParser1<ProtoModels::PredefinedRollPoolProgress*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ProgressDataFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::PredefinedRollPoolProgressData*>*& _repeated_progressData_codec() {
		return *(FieldCodec1<ProtoModels::PredefinedRollPoolProgressData*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::PredefinedRollPoolProgressData*>*& progressData_() {
		return *(RepeatedField1<ProtoModels::PredefinedRollPoolProgressData*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CurrentPositionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& currentPosition_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& StartTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& startTime_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::PredefinedRollPoolProgress*>* get_Parser() {
		return ((MessageParser1<ProtoModels::PredefinedRollPoolProgress*>* (*)(void *))(Il2CppBase() + 0x16DCEF8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x16DCF5C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(PredefinedRollPoolProgress*))(Il2CppBase() + 0x16DD07C))(this);
	}
	template <typename R = ProtoModels::PredefinedRollPoolProgress*> R Clone() {
		return ((R (*)(PredefinedRollPoolProgress*))(Il2CppBase() + 0x16DD1E8))(this);
	}
	 RepeatedField1<ProtoModels::PredefinedRollPoolProgressData*>* get_ProgressData() {
		return ((RepeatedField1<ProtoModels::PredefinedRollPoolProgressData*>* (*)(PredefinedRollPoolProgress*))(Il2CppBase() + 0x16DD244))(this);
	}
	template <typename R = int32_t> R get_CurrentPosition() {
		return ((R (*)(PredefinedRollPoolProgress*))(Il2CppBase() + 0x16DD24C))(this);
	}
	template <typename R = void> R set_CurrentPosition(int32_t value) {
		return ((R (*)(PredefinedRollPoolProgress*, int32_t))(Il2CppBase() + 0x16DD254))(this, value);
	}
	template <typename R = int64_t> R get_StartTime() {
		return ((R (*)(PredefinedRollPoolProgress*))(Il2CppBase() + 0x16DD25C))(this);
	}
	template <typename R = void> R set_StartTime(int64_t value) {
		return ((R (*)(PredefinedRollPoolProgress*, int64_t))(Il2CppBase() + 0x16DD264))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(PredefinedRollPoolProgress*, Il2CppObject*))(Il2CppBase() + 0x16DD26C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::PredefinedRollPoolProgress* other) {
		return ((R (*)(PredefinedRollPoolProgress*, ProtoModels::PredefinedRollPoolProgress*))(Il2CppBase() + 0x16DD2DC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PredefinedRollPoolProgress*))(Il2CppBase() + 0x16DD384))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PredefinedRollPoolProgress*))(Il2CppBase() + 0x16DD408))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(PredefinedRollPoolProgress*, uintptr_t))(Il2CppBase() + 0x16DD46C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(PredefinedRollPoolProgress*))(Il2CppBase() + 0x16DD574))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::PredefinedRollPoolProgress* other) {
		return ((R (*)(PredefinedRollPoolProgress*, ProtoModels::PredefinedRollPoolProgress*))(Il2CppBase() + 0x16DD69C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(PredefinedRollPoolProgress*, uintptr_t))(Il2CppBase() + 0x16DD720))(this, input);
	}

};

}
