#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PredefinedRollPoolProgress
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PredefinedRollPoolProgress"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ProgressDataFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_progressData_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& progressData_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CurrentPositionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& currentPosition_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& StartTimeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& startTime_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x16DCEF8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x16DCF5C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(PredefinedRollPoolProgress*))(Il2CppBase() + 0x16DD07C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(PredefinedRollPoolProgress*))(Il2CppBase() + 0x16DD1E8))(this);
	}
	template <typename T = void*> T get_ProgressData() {
		return ((T (*)(PredefinedRollPoolProgress*))(Il2CppBase() + 0x16DD244))(this);
	}
	template <typename T = int32_t> T get_CurrentPosition() {
		return ((T (*)(PredefinedRollPoolProgress*))(Il2CppBase() + 0x16DD24C))(this);
	}
	template <typename T = void> T set_CurrentPosition(int32_t value) {
		return ((T (*)(PredefinedRollPoolProgress*, int32_t))(Il2CppBase() + 0x16DD254))(this, value);
	}
	template <typename T = int64_t> T get_StartTime() {
		return ((T (*)(PredefinedRollPoolProgress*))(Il2CppBase() + 0x16DD25C))(this);
	}
	template <typename T = void> T set_StartTime(int64_t value) {
		return ((T (*)(PredefinedRollPoolProgress*, int64_t))(Il2CppBase() + 0x16DD264))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(PredefinedRollPoolProgress*, uintptr_t))(Il2CppBase() + 0x16DD26C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(PredefinedRollPoolProgress*, uintptr_t))(Il2CppBase() + 0x16DD2DC))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PredefinedRollPoolProgress*))(Il2CppBase() + 0x16DD384))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PredefinedRollPoolProgress*))(Il2CppBase() + 0x16DD408))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(PredefinedRollPoolProgress*, uintptr_t))(Il2CppBase() + 0x16DD46C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(PredefinedRollPoolProgress*))(Il2CppBase() + 0x16DD574))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(PredefinedRollPoolProgress*, uintptr_t))(Il2CppBase() + 0x16DD69C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(PredefinedRollPoolProgress*, uintptr_t))(Il2CppBase() + 0x16DD720))(this, input);
	}

};

}
