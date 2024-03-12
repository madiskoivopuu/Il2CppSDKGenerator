#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Int32ToIntMap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Int32ToIntMap"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& InnerMapFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _map_innerMap_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& innerMap_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1468670))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x14686D4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(Int32ToIntMap*))(Il2CppBase() + 0x14687F4))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(Int32ToIntMap*))(Il2CppBase() + 0x146894C))(this);
	}
	template <typename T = void*> T get_InnerMap() {
		return ((T (*)(Int32ToIntMap*))(Il2CppBase() + 0x14689A8))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(Int32ToIntMap*, uintptr_t))(Il2CppBase() + 0x14689B0))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(Int32ToIntMap*, uintptr_t))(Il2CppBase() + 0x1468A20))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Int32ToIntMap*))(Il2CppBase() + 0x1468AAC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Int32ToIntMap*))(Il2CppBase() + 0x1468AD8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(Int32ToIntMap*, uintptr_t))(Il2CppBase() + 0x1468B3C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(Int32ToIntMap*))(Il2CppBase() + 0x1468BDC))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(Int32ToIntMap*, uintptr_t))(Il2CppBase() + 0x1468C6C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(Int32ToIntMap*, uintptr_t))(Il2CppBase() + 0x1468CE4))(this, input);
	}

};

}
