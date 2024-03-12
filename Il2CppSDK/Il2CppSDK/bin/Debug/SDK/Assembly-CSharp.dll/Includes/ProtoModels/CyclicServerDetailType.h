#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CyclicServerDetailType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CyclicServerDetailType"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& RegionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& region_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& UrlFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& url_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1646564))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x16465C8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(CyclicServerDetailType*))(Il2CppBase() + 0x16466E8))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(CyclicServerDetailType*))(Il2CppBase() + 0x16467F4))(this);
	}
	template <typename T = Il2CppString*> T get_Region() {
		return ((T (*)(CyclicServerDetailType*))(Il2CppBase() + 0x1646850))(this);
	}
	template <typename T = void> T set_Region(Il2CppString* value) {
		return ((T (*)(CyclicServerDetailType*, Il2CppString*))(Il2CppBase() + 0x1646858))(this, value);
	}
	template <typename T = Il2CppString*> T get_Url() {
		return ((T (*)(CyclicServerDetailType*))(Il2CppBase() + 0x16468D8))(this);
	}
	template <typename T = void> T set_Url(Il2CppString* value) {
		return ((T (*)(CyclicServerDetailType*, Il2CppString*))(Il2CppBase() + 0x16468E0))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(CyclicServerDetailType*, uintptr_t))(Il2CppBase() + 0x1646960))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(CyclicServerDetailType*, uintptr_t))(Il2CppBase() + 0x16469D0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CyclicServerDetailType*))(Il2CppBase() + 0x1646A38))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CyclicServerDetailType*))(Il2CppBase() + 0x1646AA4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(CyclicServerDetailType*, uintptr_t))(Il2CppBase() + 0x1646B08))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(CyclicServerDetailType*))(Il2CppBase() + 0x1646B9C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(CyclicServerDetailType*, uintptr_t))(Il2CppBase() + 0x1646C6C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(CyclicServerDetailType*, uintptr_t))(Il2CppBase() + 0x1646CCC))(this, input);
	}

};

}
