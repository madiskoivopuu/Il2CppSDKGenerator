#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaPurchaseRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaPurchaseRequest"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& PurchaseFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& purchase_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A6807C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A680E0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaPurchaseRequest*))(Il2CppBase() + 0x1A68200))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(ArenaPurchaseRequest*))(Il2CppBase() + 0x1A682BC))(this);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(ArenaPurchaseRequest*))(Il2CppBase() + 0x1A68318))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(ArenaPurchaseRequest*, int64_t))(Il2CppBase() + 0x1A68320))(this, value);
	}
	template <typename T = uintptr_t> T get_Purchase() {
		return ((T (*)(ArenaPurchaseRequest*))(Il2CppBase() + 0x1A68328))(this);
	}
	template <typename T = void> T set_Purchase(uintptr_t value) {
		return ((T (*)(ArenaPurchaseRequest*, uintptr_t))(Il2CppBase() + 0x1A68330))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(ArenaPurchaseRequest*, uintptr_t))(Il2CppBase() + 0x1A68338))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(ArenaPurchaseRequest*, uintptr_t))(Il2CppBase() + 0x1A683A8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaPurchaseRequest*))(Il2CppBase() + 0x1A683E4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaPurchaseRequest*))(Il2CppBase() + 0x1A6844C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaPurchaseRequest*, uintptr_t))(Il2CppBase() + 0x1A684B0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaPurchaseRequest*))(Il2CppBase() + 0x1A68534))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(ArenaPurchaseRequest*, uintptr_t))(Il2CppBase() + 0x1A685E8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaPurchaseRequest*, uintptr_t))(Il2CppBase() + 0x1A686A0))(this, input);
	}

};

}
