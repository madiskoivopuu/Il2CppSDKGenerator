#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class RatioOneTable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "RatioOneTable"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& LinesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_lines_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& lines_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x138BEBC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x138BF20))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(RatioOneTable*))(Il2CppBase() + 0x138C040))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(RatioOneTable*))(Il2CppBase() + 0x138C198))(this);
	}
	template <typename T = void*> T get_Lines() {
		return ((T (*)(RatioOneTable*))(Il2CppBase() + 0x138C1F4))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(RatioOneTable*, uintptr_t))(Il2CppBase() + 0x138C1FC))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(RatioOneTable*, uintptr_t))(Il2CppBase() + 0x138C26C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(RatioOneTable*))(Il2CppBase() + 0x138C2F8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(RatioOneTable*))(Il2CppBase() + 0x138C324))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(RatioOneTable*, uintptr_t))(Il2CppBase() + 0x138C388))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(RatioOneTable*))(Il2CppBase() + 0x138C428))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(RatioOneTable*, uintptr_t))(Il2CppBase() + 0x138C4B8))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(RatioOneTable*, uintptr_t))(Il2CppBase() + 0x138C530))(this, input);
	}

};

}
